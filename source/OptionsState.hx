package;

import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

import GlobalVariables as Global;

class OptionsState extends FlxState {
    var options:FlxSprite;

    var dark:FlxSprite;

    override function create() {
        options = new FlxSprite(-50,10).loadGraphic(Paths.image('options'));
        options.scale.x = 0.75;
		options.scale.y = 0.75;
        add(options);

        super.create();

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);
    }

    override function update(elapsed:Float) {
		if (dark.alpha > 0)
		{
			dark.alpha -= 0.05;
		}
		else if (dark.alpha == 0)
		{
			Global.dark = 0;
		}
        
        super.update(elapsed);

        if (FlxG.keys.justPressed.ESCAPE) {
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
}