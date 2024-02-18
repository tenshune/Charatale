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
	static private var timer:Float = 0;

	static public function animInit() {
		currentIndex = 0;
	}

	static public function textAnimation(text:FlxText, textToAnimate:String, elapsed:Float, ?sound:String = 'SND_TXT1', ?interval:Float = 0.05) {
		timer += elapsed;

		// Animation loop
		if (currentIndex < textToAnimate.length)
		{
			if (timer >= interval)
			{
				text.text += textToAnimate.charAt(currentIndex);
				FlxG.sound.play(Paths.sound(sound));
				currentIndex++;
				timer = 0;
			}
		}
	}

	static public function collide(obj1:FlxSprite,obj2:FlxSprite) {
		var o1xL = obj1.x;
		var o1yU = obj1.y;
		var o1xR = obj1.x+obj1.width;
		var o1yD = obj1.y+obj1.height;

		var o2xL = obj2.x;
		var o2yU = obj2.y;
		var o2xR = obj2.x+obj2.width;
		var o2yD = obj2.y+obj2.height;
		
		if (o1xR > o2xL && o1yD < o2yD && o1xR < o2xR + 5  && o1yD > o2yU + 5 ) {
			obj1.x = o2xL-obj1.width;
		}
		if (o1xL < o2xR && o1yD < o2yD  && o1xR > o2xL + 5  && o1yD > o2yU + 5 ) {
			obj1.x = o2xR;
		}
		if (o1yD > o2yU && o1xL < o2xR - 5 && o1xR > o2xL + 5 && o1yD < o2yD) {
			obj1.y = o2yU-obj1.height;
		}
		if (o1yU < o2yD && o1xL < o2xR - 5 && o1xR > o2xL + 5 && o1yU > o2yU)
		{
			obj1.y = o2yD;
		}
	}
}