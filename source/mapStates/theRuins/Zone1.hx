package mapStates.theRuins;

import openfl.Assets;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxSave;
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
import GlobalVariables as Global;

class Zone1 extends FlxState
{
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

	var tp:FlxSprite;

	var dark:FlxSprite;

	var save:FlxSave;

	var portrait:FlxSprite;
	var textBox:FlxSprite;
	var text:FlxText;
	var textToAnimate:String = '';

	var lang:String;

	override function create()
	{
		save = new FlxSave();
		save.bind('charatale');

		lang = save.data.lang;

		Utils.set_game_id(Global.gameID);
		Utils.set_gamePrivKey(Global.gamePrivateKey);

		zone = new FlxSprite(0, 0).loadGraphic(Paths.mapImg('zone 1', 'the ruins'));
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
		chara.animation.addByPrefix("Fall", 'Falling', 4, true);
		chara.animation.addByPrefix("FacePlant", 'FacePlant', 4, true);
		chara.animation.addByPrefix('GetUp', 'GetUp', 4, true);
		chara.scale.x = 2;
		chara.scale.y = 2;
		chara.updateHitbox();
		chara.x -= 40;
		chara.y -= 40;
		add(chara);

		charaCol = new FlxSprite(FlxG.width / 2 - 35, FlxG.height / 2 - 50);
		charaCol.makeGraphic(40, 25, FlxColor.LIME);
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

		tp = createAndAddFlxSprite(1170, 150, 100, 100, FlxColor.GREEN);
		tp.visible = false;

		Cam.follow(chara, zone.x - 35, zone.y, zone.x + zone.width + 35, zone.y + zone.height);

		super.create();

		if ((save.data.save == 0 || save.data.save == null))
		{
			canMove = false;
			charaCol.y -= 300;
			chara.animation.play('Fall');
			FlxTween.tween(charaCol, {y: FlxG.height / 2 - 40}, 0.6, {onComplete: shakeCmrAnim});
			Global.bZone = 'trz1';
		}

		textBox = new FlxSprite(0, 0).loadGraphic(Paths.image('charTextBox'));
		textBox.screenCenter(X);
		textBox.y = FlxG.height - textBox.height;
		textBox.alpha = 0;
		add(textBox);

		text = new FlxText(200, 350, 400, '', 24);
		text.alpha = 0;
		add(text);

		portrait = new FlxSprite(textBox.x + 30, textBox.y + (textBox.height / 2 - 30)).loadGraphic(Paths.portImage('tired', 'chara'));
		portrait.scale.x = 1.25;
		portrait.scale.y = 1.25;
		portrait.alpha = 0;
		add(portrait);

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = 0;
		Global.dark = 0;
		add(dark);

		CU.animInit();
		text.text = "";
	}

	function shakeCmrAnim(t:FlxTween)
	{
		chara.animation.play('FacePlant');
		FlxG.sound.play(Paths.sound('snd_heavydamage'), 0.7);
		FlxG.cameras.shake(0.05, 0.2);
		var timer:FlxTimer = new FlxTimer();
		timer.start(2.5, anim1);
	}

	function anim1(t:FlxTimer)
	{
		FlxG.sound.play(Paths.sound('snd_noise'), 0.5);
		chara.animation.play('GetUp');
		var timer:FlxTimer = new FlxTimer();
		timer.start(1.5, anim2);
	}

	function anim2(t:FlxTimer)
	{
		FlxG.sound.play(Paths.sound('snd_noise'), 0.35);
		chara.animation.play('Down');
		chara.animation.frameIndex = 0;
		chara.animation.stop();
		FlxTween.tween(textBox, {alpha: 1}, 0.5, {onComplete: textChange});
		FlxTween.tween(text, {alpha: 1}, 0.5);
		FlxTween.tween(portrait, {alpha: 1}, 0.5);
		charaCol.x -= 10;
		charaCol.y += 5;
	}

	function textChange(t:FlxTween)
	{
		textToAnimate = Assets.getText(Paths.lang(lang,'dialogues/1/1'));
	}

	var inter:Float = 0.05;

	override function update(elapsed:Float)
	{
		if (canMove)
		{
			Movement.keyboardMove(charaCol);
			Movement.keyboardMove(chara, true);
		}

		var cols:Array<FlxSprite> = [
			col1, col2, col3, col4, col5, col6, col7, col8, col9, col10, col11, col12, col13, col14
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

		CU.collide(charaCol, tp, true, Zone2);

		CU.textAnimation(text, textToAnimate, elapsed, 'SND_TXT1', inter);

		chara.x = charaCol.x;
		chara.y = charaCol.y - 35;

		super.update(elapsed);

		if (chara.animation.name == 'Fall')
		{
			chara.x = charaCol.x - 20;
		}
		else if (chara.animation.name == 'FacePlant')
		{
			chara.x = charaCol.x - 30;
		}
		else if (chara.animation.name == 'GetUp')
		{
			chara.x = charaCol.x - 28;
			chara.y = charaCol.y - 35;
		}

		if (text.text == Assets.getText(Paths.lang(lang, 'dialogues/1/1')) && FlxG.keys.justPressed.ENTER)
		{
			CU.animInit();
			text.text = '';
			textToAnimate = Assets.getText(Paths.lang(lang, 'dialogues/1/2'));
			portrait.loadGraphic(Paths.portImage('worried', 'chara'));
		}
		else if (text.text == Assets.getText(Paths.lang(lang, 'dialogues/1/2')) && FlxG.keys.justPressed.ENTER)
		{
			CU.animInit();
			text.text = '';
			textToAnimate = Assets.getText(Paths.lang(lang, 'dialogues/1/3'));
			portrait.loadGraphic(Paths.portImage('neutral', 'chara'));
		}
		else if (text.text == "Better find an exit, i'm sure there is one..."
			|| text.text == "Mejor encontrar una salida, de seguro hay una...")
		{
			inter = 1;
		}
		else if (text.text == "Better find an exit, i'm sure there is one... "
			|| text.text == "Mejor encontrar una salida, de seguro hay una... ")
		{
			inter = 0.05;
			portrait.loadGraphic(Paths.portImage('worried', 'chara'));
		}
		else if ((text.text == "Better find an exit, i'm sure there is one... somewhere."
			|| text.text == "Mejor encontrar una salida, de seguro hay una... en alguna parte.") && FlxG.keys.justPressed.ENTER)
		{
			FlxTween.tween(textBox, {alpha: 0}, 0.5, {onComplete: moveAgain});
			FlxTween.tween(text, {alpha: 0}, 0.5);
			FlxTween.tween(portrait, {alpha: 0}, 0.5);
		}
	}

	function moveAgain(t:FlxTween)
	{
		canMove = true;
		if (save.data.username != null)
		{
			save.data.begin = true;
			Trophies.addAchieved(save.data.username, save.data.token,224447);
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

	function Zone2()
	{
		FlxTween.tween(dark, {alpha: 1}, 1.5, {onComplete: switchA});
		canMove = false;
		chara.animation.frameIndex = 0;
		chara.animation.stop();
	}

	function switchA(t:FlxTween)
	{
		FlxG.switchState(new mapStates.theRuins.Zone2());
	}
}
