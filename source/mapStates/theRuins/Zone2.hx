package mapStates.theRuins;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;

import player.Movement as Movement;
import CoolUtils as CU;
import player.CameraFuncs as Cam;

class Zone2 extends FlxState {

    var zone:FlxSprite;

    var chara:FlxSprite;
	var charaCol:FlxSprite;

	var asriel:FlxSprite;
    
    var col1:FlxSprite;
	var col2:FlxSprite;
	var col3:FlxSprite;
	var col4:FlxSprite;
	var col5:FlxSprite;
	var col6:FlxSprite;

	var canMove:Bool = true;

    var dark:FlxSprite;

    override function create() {

        zone = new FlxSprite(0,0).loadGraphic(Paths.mapImg('zone 2', 'the ruins'));
		zone.scale.x = 2;
		zone.scale.y = 2;
		zone.updateHitbox();
		zone.screenCenter(XY);
		add(zone);

		chara = new FlxSprite(FlxG.width / 2, FlxG.height / 2);
		chara.frames = Paths.getSparrowAtlas('Chara');
		chara.animation.addByPrefix("Down", 'Down', 4);
		chara.animation.addByPrefix("DownRight", 'Down', 4);
		chara.animation.addByPrefix("DownLeft", 'Down', 4);
		chara.animation.addByPrefix("Left", 'Left', 4);
		chara.animation.addByPrefix("Up", 'Up', 4);
		chara.animation.addByPrefix("UpRight", 'Up', 4);
		chara.animation.addByPrefix("UpLeft", 'Up', 4);
		chara.animation.addByPrefix("Right", 'Right', 4);
		chara.scale.x = 2;
		chara.scale.y = 2;
		chara.updateHitbox();
		chara.x -= 40;
		add(chara);

		asriel = new FlxSprite(0, zone.height-130);
		asriel.frames = Paths.getSparrowAtlas('asriel');
		asriel.animation.addByPrefix('Down', 'Down', 0, true);
		asriel.animation.addByPrefix('Up', 'Up', 4);
		asriel.scale.x = 2;
		asriel.scale.y = 2;
		asriel.updateHitbox();
		asriel.screenCenter(X);
		add(asriel);

		charaCol = new FlxSprite(FlxG.width / 2 - 35, FlxG.height / 2 - 50);
		charaCol.makeGraphic(40, 25, FlxColor.LIME);
		charaCol.visible = false;
		charaCol.y = Math.floor(zone.height) * 2 - 100;
		add(charaCol);

        col1 = createAndAddFlxSprite(0,0,1000,70);
		col2 = createAndAddFlxSprite(0, 70, 275, 80);
		col3 = createAndAddFlxSprite(275*2-185, 70, 275, 80);
        col4 = createAndAddFlxSprite(0,0,10,10000);
		col5 = createAndAddFlxSprite(FlxG.width-10, 0, 10, 10000);
        col6 = createAndAddFlxSprite(0,Math.floor(zone.height)*2-40,1000,15);

		Cam.follow(chara, zone.x - 35, zone.y, zone.x + zone.width + 35, zone.y + (zone.height*2));

        super.create();

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, Math.floor(zone.height*2), FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);
    }

    override function update(elapsed:Float) {
		if (dark.alpha > 0)
		{
			dark.alpha -= 0.05;
		}
        
		if (canMove)
		{
			Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara, true);
		}

		var cols:Array<FlxSprite> = [
			col1, col2, col3, col4, col5, col6
		];
		var i:Int = 0;
		do
		{
			if (canMove)
			{
				CU.collide(charaCol, cols[i]);
			}
			cols[i].visible = false;
			i++;
		}
		while (i < cols.length);

        chara.x = charaCol.x;
		chara.y = charaCol.y - 35;

        super.update(elapsed);
    }

	function createAndAddFlxSprite(x:Int, y:Int, width:Int, height:Int, ?color:FlxColor = FlxColor.RED):FlxSprite
	{
		var sprite = new FlxSprite(x, y);
		sprite.makeGraphic(width, height, color);
		sprite.updateHitbox();
		add(sprite);
		return sprite;
	}
}