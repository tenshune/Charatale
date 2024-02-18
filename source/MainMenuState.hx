package;

import openfl.events.NetStatusEvent;
import openfl.Assets;
import flixel.util.FlxSave;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxState;
import CoolUtils as Ut;
import GlobalVariables as Global;

class MainMenuState extends FlxState 
{
    var logo:FlxSprite;

    var newGame:FlxText;
    var continueOp:FlxText;
    var optionsOp:FlxText;
    var trophies:FlxText;

    var dustChara:FlxSprite;

    var soul:FlxSprite;

    var selected:Int = 0;
    var canSelect:Bool = true;

	var timer:FlxTimer = new FlxTimer();

    var save:FlxSave;

    var dark:FlxSprite;

    var lang:String = "";

    override function create() {
		var secret:Bool = false;
		var randomNumber:Int = Std.random(2000) + 1;

		if (randomNumber == 1509 || randomNumber == 915)
		{
			secret = true;
		}

        save = new FlxSave();
		save.bind("charatale");

        if (save.data.lang == null) {
            save.data.lang = 'English';
            save.flush();
        }

        lang = save.data.lang;

        logo = new FlxSprite(-70,10).loadGraphic(Paths.image('logo'));
        logo.scale.x = 0.75;
		logo.scale.y = 0.75;
        add(logo);

		newGame = new FlxText(30, 110, 460, Assets.getText(Paths.lang(lang.toLowerCase(), "newgame")));
		newGame.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(newGame);

		continueOp = new FlxText(30, 110 + 85, 380, Assets.getText(Paths.lang(lang.toLowerCase(), "continue")));
		continueOp.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(continueOp);

		optionsOp = new FlxText(30, 110 + 85 * 2, 325, Assets.getText(Paths.lang(lang.toLowerCase(), "options")));
		optionsOp.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(optionsOp);

		trophies = new FlxText(30, 110 + 85 * 3, 325, Assets.getText(Paths.lang(lang.toLowerCase(), "trophies")));
		trophies.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(trophies);

        dustChara = new FlxSprite(465,260).loadGraphic(Paths.image("DustChara"));
        dustChara.scale.x = 5.5;
        dustChara.scale.y = 5.5;
        add(dustChara);

        soul = new FlxSprite(480,280).loadGraphic(Paths.image("Soul"));
        soul.scale.x = 8;
        soul.scale.y = 8;
        add(soul);

        if (secret == false) {
            dustChara.visible = false;
			timer.start(1, onTimerComplete);
        }else{
            soul.visible = false;
        }

        trace(randomNumber);

        super.create();

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = Global.dark;
		add(dark);
    }

    override function update(elapsed:Float) {
        newGame.setFormat(Paths.font('determination'), 80, (selected == 0 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(newGame, { x: (selected == 0 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        continueOp.setFormat(Paths.font('determination'), 80, (selected == 1 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(continueOp, { x: (selected == 1 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        optionsOp.setFormat(Paths.font('determination'), 80, (selected == 2 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(optionsOp, { x: (selected == 2 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        trophies.setFormat(Paths.font('determination'), 80, (selected == 3 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        //FlxTween.tween(trophies, { x: (selected == 3 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        if (canSelect) {
            if (Ut.overlapText(newGame)) {
                selected = 0;
		    }
			else if (Ut.overlapText(continueOp) && save.data.save != null) {
			    selected = 1;
            }
			else if (Ut.overlapText(optionsOp))
		    {
		    	selected = 2;
		    }
			else if (Ut.overlapText(trophies))
		    {
	    		selected = 3;
	    	}
        }

        if (selected == 0 && FlxG.mouse.justPressed) {
            goTo('playstate');
        }
		else if (selected == 1 && FlxG.mouse.justPressed && save.data.save != null) {
            goTo('continue');
        }
		else if (selected == 2 && FlxG.mouse.justPressed) {
            goTo('options');
        }
		else if (selected == 3 && FlxG.mouse.justPressed) {
            goTo('trophies');
        }

        super.update(elapsed);

        if (save.data.save == null) {
            if (canSelect) {
				continueOp.alpha = 0.5;
            }
        }else{
			if (canSelect)
			{
				continueOp.alpha = 1;
			}
        }

        if (dark.alpha > 0) {
            dark.alpha -= 0.05;
        }else if (dark.alpha == 0) {
            Global.dark = 0;
        }
    }

    function onTimerComplete(timer:FlxTimer) {
        FlxTween.tween(soul.scale, { x: 9.5 }, 0.05, { ease: FlxEase.linear });
	    FlxTween.tween(soul.scale, {y: 9.5}, 0.05, {ease: FlxEase.linear});
		timer.start(0.1, onTimerComplete2);
    }

    function onTimerComplete2(timer:FlxTimer) {
		FlxTween.tween(soul.scale, {x: 8}, 0.1, {ease: FlxEase.linear});
		FlxTween.tween(soul.scale, {y: 8}, 0.1, {ease: FlxEase.linear});
		timer.start(1, onTimerComplete);
    }

    var stateTo:String;

    function goTo(state:String) {
		var tim:FlxTimer = new FlxTimer();
		canSelect = false;
		FlxTween.tween(newGame, {alpha: 0}, 0.5, {ease: FlxEase.cubeIn});
		FlxTween.tween(continueOp, {alpha: 0}, 0.8, {ease: FlxEase.cubeIn});
		FlxTween.tween(optionsOp, {alpha: 0}, 1.1, {ease: FlxEase.cubeIn});
		FlxTween.tween(trophies, {alpha: 0}, 1.4, {ease: FlxEase.cubeIn});
		FlxTween.tween(logo, {y: -200}, 1, {ease: FlxEase.cubeIn});
		FlxTween.tween(soul, {x: 800}, 1.2, {ease: FlxEase.cubeIn});
		FlxTween.tween(dustChara, {x: 800}, 1.2, {ease: FlxEase.cubeIn});
        if (state == 'playstate') {
            tim.start(1.5,switchP);
        }else if (state == 'continue') {
            if (save.data.save == 0) {
                stateTo = 'Zone1';
                tim.start(5, switchG);
            }
        }else if (state == 'options') {
            tim.start(1.5, switchO);
        }else if (state == 'trophies') {
            tim.start(1.5, switchT);
        }
    }

	function switchP(tim:FlxTimer)
	{
		FlxG.switchState(new ChooseName());
	}

	function switchO(tim:FlxTimer) {
        FlxG.switchState(new OptionsState());
    }

	function switchT(tim:FlxTimer)
	{
		FlxG.switchState(new TrophiesState());
	}

	function switchG(tim:FlxTimer)
	{
        if (stateTo == 'Zone1') {
			FlxG.switchState(new mapStates.theRuins.Zone1());
        }
	}
}