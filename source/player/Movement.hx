package player;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.input.gamepad.FlxGamepad;

class Movement {

	static public function keyboardMove(playerChar:FlxSprite, ?anims:Bool=false, ?move:Bool = true)
	{
		var speedMultiplier:Float = 3;

		var isMoving:Bool = false;

		if (move) {
			if (FlxG.keys.pressed.A || FlxG.keys.pressed.LEFT)
			{
				playerChar.x -= speedMultiplier;
				isMoving = true;
			}
			if (FlxG.keys.pressed.D || FlxG.keys.pressed.RIGHT)
			{
				playerChar.x += speedMultiplier;
				isMoving = true;
			}
			if (FlxG.keys.pressed.W || FlxG.keys.pressed.UP)
			{
				playerChar.y -= speedMultiplier;
				isMoving = true;
			}
			if (FlxG.keys.pressed.S || FlxG.keys.pressed.DOWN)
			{
				playerChar.y += speedMultiplier;
				isMoving = true;
			}
		}
		if (anims) {
			if (isMoving)
			{
				if (FlxG.keys.pressed.A || FlxG.keys.pressed.LEFT)
				{
					if (FlxG.keys.pressed.W)
					{
						playerChar.animation.play('UpLeft');
					}
					else if (FlxG.keys.pressed.S)
					{
						playerChar.animation.play('DownLeft');
					}
					else
					{
						playerChar.animation.play('Left');
					}
				}
				else if (FlxG.keys.pressed.D || FlxG.keys.pressed.RIGHT)
				{
					if (FlxG.keys.pressed.W)
					{
						playerChar.animation.play('UpRight');
					}
					else if (FlxG.keys.pressed.S)
					{
						playerChar.animation.play('DownRight');
					}
					else
					{
						playerChar.animation.play('Right');
					}
				}
				else if (FlxG.keys.pressed.W || FlxG.keys.pressed.UP)
				{
					playerChar.animation.play('Up');
				}
				else if (FlxG.keys.pressed.S || FlxG.keys.pressed.DOWN)
				{
					playerChar.animation.play('Down');
				}
			}
			else
			{
				if (playerChar.animation.curAnim != null)
				{
					var currentAnimationName:String = playerChar.animation.curAnim.name;
					playerChar.animation.play(currentAnimationName, true, 0);
				}
			}
		}
	}

    static public function gamePadMove(playerChar:FlxSprite) {
		// Important: can be null if there's no active gamepad yet!
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		if (gamepad != null)
		{
			updateGamepadInput(gamepad,playerChar);
		}
    }

	static public  function updateGamepadInput(gamepad:FlxGamepad, playerChar:FlxSprite):Void
	{
		var speedMultiplier:Float = 3;
		var xInput:Float = gamepad.analog.value.LEFT_STICK_X;
		var yInput:Float = gamepad.analog.value.LEFT_STICK_Y;

		var isMoving:Bool = false;

		if (xInput != 0 && yInput != 0)
		{
			var diagonalSpeed:Float = Math.sqrt(xInput * xInput + yInput * yInput);
			var normalizedX:Float = (xInput / diagonalSpeed) * speedMultiplier;
			var normalizedY:Float = (yInput / diagonalSpeed) * speedMultiplier;

			playerChar.x += normalizedX;
			playerChar.y += normalizedY;

			isMoving = true;
		}
		else
		{
			if (xInput < -0)
			{
				playerChar.x -= speedMultiplier * (-xInput);
				isMoving = true;
			}

			if (xInput > 0)
			{
				playerChar.x += speedMultiplier * xInput;
				isMoving = true;
			}

			if (yInput < -0)
			{
				playerChar.y -= speedMultiplier * (-yInput);
				isMoving = true;
			}

			if (yInput > 0)
			{
				playerChar.y += speedMultiplier * yInput;
				isMoving = true;
			}
		}

		if (isMoving)
		{
			if (gamepad.analog.value.LEFT_STICK_X < 0)
			{
				if (gamepad.analog.value.LEFT_STICK_Y < 0)
				{
					playerChar.animation.play('UpLeft');
				}
				else if (gamepad.analog.value.LEFT_STICK_Y > 0)
				{
					playerChar.animation.play('DownLeft');
				}
				else
				{
					playerChar.animation.play('Left');
				}
			}
			else if (gamepad.analog.value.LEFT_STICK_X > 0)
			{
				if (gamepad.analog.value.LEFT_STICK_Y < 0)
				{
					playerChar.animation.play('UpRight');
				}
				else if (gamepad.analog.value.LEFT_STICK_Y > 0)
				{
					playerChar.animation.play('DownRight');
				}
				else
				{
					playerChar.animation.play('Right');
				}
			}
			else if (gamepad.analog.value.LEFT_STICK_Y < 0)
			{
				playerChar.animation.play('Up');
			}
			else if (gamepad.analog.value.LEFT_STICK_Y > 0)
			{
				playerChar.animation.play('Down');
			}
			// Assuming "walking" is the animation's label and it already exists
			// You may need to adjust it based on your actual animation setup
			// playerChar.animation.setSpeed(speedMultiplier);
		}
		else
		{
			playerChar.animation.frameIndex = 0;
			// Assuming "idle" is the animation's label and it already exists
			// You may need to adjust it based on your actual animation setup
		}
	}
}