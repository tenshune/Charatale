package;

import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, mapStates.theRuins.Zone5,60,60,true));
		// mapStates.theRuins.Zone2
	}
}
