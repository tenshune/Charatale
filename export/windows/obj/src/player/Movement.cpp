#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_player_Movement
#include <player/Movement.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bcc148e2586bdce2_10_keyboardMove,"player.Movement","keyboardMove",0x20e2ab0a,"player.Movement.keyboardMove","player/Movement.hx",10,0xc7f295e1)
HX_LOCAL_STACK_FRAME(_hx_pos_bcc148e2586bdce2_87_gamePadMove,"player.Movement","gamePadMove",0xfa1b78c0,"player.Movement.gamePadMove","player/Movement.hx",87,0xc7f295e1)
HX_LOCAL_STACK_FRAME(_hx_pos_bcc148e2586bdce2_97_updateGamepadInput,"player.Movement","updateGamepadInput",0x4af77884,"player.Movement.updateGamepadInput","player/Movement.hx",97,0xc7f295e1)
namespace player{

void Movement_obj::__construct() { }

Dynamic Movement_obj::__CreateEmpty() { return new Movement_obj; }

void *Movement_obj::_hx_vtable = 0;

Dynamic Movement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Movement_obj > _hx_result = new Movement_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Movement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19cf3570;
}

void Movement_obj::keyboardMove( ::flixel::FlxSprite playerChar, ::Dynamic __o_anims, ::Dynamic __o_move){
            		 ::Dynamic anims = __o_anims;
            		if (::hx::IsNull(__o_anims)) anims = false;
            		 ::Dynamic move = __o_move;
            		if (::hx::IsNull(__o_move)) move = true;
            	HX_STACKFRAME(&_hx_pos_bcc148e2586bdce2_10_keyboardMove)
HXLINE(  11)		Float speedMultiplier = ( (Float)(3) );
HXLINE(  13)		bool isMoving = false;
HXLINE(  15)		if (( (bool)(move) )) {
HXLINE(  16)			bool _hx_tmp;
HXDLIN(  16)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  16)			if (!(_this->keyManager->checkStatusUnsafe(65,_this->status))) {
HXLINE(  16)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  16)				_hx_tmp = _this->keyManager->checkStatusUnsafe(37,_this->status);
            			}
            			else {
HXLINE(  16)				_hx_tmp = true;
            			}
HXDLIN(  16)			if (_hx_tmp) {
HXLINE(  18)				playerChar->set_x((playerChar->x - speedMultiplier));
HXLINE(  19)				isMoving = true;
            			}
HXLINE(  21)			bool _hx_tmp1;
HXDLIN(  21)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  21)			if (!(_this1->keyManager->checkStatusUnsafe(68,_this1->status))) {
HXLINE(  21)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  21)				_hx_tmp1 = _this->keyManager->checkStatusUnsafe(39,_this->status);
            			}
            			else {
HXLINE(  21)				_hx_tmp1 = true;
            			}
HXDLIN(  21)			if (_hx_tmp1) {
HXLINE(  23)				playerChar->set_x((playerChar->x + speedMultiplier));
HXLINE(  24)				isMoving = true;
            			}
HXLINE(  26)			bool _hx_tmp2;
HXDLIN(  26)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  26)			if (!(_this2->keyManager->checkStatusUnsafe(87,_this2->status))) {
HXLINE(  26)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  26)				_hx_tmp2 = _this->keyManager->checkStatusUnsafe(38,_this->status);
            			}
            			else {
HXLINE(  26)				_hx_tmp2 = true;
            			}
HXDLIN(  26)			if (_hx_tmp2) {
HXLINE(  28)				playerChar->set_y((playerChar->y - speedMultiplier));
HXLINE(  29)				isMoving = true;
            			}
HXLINE(  31)			bool _hx_tmp3;
HXDLIN(  31)			 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  31)			if (!(_this3->keyManager->checkStatusUnsafe(83,_this3->status))) {
HXLINE(  31)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  31)				_hx_tmp3 = _this->keyManager->checkStatusUnsafe(40,_this->status);
            			}
            			else {
HXLINE(  31)				_hx_tmp3 = true;
            			}
HXDLIN(  31)			if (_hx_tmp3) {
HXLINE(  33)				playerChar->set_y((playerChar->y + speedMultiplier));
HXLINE(  34)				isMoving = true;
            			}
            		}
HXLINE(  37)		if (( (bool)(anims) )) {
HXLINE(  38)			if (isMoving) {
HXLINE(  40)				bool _hx_tmp;
HXDLIN(  40)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  40)				if (!(_this->keyManager->checkStatusUnsafe(65,_this->status))) {
HXLINE(  40)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  40)					_hx_tmp = _this->keyManager->checkStatusUnsafe(37,_this->status);
            				}
            				else {
HXLINE(  40)					_hx_tmp = true;
            				}
HXDLIN(  40)				if (_hx_tmp) {
HXLINE(  42)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  42)					if (_this->keyManager->checkStatusUnsafe(87,_this->status)) {
HXLINE(  44)						playerChar->animation->play(HX_("UpLeft",22,d8,bf,ab),null(),null(),null());
            					}
            					else {
HXLINE(  46)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  46)						if (_this->keyManager->checkStatusUnsafe(83,_this->status)) {
HXLINE(  48)							playerChar->animation->play(HX_("DownLeft",a9,c1,49,56),null(),null(),null());
            						}
            						else {
HXLINE(  52)							playerChar->animation->play(HX_("Left",27,34,89,32),null(),null(),null());
            						}
            					}
            				}
            				else {
HXLINE(  55)					bool _hx_tmp;
HXDLIN(  55)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  55)					if (!(_this->keyManager->checkStatusUnsafe(68,_this->status))) {
HXLINE(  55)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  55)						_hx_tmp = _this->keyManager->checkStatusUnsafe(39,_this->status);
            					}
            					else {
HXLINE(  55)						_hx_tmp = true;
            					}
HXDLIN(  55)					if (_hx_tmp) {
HXLINE(  57)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  57)						if (_this->keyManager->checkStatusUnsafe(87,_this->status)) {
HXLINE(  59)							playerChar->animation->play(HX_("UpRight",61,53,2a,13),null(),null(),null());
            						}
            						else {
HXLINE(  61)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  61)							if (_this->keyManager->checkStatusUnsafe(83,_this->status)) {
HXLINE(  63)								playerChar->animation->play(HX_("DownRight",fa,bf,4c,a1),null(),null(),null());
            							}
            							else {
HXLINE(  67)								playerChar->animation->play(HX_("Right",bc,7b,91,7c),null(),null(),null());
            							}
            						}
            					}
            					else {
HXLINE(  70)						bool _hx_tmp;
HXDLIN(  70)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  70)						if (!(_this->keyManager->checkStatusUnsafe(87,_this->status))) {
HXLINE(  70)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  70)							_hx_tmp = _this->keyManager->checkStatusUnsafe(38,_this->status);
            						}
            						else {
HXLINE(  70)							_hx_tmp = true;
            						}
HXDLIN(  70)						if (_hx_tmp) {
HXLINE(  72)							playerChar->animation->play(HX_("Up",7b,4a,00,00),null(),null(),null());
            						}
            						else {
HXLINE(  74)							bool _hx_tmp;
HXDLIN(  74)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  74)							if (!(_this->keyManager->checkStatusUnsafe(83,_this->status))) {
HXLINE(  74)								 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  74)								_hx_tmp = _this->keyManager->checkStatusUnsafe(40,_this->status);
            							}
            							else {
HXLINE(  74)								_hx_tmp = true;
            							}
HXDLIN(  74)							if (_hx_tmp) {
HXLINE(  76)								playerChar->animation->play(HX_("Down",82,24,47,2d),null(),null(),null());
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE(  81)				playerChar->animation->stop();
HXLINE(  82)				playerChar->animation->set_frameIndex(0);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Movement_obj,keyboardMove,(void))

void Movement_obj::gamePadMove( ::flixel::FlxSprite playerChar){
            	HX_STACKFRAME(&_hx_pos_bcc148e2586bdce2_87_gamePadMove)
HXLINE(  89)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE(  90)		if (::hx::IsNotNull( gamepad )) {
HXLINE(  92)			::player::Movement_obj::updateGamepadInput(gamepad,playerChar);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Movement_obj,gamePadMove,(void))

void Movement_obj::updateGamepadInput( ::flixel::input::gamepad::FlxGamepad gamepad, ::flixel::FlxSprite playerChar){
            	HX_STACKFRAME(&_hx_pos_bcc148e2586bdce2_97_updateGamepadInput)
HXLINE(  98)		Float speedMultiplier = ( (Float)(3) );
HXLINE(  99)		 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN(  99)		Float xInput = _this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19));
HXLINE( 100)		 ::flixel::input::gamepad::FlxGamepad _this1 = gamepad->analog->value->gamepad;
HXDLIN( 100)		Float yInput = _this1->getYAxisRaw(_this1->mapping->getAnalogStick(19));
HXLINE( 102)		bool isMoving = false;
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if ((xInput != 0)) {
HXLINE( 104)			_hx_tmp = (yInput != 0);
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 106)			Float diagonalSpeed = ::Math_obj::sqrt(((xInput * xInput) + (yInput * yInput)));
HXLINE( 107)			Float normalizedX = ((xInput / diagonalSpeed) * speedMultiplier);
HXLINE( 108)			Float normalizedY = ((yInput / diagonalSpeed) * speedMultiplier);
HXLINE( 110)			playerChar->set_x((playerChar->x + normalizedX));
HXLINE( 111)			playerChar->set_y((playerChar->y + normalizedY));
HXLINE( 113)			isMoving = true;
            		}
            		else {
HXLINE( 117)			if ((xInput < 0)) {
HXLINE( 119)				playerChar->set_x((playerChar->x - (speedMultiplier * -(xInput))));
HXLINE( 120)				isMoving = true;
            			}
HXLINE( 123)			if ((xInput > 0)) {
HXLINE( 125)				playerChar->set_x((playerChar->x + (speedMultiplier * xInput)));
HXLINE( 126)				isMoving = true;
            			}
HXLINE( 129)			if ((yInput < 0)) {
HXLINE( 131)				playerChar->set_y((playerChar->y - (speedMultiplier * -(yInput))));
HXLINE( 132)				isMoving = true;
            			}
HXLINE( 135)			if ((yInput > 0)) {
HXLINE( 137)				playerChar->set_y((playerChar->y + (speedMultiplier * yInput)));
HXLINE( 138)				isMoving = true;
            			}
            		}
HXLINE( 142)		if (isMoving) {
HXLINE( 144)			 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 144)			if ((_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19)) < 0)) {
HXLINE( 146)				 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 146)				if ((_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) < 0)) {
HXLINE( 148)					playerChar->animation->play(HX_("UpLeft",22,d8,bf,ab),null(),null(),null());
            				}
            				else {
HXLINE( 150)					 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 150)					if ((_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) > 0)) {
HXLINE( 152)						playerChar->animation->play(HX_("DownLeft",a9,c1,49,56),null(),null(),null());
            					}
            					else {
HXLINE( 156)						playerChar->animation->play(HX_("Left",27,34,89,32),null(),null(),null());
            					}
            				}
            			}
            			else {
HXLINE( 159)				 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 159)				if ((_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19)) > 0)) {
HXLINE( 161)					 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 161)					if ((_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) < 0)) {
HXLINE( 163)						playerChar->animation->play(HX_("UpRight",61,53,2a,13),null(),null(),null());
            					}
            					else {
HXLINE( 165)						 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 165)						if ((_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) > 0)) {
HXLINE( 167)							playerChar->animation->play(HX_("DownRight",fa,bf,4c,a1),null(),null(),null());
            						}
            						else {
HXLINE( 171)							playerChar->animation->play(HX_("Right",bc,7b,91,7c),null(),null(),null());
            						}
            					}
            				}
            				else {
HXLINE( 174)					 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 174)					if ((_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) < 0)) {
HXLINE( 176)						playerChar->animation->play(HX_("Up",7b,4a,00,00),null(),null(),null());
            					}
            					else {
HXLINE( 178)						 ::flixel::input::gamepad::FlxGamepad _this = gamepad->analog->value->gamepad;
HXDLIN( 178)						if ((_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) > 0)) {
HXLINE( 180)							playerChar->animation->play(HX_("Down",82,24,47,2d),null(),null(),null());
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 188)			playerChar->animation->set_frameIndex(0);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Movement_obj,updateGamepadInput,(void))


Movement_obj::Movement_obj()
{
}

bool Movement_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"gamePadMove") ) { outValue = gamePadMove_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyboardMove") ) { outValue = keyboardMove_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamepadInput") ) { outValue = updateGamepadInput_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Movement_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Movement_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Movement_obj::__mClass;

static ::String Movement_obj_sStaticFields[] = {
	HX_("keyboardMove",58,ab,dc,e0),
	HX_("gamePadMove",32,7c,04,a6),
	HX_("updateGamepadInput",52,a7,fb,ed),
	::String(null())
};

void Movement_obj::__register()
{
	Movement_obj _hx_dummy;
	Movement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("player.Movement",fc,3f,d3,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Movement_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Movement_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Movement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Movement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Movement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace player
