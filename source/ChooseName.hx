package;

import openfl.Assets;
import flixel.util.FlxSave;
import flixel.FlxCamera;
import flixel.util.FlxAxes;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.tweens.misc.NumTween;

import Random as Rnd;

import GlobalVariables as Global;

class ChooseName extends FlxState
{
	var nameit:FlxText;

	var letters:Array<FlxText> = [];
	var xPos:Int = 65;
	var yPos:Int = 150;
	var lettersM:Array<FlxText> = [];
	var yPos2:Int = 280;

	var selected:Int = 0;
	var sel:Int = -1;

	var name:FlxText;
	var nameStr:String = '';

	var quit:FlxText;
	var backspace:FlxText;
	var done:FlxText;

	var nameDone:Bool = false;

	var dark:FlxSprite;

	var warning:FlxText;

	var sure:FlxText;

	var secret:FlxText;

	var canSelect:Bool = true;

	var no:FlxText;
	var yes:FlxText;
	var back:FlxText;

	var save:FlxSave;

	var lang:String;

	override function create()
	{
		save = new FlxSave();
		save.bind('charatale');
		lang = save.data.lang;

		nameit = new FlxText(0, 50, FlxG.width, Assets.getText(Paths.lang(lang,'choose/namethem')), 40);
		nameit.setFormat(Paths.font('determination'), 30, FlxColor.WHITE, CENTER);
		nameit.screenCenter(XY);
		nameit.y = 50;
		add(nameit);

		for (i in 0...26)
		{
			var letter:String = String.fromCharCode(65 + i);
			var text:FlxText = new FlxText(xPos, yPos, 40, letter);
			text.setFormat(Paths.font('determination'), 35, FlxColor.WHITE, CENTER);
			letters.push(text);
			add(text);

			if (i % 7 == 6)
			{
				xPos = 65;
				yPos += 30;
			}
			else
			{
				xPos += 80;
			}
		}
		xPos = 65;
		for (i in 0...26)
		{
			var letter:String = String.fromCharCode(65 + i).toLowerCase();
			var text:FlxText = new FlxText(xPos, yPos2, 40, letter);
			text.setFormat(Paths.font('determination'), 35, FlxColor.WHITE, CENTER);
			letters.push(text);
			add(text);

			if (i % 7 == 6)
			{
				xPos = 65;
				yPos2 += 30;
			}
			else
			{
				xPos += 80;
			}
		}

		name = new FlxText(0,0,300,'Chara').setFormat(Paths.font('determination'), 50, FlxColor.WHITE, CENTER);
		name.screenCenter(XY);
		name.y -= 125;
		add(name);

		quit = new FlxText(70, FlxG.height - 60, 300, Assets.getText(Paths.lang(lang, 'choose/quit')));
		quit.setFormat(Paths.font('determination'),40,FlxColor.WHITE,LEFT);
		add(quit);

		backspace = new FlxText(0, FlxG.height - 60, 300, Assets.getText(Paths.lang(lang, 'choose/backspace')));
		backspace.setFormat(Paths.font('determination'),40,FlxColor.WHITE,CENTER);
		backspace.screenCenter(X);
		add(backspace);

		done = new FlxText(265, FlxG.height - 60, 300, Assets.getText(Paths.lang(lang, 'choose/done')));
		done.setFormat(Paths.font('determination'),40,FlxColor.WHITE,RIGHT);
		add(done);

		super.create();

		warning = new FlxText(0, 50, FlxG.width, Assets.getText(Paths.lang(lang, 'choose/warning')), 40);
		warning.setFormat(Paths.font('determination'), 30, FlxColor.WHITE, CENTER);
		warning.screenCenter(XY);
		warning.y = 30;
		warning.alpha = 0;
		add(warning);

		sure = new FlxText(0, 50, FlxG.width, Assets.getText(Paths.lang(lang, 'choose/choose')), 40);
		sure.setFormat(Paths.font('determination'), 45, FlxColor.WHITE, CENTER);
		sure.screenCenter(XY);
		sure.y = 30;
		sure.alpha = 0;
		add(sure);

		secret = new FlxText(0, 50, FlxG.width, 'secret', 40);
		secret.setFormat(Paths.font('determination'), 40, FlxColor.WHITE, CENTER);
		secret.screenCenter(XY);
		secret.y = 30;
		secret.alpha = 0;
		add(secret);

		no = new FlxText(30, FlxG.height-60, FlxG.width,Assets.getText(Paths.lang(lang,'choose/no')));
		no.setFormat(Paths.font('determination'), 40, FlxColor.WHITE, LEFT);
		no.alpha = 0;
		add(no);

		yes = new FlxText(-30, FlxG.height - 60, FlxG.width, Assets.getText(Paths.lang(lang, 'choose/yes')));
		yes.setFormat(Paths.font('determination'), 40, FlxColor.WHITE, RIGHT);
		yes.alpha = 0;
		add(yes);

		back = new FlxText(30, FlxG.height - 60, FlxG.width, Assets.getText(Paths.lang(lang, 'choose/back')));
		back.setFormat(Paths.font('determination'), 40, FlxColor.WHITE, LEFT);
		back.alpha = 0;
		add(back);

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);
	}

	var shakeIntensity:Float= 0.002;

	override function update(elapsed:Float)
	{
		if (dark.alpha > 0)
		{
			dark.alpha -= 0.05;
		}
		else if (dark.alpha == 0)
		{
			Global.dark = 0;
		}

		FlxG.cameras.shake(shakeIntensity,0.1);

		for (i in 0...letters.length)
		{
			/*var xP = letters[i].x;
			var yP = letters[i].y;
			FlxTween.tween(letters[i], {x: Rnd.float(xP - 5, xP + 5), y: Rnd.float(yP - 5, yP + 5)}, 0.1);*/

			if (selected == i)
			{
				letters[i].setFormat(Paths.font('determination'), 35, FlxColor.YELLOW, CENTER);
				if (FlxG.keys.justPressed.ENTER) {
					nameStr += letters[i].text;
				}
			}
			else
			{
				letters[i].setFormat(Paths.font('determination'), 35, FlxColor.WHITE, CENTER);
			}
		}

		quit.setFormat(Paths.font('determination'),40, selected == 52 ? FlxColor.YELLOW : FlxColor.WHITE, LEFT);
		if (selected == 52 && FlxG.keys.justPressed.ENTER) {Back();nameDone = true;}
		backspace.setFormat(Paths.font('determination'),40, selected == 53 ? FlxColor.YELLOW : FlxColor.WHITE, CENTER);
		if (selected == 53 && FlxG.keys.justPressed.ENTER) {nameStr = nameStr.substring(0, nameStr.length - 1);}
		done.setFormat(Paths.font('determination'),40, selected == 54 ? FlxColor.YELLOW : FlxColor.WHITE, RIGHT);
		if (selected == 54 && FlxG.keys.justPressed.ENTER && nameStr.length >= 3 && no.alpha == 0 && back.alpha == 0) {doneNaming();}

		name.text = nameStr;

		if (!nameDone) {
			if (FlxG.keys.justPressed.RIGHT)
			{
				if ([6, 13, 20, 32, 39, 46].indexOf(selected) != -1)
				{
					selected -= 6;
				}
				else if ([25, 51].indexOf(selected) != -1)
				{
					selected -= 4;
				}
				else if (selected == 54)
				{
					selected = 52;
				}
				else
				{
					selected++;
				}
			}
			else if (FlxG.keys.justPressed.LEFT)
			{
				if ([0, 7, 14, 26, 33, 40].indexOf(selected) != -1)
				{
					selected += 6;
				}
				else if ([21, 47].indexOf(selected) != -1)
				{
					selected += 4;
				}
				else if (selected == 52)
				{
					selected = 54;
				}
				else
				{
					selected--;
				}
			}

			if (FlxG.keys.justPressed.DOWN)
			{
				if (selected >= 21 && selected <= 25)
				{
					selected += 5;
				}
				else if ([19, 20].indexOf(selected) != -1)
				{
					selected += 12;
				}
				else if (selected == 45 || selected == 46)
				{
					selected = 54;
				}
				else if (selected >= 47 && selected <= 48)
				{
					selected = 52;
				}
				else if (selected >= 49 && selected <= 51)
				{
					selected = 53;
				}
				else if (selected == 52)
				{
					selected = 0;
				}
				else if (selected == 54)
				{
					selected = 6;
				}
				else if (selected == 53)
				{
					selected = 3;
				}
				else
				{
					selected += 7;
				}
			}
			else if (FlxG.keys.justPressed.UP)
			{
				if (selected >= 26 && selected <= 30)
				{
					selected -= 5;
				}
				else if ([31, 32].indexOf(selected) != -1)
				{
					selected -= 12;
				}
				else if (selected >= 0 && selected <= 1)
				{
					selected = 52;
				}
				else if (selected >= 2 && selected <= 4)
				{
					selected = 53;
				}
				else if (selected == 52)
				{
					selected = 47;
				}
				else if (selected == 54)
				{
					selected = 46;
				}
				else if (selected == 6 || selected == 5)
				{
					selected = 54;
				}
				else if (selected == 53)
				{
					selected = 50;
				}
				else
				{
					selected -= 7;
				}
			}
		}

		super.update(elapsed);

		yes.setFormat(Paths.font('determination'), 40, sel == 1 ? FlxColor.YELLOW : FlxColor.WHITE, RIGHT);
		no.setFormat(Paths.font('determination'), 40, sel == 0 ? FlxColor.YELLOW : FlxColor.WHITE, LEFT);
		back.setFormat(Paths.font('determination'), 40, sel == 0 ? FlxColor.YELLOW : FlxColor.WHITE, LEFT);

		if (nameDone && nameit.alpha == 0 && sel == 0 && FlxG.keys.justPressed.ENTER) {
			notDone();
		}
		if (nameDone && nameit.alpha == 0 && sel == 1 && FlxG.keys.justPressed.ENTER)
		{
			conGame();
		}

		if (canSelect) {
			if (nameDone && FlxG.keys.justPressed.RIGHT)
			{
				sel++;
			}
			else if (nameDone && FlxG.keys.justPressed.LEFT)
			{
				sel--;
			}
		}

		if (nameDone && sel < 0) {
			sel = 1;
		}else if (nameDone && sel > 1) {
			sel = 0;
		}
	}

	function Back()
	{
		FlxTween.tween(dark, {alpha: 1}, 1, {ease: FlxEase.cubeIn, onComplete: switchA});
		Global.dark = 1;
	}

	function switchA(t:FlxTween)
	{
		FlxG.switchState(new MainMenuState());
	}

	function conGame()
	{
		FlxTween.tween(dark, {alpha: 1}, 1, {ease: FlxEase.cubeIn, onComplete: switchB});
		save.data.name = name.text;
		Global.dark = 1;
	}

	function switchB(t:FlxTween)
	{
		save.data.save = 0;
		Global.bZone = '';
		FlxG.switchState(new mapStates.theRuins.Zone1());
	}

	function doneNaming() {
		for (i in 0...letters.length) {
			FlxTween.tween(letters[i], {alpha: 0},0.5);
		}
		nameDone = true;
		FlxTween.tween(nameit, {alpha: 0}, 0.5);
		FlxTween.tween(quit, {alpha: 0}, 0.5);
		FlxTween.tween(backspace, {alpha: 0}, 0.5);
		FlxTween.tween(done, {alpha: 0}, 0.5);

		FlxTween.tween(name, {"scale.x": 2.6, "scale.y": 2.6, y: FlxG.height/2-30}, 1.2, {ease: FlxEase.linear});
		FlxTween.tween(name, {angle: 3}, 0.05,{type: FlxTweenType.PINGPONG});

		canSelect = true;

		if (nameStr.toLowerCase() == 'chara') {
			FlxTween.tween(warning, {alpha: 1}, 0.7);
			shakeIntensity = 0.006;
		}
		else if (nameStr.toLowerCase() == 'toriel') {
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/toriel'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'frisk')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/frisk'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'sans')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/sans'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'papyrus')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/papyrus'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'daddy')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/daddy'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'mommy')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/mommy'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'skill')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/skill'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'alan' || nameStr.toLowerCase() == 'alex')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/friends'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'lukas')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/lukas'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'logan')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/logan'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'tracer')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/tracer'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'toby' || nameStr.toLowerCase() == 'tobyfox')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/the creator'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'batman')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/batman'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'alphys')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/alphys'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'undyne')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/undyne'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'dummie' || nameStr.toLowerCase() == 'dummy')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/dumm'));
			canSelect = false;
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'naps')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/naps'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'spiderman' || nameStr.toLowerCase() == 'peter')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/spider'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'angelfoxiano')
		{
			secret.text = Assets.getText(Paths.lang(lang, 'choose/secrets/angel'));
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			canSelect = false;
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'tem' || nameStr.toLowerCase() == 'temmie')
		{
			secret.text = 'HoI!!11!!!';
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'xkiphu' && lang.toLowerCase() == 'spanish')
		{
			secret.text = 'Que esa MONDA Sapa hijuepu-';
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}
		else if (nameStr.toLowerCase() == 'markiplier' && lang.toLowerCase() == 'english')
		{
			secret.text = 'Hello my name is Markiplier.';
			FlxTween.tween(secret, {alpha: 1}, 0.7);
			shakeIntensity = 0.003;
		}else{
			FlxTween.tween(sure, {alpha: 1}, 0.7);
			shakeIntensity = 0.0045;
		}

		sel = 0;

		if (canSelect) {
			FlxTween.tween(no, {alpha: 1}, 0.5);
			FlxTween.tween(yes, {alpha: 1}, 0.5);
		}else{
			FlxTween.tween(back, {alpha: 1}, 0.5);
		}
	}

	function notDone() {
		for (i in 0...letters.length)
		{
			FlxTween.tween(letters[i], {alpha: 1}, 0.5);
		}
		nameDone = true;
		FlxTween.tween(nameit, {alpha: 1}, 0.5);
		FlxTween.tween(quit, {alpha: 1}, 0.5);
		FlxTween.tween(backspace, {alpha: 1}, 0.5);
		FlxTween.tween(done, {alpha: 1}, 0.5);

		FlxTween.tween(name, {"scale.x": 1, "scale.y": 1, y: FlxG.height / 2 - 150}, 0.5, {ease: FlxEase.linear});

		FlxTween.tween(warning, {alpha: 0}, 0.4);
		FlxTween.tween(secret, {alpha: 0}, 0.4);
		FlxTween.tween(sure, {alpha: 0}, 0.4);

		FlxTween.tween(name, {angle: 0}, 0.05, {type: FlxTweenType.PINGPONG});

		FlxTween.tween(no, {alpha: 0}, 0.5);
		FlxTween.tween(yes, {alpha: 0}, 0.5);
		FlxTween.tween(back, {alpha: 0}, 0.5);

		nameDone = false;
		shakeIntensity = 0.002;
	}
}
