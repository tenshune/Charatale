#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_player_CameraFuncs
#include <player/CameraFuncs.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5f57e17be208798f_12_follow,"player.CameraFuncs","follow",0xeec78ea2,"player.CameraFuncs.follow","player/CameraFuncs.hx",12,0xf3d84b82)
namespace player{

void CameraFuncs_obj::__construct() { }

Dynamic CameraFuncs_obj::__CreateEmpty() { return new CameraFuncs_obj; }

void *CameraFuncs_obj::_hx_vtable = 0;

Dynamic CameraFuncs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraFuncs_obj > _hx_result = new CameraFuncs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraFuncs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c1c1229;
}

void CameraFuncs_obj::follow( ::flixel::FlxSprite player,Float boundX,Float boundY,Float boundX2,Float boundY2){
            	HX_GC_STACKFRAME(&_hx_pos_5f57e17be208798f_12_follow)
HXLINE(  13)		 ::flixel::FlxCamera camera =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,0,0,null(),null(),null());
HXLINE(  14)		camera->bgColor = 0;
HXLINE(  15)		camera->setScrollBoundsRect(boundX,boundY,boundX2,boundY2,null());
HXLINE(  17)		::flixel::FlxG_obj::cameras->reset(camera);
HXLINE(  18)		camera->target = player;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CameraFuncs_obj,follow,(void))


CameraFuncs_obj::CameraFuncs_obj()
{
}

bool CameraFuncs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"follow") ) { outValue = follow_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CameraFuncs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CameraFuncs_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CameraFuncs_obj::__mClass;

static ::String CameraFuncs_obj_sStaticFields[] = {
	HX_("follow",71,91,96,f9),
	::String(null())
};

void CameraFuncs_obj::__register()
{
	CameraFuncs_obj _hx_dummy;
	CameraFuncs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("player.CameraFuncs",1d,27,44,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CameraFuncs_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CameraFuncs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CameraFuncs_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraFuncs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraFuncs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace player
