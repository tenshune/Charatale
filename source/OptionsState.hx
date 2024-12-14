package;

import openfl.Assets;
import flixel.util.FlxSave;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import GlobalVariables as Global;

class OptionsState extends FlxState
{
	var options:FlxSprite;

	var dark:FlxSprite;

	// Options
	var langT:FlxText;
	var langOp:FlxText;
	var langs:Array<String> = ['English', 'Spanish'];
	var gamejolt:FlxText;
	var shake:FlxText;
	var shakeOp:FlxText;
	var shakeBool:Bool = true;

	var leftSel:FlxText;
	var rightSel:FlxText;

	var selected:Int = 0;
	var langSel:Int = 0;

	var save:FlxSave;

	override function create()
	{
		save = new FlxSave();
		save.bind('charatale');
		
		if (save.data.lang == 'English') {
			langSel = 0;
		}else if (save.data.lang == 'Spanish') {
			langSel = 1;
		}

		if (save.data.shake = true) {
			shakeBool = true;
		}else{
			shakeBool = false;
        }

		options = new FlxSprite(-50, 10);
		options.scale.x = 0.75;
		options.scale.y = 0.75;
		add(options);

		langT = new FlxText(0, 100, 300, 'Languages');
		langT.setFormat(Paths.font('determination'), 45, FlxColor.WHITE, CENTER);
		add(langT);

		langOp = new FlxText(0, 150, 300, langs[langSel]);
		langOp.setFormat(Paths.font('determination'), 35, FlxColor.WHITE, CENTER);
		add(langOp);

		gamejolt = new FlxText(0,210, 300, 'GameJolt');
		gamejolt.setFormat(Paths.font('determination'), 50, FlxColor.WHITE, CENTER);
		add(gamejolt);

								  //Haha it is a cute face
		leftSel = new FlxText(60, 152.5, 50, '<');
		leftSel.setFormat(Paths.font('determination'), 30, FlxColor.YELLOW);
		add(leftSel);	

								      //Haha another one
		rightSel = new FlxText(218, 152.5, 50, '>');
		rightSel.setFormat(Paths.font('determination'), 30, FlxColor.YELLOW);
		add(rightSel);

		shake = new FlxText(0,275,290,'Shakes\nFlashes');
		shake.setFormat(Paths.font('determination'), 45, FlxColor.WHITE);
		shake.alignment = 'center';
		add(shake);

		shakeOp = new FlxText(0, 375.5, 290, Std.string(shakeBool));
		shakeOp.setFormat(Paths.font('determination'), 35, FlxColor.WHITE);
		shakeOp.alignment = 'center';
        add(shakeOp);

		super.create();

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);
	}

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

		if (selected == 0)
		{
			langOp.setFormat(Paths.font('determination'), 35, FlxColor.YELLOW, CENTER);

			leftSel.visible = true;
			rightSel.visible = true;
			leftSel.x = 60;
			leftSel.y = 152.5;
			rightSel.x = 218;
			rightSel.y = 152.5;

			if (FlxG.keys.justPressed.RIGHT) {
				langSel++;
			}else if (FlxG.keys.justPressed.LEFT) {
				langSel--;
			}

			if (FlxG.keys.justPressed.ENTER) {
				save.data.lang = langs[langSel];
			}
		}else{
			langOp.setFormat(Paths.font('determination'), 35, FlxColor.WHITE, CENTER);
		}

		if (selected == 1) {
			gamejolt.setFormat(Paths.font('determination'), 50, FlxColor.YELLOW, CENTER);
			if (FlxG.keys.justPressed.ENTER) {
				GJ();
			}
			leftSel.visible = false;
			rightSel.visible = false;
		}else{
			gamejolt.setFormat(Paths.font('determination'), 50, FlxColor.WHITE, CENTER);
		}

		if (selected == 2) {
			shakeOp.setFormat(Paths.font('determination'), 35, FlxColor.YELLOW, CENTER);

			leftSel.visible = true;
			rightSel.visible = true;
			leftSel.y = 380;
			rightSel.y = 380;

			if (shakeBool) {
				leftSel.x = 40;
				rightSel.x = 230;
			}else{
				leftSel.x = 25;
				rightSel.x = 245;
			}

			if (FlxG.keys.justPressed.RIGHT)
			{
				shakeBool = !shakeBool;
				save.data.shake = shakeBool;
                save.flush();
			}
			else if (FlxG.keys.justPressed.LEFT)
			{
				shakeBool = !shakeBool;
				save.data.shake = shakeBool;
				save.flush();
			}
		}else{
			shakeOp.setFormat(Paths.font('determination'), 35, FlxColor.WHITE, CENTER);
		}

		var maxSel = 2;
		var maxLangs = 2;
		var lan:String = save.data.lang;
		var langS:Array<String> = [
			Assets.getText(Paths.lang(lan.toLowerCase(),'options/langs/eng')),
			Assets.getText(Paths.lang(lan.toLowerCase(), 'options/langs/esp'))
		];

		if (FlxG.keys.justPressed.DOWN) {
			selected++;
		}else if (FlxG.keys.justPressed.UP) {
			selected--;
		}

		if (selected > maxSel) {
			selected = 0;
		}else if (selected < 0) {
			selected = maxSel;
		}

		if (langSel > maxLangs-1) {
			langSel = 0;
		}else if (langSel < 0) {
			langSel = maxLangs-1;
		}
		langOp.text = langS[langSel];
		langT.text = Assets.getText(Paths.lang(lan.toLowerCase(), 'options/lang'));
		shake.text = Assets.getText(Paths.lang(lan.toLowerCase(), 'options/shakeflash'));
		if (shakeBool) {
			shakeOp.text = Assets.getText(Paths.lang(lan.toLowerCase(), 'options/active'));
		}else{
			shakeOp.text = Assets.getText(Paths.lang(lan.toLowerCase(), 'options/deact'));
		}

		options.loadGraphic(Paths.langImg(lan.toLowerCase(),'img/options'));

		if (lan.toLowerCase() == 'spanish') {
			options.x = -50;
		}else{
			options.x = -42;
		}

		super.update(elapsed);

		if (FlxG.keys.justPressed.ESCAPE)
		{
			Back();
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

	function GJ()
	{
		FlxTween.tween(dark, {alpha: 1}, 1, {ease: FlxEase.cubeIn, onComplete: switchG});
		Global.dark = 1;
	}

	function switchG(t:FlxTween)
	{
		FlxG.switchState(new GamejoltLogin());
	}
}
