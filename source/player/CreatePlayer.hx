package player;

import flixel.FlxG;
import flixel.FlxSprite;

class CreatePlayer {
    static public function create(char:FlxSprite, sparrowAtlas:String,x:Float,y:Float) {
		char = new FlxSprite(x,y);
		char.frames = Paths.getSparrowAtlas(sparrowAtlas);
		char.animation.addByPrefix("Down", 'Down', 4);
		char.animation.addByPrefix("DownRight", 'Down', 4);
		char.animation.addByPrefix("DownLeft", 'Down', 4);
		char.animation.addByPrefix("Left", 'Left', 4);
		char.animation.addByPrefix("Up", 'Up', 4);
		char.animation.addByPrefix("UpRight", 'Up', 4);
		char.animation.addByPrefix("UpLeft", 'Up', 4);
		char.animation.addByPrefix("Right", 'Right', 4);
		char.scale.x = 2;
		char.scale.y = 2;
    }
}