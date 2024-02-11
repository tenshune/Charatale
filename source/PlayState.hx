package;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepad;

class PlayState extends FlxState
{
    var playerBox:FlxSprite;

    override function create() 
    {
        playerBox = new FlxSprite(FlxG.width/2,FlxG.height/2).frames("assets/images/Chara");
        add(playerBox);
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

        if (xInput != 0 && yInput != 0) {
            var diagonalSpeed:Float = Math.sqrt(xInput * xInput + yInput * yInput);
            var normalizedX:Float = (xInput / diagonalSpeed) * speedMultiplier;
            var normalizedY:Float = (yInput / diagonalSpeed) * speedMultiplier;
    
            playerBox.x += normalizedX;
            playerBox.y += normalizedY;
        } else {
            if (xInput < -0) {
                playerBox.x -= speedMultiplier * (-xInput);
            }

            if (xInput > 0) {
                playerBox.x += speedMultiplier * xInput;
            }

            if (yInput < -0) {
                playerBox.y -= speedMultiplier * (-yInput);
            }

            if (yInput > 0) {
                playerBox.y += speedMultiplier * yInput;
            }
        }
    }
}