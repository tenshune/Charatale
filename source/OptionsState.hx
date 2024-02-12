package;

import flixel.FlxSprite;
import flixel.FlxState;

class OptionsState extends FlxState {
    var options:FlxSprite;

    override function create() {
        options = new FlxSprite(-50,10).loadGraphic(Paths.image('options'));
        options.scale.x = 0.75;
		options.scale.y = 0.75;
        add(options);

        super.create();
    }
}