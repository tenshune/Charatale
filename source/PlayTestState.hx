package;

import flixel.graphics.frames.FlxAtlasFrames;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepad;

import gameJoltAPI.Utils;
import gameJoltAPI.Users;
import gameJoltAPI.Trophies;

import player.Movement;

class PlayState extends FlxState
{
    var chara:FlxSprite;

    override function create() {
		chara = new FlxSprite(FlxG.width/2,FlxG.height/2);
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
        add(chara);
    }

    override public function update(elapsed:Float):Void 
    {
        super.update(elapsed);

        Movement.keyboardMove(chara);
    }
}