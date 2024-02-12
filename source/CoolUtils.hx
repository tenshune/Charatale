package;

import flixel.text.FlxText;
import flixel.FlxG;

class CoolUtils {
    
    static public function overlapText(objectToOverlap:FlxText) {
		var mouseX = FlxG.mouse.x;
		var mouseY = FlxG.mouse.y;
        
		return mouseX > objectToOverlap.x
			&& mouseX < objectToOverlap.x + objectToOverlap.width
			&& mouseY > objectToOverlap.y
			&& mouseY < objectToOverlap.y + objectToOverlap.height;
    }
}