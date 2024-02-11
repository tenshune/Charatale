#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_7_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",7,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_10_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",10,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_22_updateGamepadInput,"PlayState","updateGamepadInput",0xc3a075c3,"PlayState.updateGamepadInput","PlayState.hx",22,0xb30d7781)

void PlayState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_10_update)
HXLINE(  11)		this->super::update(elapsed);
HXLINE(  14)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE(  15)		if (::hx::IsNotNull( gamepad )) {
HXLINE(  17)			this->updateGamepadInput(gamepad);
            		}
            	}


void PlayState_obj::updateGamepadInput( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_22_updateGamepadInput)
HXLINE(  23)		 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->pressed;
HXDLIN(  23)		int id = 0;
HXDLIN(  23)		 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN(  23)		int Status = _this->status;
HXDLIN(  23)		bool _hx_tmp;
HXDLIN(  23)		switch((int)(id)){
            			case (int)-2: {
HXLINE(  23)				_hx_tmp = _this1->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXLINE(  23)				_hx_tmp = !(_this1->anyButton(Status));
            			}
            			break;
            			default:{
HXLINE(  23)				int RawID = _this1->mapping->getRawID(id);
HXDLIN(  23)				 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  23)				if (::hx::IsNotNull( button )) {
HXLINE(  23)					_hx_tmp = button->hasState(Status);
            				}
            				else {
HXLINE(  23)					_hx_tmp = false;
            				}
            			}
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			::haxe::Log_obj::trace(HX_("The bottom face button of the controller is pressed.",e5,7f,97,03),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),25,HX_("PlayState",5d,83,c2,46),HX_("updateGamepadInput",52,a7,fb,ed)));
            		}
HXLINE(  28)		 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this2 = gamepad->analog->justMoved;
HXDLIN(  28)		 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this2->gamepad->mapping->getAnalogStick(19);
HXDLIN(  28)		bool _hx_tmp1;
HXDLIN(  28)		if (::hx::IsNull( stick )) {
HXLINE(  28)			_hx_tmp1 = false;
            		}
            		else {
HXLINE(  28)			 ::flixel::input::gamepad::FlxGamepadButton button = _this2->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  28)			if (::hx::IsNotNull( button )) {
HXLINE(  28)				_hx_tmp1 = button->hasState(_this2->status);
            			}
            			else {
HXLINE(  28)				_hx_tmp1 = false;
            			}
            		}
HXDLIN(  28)		if (_hx_tmp1) {
HXLINE(  30)			::haxe::Log_obj::trace(HX_("The x axis of the left analog stick of the controller has been moved.",26,1e,de,ec),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),30,HX_("PlayState",5d,83,c2,46),HX_("updateGamepadInput",52,a7,fb,ed)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,updateGamepadInput,(void))


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new() {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamepadInput") ) { return ::hx::Val( updateGamepadInput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("updateGamepadInput",52,a7,fb,ed),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

