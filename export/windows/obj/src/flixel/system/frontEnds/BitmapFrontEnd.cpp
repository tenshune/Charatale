#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_20_new,"flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",20,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_49_onAssetsReload,"flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",49,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_65_onContext,"flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",65,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_82_dumpCache,"flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",82,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_99_undumpCache,"flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",99,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_118_checkCache,"flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",118,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_133_create,"flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",133,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_148_add,"flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",148,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_169_addGraphic,"flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",169,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_181_get,"flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",181,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_191_findKeyForBitmap,"flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",191,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_209_getKeyForClass,"flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",209,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_221_generateKey,"flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",221,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_239_getUniqueKey,"flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",239,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_270_getKeyWithSpacesAndBorders,"flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacesAndBorders",0x04327ebf,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacesAndBorders","flixel/system/frontEnds/BitmapFrontEnd.hx",270,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_294_remove,"flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",294,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_307_removeByKey,"flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",307,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_319_removeIfNoUse,"flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",319,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_328_clearCache,"flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",328,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_348_removeKey,"flixel.system.frontEnds.BitmapFrontEnd","removeKey",0xe84d3108,"flixel.system.frontEnds.BitmapFrontEnd.removeKey","flixel/system/frontEnds/BitmapFrontEnd.hx",348,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_359_reset,"flixel.system.frontEnds.BitmapFrontEnd","reset",0xd15ce89c,"flixel.system.frontEnds.BitmapFrontEnd.reset","flixel/system/frontEnds/BitmapFrontEnd.hx",359,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_382_clearUnused,"flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",382,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_395_get_maxTextureSize,"flixel.system.frontEnds.BitmapFrontEnd","get_maxTextureSize",0x8d42ecd4,"flixel.system.frontEnds.BitmapFrontEnd.get_maxTextureSize","flixel/system/frontEnds/BitmapFrontEnd.hx",395,0x91a05ae2)
HX_LOCAL_STACK_FRAME(_hx_pos_c7913b0c5b2fbcc7_400_get_whitePixel,"flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",400,0x91a05ae2)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void BitmapFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_20_new)
HXLINE(  40)		this->_lastUniqueKeyIndex = 0;
HXLINE(  44)		this->reset();
            	}

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return new BitmapFrontEnd_obj; }

void *BitmapFrontEnd_obj::_hx_vtable = 0;

Dynamic BitmapFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapFrontEnd_obj > _hx_result = new BitmapFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3df39a77;
}

void BitmapFrontEnd_obj::onAssetsReload( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_49_onAssetsReload)
HXDLIN(  49)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  49)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  49)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  51)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  52)			bool _hx_tmp;
HXDLIN(  52)			if (::hx::IsNotNull( obj )) {
HXLINE(  52)				if (::hx::IsNull( obj->assetsClass )) {
HXLINE(  52)					_hx_tmp = ::hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  52)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  52)				_hx_tmp = false;
            			}
HXDLIN(  52)			if (_hx_tmp) {
HXLINE(  54)				obj->onAssetsReload();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

void BitmapFrontEnd_obj::onContext(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_65_onContext)
HXDLIN(  65)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  65)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  65)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  67)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  68)			bool _hx_tmp;
HXDLIN(  68)			if (::hx::IsNotNull( obj )) {
HXLINE(  68)				_hx_tmp = obj->isDumped;
            			}
            			else {
HXLINE(  68)				_hx_tmp = false;
            			}
HXDLIN(  68)			if (_hx_tmp) {
HXLINE(  70)				obj->onContext();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

void BitmapFrontEnd_obj::dumpCache(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_82_dumpCache)
HXDLIN(  82)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  82)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  82)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  84)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			if (::hx::IsNotNull( obj )) {
HXLINE(  85)				if (::hx::IsNull( obj->assetsClass )) {
HXLINE(  85)					_hx_tmp = ::hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  85)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  87)				obj->dump();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

void BitmapFrontEnd_obj::undumpCache(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_99_undumpCache)
HXDLIN(  99)		 ::Dynamic key = this->_cache->keys();
HXDLIN(  99)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  99)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 101)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 102)			bool _hx_tmp;
HXDLIN( 102)			if (::hx::IsNotNull( obj )) {
HXLINE( 102)				_hx_tmp = obj->isDumped;
            			}
            			else {
HXLINE( 102)				_hx_tmp = false;
            			}
HXDLIN( 102)			if (_hx_tmp) {
HXLINE( 104)				obj->undump();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

bool BitmapFrontEnd_obj::checkCache(::String Key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_118_checkCache)
HXDLIN( 118)		return ::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(Key)) ) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create(int Width,int Height,int Color,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_133_create)
HXDLIN( 133)		return ::flixel::graphics::FlxGraphic_obj::fromRectangle(Width,Height,Color,Unique,Key);
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( ::Dynamic Graphic,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_148_add)
HXLINE( 149)		if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::flixel::graphics::FlxGraphic >())) {
HXLINE( 151)			return ::flixel::graphics::FlxGraphic_obj::fromGraphic(( ( ::flixel::graphics::FlxGraphic)(Graphic) ),Unique,Key);
            		}
            		else {
HXLINE( 153)			if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 155)				return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(( ( ::openfl::display::BitmapData)(Graphic) ),Unique,Key,null());
            			}
            		}
HXLINE( 159)		return ::flixel::graphics::FlxGraphic_obj::fromAssetKey(::Std_obj::string(Graphic),Unique,Key,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_169_addGraphic)
HXLINE( 170)		this->_cache->set(graphic->key,graphic);
HXLINE( 171)		return graphic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_181_get)
HXDLIN( 181)		return ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::display::BitmapData bmd){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_191_findKeyForBitmap)
HXLINE( 192)		{
HXLINE( 192)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 192)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 192)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 194)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 195)				bool _hx_tmp;
HXDLIN( 195)				if (::hx::IsNotNull( obj )) {
HXLINE( 195)					_hx_tmp = ::hx::IsInstanceEq( obj->bitmap,bmd );
            				}
            				else {
HXLINE( 195)					_hx_tmp = false;
            				}
HXDLIN( 195)				if (_hx_tmp) {
HXLINE( 196)					return key1;
            				}
            			}
            		}
HXLINE( 198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass(::hx::Class source){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_209_getKeyForClass)
HXDLIN( 209)		return ::Type_obj::getClassName(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey(::String systemKey,::String userKey,::hx::Null< bool >  __o_unique){
            		bool unique = __o_unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_221_generateKey)
HXLINE( 222)		::String key = userKey;
HXLINE( 223)		if (::hx::IsNull( key )) {
HXLINE( 224)			key = systemKey;
            		}
HXLINE( 226)		bool _hx_tmp;
HXDLIN( 226)		if (!(unique)) {
HXLINE( 226)			_hx_tmp = ::hx::IsNull( key );
            		}
            		else {
HXLINE( 226)			_hx_tmp = true;
            		}
HXDLIN( 226)		if (_hx_tmp) {
HXLINE( 227)			key = this->getUniqueKey(key);
            		}
HXLINE( 229)		return key;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey(::String baseKey){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_239_getUniqueKey)
HXLINE( 240)		if (::hx::IsNull( baseKey )) {
HXLINE( 241)			baseKey = HX_("pixels",2d,ef,a9,8c);
            		}
HXLINE( 243)		if (::hx::IsNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(baseKey)) ) )) {
HXLINE( 244)			return baseKey;
            		}
HXLINE( 246)		int i = this->_lastUniqueKeyIndex;
HXLINE( 247)		::String uniqueKey;
HXLINE( 248)		while(true){
HXLINE( 250)			i = (i + 1);
HXLINE( 251)			uniqueKey = (baseKey + i);
HXLINE( 248)			if (!(::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(uniqueKey)) ) ))) {
HXLINE( 248)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
HXLINE( 255)		this->_lastUniqueKeyIndex = i;
HXLINE( 256)		return uniqueKey;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacesAndBorders(::String baseKey, ::flixel::math::FlxBasePoint frameSize, ::flixel::math::FlxBasePoint frameSpacing, ::flixel::math::FlxBasePoint frameBorder, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_270_getKeyWithSpacesAndBorders)
HXLINE( 271)		::String result = baseKey;
HXLINE( 273)		if (::hx::IsNotNull( region )) {
HXLINE( 274)			result = (result + (((((((HX_("_Region:",27,96,a5,81) + region->x) + HX_("_",5f,00,00,00)) + region->y) + HX_("_",5f,00,00,00)) + region->width) + HX_("_",5f,00,00,00)) + region->height));
            		}
HXLINE( 276)		if (::hx::IsNotNull( frameSize )) {
HXLINE( 277)			result = (result + (((HX_("_FrameSize:",2b,0e,3a,29) + frameSize->x) + HX_("_",5f,00,00,00)) + frameSize->y));
            		}
HXLINE( 279)		if (::hx::IsNotNull( frameSpacing )) {
HXLINE( 280)			result = (result + (((HX_("_Spaces:",0e,b0,c1,98) + frameSpacing->x) + HX_("_",5f,00,00,00)) + frameSpacing->y));
            		}
HXLINE( 282)		if (::hx::IsNotNull( frameBorder )) {
HXLINE( 283)			result = (result + (((HX_("_Border:",2f,83,f2,39) + frameBorder->x) + HX_("_",5f,00,00,00)) + frameBorder->y));
            		}
HXLINE( 285)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,getKeyWithSpacesAndBorders,return )

void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_294_remove)
HXDLIN( 294)		if (::hx::IsNotNull( graphic )) {
HXLINE( 296)			{
HXLINE( 296)				::String key = graphic->key;
HXDLIN( 296)				if (::hx::IsNotNull( key )) {
HXLINE( 296)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXDLIN( 296)					this->_cache->remove(key);
            				}
            			}
HXLINE( 297)			graphic->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

void BitmapFrontEnd_obj::removeByKey(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_307_removeByKey)
HXDLIN( 307)		if (::hx::IsNotNull( key )) {
HXLINE( 309)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key)) );
HXLINE( 310)			if (::hx::IsNotNull( key )) {
HXLINE( 310)				::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXDLIN( 310)				this->_cache->remove(key);
            			}
HXLINE( 312)			if (::hx::IsNotNull( obj )) {
HXLINE( 313)				obj->destroy();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_319_removeIfNoUse)
HXDLIN( 319)		bool _hx_tmp;
HXDLIN( 319)		bool _hx_tmp1;
HXDLIN( 319)		if (::hx::IsNotNull( graphic )) {
HXDLIN( 319)			_hx_tmp1 = (graphic->useCount == 0);
            		}
            		else {
HXDLIN( 319)			_hx_tmp1 = false;
            		}
HXDLIN( 319)		if (_hx_tmp1) {
HXDLIN( 319)			_hx_tmp = !(graphic->persist);
            		}
            		else {
HXDLIN( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 320)			this->remove(graphic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

void BitmapFrontEnd_obj::clearCache(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_328_clearCache)
HXLINE( 329)		if (::hx::IsNull( this->_cache )) {
HXLINE( 331)			this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 332)			return;
            		}
HXLINE( 335)		{
HXLINE( 335)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 335)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 335)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 337)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 338)				bool _hx_tmp;
HXDLIN( 338)				bool _hx_tmp1;
HXDLIN( 338)				if (::hx::IsNotNull( obj )) {
HXLINE( 338)					_hx_tmp1 = !(obj->persist);
            				}
            				else {
HXLINE( 338)					_hx_tmp1 = false;
            				}
HXDLIN( 338)				if (_hx_tmp1) {
HXLINE( 338)					_hx_tmp = (obj->useCount <= 0);
            				}
            				else {
HXLINE( 338)					_hx_tmp = false;
            				}
HXDLIN( 338)				if (_hx_tmp) {
HXLINE( 340)					if (::hx::IsNotNull( key1 )) {
HXLINE( 340)						::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXDLIN( 340)						this->_cache->remove(key1);
            					}
HXLINE( 341)					obj->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

void BitmapFrontEnd_obj::removeKey(::String key){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_348_removeKey)
HXDLIN( 348)		if (::hx::IsNotNull( key )) {
HXLINE( 350)			::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key);
HXLINE( 351)			this->_cache->remove(key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeKey,(void))

void BitmapFrontEnd_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_359_reset)
HXLINE( 360)		if (::hx::IsNull( this->_cache )) {
HXLINE( 362)			this->_cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 363)			return;
            		}
HXLINE( 366)		{
HXLINE( 366)			 ::Dynamic key = this->_cache->keys();
HXDLIN( 366)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 366)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 368)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 369)				if (::hx::IsNotNull( key1 )) {
HXLINE( 369)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXDLIN( 369)					this->_cache->remove(key1);
            				}
HXLINE( 371)				if (::hx::IsNotNull( obj )) {
HXLINE( 372)					obj->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,reset,(void))

void BitmapFrontEnd_obj::clearUnused(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_382_clearUnused)
HXDLIN( 382)		 ::Dynamic key = this->_cache->keys();
HXDLIN( 382)		while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 382)			::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 384)			 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(this->_cache->get(key1)) );
HXLINE( 385)			bool _hx_tmp;
HXDLIN( 385)			bool _hx_tmp1;
HXDLIN( 385)			bool _hx_tmp2;
HXDLIN( 385)			if (::hx::IsNotNull( obj )) {
HXLINE( 385)				_hx_tmp2 = (obj->useCount <= 0);
            			}
            			else {
HXLINE( 385)				_hx_tmp2 = false;
            			}
HXDLIN( 385)			if (_hx_tmp2) {
HXLINE( 385)				_hx_tmp1 = !(obj->persist);
            			}
            			else {
HXLINE( 385)				_hx_tmp1 = false;
            			}
HXDLIN( 385)			if (_hx_tmp1) {
HXLINE( 385)				_hx_tmp = obj->destroyOnNoUse;
            			}
            			else {
HXLINE( 385)				_hx_tmp = false;
            			}
HXDLIN( 385)			if (_hx_tmp) {
HXLINE( 387)				this->removeByKey(key1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))

int BitmapFrontEnd_obj::get_maxTextureSize(){
            	HX_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_395_get_maxTextureSize)
HXDLIN( 395)		return ( (int)(::lime::graphics::opengl::GL_obj::context->getParameter(3379)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_maxTextureSize,return )

 ::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel(){
            	HX_GC_STACKFRAME(&_hx_pos_c7913b0c5b2fbcc7_400_get_whitePixel)
HXLINE( 401)		if (::hx::IsNull( this->_whitePixel )) {
HXLINE( 403)			 ::openfl::display::BitmapData bd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,10,10,true,-1);
HXLINE( 404)			 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(bd,true,HX_("whitePixels",b6,92,ba,9e));
HXLINE( 405)			graphic->persist = true;
HXLINE( 406)			this->_whitePixel = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 409)		return this->_whitePixel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )


::hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new() {
	::hx::ObjectPtr< BitmapFrontEnd_obj > __this = new BitmapFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BitmapFrontEnd_obj *__this = (BitmapFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapFrontEnd_obj), true, "flixel.system.frontEnds.BitmapFrontEnd"));
	*(void **)__this = BitmapFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_MEMBER_NAME(_lastUniqueKeyIndex,"_lastUniqueKeyIndex");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_VISIT_MEMBER_NAME(_lastUniqueKeyIndex,"_lastUniqueKeyIndex");
}

::hx::Val BitmapFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return ::hx::Val( _cache ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return ::hx::Val( onContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return ::hx::Val( dumpCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKey") ) { return ::hx::Val( removeKey_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_whitePixel() ); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return ::hx::Val( checkCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return ::hx::Val( addGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return ::hx::Val( _whitePixel ); }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return ::hx::Val( undumpCache_dyn() ); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return ::hx::Val( generateKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return ::hx::Val( removeByKey_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return ::hx::Val( clearUnused_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return ::hx::Val( getUniqueKey_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return ::hx::Val( removeIfNoUse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxTextureSize() ); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return ::hx::Val( onAssetsReload_dyn() ); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return ::hx::Val( getKeyForClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return ::hx::Val( get_whitePixel_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return ::hx::Val( findKeyForBitmap_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_maxTextureSize") ) { return ::hx::Val( get_maxTextureSize_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastUniqueKeyIndex") ) { return ::hx::Val( _lastUniqueKeyIndex ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacesAndBorders") ) { return ::hx::Val( getKeyWithSpacesAndBorders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastUniqueKeyIndex") ) { _lastUniqueKeyIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maxTextureSize",f8,a6,7c,0a));
	outFields->push(HX_("whitePixel",1d,a7,f7,19));
	outFields->push(HX_("_cache",83,e1,fb,3c));
	outFields->push(HX_("_whitePixel",3c,74,81,ec));
	outFields->push(HX_("_lastUniqueKeyIndex",39,d6,77,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_("_cache",83,e1,fb,3c)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_("_whitePixel",3c,74,81,ec)},
	{::hx::fsInt,(int)offsetof(BitmapFrontEnd_obj,_lastUniqueKeyIndex),HX_("_lastUniqueKeyIndex",39,d6,77,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFrontEnd_obj_sMemberFields[] = {
	HX_("_cache",83,e1,fb,3c),
	HX_("_whitePixel",3c,74,81,ec),
	HX_("_lastUniqueKeyIndex",39,d6,77,aa),
	HX_("onAssetsReload",fb,33,88,63),
	HX_("onContext",90,4e,22,f1),
	HX_("dumpCache",6e,30,39,db),
	HX_("undumpCache",f5,b6,df,60),
	HX_("checkCache",5a,9c,04,51),
	HX_("create",fc,66,0f,7c),
	HX_("add",21,f2,49,00),
	HX_("addGraphic",87,86,91,db),
	HX_("get",96,80,4e,00),
	HX_("findKeyForBitmap",12,70,29,81),
	HX_("getKeyForClass",38,d0,df,11),
	HX_("generateKey",6a,91,24,46),
	HX_("getUniqueKey",98,cb,d7,e8),
	HX_("getKeyWithSpacesAndBorders",ac,4e,ae,2a),
	HX_("remove",44,9c,88,04),
	HX_("removeByKey",24,c9,ac,bb),
	HX_("removeIfNoUse",85,b1,4f,e2),
	HX_("clearCache",75,d9,1e,16),
	HX_("removeKey",bb,a7,ec,ca),
	HX_("reset",cf,49,c8,e6),
	HX_("clearUnused",83,a6,6f,ff),
	HX_("get_maxTextureSize",c1,87,16,a6),
	HX_("get_whitePixel",66,2f,ed,8f),
	::String(null()) };

::hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	BitmapFrontEnd_obj _hx_dummy;
	BitmapFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.BitmapFrontEnd",7b,b7,f6,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
