package;

import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;

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

	var selected:Int = 0;

	override function create()
	{
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
	}

	override function update(elapsed:Float)
	{
		if (selected == 0)
		{
            if (username.text == 'Username') {
                username.text = '';
            }
			username.setFormat(Paths.font('determination'), 50, 0xFFEE06, CENTER);
			// ;

            //All the keys
            if (FlxG.keys.justPressed.A) {
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
			if (FlxG.keys.justPressed.ZERO) {
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
				username.text +='3';
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
				username.text  += '7';
			}
			if (FlxG.keys.justPressed.EIGHT)
			{
				username.text += '8';
			}
			if (FlxG.keys.justPressed.NINE)
			{
				username.text += '9';
			}
			if (FlxG.keys.justPressed.BACKSPACE) {
				username.text = username.text.substr(0, username.text.length - 1);
			}
			if (FlxG.keys.justPressed.SPACE) {
				username.text += " ";
			}

			if (token.text == null || token.text == '')
			{
				token.text = 'Token';
			}
		}
		super.update(elapsed);
	}
}
