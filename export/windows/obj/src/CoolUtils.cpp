#include <hxcpp.h>

#ifndef INCLUDED_CoolUtils
#include <CoolUtils.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2cf7cc488f54d770_9_overlapText,"CoolUtils","overlapText",0xb425f0ee,"CoolUtils.overlapText","CoolUtils.hx",9,0xc00c8136)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf7cc488f54d770_20_overlapSprite,"CoolUtils","overlapSprite",0x69445286,"CoolUtils.overlapSprite","CoolUtils.hx",20,0xc00c8136)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf7cc488f54d770_41_animInit,"CoolUtils","animInit",0x25ed1067,"CoolUtils.animInit","CoolUtils.hx",41,0xc00c8136)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf7cc488f54d770_44_textAnimation,"CoolUtils","textAnimation",0x92eb6431,"CoolUtils.textAnimation","CoolUtils.hx",44,0xc00c8136)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf7cc488f54d770_60_collide,"CoolUtils","collide",0x431d7f98,"CoolUtils.collide","CoolUtils.hx",60,0xc00c8136)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf7cc488f54d770_38_boot,"CoolUtils","boot",0x3919ffd8,"CoolUtils.boot","CoolUtils.hx",38,0xc00c8136)

void CoolUtils_obj::__construct() { }

Dynamic CoolUtils_obj::__CreateEmpty() { return new CoolUtils_obj; }

void *CoolUtils_obj::_hx_vtable = 0;

Dynamic CoolUtils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtils_obj > _hx_result = new CoolUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39b6fbc8;
}

bool CoolUtils_obj::overlapText( ::flixel::text::FlxText objectToOverlap){
            	HX_STACKFRAME(&_hx_pos_2cf7cc488f54d770_9_overlapText)
HXLINE(  10)		int mouseX = ::flixel::FlxG_obj::mouse->x;
HXLINE(  11)		int mouseY = ::flixel::FlxG_obj::mouse->y;
HXLINE(  13)		bool _hx_tmp;
HXDLIN(  13)		bool _hx_tmp1;
HXDLIN(  13)		if ((mouseX > objectToOverlap->x)) {
HXLINE(  14)			Float objectToOverlap1 = objectToOverlap->x;
HXLINE(  13)			_hx_tmp1 = (mouseX < (objectToOverlap1 + objectToOverlap->get_width()));
            		}
            		else {
HXLINE(  13)			_hx_tmp1 = false;
            		}
HXDLIN(  13)		if (_hx_tmp1) {
HXLINE(  13)			_hx_tmp = (mouseY > objectToOverlap->y);
            		}
            		else {
HXLINE(  13)			_hx_tmp = false;
            		}
HXDLIN(  13)		if (_hx_tmp) {
HXLINE(  16)			Float objectToOverlap1 = objectToOverlap->y;
HXDLIN(  16)			return (mouseY < (objectToOverlap1 + objectToOverlap->get_height()));
            		}
            		else {
HXLINE(  13)			return false;
            		}
HXDLIN(  13)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtils_obj,overlapText,return )

bool CoolUtils_obj::overlapSprite( ::flixel::FlxSprite objectToOverlap, ::Dynamic scaleX, ::Dynamic scaleY){
            	HX_STACKFRAME(&_hx_pos_2cf7cc488f54d770_20_overlapSprite)
HXLINE(  21)		int mouseX = ::flixel::FlxG_obj::mouse->x;
HXLINE(  22)		int mouseY = ::flixel::FlxG_obj::mouse->y;
HXLINE(  24)		if (::hx::IsNull( scaleX )) {
HXLINE(  25)			scaleX = 1;
            		}
HXLINE(  27)		if (::hx::IsNull( scaleY )) {
HXLINE(  28)			scaleY = 1;
            		}
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		bool _hx_tmp1;
HXDLIN(  31)		if ((mouseX > objectToOverlap->x)) {
HXLINE(  32)			Float objectToOverlap1 = objectToOverlap->x;
HXLINE(  31)			_hx_tmp1 = (mouseX < (objectToOverlap1 + (objectToOverlap->get_width() * ( (Float)(scaleX) ))));
            		}
            		else {
HXLINE(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXLINE(  31)			_hx_tmp = (mouseY > objectToOverlap->y);
            		}
            		else {
HXLINE(  31)			_hx_tmp = false;
            		}
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  34)			Float objectToOverlap1 = objectToOverlap->y;
HXDLIN(  34)			return (mouseY < (objectToOverlap1 + (objectToOverlap->get_height() * ( (Float)(scaleY) ))));
            		}
            		else {
HXLINE(  31)			return false;
            		}
HXDLIN(  31)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CoolUtils_obj,overlapSprite,return )

int CoolUtils_obj::currentIndex;

Float CoolUtils_obj::timer;

void CoolUtils_obj::animInit(){
            	HX_STACKFRAME(&_hx_pos_2cf7cc488f54d770_41_animInit)
HXDLIN(  41)		::CoolUtils_obj::currentIndex = 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtils_obj,animInit,(void))

void CoolUtils_obj::textAnimation( ::flixel::text::FlxText text,::String textToAnimate,Float elapsed,::String __o_sound, ::Dynamic __o_interval){
            		::String sound = __o_sound;
            		if (::hx::IsNull(__o_sound)) sound = HX_("SND_TXT1",d7,cf,03,52);
            		 ::Dynamic interval = __o_interval;
            		if (::hx::IsNull(__o_interval)) interval = ((Float)0.05);
            	HX_STACKFRAME(&_hx_pos_2cf7cc488f54d770_44_textAnimation)
HXLINE(  45)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::CoolUtils >();
HXDLIN(  45)		::CoolUtils_obj::timer = (::CoolUtils_obj::timer + elapsed);
HXLINE(  48)		if ((::CoolUtils_obj::currentIndex < textToAnimate.length)) {
HXLINE(  50)			if (::hx::IsGreaterEq( ::CoolUtils_obj::timer,interval )) {
HXLINE(  52)				::String text1 = text->text;
HXDLIN(  52)				text->set_text((text1 + textToAnimate.charAt(::CoolUtils_obj::currentIndex)));
HXLINE(  53)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  53)				_hx_tmp->play(::Paths_obj::sound(sound),null(),null(),null(),null(),null());
HXLINE(  54)				::CoolUtils_obj::currentIndex++;
HXLINE(  55)				::CoolUtils_obj::timer = ( (Float)(0) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CoolUtils_obj,textAnimation,(void))

void CoolUtils_obj::collide( ::flixel::FlxSprite obj1, ::flixel::FlxSprite obj2, ::Dynamic __o_trigger, ::Dynamic callBack){
            		 ::Dynamic trigger = __o_trigger;
            		if (::hx::IsNull(__o_trigger)) trigger = false;
            	HX_STACKFRAME(&_hx_pos_2cf7cc488f54d770_60_collide)
HXLINE(  61)		Float o1xL = obj1->x;
HXLINE(  62)		Float o1yU = obj1->y;
HXLINE(  63)		Float obj11 = obj1->x;
HXDLIN(  63)		Float o1xR = (obj11 + obj1->get_width());
HXLINE(  64)		Float obj12 = obj1->y;
HXDLIN(  64)		Float o1yD = (obj12 + obj1->get_height());
HXLINE(  66)		Float o2xL = obj2->x;
HXLINE(  67)		Float o2yU = obj2->y;
HXLINE(  68)		Float obj21 = obj2->x;
HXDLIN(  68)		Float o2xR = (obj21 + obj2->get_width());
HXLINE(  69)		Float obj22 = obj2->y;
HXDLIN(  69)		Float o2yD = (obj22 + obj2->get_height());
HXLINE(  71)		if (!(( (bool)(trigger) ))) {
HXLINE(  72)			bool _hx_tmp;
HXDLIN(  72)			bool _hx_tmp1;
HXDLIN(  72)			bool _hx_tmp2;
HXDLIN(  72)			if ((o1xR > o2xL)) {
HXLINE(  72)				_hx_tmp2 = (o1yD < o2yD);
            			}
            			else {
HXLINE(  72)				_hx_tmp2 = false;
            			}
HXDLIN(  72)			if (_hx_tmp2) {
HXLINE(  72)				_hx_tmp1 = (o1xR < (o2xR + 5));
            			}
            			else {
HXLINE(  72)				_hx_tmp1 = false;
            			}
HXDLIN(  72)			if (_hx_tmp1) {
HXLINE(  72)				_hx_tmp = (o1yD > (o2yU + 5));
            			}
            			else {
HXLINE(  72)				_hx_tmp = false;
            			}
HXDLIN(  72)			if (_hx_tmp) {
HXLINE(  74)				obj1->set_x((o2xL - obj1->get_width()));
            			}
HXLINE(  76)			bool _hx_tmp3;
HXDLIN(  76)			bool _hx_tmp4;
HXDLIN(  76)			bool _hx_tmp5;
HXDLIN(  76)			if ((o1xL < o2xR)) {
HXLINE(  76)				_hx_tmp5 = (o1yD < o2yD);
            			}
            			else {
HXLINE(  76)				_hx_tmp5 = false;
            			}
HXDLIN(  76)			if (_hx_tmp5) {
HXLINE(  76)				_hx_tmp4 = (o1xR > (o2xL + 5));
            			}
            			else {
HXLINE(  76)				_hx_tmp4 = false;
            			}
HXDLIN(  76)			if (_hx_tmp4) {
HXLINE(  76)				_hx_tmp3 = (o1yD > (o2yU + 5));
            			}
            			else {
HXLINE(  76)				_hx_tmp3 = false;
            			}
HXDLIN(  76)			if (_hx_tmp3) {
HXLINE(  78)				obj1->set_x(o2xR);
            			}
HXLINE(  80)			bool _hx_tmp6;
HXDLIN(  80)			bool _hx_tmp7;
HXDLIN(  80)			bool _hx_tmp8;
HXDLIN(  80)			if ((o1yD > o2yU)) {
HXLINE(  80)				_hx_tmp8 = (o1xL < (o2xR - ( (Float)(5) )));
            			}
            			else {
HXLINE(  80)				_hx_tmp8 = false;
            			}
HXDLIN(  80)			if (_hx_tmp8) {
HXLINE(  80)				_hx_tmp7 = (o1xR > (o2xL + 5));
            			}
            			else {
HXLINE(  80)				_hx_tmp7 = false;
            			}
HXDLIN(  80)			if (_hx_tmp7) {
HXLINE(  80)				_hx_tmp6 = (o1yD < o2yD);
            			}
            			else {
HXLINE(  80)				_hx_tmp6 = false;
            			}
HXDLIN(  80)			if (_hx_tmp6) {
HXLINE(  82)				obj1->set_y((o2yU - obj1->get_height()));
            			}
HXLINE(  84)			bool _hx_tmp9;
HXDLIN(  84)			bool _hx_tmp10;
HXDLIN(  84)			bool _hx_tmp11;
HXDLIN(  84)			if ((o1yU < o2yD)) {
HXLINE(  84)				_hx_tmp11 = (o1xL < (o2xR - ( (Float)(5) )));
            			}
            			else {
HXLINE(  84)				_hx_tmp11 = false;
            			}
HXDLIN(  84)			if (_hx_tmp11) {
HXLINE(  84)				_hx_tmp10 = (o1xR > (o2xL + 5));
            			}
            			else {
HXLINE(  84)				_hx_tmp10 = false;
            			}
HXDLIN(  84)			if (_hx_tmp10) {
HXLINE(  84)				_hx_tmp9 = (o1yU > o2yU);
            			}
            			else {
HXLINE(  84)				_hx_tmp9 = false;
            			}
HXDLIN(  84)			if (_hx_tmp9) {
HXLINE(  86)				obj1->set_y(o2yD);
            			}
            		}
            		else {
HXLINE(  89)			bool _hx_tmp;
HXDLIN(  89)			bool _hx_tmp1;
HXDLIN(  89)			bool _hx_tmp2;
HXDLIN(  89)			if ((o1xR > o2xL)) {
HXLINE(  89)				_hx_tmp2 = (o1yD < o2yD);
            			}
            			else {
HXLINE(  89)				_hx_tmp2 = false;
            			}
HXDLIN(  89)			if (_hx_tmp2) {
HXLINE(  89)				_hx_tmp1 = (o1xR < (o2xR + 5));
            			}
            			else {
HXLINE(  89)				_hx_tmp1 = false;
            			}
HXDLIN(  89)			if (_hx_tmp1) {
HXLINE(  89)				_hx_tmp = (o1yD > (o2yU + 5));
            			}
            			else {
HXLINE(  89)				_hx_tmp = false;
            			}
HXDLIN(  89)			if (_hx_tmp) {
HXLINE(  91)				callBack();
            			}
HXLINE(  93)			bool _hx_tmp3;
HXDLIN(  93)			bool _hx_tmp4;
HXDLIN(  93)			bool _hx_tmp5;
HXDLIN(  93)			if ((o1xL < o2xR)) {
HXLINE(  93)				_hx_tmp5 = (o1yD < o2yD);
            			}
            			else {
HXLINE(  93)				_hx_tmp5 = false;
            			}
HXDLIN(  93)			if (_hx_tmp5) {
HXLINE(  93)				_hx_tmp4 = (o1xR > (o2xL + 5));
            			}
            			else {
HXLINE(  93)				_hx_tmp4 = false;
            			}
HXDLIN(  93)			if (_hx_tmp4) {
HXLINE(  93)				_hx_tmp3 = (o1yD > (o2yU + 5));
            			}
            			else {
HXLINE(  93)				_hx_tmp3 = false;
            			}
HXDLIN(  93)			if (_hx_tmp3) {
HXLINE(  95)				callBack();
            			}
HXLINE(  97)			bool _hx_tmp6;
HXDLIN(  97)			bool _hx_tmp7;
HXDLIN(  97)			bool _hx_tmp8;
HXDLIN(  97)			if ((o1yD > o2yU)) {
HXLINE(  97)				_hx_tmp8 = (o1xL < (o2xR - ( (Float)(5) )));
            			}
            			else {
HXLINE(  97)				_hx_tmp8 = false;
            			}
HXDLIN(  97)			if (_hx_tmp8) {
HXLINE(  97)				_hx_tmp7 = (o1xR > (o2xL + 5));
            			}
            			else {
HXLINE(  97)				_hx_tmp7 = false;
            			}
HXDLIN(  97)			if (_hx_tmp7) {
HXLINE(  97)				_hx_tmp6 = (o1yD < o2yD);
            			}
            			else {
HXLINE(  97)				_hx_tmp6 = false;
            			}
HXDLIN(  97)			if (_hx_tmp6) {
HXLINE(  99)				callBack();
            			}
HXLINE( 101)			bool _hx_tmp9;
HXDLIN( 101)			bool _hx_tmp10;
HXDLIN( 101)			bool _hx_tmp11;
HXDLIN( 101)			if ((o1yU < o2yD)) {
HXLINE( 101)				_hx_tmp11 = (o1xL < (o2xR - ( (Float)(5) )));
            			}
            			else {
HXLINE( 101)				_hx_tmp11 = false;
            			}
HXDLIN( 101)			if (_hx_tmp11) {
HXLINE( 101)				_hx_tmp10 = (o1xR > (o2xL + 5));
            			}
            			else {
HXLINE( 101)				_hx_tmp10 = false;
            			}
HXDLIN( 101)			if (_hx_tmp10) {
HXLINE( 101)				_hx_tmp9 = (o1yU > o2yU);
            			}
            			else {
HXLINE( 101)				_hx_tmp9 = false;
            			}
HXDLIN( 101)			if (_hx_tmp9) {
HXLINE( 103)				callBack();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CoolUtils_obj,collide,(void))


CoolUtils_obj::CoolUtils_obj()
{
}

bool CoolUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = ( timer ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { outValue = collide_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animInit") ) { outValue = animInit_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"overlapText") ) { outValue = overlapText_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentIndex") ) { outValue = ( currentIndex ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapSprite") ) { outValue = overlapSprite_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"textAnimation") ) { outValue = textAnimation_dyn(); return true; }
	}
	return false;
}

bool CoolUtils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentIndex") ) { currentIndex=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtils_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CoolUtils_obj::currentIndex,HX_("currentIndex",19,80,20,05)},
	{::hx::fsFloat,(void *) &CoolUtils_obj::timer,HX_("timer",c5,bf,35,10)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtils_obj::currentIndex,"currentIndex");
	HX_MARK_MEMBER_NAME(CoolUtils_obj::timer,"timer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtils_obj::currentIndex,"currentIndex");
	HX_VISIT_MEMBER_NAME(CoolUtils_obj::timer,"timer");
};

#endif

::hx::Class CoolUtils_obj::__mClass;

static ::String CoolUtils_obj_sStaticFields[] = {
	HX_("overlapText",d4,0b,d9,3c),
	HX_("overlapSprite",ec,72,20,d9),
	HX_("currentIndex",19,80,20,05),
	HX_("timer",c5,bf,35,10),
	HX_("animInit",c1,c9,10,79),
	HX_("textAnimation",97,84,c7,02),
	HX_("collide",7e,af,63,ed),
	::String(null())
};

void CoolUtils_obj::__register()
{
	CoolUtils_obj _hx_dummy;
	CoolUtils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtils",88,86,73,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtils_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtils_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtils_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2cf7cc488f54d770_38_boot)
HXDLIN(  38)		timer = ((Float)0);
            	}
}

