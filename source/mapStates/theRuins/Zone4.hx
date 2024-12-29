package mapStates.theRuins;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;

import player.Movement;

import CoolUtils as CU;

class Zone4 extends FlxState {

    var zone:FlxSprite;

	var c1:FlxSprite;
	var c2:FlxSprite;
	var c3:FlxSprite;
	var c4:FlxSprite;
	var c5:FlxSprite;
	var c6:FlxSprite;
	var c7:FlxSprite;
    var c8:FlxSprite;
    var c9:FlxSprite;
    var c10:FlxSprite;
	var c11:FlxSprite;
    var c12:FlxSprite;
    var c13:FlxSprite;
    var c14:FlxSprite;
	var c15:FlxSprite;
    var c16:FlxSprite;
    var c17:FlxSprite;
    var c18:FlxSprite;

	var cols:Array<FlxSprite>;
	var cat:Int = 16;

	var chara:FlxSprite;
	var charaCol:FlxSprite;

	var canMove:Bool = true;

    override function create() {

		zone = new FlxSprite(0, 0).loadGraphic(Paths.mapImg('zone 4', 'the ruins'));
		zone.scale.x = 2;
		zone.scale.y = 2;
		zone.updateHitbox();
		zone.screenCenter(XY);
		add(zone);

		c1 = createAndAddFlxSprite(37, 23, 121, 151);
		c2 = createAndAddFlxSprite(110, 361, 50, 70);
		c3 = createAndAddFlxSprite(77, 193, 43, 190);
		c4 = createAndAddFlxSprite(150, 400, 91, 50);
		c5 = createAndAddFlxSprite(230, 439, 50, 50);
		c6 = createAndAddFlxSprite(360, 439, 150, 50);
		c7 = createAndAddFlxSprite(447, 415, 50, 50);
		c8 = createAndAddFlxSprite(460, 402, 50, 50);
		c9 = createAndAddFlxSprite(479, 382, 50, 50);
		c10 = createAndAddFlxSprite(501, 364, 50, 50);
		c11 = createAndAddFlxSprite(520, 219, 50, 150);
		c12 = createAndAddFlxSprite(484, 152, 98, 70);
		c13 = createAndAddFlxSprite(456, 18, 50, 167);
		c14 = createAndAddFlxSprite(322, 110, 70, 50);
		c15 = createAndAddFlxSprite(158, 98, 50, 50);
		c16 = createAndAddFlxSprite(207, 110, 32, 50);
		c17 = createAndAddFlxSprite(385, 98, 80, 50);
		//c = createAndAddFlxSprite(0, 0, 50, 50);

		cols = [c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13,c14,c15,c16,c17];

        super.create();

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

		charaCol = new FlxSprite(FlxG.width / 2, FlxG.height / 2);
		charaCol.makeGraphic(40, 25, FlxColor.LIME);
		//charaCol.visible = false;
		charaCol.screenCenter(X);
		add(charaCol);
    }

	override function update(elapsed:Float) {

		if (FlxG.mouse.pressed) {
			cols[cat].x = FlxG.mouse.x;
			cols[cat].y = FlxG.mouse.y;
		}

		if (FlxG.keys.pressed.M && FlxG.keys.justPressed.V) {
			cols[cat].height += 5;
		}
		if (FlxG.keys.pressed.M && FlxG.keys.justPressed.H)
		{
			cols[cat].width += 5;
		}

		if (FlxG.keys.justPressed.P) {
			trace("X: "+cols[cat].x+" Y: "+cols[cat].y);
		}

		super.update(elapsed);

		if (canMove)
		{
			Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara, true);
		}

		chara.x = charaCol.x;
		chara.y = charaCol.y - 35;

		for (i in 0...cols.length)
		{
			CU.collide(charaCol, cols[i]);
			//cols[i].visible = false;
		}
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