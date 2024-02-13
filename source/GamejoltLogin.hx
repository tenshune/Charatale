package;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;


class GamejoltLogin extends FlxState {
    var userNamebox:FlxSprite;
	var userNameboxF:FlxSprite;

    override function create() {
        userNamebox = new FlxSprite(0,0);
        userNamebox.makeGraphic(300,80,FlxColor.WHITE);
        add(userNamebox);
		userNameboxF = new FlxSprite(userNamebox.x + (15/2), userNamebox.y + (15/2));
		userNameboxF.makeGraphic(Math.floor(userNamebox.width) - 15, Math.floor(userNamebox.height) - 15, FlxColor.BLACK);
		add(userNameboxF);
        
        super.create();
    }
}