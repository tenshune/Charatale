package mapStates.theRuins;

import flixel.FlxSprite;
import flixel.FlxState;

class Zone2 extends FlxState {
    var zone:FlxSprite;

    override function create() {

        zone = new FlxSprite(0,0).loadGraphic(Paths.mapImg('zone 2', 'the ruins'));
		zone.scale.x = 2;
		zone.scale.y = 2;
		zone.updateHitbox();
		zone.screenCenter(XY);
		add(zone);

        super.create();
    }
}