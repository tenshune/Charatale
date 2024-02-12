package;

import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.FlxSprite;
import flixel.FlxState;

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

	var timer:FlxTimer = new FlxTimer();

    override function create() {
		var secret:Bool = false;
		var randomNumber:Int = Std.random(2000) + 1;

		if (randomNumber == 1509)
		{
			secret = true;
		}

        logo = new FlxSprite(-70,10).loadGraphic(Paths.image('logo'));
        logo.scale.x = 0.75;
		logo.scale.y = 0.75;
        add(logo);

		newGame = new FlxText(30, 110, 325, 'New Game');
		newGame.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(newGame);

		continueOp = new FlxText(30, 110+85, 325, 'Continue');
		continueOp.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(continueOp);

		optionsOp = new FlxText(30, 110 + 85*2, 325, 'Options');
		optionsOp.setFormat(Paths.font('determination'), 80, FlxColor.WHITE, FlxTextAlign.LEFT);
		add(optionsOp);

		trophies = new FlxText(30, 110 + 85 * 3, 325, 'Trophies');
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
    }

    override function update(elapsed:Float) {
        newGame.setFormat(Paths.font('determination'), 80, (selected == 0 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        FlxTween.tween(newGame, { x: (selected == 0 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        continueOp.setFormat(Paths.font('determination'), 80, (selected == 1 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        FlxTween.tween(continueOp, { x: (selected == 1 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        optionsOp.setFormat(Paths.font('determination'), 80, (selected == 2 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        FlxTween.tween(optionsOp, { x: (selected == 2 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        trophies.setFormat(Paths.font('determination'), 80, (selected == 3 ? 0xFFF700 : 0xFFFFFF), FlxTextAlign.LEFT);
        FlxTween.tween(trophies, { x: (selected == 3 ? 80 : 30) }, 0.5, { ease: FlxEase.cubeOut });

        selected = 0;

        if (CoolUtils.overlapText(continueOp)) {
            selected = 1;
        }
        else if (CoolUtils.overlapText(optionsOp)) {
            selected = 2;
        }
        else if (CoolUtils.overlapText(trophies)) {
            selected = 3;
        }

        super.update(elapsed);
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
}