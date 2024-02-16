package player;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxCamera;
import flixel.FlxSprite;
import flixel.FlxState;

class CameraFuncs
{
	static public function follow(player:FlxSprite, boundX:Float, boundY:Float, boundX2:Float, boundY2:Float)
	{
		var camera = new FlxCamera(0,0);
		camera.bgColor = FlxColor.TRANSPARENT;
		camera.setScrollBoundsRect(boundX,boundY,boundX2,boundY2);
		// Replace default camera with our newly created one        
        FlxG.cameras.reset(camera);                         
        camera.target = player;   
    }  
}