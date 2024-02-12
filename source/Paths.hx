package;

import flixel.graphics.frames.FlxAtlasFrames;

class Paths {
    static public function getSparrowAtlas(bitmap:String) {
	    return FlxAtlasFrames.fromSparrow("assets/images/"+bitmap+".png", "assets/images/"+bitmap+".xml");
    }

    static public function image(name:String) {
       return "assets/images/"+name+".png";
    }

    static public function font(name:String) {
       return "assets/fonts/"+name+".ttf";
    }
}