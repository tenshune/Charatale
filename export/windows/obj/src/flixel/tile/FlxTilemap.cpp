#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTypedTilemap
#include <flixel/tile/FlxTypedTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1146cbfc6764fb25_130_new,"flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",130,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_134_initTileObjects,"flixel.tile.FlxTilemap","initTileObjects",0xb20b6ad2,"flixel.tile.FlxTilemap.initTileObjects","flixel/tile/FlxTilemap.hx",134,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_120_get_defaultFramePadding,"flixel.tile.FlxTilemap","get_defaultFramePadding",0x62514ad8,"flixel.tile.FlxTilemap.get_defaultFramePadding","flixel/tile/FlxTilemap.hx",120,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_125_set_defaultFramePadding,"flixel.tile.FlxTilemap","set_defaultFramePadding",0x64b2b3e4,"flixel.tile.FlxTilemap.set_defaultFramePadding","flixel/tile/FlxTilemap.hx",125,0x448feb74)
namespace flixel{
namespace tile{

void FlxTilemap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_130_new)
HXDLIN( 130)		super::__construct();
            	}

Dynamic FlxTilemap_obj::__CreateEmpty() { return new FlxTilemap_obj; }

void *FlxTilemap_obj::_hx_vtable = 0;

Dynamic FlxTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemap_obj > _hx_result = new FlxTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x3d6253b5) {
			if (inClassId<=(int)0x1dc5d3c6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1dc5d3c6;
			} else {
				return inClassId==(int)0x3d6253b5;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7fac4e48;
	}
}

void FlxTilemap_obj::initTileObjects(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_134_initTileObjects)
HXLINE( 135)		if (::hx::IsNull( this->frames )) {
HXLINE( 136)			return;
            		}
HXLINE( 138)		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
HXLINE( 140)		this->_tileObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 142)		int length = this->frames->frames->length;
HXLINE( 143)		length = (length + this->_startingIndex);
HXLINE( 145)		{
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			int _g1 = length;
HXDLIN( 145)			while((_g < _g1)){
HXLINE( 145)				_g = (_g + 1);
HXDLIN( 145)				int i = (_g - 1);
HXLINE( 146)				int _hx_tmp;
HXDLIN( 146)				if ((i >= this->_collideIndex)) {
HXLINE( 146)					_hx_tmp = this->allowCollisions;
            				}
            				else {
HXLINE( 146)					_hx_tmp = 0;
            				}
HXDLIN( 146)				this->_tileObjects->set(i, ::flixel::tile::FlxTile_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),i,( (Float)(this->tileWidth) ),( (Float)(this->tileHeight) ),(i >= this->_drawIndex),_hx_tmp));
            			}
            		}
HXLINE( 150)		this->updateDebugTileBoundingBoxSolid();
HXLINE( 151)		this->updateDebugTileBoundingBoxNotSolid();
HXLINE( 152)		this->updateDebugTileBoundingBoxPartial();
            	}


int FlxTilemap_obj::get_defaultFramePadding(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_120_get_defaultFramePadding)
HXDLIN( 120)		return ::flixel::tile::FlxTypedTilemap_obj::defaultFramePadding;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,get_defaultFramePadding,return )

int FlxTilemap_obj::set_defaultFramePadding(int value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_125_set_defaultFramePadding)
HXDLIN( 125)		return (::flixel::tile::FlxTypedTilemap_obj::defaultFramePadding = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_defaultFramePadding,return )


::hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new() {
	::hx::ObjectPtr< FlxTilemap_obj > __this = new FlxTilemap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTilemap_obj *__this = (FlxTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemap_obj), true, "flixel.tile.FlxTilemap"));
	*(void **)__this = FlxTilemap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTilemap_obj::FlxTilemap_obj()
{
}

::hx::Val FlxTilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return ::hx::Val( initTileObjects_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultFramePadding") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_defaultFramePadding() ); return true; } }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_defaultFramePadding") ) { outValue = get_defaultFramePadding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_defaultFramePadding") ) { outValue = set_defaultFramePadding_dyn(); return true; }
	}
	return false;
}

bool FlxTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultFramePadding") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultFramePadding(ioValue.Cast< int >()) ); }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxTilemap_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemap_obj_sMemberFields[] = {
	HX_("initTileObjects",16,be,45,2e),
	::String(null()) };

::hx::Class FlxTilemap_obj::__mClass;

static ::String FlxTilemap_obj_sStaticFields[] = {
	HX_("get_defaultFramePadding",1c,82,b6,f5),
	HX_("set_defaultFramePadding",28,eb,17,f8),
	::String(null())
};

void FlxTilemap_obj::__register()
{
	FlxTilemap_obj _hx_dummy;
	FlxTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTilemap",2a,d5,63,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTilemap_obj::__SetStatic;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
