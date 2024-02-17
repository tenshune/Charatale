package;

import openfl.Assets;
import flixel.graphics.frames.FlxAtlasFrames;

class Paths {
    static public function getSparrowAtlas(bitmap:String) {
	    return FlxAtlasFrames.fromSparrow("assets/images/"+bitmap+".png", "assets/images/"+bitmap+".xml");
    }

    static public function image(name:String) {
       return "assets/images/"+name+".png";
    }

	static public function mapImg(name:String, map:String)
	{
		return "assets/images/maps/" + map + "/" + name + ".png";
	}

	static public function trophieImg(name:String)
	{
		return "assets/images/trophies/" + name + ".png";
	}

    static public function font(name:String) {
       return "assets/fonts/"+name+".ttf";
    }

	static public function fontO(name:String)
	{
		return "assets/fonts/" + name + ".otf";
	}

   static public function lang(lang:String, name:String) {
      return "assets/langs/"+lang.toLowerCase()+"/"+name+".txt";
   }

	static public function langImg(lang:String, name:String)
	{
		return "assets/langs/" + lang + "/" + name + ".png";
	}

   static public function sound(soundName:String) {
      return 'assets/sounds/'+soundName+'.wav';
   }
}