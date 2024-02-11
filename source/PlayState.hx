package;

import flixel.graphics.frames.FlxAtlasFrames;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
    var playerChar:FlxSprite;

    override function create() 
    {
        playerChar = new FlxSprite(FlxG.width/2, FlxG.height/2);
		playerChar.frames = Paths.getSparrowAtlas("Chara");
        playerChar.animation.addByPrefix("Down", 'Down', 4);
		playerChar.animation.addByPrefix("DownRight", 'Down', 4);
		playerChar.animation.addByPrefix("DownLeft", 'Down', 4);
		playerChar.animation.addByPrefix("Left", 'Left', 4);
		playerChar.animation.addByPrefix("Up", 'Up', 4);
		playerChar.animation.addByPrefix("UpRight", 'Up', 4);
		playerChar.animation.addByPrefix("UpLeft", 'Up', 4);
		playerChar.animation.addByPrefix("Right", 'Right', 4);
        playerChar.scale.x = 2;
        playerChar.scale.y = 2;
        add(playerChar);
    }

    override public function update(elapsed:Float):Void 
    {
        super.update(elapsed);

        // Important: can be null if there's no active gamepad yet!
        var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
        if (gamepad != null)
        {
            updateGamepadInput(gamepad);
        }
    }

    function updateGamepadInput(gamepad:FlxGamepad):Void
    {
        var speedMultiplier:Float = 3;
        var xInput:Float = gamepad.analog.value.LEFT_STICK_X;
        var yInput:Float = gamepad.analog.value.LEFT_STICK_Y;

        var isMoving:Bool = false;

        if (xInput != 0 && yInput != 0) {
            var diagonalSpeed:Float = Math.sqrt(xInput * xInput + yInput * yInput);
            var normalizedX:Float = (xInput / diagonalSpeed) * speedMultiplier;
            var normalizedY:Float = (yInput / diagonalSpeed) * speedMultiplier;

            playerChar.x += normalizedX;
            playerChar.y += normalizedY;

            isMoving = true;
        } else {
            if (xInput < -0) {
                playerChar.x -= speedMultiplier * (-xInput);
                isMoving = true;
            }

            if (xInput > 0) {
                playerChar.x += speedMultiplier * xInput;
                isMoving = true;
            }

            if (yInput < -0) {
                playerChar.y -= speedMultiplier * (-yInput);
                isMoving = true;
            }

            if (yInput > 0) {
                playerChar.y += speedMultiplier * yInput;
                isMoving = true;
            }
        }

        if (isMoving) {
            if (gamepad.analog.value.LEFT_STICK_X < 0) {
                if (gamepad.analog.value.LEFT_STICK_Y < 0) {
                    playerChar.animation.play('UpLeft');
                } else if (gamepad.analog.value.LEFT_STICK_Y > 0) {
                    playerChar.animation.play('DownLeft');
                } else {
                    playerChar.animation.play('Left');
                }
            } else if (gamepad.analog.value.LEFT_STICK_X > 0) {
                if (gamepad.analog.value.LEFT_STICK_Y < 0) {
                    playerChar.animation.play('UpRight');
                } else if (gamepad.analog.value.LEFT_STICK_Y > 0) {
                    playerChar.animation.play('DownRight');
               } else {
                    playerChar.animation.play('Right');
                }
            } else if (gamepad.analog.value.LEFT_STICK_Y < 0) {
                playerChar.animation.play('Up');
            } else if (gamepad.analog.value.LEFT_STICK_Y > 0) {
                playerChar.animation.play('Down');
            }
            // Assuming "walking" is the animation's label and it already exists
            // You may need to adjust it based on your actual animation setup
            //playerChar.animation.setSpeed(speedMultiplier);
        } else {
            playerChar.animation.frameIndex = 0;
            // Assuming "idle" is the animation's label and it already exists
            // You may need to adjust it based on your actual animation setup
            }
    }
}