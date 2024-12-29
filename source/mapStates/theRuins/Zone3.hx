package mapStates.theRuins;

import flixel.FlxCamera;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

import player.CameraFuncs as Cam;
import player.Movement;
import Transitions as Trans;

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
	var col16:FlxSprite;
	var col17:FlxSprite;
	var col18:FlxSprite;
	var col19:FlxSprite;
	var col20:FlxSprite;
	var col21:FlxSprite;
	var col22:FlxSprite;
	var col23:FlxSprite;
	var col24:FlxSprite;
	var tri1:FlxSprite;

	var dark:FlxSprite;

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
		col5 = createAndAddFlxSprite(96,500,146,300);
		col6 = createAndAddFlxSprite(402, 500, 200, 200);
		col7 = createAndAddFlxSprite(96, 580, 190, 300);
		col8 = createAndAddFlxSprite(358, 580, 200, 300);
		col9 = createAndAddFlxSprite(180, 21, 285, 70);
		col10 = createAndAddFlxSprite(490, 160, 60, 20);
		col11 = createAndAddFlxSprite(500, 150, 60, 20);
		col12 = createAndAddFlxSprite(510, 140, 60, 20);
		col13 = createAndAddFlxSprite(520, 130, 60, 20);
		col14 = createAndAddFlxSprite(530, 120, 60, 20);

		col16 = createAndAddFlxSprite(135, 160, 20, 20);
		col15 = createAndAddFlxSprite(125, 150, 20, 20);
		col17 = createAndAddFlxSprite(115, 140, 20, 20);
		col18 = createAndAddFlxSprite(105, 130, 20, 20);
		col19 = createAndAddFlxSprite(95, 120, 20, 20);
		col20 = createAndAddFlxSprite(85, 110, 20, 20);
		col21 = createAndAddFlxSprite(0, -244, 290, 220);
		col22 = createAndAddFlxSprite(58, -24, 60, 20);
		col23 = createAndAddFlxSprite(540, -24, 20, 20);
		col24 = createAndAddFlxSprite(355, -244, 300, 220);
		tri1 = createAndAddFlxSprite(300, -260, 45, 220,FlxColor.GREEN);

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

		dark = new FlxSprite(0, -250);
		dark.makeGraphic(FlxG.width, FlxG.height*2, FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);

		FlxTween.tween(dark,{alpha:0},0.5);

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

		var cols:Array<FlxSprite> = [col1,col2,col3,col4,col5,col6,col7,col8,col9,col10,col11,col12,col13,col14,col16,col17,col18,col19,col20,col21,col22,col23,col23,col24];
		for (i in 0...cols.length) {
			CU.collide(charaCol, cols[i]);
			cols[i].visible = false;
		}

		CU.collide(charaCol, tri1, true, transition);

		if (charaCol.y <= 359 && asriel.y == 212) {
			asriel.animation.play('Up');
			FlxTween.tween(asriel,{y:165, x:380}, 0.6, {onComplete: asMove1});
		}

        super.update(elapsed);

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

	function transition() {
	   canMove = false;
	   FlxTween.tween(dark,{alpha:1},1,{ease: FlxEase.linear, onComplete: switchS});
	   FlxTween.tween(chara,{y: chara.y-20},1);
	   FlxTween.tween(chara,{alpha:0},1);
	}

    function switchS(t:FlxTween) {
	   FlxG.switchState(new mapStates.theRuins.Zone4());
	}
}
