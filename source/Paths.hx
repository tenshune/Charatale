package;

import flixel.graphics.frames.FlxAtlasFrames;

class Paths {
    static public function getSparrowAtlas(bitmap:String) {
	    return FlxAtlasFrames.fromSparrow("assets/images/"+bitmap+".png", "assets/images/"+bitmap+".xml");
    }
}