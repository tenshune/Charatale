package;

import openfl.Assets;
import flixel.util.FlxSave;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxState;

import gameJoltAPI.Users;
import gameJoltAPI.Utils;
import gameJoltAPI.Trophies;

import GlobalVariables as Global;
import CoolUtils as CU;

class TrophiesState extends FlxState {

	var title:FlxSprite;

    var troph1:FlxSprite;
	var troph2:FlxSprite;

    var textBox:FlxSprite;
    var text:FlxText;

	private var textToAnimate:String = '';
    private var secret:Bool = false;

    private var selected = 0;

    var dark:FlxSprite;

	var lang:String = "";

	var save:FlxSave;

    override function create() {
        Utils.game_id = Global.gameID;
        Utils.gamePrivKey = Global.gamePrivateKey;

		save = new FlxSave();
		save.bind("charatale");

		lang = save.data.lang;

		textToAnimate = Assets.getText(Paths.lang(lang.toLowerCase(), 'trophies/welcome'));

        title = new FlxSprite(10,10);
        add(title);

        troph1 = new FlxSprite(40,110).loadGraphic(Paths.trophieImg('logged'));
        troph1.scale.x = 0.2;
		troph1.scale.y = 0.2;
        troph1.updateHitbox();

		troph2 = new FlxSprite(170, 110).loadGraphic(Paths.trophieImg('begin'));
		troph2.scale.x = 0.255;
		troph2.scale.y = 0.255;
        troph2.updateHitbox();

		var backdrop1:FlxSprite = new FlxSprite(troph1.x-5,troph1.y-5);
		backdrop1.makeGraphic(Math.floor(troph1.width + 10),Math.floor(troph1.height + 10),FlxColor.WHITE);

		var backdrop2:FlxSprite = new FlxSprite(troph2.x - 5, troph2.y - 5);
		backdrop2.makeGraphic(Math.floor(troph2.width + 10), Math.floor(troph2.height + 10), FlxColor.WHITE);

        textBox = new FlxSprite(0,0).loadGraphic(Paths.image('textBox'));
        textBox.screenCenter(X);
        textBox.y = FlxG.height - textBox.height;

		text = new FlxText(65,340, 520,'Hello, i am a text', 26);

        super.create();

        add(backdrop1);
        add(backdrop2);
		add(troph1);
        add(troph2);
		add(textBox);
        add(text);

        CU.animInit();
		text.text = "";

		dark = new FlxSprite(0, 0);
		dark.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		dark.alpha = 1;
		add(dark);
    }

	override public function update(elapsed:Float):Void
	{

		var texts:Array<String> = [
			Assets.getText(Paths.lang(lang.toLowerCase(),'trophies/welcome')),
			Assets.getText(Paths.lang(lang.toLowerCase(),'trophies/logged')),
			Assets.getText(Paths.lang(lang.toLowerCase(),'trophies/begin')),
			Assets.getText(Paths.lang(lang.toLowerCase(),'trophies/secret'))
		];

		title.loadGraphic(Paths.langImg(lang.toLowerCase(), 'img/trophies'));

		if (dark.alpha > 0)
		{
			dark.alpha -= 0.05;
		}
		else if (dark.alpha == 0)
		{
			Global.dark = 0;
		}
		super.update(elapsed);

        CU.textAnimation(text,textToAnimate,elapsed);

		if (FlxG.keys.pressed.ONE && FlxG.keys.pressed.FIVE && FlxG.keys.pressed.NUMPADNINE && !secret) {
			CU.animInit();
			text.text = "";
            textToAnimate = texts[3];
            selected = 3;
            secret = true;
		}
		else if (!FlxG.keys.pressed.A && !FlxG.keys.pressed.S && !FlxG.keys.pressed.NUMPADNINE && secret) {
			CU.animInit();
			text.text = "";
			textToAnimate = texts[0];
            selected = 0;
			secret = false;
        }

        var trophs:Array<FlxSprite> = [troph1, troph2];
		var trophsSave:Array<Bool> = [save.data.logged, save.data.begin];
        var i:Int = 0;
        do {
			if (trophsSave[i] == true) {
				if (CU.overlapSprite(trophs[i]))
				{
					trophs[i].alpha = 0.8;
					if (FlxG.mouse.justPressed)
					{
						CU.animInit();
						text.text = "";
						textToAnimate = texts[i + 1];
						selected = i + 1;
						secret = false;
					}
				}
				else
				{
					trophs[i].alpha = 1;
				}
			}else{
				trophs[i].color = 0x555555;
			}
            i++;
        }while (i < trophs.length);

        if (FlxG.keys.justPressed.ESCAPE) {
            Back();
        }
	}

	function Back()
	{
		FlxTween.tween(dark, {alpha: 1}, 1, {ease: FlxEase.cubeIn, onComplete: switchA});
        Global.dark = 1;
	}

	function switchA(t:FlxTween)
	{
		FlxG.switchState(new MainMenuState());
	}
}