package mapStates.theRuins;

import flixel.FlxObject;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

import gameJoltAPI.Utils;
import gameJoltAPI.Users;
import gameJoltAPI.Trophies;

import player.Movement;
import player.CameraFuncs as Cam;

import CoolUtils as CU;

class Zone1 extends FlxState {

    var zone:FlxSprite;

    var chara:FlxSprite;
    var charaCol:FlxSprite;

    var canMove:Bool = true;

    var col1:FlxSprite;
    var col2:FlxSprite;
    var col3:FlxSprite;
    var col4:FlxSprite;
	var col5:FlxSprite;
	var col6:FlxSprite;
	var col7:FlxSprite;
	var col8:FlxSprite;
	var col9:FlxSprite;
	var col10:FlxSprite;
	var col11:FlxSprite;
    var col12:FlxSprite;
    var col13:FlxSprite;
	var col14:FlxSprite;
    
    override function create() {

        zone = new FlxSprite(0,0).loadGraphic(Paths.mapImg('zone 1','the ruins'));
        zone.scale.x = 2;
        zone.scale.y = 2;
        zone.updateHitbox();
        zone.screenCenter(XY);
        zone.x += 350;
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
        chara.x -= 35;
        chara.y -= 50;
		add(chara);

		charaCol = new FlxSprite(FlxG.width / 2 - 35, FlxG.height / 2 - 50);
        charaCol.makeGraphic(40,25,FlxColor.LIME);
        charaCol.visible = false;
        add(charaCol);

		col1 = createAndAddFlxSprite(110, 36, 370, 25);
		col2 = createAndAddFlxSprite(475, 36, 100, 70);
		col3 = createAndAddFlxSprite(553, 36, 625, 227);
		col4 = createAndAddFlxSprite(475, 340, 1000, 100);
		col5 = createAndAddFlxSprite(435, 377, 1000, 100);
		col6 = createAndAddFlxSprite(100, 420, 1000, 100);
		col7 = createAndAddFlxSprite(56, 382, 100, 100);
		col8 = createAndAddFlxSprite(15, 340, 100, 100);
		col9 = createAndAddFlxSprite(-26, 298, 100, 100);
		col10 = createAndAddFlxSprite(-65, 100, 100, 300);
		col11 = createAndAddFlxSprite(-65, 51, 190, 50);
		col12 = createAndAddFlxSprite(553, 36, 1000, 80);
		col13 = createAndAddFlxSprite(1305, 36, 100, 1000);
		col14 = createAndAddFlxSprite(1265, 40, 100, 220);

		Cam.follow(chara, zone.x-35,zone.y,zone.x+zone.width+35,zone.y+zone.height); 

        super.create();
    }

    override function update(elapsed:Float) {
        if (canMove) {
            Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara,true);
        }

        var cols:Array<FlxSprite> = [col1,col2,col3,col4,col5,col6,col7,col8,col9,col10,col11,col12,col13,col14];
        var i:Int = 0;
        do {
			CU.collide(charaCol, cols[i]);
            cols[i].visible = false;
            i++;
        }while(i < cols.length);

        chara.x = charaCol.x;
        chara.y = charaCol.y-35;

        super.update(elapsed);
    }

	function createAndAddFlxSprite(x:Int, y:Int, width:Int, height:Int):FlxSprite
	{
		var sprite = new FlxSprite(x, y);
		sprite.makeGraphic(width, height, FlxColor.RED);
		sprite.updateHitbox();
		add(sprite);
		return sprite;
	}
}