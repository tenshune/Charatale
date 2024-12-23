package;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class Transitions extends FlxSprite {
    
    static var dark:FlxSprite;

    public static function darkInit() {
		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = 0;
		add(dark);
    }
        
    static function add(dark:FlxSprite) {}
    

	static public function Back()
	{
		FlxTween.tween(dark, {alpha: 1}, 1, {ease: FlxEase.cubeIn, onComplete: switchA});
	}

	static public function switchA(t:FlxTween)
	{
		FlxG.switchState(new MainMenuState());
	}
}