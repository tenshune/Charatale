package;

import flixel.FlxSprite;
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

	static public function overlapSprite(objectToOverlap:FlxSprite, ?scaleX:Float, ?scaleY:Float)
	{
		var mouseX = FlxG.mouse.x;
		var mouseY = FlxG.mouse.y;

		if (scaleX == null) {
			scaleX = 1;
		}
		if (scaleY == null) {
			scaleY = 1;
		}

		return mouseX > objectToOverlap.x
			&& mouseX < objectToOverlap.x + objectToOverlap.width*scaleX
			&& mouseY > objectToOverlap.y
			&& mouseY < objectToOverlap.y + objectToOverlap.height * scaleY;
	}

	static private var currentIndex:Int;
	static private var interval:Float = 0.05;
	static private var timer:Float = 0;

	static public function animInit() {
		currentIndex = 0;
	}

	static public function textAnimation(text:FlxText, textToAnimate:String, elapsed:Float) {
		timer += elapsed;

		// Animation loop
		if (currentIndex < textToAnimate.length)
		{
			if (timer >= interval)
			{
				text.text += textToAnimate.charAt(currentIndex);
				FlxG.sound.play(Paths.sound('SND_TXT1'));
				currentIndex++;
				timer = 0;
			}
		}
	}
}