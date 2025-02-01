package mapStates.theRuins;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.FlxSprite;

import player.CameraFuncs as Cam;
import player.Movement;

class Zone5 extends FlxState {

	var chara:FlxSprite;
    var charaCol:FlxSprite;
    var zone:FlxSprite;
	var canMove:Bool = true;

    override function create() {

        zone = new FlxSprite().loadGraphic(Paths.mapImg("zone 5","the ruins"));
        zone.scale.x = 2;
        zone.scale.y = 2;
        zone.updateHitbox();
        zone.y+=10;
        add(zone);

		chara = new FlxSprite(FlxG.width / 2, FlxG.height / 2);
		chara.frames = Paths.getSparrowAtlas('Chara');
		chara.animation.addByPrefix("Up", 'Up', 4);
		chara.animation.addByPrefix("Down", 'Down', 4);
		chara.animation.addByPrefix("DownRight", 'Down', 4);
		chara.animation.addByPrefix("DownLeft", 'Down', 4);
		chara.animation.addByPrefix("Left", 'Left', 4);
		chara.animation.addByPrefix("UpRight", 'Up', 4);
		chara.animation.addByPrefix("UpLeft", 'Up', 4);
		chara.animation.addByPrefix("Right", 'Right', 4);
		chara.scale.x = 2;
		chara.scale.y = 2;
		chara.updateHitbox();
		chara.x -= 40;
		add(chara);

		charaCol = new FlxSprite(306, 635.5);
		charaCol.makeGraphic(40, 25, FlxColor.LIME);
		charaCol.visible = false;
		charaCol.screenCenter(X);
		add(charaCol);

		Cam.newFollow(chara, 0, zone.y, zone.x + zone.width, zone.y + zone.height - 10);

        super.create();
    }

    override function update(elapsed) {

		if (canMove)
		{
			Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara, true);
		}

        super.update(elapsed);
    }
}