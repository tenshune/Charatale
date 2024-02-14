package;

import flixel.util.FlxSave;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;

import gameJoltAPI.Utils;
import gameJoltAPI.Users;
import gameJoltAPI.Trophies;
import CoolUtils as CU;

import GlobalVariables as Global;

class GamejoltLogin extends FlxState
{
	var userNamebox:FlxSprite;
	var userNameboxF:FlxSprite;
	var tokenbox:FlxSprite;
	var tokenboxF:FlxSprite;

	var game:FlxText;
	var jolt:FlxText;

	var username:FlxText;
	var token:FlxText;

	var selected:Int = -1;

	var auth:FlxButton;
	var authText:FlxText;
	var authenticated:Bool;

	var back:FlxButton;
	var backText:FlxText;

	var authA:FlxButton;
	var authAText:FlxText;

	var errorOnLogin:FlxText;
	var successfully:FlxText;

	var save:FlxSave;

	var user:String;
	var tok:String;

	var dark:FlxSprite;

	override function create()
	{
		Utils.set_game_id(Global.gameID);
		Utils.set_gamePrivKey(Global.gamePrivateKey);

		save = new FlxSave();
		save.bind('charatale');

		userNamebox = new FlxSprite(0, 200);
		userNamebox.makeGraphic(500, 80, FlxColor.WHITE);
		userNamebox.x = FlxG.width / 2 - userNamebox.width / 2;
		add(userNamebox);
		userNameboxF = new FlxSprite(userNamebox.x + (15 / 2), userNamebox.y + (15 / 2));
		userNameboxF.makeGraphic(Math.floor(userNamebox.width) - 15, Math.floor(userNamebox.height) - 15, FlxColor.BLACK);
		add(userNameboxF);

		tokenbox = new FlxSprite(0, 320);
		tokenbox.makeGraphic(500, 80, FlxColor.WHITE);
		tokenbox.x = FlxG.width / 2 - tokenbox.width / 2;
		add(tokenbox);
		tokenboxF = new FlxSprite(tokenbox.x + (15 / 2), tokenbox.y + (15 / 2));
		tokenboxF.makeGraphic(Math.floor(tokenbox.width) - 15, Math.floor(tokenbox.height) - 15, FlxColor.BLACK);
		add(tokenboxF);

		game = new FlxText(80, 70, 300, 'Game');
		game.setFormat(Paths.fontO('MonsterFriendF'), 60, FlxColor.WHITE);
		game.setBorderStyle(OUTLINE, FlxColor.WHITE, 2);
		add(game);
		jolt = new FlxText(330, 70, 300, 'Jolt');
		jolt.setFormat(Paths.fontO('MonsterFriendF'), 60, 0x22BD00);
		jolt.setBorderStyle(OUTLINE, FlxColor.WHITE, 3);
		add(jolt);

		username = new FlxText(userNamebox.x - 250, userNamebox.y + 12, 1000, 'Username');
		username.setFormat(Paths.font('determination'), 50, FlxColor.WHITE, CENTER);
		add(username);

		token = new FlxText(tokenbox.x - 250, tokenbox.y + 12, 1000, 'Token');
		token.setFormat(Paths.font('determination'), 50, FlxColor.WHITE, CENTER);
		add(token);

		super.create();

		auth = new FlxButton(0, 420, '', Auth);
		auth.scale.x = 2;
		auth.scale.y = 2;
		auth.screenCenter(X);
		add(auth);

		authText = new FlxText(0, 420, 300, 'Authenticate', 20);
		authText.setFormat(Paths.font('determination'),20,FlxColor.BLACK,CENTER);
		authText.screenCenter(X);
		add(authText);

		back = new FlxButton(0, 420, '', Back);
		back.scale.x = 2;
		back.scale.y = 2;
		back.screenCenter(X);
		back.x -= 160;
		add(back);

		backText = new FlxText(0, 420, 300, 'Back', 20);
		backText.setFormat(Paths.font('determination'), 20, FlxColor.BLACK, CENTER);
		backText.screenCenter(X);
		backText.x -= 160;
		add(backText);

		authA = new FlxButton(0, 420, '', AuthAgain);
		authA.scale.x = 2;
		authA.scale.y = 2;
		authA.screenCenter(X);
		authA.x += 160;
		add(authA);

		authAText = new FlxText(0, 420, 300, 'Authenticate Again', 20);
		authAText.setFormat(Paths.font('determination'), 15, FlxColor.BLACK, CENTER);
		authAText.screenCenter(X);
		authAText.x += 160;
		add(authAText);

		errorOnLogin = new FlxText(10, 10, 700, 'ERROR IN AUTHENTICATION: Incorrect username and/or token');
		errorOnLogin.setFormat(Paths.font('determination'),20,FlxColor.RED, LEFT);
		errorOnLogin.alpha = 0;
		add(errorOnLogin);

		successfully = new FlxText(10,10, 700, 'Successfully Authenticated in GameJolt');
		successfully.setFormat(Paths.font('determination'),20,FlxColor.LIME, LEFT);
		successfully.alpha = 0;
		add(successfully);

		dark = new FlxSprite(0,0);
		dark.makeGraphic(FlxG.width,FlxG.height,FlxColor.BLACK);
		dark.alpha = 0;
		add(dark);

		if (save.data.username != null)
		{
			Success(true);
		}
	}

	private function Auth():Void {
	   Users.auth(username.text,token.text, Success);
	}

	private function AuthAgain() {
		FlxTween.tween(successfully, {alpha: 0}, 0.2, {ease: FlxEase.cubeIn});
		auth.active = true;
		authenticated = false;
	}

	private function Success(s:Bool) {
	   if (s) {
			authenticated = true;
			auth.active = false;
			save.data.username = username.text;
			save.data.token = token.text;
			FlxTween.tween(successfully, {alpha: 1}, 0.2, {ease: FlxEase.cubeIn});
			Trophies.addAchieved(username.text,token.text,224523);
	   }else {
			FlxTween.tween(errorOnLogin, {alpha: 1}, 0.2, {ease: FlxEase.cubeIn});
			var tim:FlxTimer;
			tim = new FlxTimer();
			tim.start(5, errorDis);
	   }
	}

	private function errorDis(tim:FlxTimer) {
		FlxTween.tween(errorOnLogin, {alpha: 0}, 1, {ease: FlxEase.cubeOut});
	}

	private function Back() {
	   FlxTween.tween(dark, {alpha: 1}, 1, {ease: FlxEase.cubeIn, onComplete: switchA});
	}

	private function switchA(t:FlxTween) {
	   FlxG.switchState(new MainMenuState());
	}

	override function update(elapsed:Float)
	{
		username.setFormat(Paths.font('determination'), 50, 0xFFFFFF, CENTER);
		token.setFormat(Paths.font('determination'), 50, 0xFFFFFF, CENTER);

		if (!authenticated) {
			if (CU.overlapText(username) && selected != 0)
			{
				username.setFormat(Paths.font('determination'), 50, 0xFDFF8F, CENTER);
				if (FlxG.mouse.justPressed)
				{
					selected = 0;
				}
			}
			else if (CU.overlapText(token) && selected != 1)
			{
				token.setFormat(Paths.font('determination'), 50, 0xFDFF8F, CENTER);
				if (FlxG.mouse.justPressed)
				{
					selected = 1;
				}
			}

			if (selected == 0)
			{
				if (username.text == 'Username')
				{
					username.text = '';
				}
				username.setFormat(Paths.font('determination'), 50, 0xFFEE06, CENTER);

				// All the keys
				if (FlxG.keys.justPressed.A)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'A' : 'a';
				}
				if (FlxG.keys.justPressed.B)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'B' : 'b';
				}
				if (FlxG.keys.justPressed.C)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'C' : 'c';
				}
				if (FlxG.keys.justPressed.D)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'D' : 'd';
				}
				if (FlxG.keys.justPressed.E)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'E' : 'e';
				}
				if (FlxG.keys.justPressed.F)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'F' : 'f';
				}
				if (FlxG.keys.justPressed.G)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'G' : 'g';
				}
				if (FlxG.keys.justPressed.H)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'H' : 'h';
				}
				if (FlxG.keys.justPressed.I)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'I' : 'i';
				}
				if (FlxG.keys.justPressed.J)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'J' : 'j';
				}
				if (FlxG.keys.justPressed.K)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'K' : 'k';
				}
				if (FlxG.keys.justPressed.L)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'L' : 'l';
				}
				if (FlxG.keys.justPressed.M)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'M' : 'm';
				}
				if (FlxG.keys.justPressed.N)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'N' : 'n';
				}
				if (FlxG.keys.justPressed.O)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'O' : 'o';
				}
				if (FlxG.keys.justPressed.P)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'P' : 'p';
				}
				if (FlxG.keys.justPressed.Q)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'Q' : 'q';
				}
				if (FlxG.keys.justPressed.R)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'R' : 'r';
				}
				if (FlxG.keys.justPressed.S)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'S' : 's';
				}
				if (FlxG.keys.justPressed.T)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'T' : 't';
				}
				if (FlxG.keys.justPressed.U)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'U' : 'u';
				}
				if (FlxG.keys.justPressed.V)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'V' : 'v';
				}
				if (FlxG.keys.justPressed.W)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'W' : 'w';
				}
				if (FlxG.keys.justPressed.X)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'X' : 'x';
				}
				if (FlxG.keys.justPressed.Y)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'Y' : 'y';
				}
				if (FlxG.keys.justPressed.Z)
				{
					username.text += FlxG.keys.pressed.SHIFT ? 'Z' : 'z';
				}
				if (FlxG.keys.justPressed.ZERO)
				{
					username.text += '0';
				}
				if (FlxG.keys.justPressed.ONE)
				{
					username.text += '1';
				}
				if (FlxG.keys.justPressed.TWO)
				{
					username.text += '2';
				}
				if (FlxG.keys.justPressed.THREE)
				{
					username.text += '3';
				}
				if (FlxG.keys.justPressed.FOUR)
				{
					username.text += '4';
				}
				if (FlxG.keys.justPressed.FIVE)
				{
					username.text += '5';
				}
				if (FlxG.keys.justPressed.SIX)
				{
					username.text += '6';
				}
				if (FlxG.keys.justPressed.SEVEN)
				{
					username.text += '7';
				}
				if (FlxG.keys.justPressed.EIGHT)
				{
					username.text += '8';
				}
				if (FlxG.keys.justPressed.NINE)
				{
					username.text += '9';
				}
				if (FlxG.keys.justPressed.BACKSPACE)
				{
					username.text = username.text.substr(0, username.text.length - 1);
				}
				if (FlxG.keys.justPressed.SPACE)
				{
					username.text += " ";
				}

				if (token.text == null || token.text == '')
				{
					token.text = 'Token';
				}
			}
			else if (selected == 1)
			{
				if (token.text == 'Token')
				{
					token.text = '';
				}
				token.setFormat(Paths.font('determination'), 50, 0xFFEE06, CENTER);

				if (FlxG.keys.justPressed.A)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'A' : 'a';
				}
				if (FlxG.keys.justPressed.B)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'B' : 'b';
				}
				if (FlxG.keys.justPressed.C)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'C' : 'c';
				}
				if (FlxG.keys.justPressed.D)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'D' : 'd';
				}
				if (FlxG.keys.justPressed.E)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'E' : 'e';
				}
				if (FlxG.keys.justPressed.F)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'F' : 'f';
				}
				if (FlxG.keys.justPressed.G)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'G' : 'g';
				}
				if (FlxG.keys.justPressed.H)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'H' : 'h';
				}
				if (FlxG.keys.justPressed.I)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'I' : 'i';
				}
				if (FlxG.keys.justPressed.J)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'J' : 'j';
				}
				if (FlxG.keys.justPressed.K)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'K' : 'k';
				}
				if (FlxG.keys.justPressed.L)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'L' : 'l';
				}
				if (FlxG.keys.justPressed.M)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'M' : 'm';
				}
				if (FlxG.keys.justPressed.N)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'N' : 'n';
				}
				if (FlxG.keys.justPressed.O)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'O' : 'o';
				}
				if (FlxG.keys.justPressed.P)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'P' : 'p';
				}
				if (FlxG.keys.justPressed.Q)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'Q' : 'q';
				}
				if (FlxG.keys.justPressed.R)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'R' : 'r';
				}
				if (FlxG.keys.justPressed.S)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'S' : 's';
				}
				if (FlxG.keys.justPressed.T)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'T' : 't';
				}
				if (FlxG.keys.justPressed.U)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'U' : 'u';
				}
				if (FlxG.keys.justPressed.V)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'V' : 'v';
				}
				if (FlxG.keys.justPressed.W)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'W' : 'w';
				}
				if (FlxG.keys.justPressed.X)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'X' : 'x';
				}
				if (FlxG.keys.justPressed.Y)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'Y' : 'y';
				}
				if (FlxG.keys.justPressed.Z)
				{
					token.text += FlxG.keys.pressed.SHIFT ? 'Z' : 'z';
				}
				if (FlxG.keys.justPressed.ZERO)
				{
					token.text += '0';
				}
				if (FlxG.keys.justPressed.ONE)
				{
					token.text += '1';
				}
				if (FlxG.keys.justPressed.TWO)
				{
					token.text += '2';
				}
				if (FlxG.keys.justPressed.THREE)
				{
					token.text += '3';
				}
				if (FlxG.keys.justPressed.FOUR)
				{
					token.text += '4';
				}
				if (FlxG.keys.justPressed.FIVE)
				{
					token.text += '5';
				}
				if (FlxG.keys.justPressed.SIX)
				{
					token.text += '6';
				}
				if (FlxG.keys.justPressed.SEVEN)
				{
					token.text += '7';
				}
				if (FlxG.keys.justPressed.EIGHT)
				{
					token.text += '8';
				}
				if (FlxG.keys.justPressed.NINE)
				{
					token.text += '9';
				}
				if (FlxG.keys.justPressed.BACKSPACE)
				{
					token.text = token.text.substr(0, token.text.length - 1);
				}
				if (FlxG.keys.justPressed.SPACE)
				{
					token.text += " ";
				}

				if (username.text == null || username.text == '')
				{
					username.text = 'Username';
				}
			}
		}

		super.update(elapsed);
	}
}
