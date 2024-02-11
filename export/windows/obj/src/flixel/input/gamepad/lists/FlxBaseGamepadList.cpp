#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9fe46732284793f_13_new,"flixel.input.gamepad.lists.FlxBaseGamepadList","new",0x1c38506a,"flixel.input.gamepad.lists.FlxBaseGamepadList.new","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",13,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_20_check,"flixel.input.gamepad.lists.FlxBaseGamepadList","check",0x83c2af52,"flixel.input.gamepad.lists.FlxBaseGamepadList.check","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",20,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_25_checkRaw,"flixel.input.gamepad.lists.FlxBaseGamepadList","checkRaw",0xa446bdb6,"flixel.input.gamepad.lists.FlxBaseGamepadList.checkRaw","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",25,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_31_get_ANY,"flixel.input.gamepad.lists.FlxBaseGamepadList","get_ANY",0x10ccac6d,"flixel.input.gamepad.lists.FlxBaseGamepadList.get_ANY","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",31,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_46_get_ALL,"flixel.input.gamepad.lists.FlxBaseGamepadList","get_ALL",0x10ccaaa2,"flixel.input.gamepad.lists.FlxBaseGamepadList.get_ALL","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",46,0x249eb6c2)
HX_LOCAL_STACK_FRAME(_hx_pos_b9fe46732284793f_61_get_NONE,"flixel.input.gamepad.lists.FlxBaseGamepadList","get_NONE",0xaae2b1f7,"flixel.input.gamepad.lists.FlxBaseGamepadList.get_NONE","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",61,0x249eb6c2)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxBaseGamepadList_obj::__construct(int status, ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_13_new)
HXLINE(  14)		this->status = status;
HXLINE(  15)		this->gamepad = gamepad;
            	}

Dynamic FlxBaseGamepadList_obj::__CreateEmpty() { return new FlxBaseGamepadList_obj; }

void *FlxBaseGamepadList_obj::_hx_vtable = 0;

Dynamic FlxBaseGamepadList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseGamepadList_obj > _hx_result = new FlxBaseGamepadList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBaseGamepadList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a74ca3a;
}

bool FlxBaseGamepadList_obj::check(int id){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_20_check)
HXDLIN(  20)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  20)		int Status = this->status;
HXDLIN(  20)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  20)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  20)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  20)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  20)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  20)				if (::hx::IsNotNull( button )) {
HXDLIN(  20)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  20)					return false;
            				}
            			}
            		}
HXDLIN(  20)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseGamepadList_obj,check,return )

bool FlxBaseGamepadList_obj::checkRaw(int id){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_25_checkRaw)
HXDLIN(  25)		 ::flixel::input::gamepad::FlxGamepadButton button = this->gamepad->buttons->__get(id).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  25)		if (::hx::IsNotNull( button )) {
HXDLIN(  25)			return button->hasState(this->status);
            		}
            		else {
HXDLIN(  25)			return false;
            		}
HXDLIN(  25)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseGamepadList_obj,checkRaw,return )

bool FlxBaseGamepadList_obj::get_ANY(){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_31_get_ANY)
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			::Array< ::Dynamic> _g1 = this->gamepad->buttons;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  34)				bool _hx_tmp;
HXDLIN(  34)				if (::hx::IsNotNull( button )) {
HXLINE(  34)					 ::flixel::input::gamepad::FlxGamepadButton button1 = this->gamepad->buttons->__get(( (int)(button->ID) )).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  34)					if (::hx::IsNotNull( button1 )) {
HXLINE(  34)						_hx_tmp = button1->hasState(this->status);
            					}
            					else {
HXLINE(  34)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(  34)					_hx_tmp = false;
            				}
HXDLIN(  34)				if (_hx_tmp) {
HXLINE(  36)					return true;
            				}
            			}
            		}
HXLINE(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseGamepadList_obj,get_ANY,return )

bool FlxBaseGamepadList_obj::get_ALL(){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_46_get_ALL)
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			::Array< ::Dynamic> _g1 = this->gamepad->buttons;
HXDLIN(  47)			while((_g < _g1->length)){
HXLINE(  47)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  47)				_g = (_g + 1);
HXLINE(  49)				bool _hx_tmp;
HXDLIN(  49)				if (::hx::IsNotNull( button )) {
HXLINE(  49)					 ::flixel::input::gamepad::FlxGamepadButton button1 = this->gamepad->buttons->__get(( (int)(button->ID) )).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  49)					bool _hx_tmp1;
HXDLIN(  49)					if (::hx::IsNotNull( button1 )) {
HXLINE(  49)						_hx_tmp1 = button1->hasState(this->status);
            					}
            					else {
HXLINE(  49)						_hx_tmp1 = false;
            					}
HXDLIN(  49)					_hx_tmp = !(_hx_tmp1);
            				}
            				else {
HXLINE(  49)					_hx_tmp = false;
            				}
HXDLIN(  49)				if (_hx_tmp) {
HXLINE(  51)					return false;
            				}
            			}
            		}
HXLINE(  55)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseGamepadList_obj,get_ALL,return )

bool FlxBaseGamepadList_obj::get_NONE(){
            	HX_STACKFRAME(&_hx_pos_b9fe46732284793f_61_get_NONE)
HXLINE(  62)		{
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			::Array< ::Dynamic> _g1 = this->gamepad->buttons;
HXDLIN(  62)			while((_g < _g1->length)){
HXLINE(  62)				 ::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  62)				_g = (_g + 1);
HXLINE(  64)				bool _hx_tmp;
HXDLIN(  64)				if (::hx::IsNotNull( button )) {
HXLINE(  64)					 ::flixel::input::gamepad::FlxGamepadButton button1 = this->gamepad->buttons->__get(( (int)(button->ID) )).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  64)					if (::hx::IsNotNull( button1 )) {
HXLINE(  64)						_hx_tmp = button1->hasState(this->status);
            					}
            					else {
HXLINE(  64)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(  64)					_hx_tmp = false;
            				}
HXDLIN(  64)				if (_hx_tmp) {
HXLINE(  66)					return false;
            				}
            			}
            		}
HXLINE(  70)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseGamepadList_obj,get_NONE,return )


::hx::ObjectPtr< FlxBaseGamepadList_obj > FlxBaseGamepadList_obj::__new(int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	::hx::ObjectPtr< FlxBaseGamepadList_obj > __this = new FlxBaseGamepadList_obj();
	__this->__construct(status,gamepad);
	return __this;
}

::hx::ObjectPtr< FlxBaseGamepadList_obj > FlxBaseGamepadList_obj::__alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxBaseGamepadList_obj *__this = (FlxBaseGamepadList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseGamepadList_obj), true, "flixel.input.gamepad.lists.FlxBaseGamepadList"));
	*(void **)__this = FlxBaseGamepadList_obj::_hx_vtable;
	__this->__construct(status,gamepad);
	return __this;
}

FlxBaseGamepadList_obj::FlxBaseGamepadList_obj()
{
}

void FlxBaseGamepadList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseGamepadList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxBaseGamepadList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

::hx::Val FlxBaseGamepadList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ANY() ); }
		if (HX_FIELD_EQ(inName,"ALL") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ALL() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NONE() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return ::hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return ::hx::Val( get_ANY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ALL") ) { return ::hx::Val( get_ALL_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkRaw") ) { return ::hx::Val( checkRaw_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NONE") ) { return ::hx::Val( get_NONE_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBaseGamepadList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseGamepadList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("gamepad",a1,e0,85,89));
	outFields->push(HX_("ANY",cc,96,31,00));
	outFields->push(HX_("ALL",01,95,31,00));
	outFields->push(HX_("NONE",b8,da,ca,33));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseGamepadList_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxBaseGamepadList_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxBaseGamepadList_obj,gamepad),HX_("gamepad",a1,e0,85,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBaseGamepadList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseGamepadList_obj_sMemberFields[] = {
	HX_("status",32,e7,fb,05),
	HX_("gamepad",a1,e0,85,89),
	HX_("check",c8,98,b6,45),
	HX_("checkRaw",00,a2,e9,ac),
	HX_("get_ANY",63,5f,a6,26),
	HX_("get_ALL",98,5d,a6,26),
	HX_("get_NONE",41,96,85,b3),
	::String(null()) };

::hx::Class FlxBaseGamepadList_obj::__mClass;

void FlxBaseGamepadList_obj::__register()
{
	FlxBaseGamepadList_obj _hx_dummy;
	FlxBaseGamepadList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.lists.FlxBaseGamepadList",78,93,a1,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseGamepadList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseGamepadList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseGamepadList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseGamepadList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
