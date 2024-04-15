package mapStates.theRuins;

import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

import player.CameraFuncs as Cam;
import player.Movement;

import CoolUtils as CU;

class Zone3 extends FlxState {

    var zone:FlxSprite;

    var check:FlxSprite;

    var chara:FlxSprite;
    var charaCol:FlxSprite;

	var canMove:Bool = true;
	var asriel:FlxSprite;

	var checkTrigger:Bool = false;

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
	var col15:FlxSprite;

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
		asriel.animation.addByPrefix('Up', 'Up', 5, true);
		asriel.animation.addByPrefix('Left', 'Left', 5, true);
		asriel.scale.x = 2;
		asriel.scale.y = 2;
		asriel.updateHitbox();
		asriel.screenCenter(XY);
		add(asriel);

		col1 = createAndAddFlxSprite(2, -250, 80, 10000);
		col2 = createAndAddFlxSprite(562, -250, 80, 10000);
		col3 = createAndAddFlxSprite(80, 143, 45, 10000);
		col4 = createAndAddFlxSprite(522, 143, 45, 10000);
		col5 = createAndAddFlxSprite(182,500,20,20);
		col6 = createAndAddFlxSprite(186, 504, 20, 20);
		col7 = createAndAddFlxSprite(190, 508, 20, 20);
		col8 = createAndAddFlxSprite(194, 512, 20, 20);
		col9 = createAndAddFlxSprite(198, 516, 20, 20);
		col10 = createAndAddFlxSprite(202, 520, 20, 20);
		col11 = createAndAddFlxSprite(206, 524, 20, 20);
		col12 = createAndAddFlxSprite(210, 528, 20, 20);
		col13 = createAndAddFlxSprite(214, 532, 20, 20);
		col14 = createAndAddFlxSprite(218, 536, 20, 20);
		col15 = createAndAddFlxSprite(222, 540, 20, 20);

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

		checkTrigger = false;

		CU.collide(charaCol, check);
		CU.collide(chara, check, true,checkCollision);

		var cols:Array<FlxSprite> = [col1,col2,col3,col4,col5,col6,col7,col8,col9,col10,col11,col12,col13,col14,col15];
		for (i in 0...cols.length) {
			CU.collide(charaCol, cols[i]);
		}

		if (charaCol.y <= 359 && asriel.y == 212) {
			asriel.animation.play('Up');
			FlxTween.tween(asriel,{y:165, x:380}, 0.6, {onComplete: asMove1});
		}

        super.update(elapsed);

        if (FlxG.keys.justPressed.Z) {
            trace('X = '+charaCol.x,'Y = '+charaCol.y);
        }
    }

	function asMove1(t:FlxTween) {
		FlxTween.tween(asriel, {y: 15, x: 510}, 1.15, {onComplete: asMove2});
	}

	function asMove2(t:FlxTween)
	{
		FlxTween.tween(asriel, {y: -55, x: 465}, 0.45, {onComplete: asMove3});
	}
	function asMove3(t:FlxTween)
	{
		asriel.animation.play('Left');
		FlxTween.tween(asriel, {y: -55, x: 306}, 0.8, {onComplete: asMove4});
	}
	function asMove4(t:FlxTween)
	{
		asriel.animation.play('Up');
		FlxTween.tween(asriel, {alpha: 0}, 0.6);
		FlxTween.tween(asriel, {y: -100, x: 306}, 1.2);
	}

	function createAndAddFlxSprite(x:Int, y:Int, width:Int, height:Int, ?color:FlxColor = FlxColor.RED):FlxSprite
	{
		var sprite = new FlxSprite(x, y);
		sprite.makeGraphic(width, height, color);
		sprite.updateHitbox();
		add(sprite);
		return sprite;
	}

	function checkCollision() {
	   checkTrigger = true;
	}
}
