package mapStates.theRuins;

import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

import player.CameraFuncs as Cam;
import player.Movement;

class Zone3 extends FlxState {

    var zone:FlxSprite;

    var check:FlxSprite;

    var chara:FlxSprite;
    var charaCol:FlxSprite;

	var canMove:Bool = true;
	var asriel:FlxSprite;

    override function create() {

		zone = new FlxSprite(0, 0).loadGraphic(Paths.mapImg('zone 3', 'the ruins'));
		zone.scale.x = 2;
		zone.scale.y = 2;
		zone.updateHitbox();
		zone.screenCenter(XY);
		add(zone);

        check = new FlxSprite(0,100);
		check.frames = Paths.getSparrowAtlas('checkpoint');
		check.animation.addByPrefix('aea','point',5,true);
		check.animation.play('aea');
		check.scale.x = 2;
		check.scale.y = 2;
		check.updateHitbox();
		check.screenCenter(X);
		add(check);

		asriel = new FlxSprite(0,0);
		asriel.frames = Paths.getSparrowAtlas('asriel');
		asriel.animation.addByPrefix('Down', 'Down', 0, true);
		asriel.animation.addByPrefix('Up', 'Up', 4, true);
		asriel.animation.addByPrefix('Left', 'Left', 4, true);
		asriel.scale.x = 2;
		asriel.scale.y = 2;
		asriel.updateHitbox();
		asriel.screenCenter(XY);
		add(asriel);

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

		charaCol = new FlxSprite(306,635.5);
		charaCol.makeGraphic(40, 25, FlxColor.LIME);
		charaCol.visible = false;
        charaCol.screenCenter(X);
		add(charaCol);

		Cam.newFollow(chara, 0, zone.y, zone.x + zone.width, zone.y + zone.height*1.23);

        super.create();
    }

    override function update(elapsed:Float) {

		if (canMove)
		{
			Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara, true);
		}

		chara.x = charaCol.x;
		chara.y = charaCol.y - 35;

		if (charaCol.y <= 359 && asriel.y == 212) {
			asriel.animation.play('Up');
			FlxTween.tween(asriel,{y:165, x:380}, 0.6);
		}

        super.update(elapsed);

        if (FlxG.keys.justPressed.Z) {
            trace('X = '+charaCol.x,'Y = '+charaCol.y);
        }
    }
}
