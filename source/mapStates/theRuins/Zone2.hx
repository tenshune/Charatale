package mapStates.theRuins;

import flixel.tweens.FlxTween;
import flixel.util.FlxSave;
import openfl.utils.Assets;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxCamera;
import player.Movement as Movement;
import CoolUtils as CU;
import player.CameraFuncs as Cam;

class Zone2 extends FlxState
{
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

	var portrait:FlxSprite;
	var textBox:FlxSprite;
	var text:FlxText;
	var textToAnimate:String = '';

	var dark:FlxSprite;

	var textSound:String = 'snd_txtasr';
	var inter:Float = 0.05;

	var dialInt:Bool = false;

	var save:FlxSave;
	var lang:String;

	var cam:FlxCamera;

	var tp:FlxSprite;

	override function create()
	{
		save = new FlxSave();
		save.bind('charatale');

		lang = save.data.lang;

		zone = new FlxSprite(0, 0).loadGraphic(Paths.mapImg('zone 2', 'the ruins'));
		zone.scale.x = 2;
		zone.scale.y = 2;
		zone.updateHitbox();
		zone.screenCenter(XY);
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

		asriel = new FlxSprite(0, zone.height - 130);
		asriel.frames = Paths.getSparrowAtlas('asriel');
		asriel.animation.addByPrefix('Down', 'Down', 0, true);
		asriel.animation.addByPrefix('Up', 'Up', 4, true);
		asriel.animation.addByPrefix('Left', 'Left', 4, true);
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

		col1 = createAndAddFlxSprite(0, 0, 1000, 70);
		col2 = createAndAddFlxSprite(0, 70, 275, 80);
		col3 = createAndAddFlxSprite(275 * 2 - 185, 70, 275, 80);
		col4 = createAndAddFlxSprite(0, 0, 10, 10000);
		col5 = createAndAddFlxSprite(FlxG.width - 10, 0, 10, 10000);
		col6 = createAndAddFlxSprite(0, Math.floor(zone.height) * 2 - 40, 1000, 15);

		tp = createAndAddFlxSprite(0, 50, 80, 80, FlxColor.GREEN);
		tp.screenCenter(X);
		tp.visible = false;
		tp.x -= 2;

		// Cam.follow(cam, chara, zone.x - 35, zone.y, zone.x + zone.width + 35, zone.y + (zone.height*2));

		cam = new FlxCamera(0, 0);
		cam.bgColor = FlxColor.TRANSPARENT;
		cam.setScrollBoundsRect(zone.x - 35, zone.y, zone.x + zone.width + 35, zone.y + (zone.height * 2));
		FlxG.cameras.reset(cam);
		cam.target = chara;

		super.create();

		textBox = new FlxSprite(0, 0).loadGraphic(Paths.image('charTextBox'));
		textBox.screenCenter(X);
		textBox.y = FlxG.camera.height - textBox.height + 200;
		textBox.alpha = 0;
		add(textBox);

		text = new FlxText(200, textBox.y + 20, 400, '', 24);
		text.alpha = 0;
		add(text);

		portrait = new FlxSprite(textBox.x + 30, textBox.y + (textBox.height / 2 - 30)).loadGraphic(Paths.portImage('tired', 'chara'));
		portrait.scale.x = 1.25;
		portrait.scale.y = 1.25;
		portrait.alpha = 0;
		add(portrait);

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, Math.floor(zone.height * 2), FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);

		CU.animInit();
		text.text = "";
	}

	var dial = 0;

	function handleDialog(key:Int, nextKey:Int, graphic:String, char:String, ?sound:String = 'SND_TXT1')
	{
		if (text.text == Assets.getText(Paths.lang(lang, 'dialogues/2/' + key)).split("user").join(save.data.name)
			&& FlxG.keys.justPressed.ENTER)
		{
			CU.animInit();
			text.text = '';
			dial++;
			textSound = sound;
			textToAnimate = Assets.getText(Paths.lang(lang, 'dialogues/2/' + nextKey));
			textToAnimate = textToAnimate.split("user").join(save.data.name);
			portrait.loadGraphic(Paths.portImage(graphic, char));
		}
	}

	override function update(elapsed:Float)
	{
		if (dark.alpha > 0)
		{
			dark.alpha -= 0.05;
		}

		if (canMove)
		{
			Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara, true);
		}

		var cols:Array<FlxSprite> = [col1, col2, col3, col4, col5, col6];
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

		CU.collide(charaCol, tp, true, zoneChange);

		CU.textAnimation(text, textToAnimate, elapsed, textSound, inter);

		chara.x = charaCol.x;
		chara.y = charaCol.y - 35;

		super.update(elapsed);

		if ((chara.x >= 10 && chara.x <= 590) && chara.y <= 448 && !dialInt)
		{
			canMove = false;
			chara.animation.stop();
			dialInt = true;
			portrait.loadGraphic(Paths.portImage('sad', 'asriel'));
			FlxTween.tween(textBox, {alpha: 1}, 0.5, {onComplete: textChange});
			FlxTween.tween(text, {alpha: 1}, 0.5);
			FlxTween.tween(portrait, {alpha: 1}, 0.5);
		}

		handleDialog(1, 2, 'worried', 'chara');
		handleDialog(2, 3, 'happy', 'asriel', 'snd_txtasr');
		handleDialog(3, 4, 'worried', 'chara');
		handleDialog(4, 5, 'happy', 'asriel', 'snd_txtasr');
		handleDialog(5, 6, 'worried', 'chara');

		if (text.text == Assets.getText(Paths.lang(lang, 'dialogues/2/6')) && FlxG.keys.justPressed.ENTER)
		{
			FlxTween.tween(textBox, {alpha: 0}, 0.5, {onComplete: byeAs});
			FlxTween.tween(text, {alpha: 0}, 0.5);
			FlxTween.tween(portrait, {alpha: 0}, 0.5);
		}
		else
		{
			if (FlxG.keys.justPressed.ENTER && text.text != '')
			{
				CU.animInit();
				textToAnimate = '';
				text.text = Assets.getText(Paths.lang(lang, 'dialogues/2/' + dial)).split("user").join(save.data.name);
			}
		}
	}

	function textChange(t:FlxTween)
	{
		textToAnimate = Assets.getText(Paths.lang(lang, 'dialogues/2/1'));
		dial = 1;
	}

	function createAndAddFlxSprite(x:Int, y:Int, width:Int, height:Int, ?color:FlxColor = FlxColor.RED):FlxSprite
	{
		var sprite = new FlxSprite(x, y);
		sprite.makeGraphic(width, height, color);
		sprite.updateHitbox();
		add(sprite);
		return sprite;
	}

	function byeAs(t:FlxTween)
	{
		asriel.animation.play("Up");
		FlxTween.tween(cam, {y: cam.y + 30}, 0.5);
		FlxTween.tween(asriel, {y: -150}, 2.5, {onComplete: moveAgain});
	}

	function moveAgain(t:FlxTween)
	{
		asriel.visible = false;
		FlxTween.tween(cam, {y: cam.y - 30}, 0.15);
		canMove = true;
	}

	function zoneChange()
	{
		FlxTween.tween(dark, {alpha: 1}, 1, {onComplete: zone3});
		canMove = false;
		chara.animation.frameIndex = 0;
		chara.animation.stop();
	}

	function zone3(t:FlxTween)
	{
		FlxG.switchState(new mapStates.theRuins.Zone3());
	}
}