#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_11_new,"flixel.math.FlxRect","new",0xa1ebbd34,"flixel.math.FlxRect.new","flixel/math/FlxRect.hx",11,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_85_put,"flixel.math.FlxRect","put",0xa1ed4fa3,"flixel.math.FlxRect.put","flixel/math/FlxRect.hx",85,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_98_putWeak,"flixel.math.FlxRect","putWeak",0x585fe5bb,"flixel.math.FlxRect.putWeak","flixel/math/FlxRect.hx",98,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_111_setSize,"flixel.math.FlxRect","setSize",0x6cc8c857,"flixel.math.FlxRect.setSize","flixel/math/FlxRect.hx",111,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_121_setPosition,"flixel.math.FlxRect","setPosition",0xc8aa4b3f,"flixel.math.FlxRect.setPosition","flixel/math/FlxRect.hx",121,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_137_set,"flixel.math.FlxRect","set",0xa1ef8876,"flixel.math.FlxRect.set","flixel/math/FlxRect.hx",137,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_152_copyFrom,"flixel.math.FlxRect","copyFrom",0x003a1e6b,"flixel.math.FlxRect.copyFrom","flixel/math/FlxRect.hx",152,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_169_copyTo,"flixel.math.FlxRect","copyTo",0x8a77ec3c,"flixel.math.FlxRect.copyTo","flixel/math/FlxRect.hx",169,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_186_copyFromFlash,"flixel.math.FlxRect","copyFromFlash",0x00426345,"flixel.math.FlxRect.copyFromFlash","flixel/math/FlxRect.hx",186,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_201_copyToFlash,"flixel.math.FlxRect","copyToFlash",0xf273dfd4,"flixel.math.FlxRect.copyToFlash","flixel/math/FlxRect.hx",201,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_221_overlaps,"flixel.math.FlxRect","overlaps",0x7d03e5b8,"flixel.math.FlxRect.overlaps","flixel/math/FlxRect.hx",221,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_234_containsPoint,"flixel.math.FlxRect","containsPoint",0x7a537785,"flixel.math.FlxRect.containsPoint","flixel/math/FlxRect.hx",234,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_248_union,"flixel.math.FlxRect","union",0xcff32ee3,"flixel.math.FlxRect.union","flixel/math/FlxRect.hx",248,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_262_floor,"flixel.math.FlxRect","floor",0x2ba29ba0,"flixel.math.FlxRect.floor","flixel/math/FlxRect.hx",262,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_274_ceil,"flixel.math.FlxRect","ceil",0x05146bb1,"flixel.math.FlxRect.ceil","flixel/math/FlxRect.hx",274,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_286_round,"flixel.math.FlxRect","round",0x1671c222,"flixel.math.FlxRect.round","flixel/math/FlxRect.hx",286,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_302_fromTwoPoints,"flixel.math.FlxRect","fromTwoPoints",0xbab89fd9,"flixel.math.FlxRect.fromTwoPoints","flixel/math/FlxRect.hx",302,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_322_unionWithPoint,"flixel.math.FlxRect","unionWithPoint",0xe98f5507,"flixel.math.FlxRect.unionWithPoint","flixel/math/FlxRect.hx",322,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_333_offset,"flixel.math.FlxRect","offset",0x2184673f,"flixel.math.FlxRect.offset","flixel/math/FlxRect.hx",333,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_350_getRotatedBounds,"flixel.math.FlxRect","getRotatedBounds",0x28a5b134,"flixel.math.FlxRect.getRotatedBounds","flixel/math/FlxRect.hx",350,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_407_destroy,"flixel.math.FlxRect","destroy",0x7f7713ce,"flixel.math.FlxRect.destroy","flixel/math/FlxRect.hx",407,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_416_equals,"flixel.math.FlxRect","equals",0x8137bdeb,"flixel.math.FlxRect.equals","flixel/math/FlxRect.hx",416,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_430_intersection,"flixel.math.FlxRect","intersection",0x60177af5,"flixel.math.FlxRect.intersection","flixel/math/FlxRect.hx",430,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_459_toString,"flixel.math.FlxRect","toString",0x7047e358,"flixel.math.FlxRect.toString","flixel/math/FlxRect.hx",459,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_469_get_left,"flixel.math.FlxRect","get_left",0xff43d63c,"flixel.math.FlxRect.get_left","flixel/math/FlxRect.hx",469,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_473_set_left,"flixel.math.FlxRect","set_left",0xada12fb0,"flixel.math.FlxRect.set_left","flixel/math/FlxRect.hx",473,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_480_get_right,"flixel.math.FlxRect","get_right",0xd324ac07,"flixel.math.FlxRect.get_right","flixel/math/FlxRect.hx",480,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_484_set_right,"flixel.math.FlxRect","set_right",0xb6759813,"flixel.math.FlxRect.set_right","flixel/math/FlxRect.hx",484,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_491_get_top,"flixel.math.FlxRect","get_top",0x81be1600,"flixel.math.FlxRect.get_top","flixel/math/FlxRect.hx",491,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_495_set_top,"flixel.math.FlxRect","set_top",0x74bfa70c,"flixel.math.FlxRect.set_top","flixel/math/FlxRect.hx",495,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_502_get_bottom,"flixel.math.FlxRect","get_bottom",0x04446c60,"flixel.math.FlxRect.get_bottom","flixel/math/FlxRect.hx",502,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_506_set_bottom,"flixel.math.FlxRect","set_bottom",0x07c20ad4,"flixel.math.FlxRect.set_bottom","flixel/math/FlxRect.hx",506,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_513_get_isEmpty,"flixel.math.FlxRect","get_isEmpty",0x5fa91f2e,"flixel.math.FlxRect.get_isEmpty","flixel/math/FlxRect.hx",513,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_24_get,"flixel.math.FlxRect","get",0xa1e66d6a,"flixel.math.FlxRect.get","flixel/math/FlxRect.hx",24,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_35_weak,"flixel.math.FlxRect","weak",0x124ca924,"flixel.math.FlxRect.weak","flixel/math/FlxRect.hx",35,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_518_get_pool,"flixel.math.FlxRect","get_pool",0x01f04f11,"flixel.math.FlxRect.get_pool","flixel/math/FlxRect.hx",518,0x2aef791c)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6d58e3fc627ab0_15_boot,"flixel.math.FlxRect","boot",0x0472d0de,"flixel.math.FlxRect.boot","flixel/math/FlxRect.hx",15,0x2aef791c)
namespace flixel{
namespace math{

void FlxRect_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_11_new)
HXLINE(  72)		this->_inPool = false;
HXLINE(  71)		this->_weak = false;
HXLINE(  77)		this->x = X;
HXDLIN(  77)		this->y = Y;
HXDLIN(  77)		this->width = Width;
HXDLIN(  77)		this->height = Height;
            	}

Dynamic FlxRect_obj::__CreateEmpty() { return new FlxRect_obj; }

void *FlxRect_obj::_hx_vtable = 0;

Dynamic FlxRect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxRect_obj > _hx_result = new FlxRect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxRect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7da4a0b2;
}

static ::flixel::util::IFlxPooled_obj _hx_flixel_math_FlxRect__hx_flixel_util_IFlxPooled= {
	( void (::hx::Object::*)())&::flixel::math::FlxRect_obj::destroy,
	( void (::hx::Object::*)())&::flixel::math::FlxRect_obj::put,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_math_FlxRect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::math::FlxRect_obj::destroy,
};

void *FlxRect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9aa322a2: return &_hx_flixel_math_FlxRect__hx_flixel_util_IFlxPooled;
		case (int)0xd4fe2fcd: return &_hx_flixel_math_FlxRect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxRect_obj::put(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_85_put)
HXDLIN(  85)		if (!(this->_inPool)) {
HXLINE(  87)			this->_inPool = true;
HXLINE(  88)			this->_weak = false;
HXLINE(  89)			::flixel::math::FlxRect_obj::_pool->putUnsafe(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,put,(void))

void FlxRect_obj::putWeak(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_98_putWeak)
HXDLIN(  98)		if (this->_weak) {
HXLINE( 100)			if (!(this->_inPool)) {
HXLINE( 100)				this->_inPool = true;
HXDLIN( 100)				this->_weak = false;
HXDLIN( 100)				::flixel::math::FlxRect_obj::_pool->putUnsafe(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,putWeak,(void))

 ::flixel::math::FlxRect FlxRect_obj::setSize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_111_setSize)
HXLINE( 112)		this->width = Width;
HXLINE( 113)		this->height = Height;
HXLINE( 114)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setSize,return )

 ::flixel::math::FlxRect FlxRect_obj::setPosition(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_121_setPosition)
HXLINE( 122)		this->x = x;
HXLINE( 123)		this->y = y;
HXLINE( 124)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setPosition,return )

 ::flixel::math::FlxRect FlxRect_obj::set(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_137_set)
HXLINE( 138)		this->x = X;
HXLINE( 139)		this->y = Y;
HXLINE( 140)		this->width = Width;
HXLINE( 141)		this->height = Height;
HXLINE( 142)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

 ::flixel::math::FlxRect FlxRect_obj::copyFrom( ::flixel::math::FlxRect Rect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_152_copyFrom)
HXLINE( 153)		this->x = Rect->x;
HXLINE( 154)		this->y = Rect->y;
HXLINE( 155)		this->width = Rect->width;
HXLINE( 156)		this->height = Rect->height;
HXLINE( 158)		if (Rect->_weak) {
HXLINE( 158)			if (!(Rect->_inPool)) {
HXLINE( 158)				Rect->_inPool = true;
HXDLIN( 158)				Rect->_weak = false;
HXDLIN( 158)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXLINE( 159)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

 ::flixel::math::FlxRect FlxRect_obj::copyTo( ::flixel::math::FlxRect Rect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_169_copyTo)
HXLINE( 170)		Rect->x = this->x;
HXLINE( 171)		Rect->y = this->y;
HXLINE( 172)		Rect->width = this->width;
HXLINE( 173)		Rect->height = this->height;
HXLINE( 175)		if (Rect->_weak) {
HXLINE( 175)			if (!(Rect->_inPool)) {
HXLINE( 175)				Rect->_inPool = true;
HXDLIN( 175)				Rect->_weak = false;
HXDLIN( 175)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXLINE( 176)		return Rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

 ::flixel::math::FlxRect FlxRect_obj::copyFromFlash( ::openfl::geom::Rectangle FlashRect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_186_copyFromFlash)
HXLINE( 187)		this->x = FlashRect->x;
HXLINE( 188)		this->y = FlashRect->y;
HXLINE( 189)		this->width = FlashRect->width;
HXLINE( 190)		this->height = FlashRect->height;
HXLINE( 191)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

 ::openfl::geom::Rectangle FlxRect_obj::copyToFlash( ::openfl::geom::Rectangle FlashRect){
            	HX_GC_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_201_copyToFlash)
HXLINE( 202)		if (::hx::IsNull( FlashRect )) {
HXLINE( 204)			FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 207)		FlashRect->x = this->x;
HXLINE( 208)		FlashRect->y = this->y;
HXLINE( 209)		FlashRect->width = this->width;
HXLINE( 210)		FlashRect->height = this->height;
HXLINE( 211)		return FlashRect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

bool FlxRect_obj::overlaps( ::flixel::math::FlxRect Rect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_221_overlaps)
HXLINE( 222)		bool result;
HXDLIN( 222)		bool result1;
HXDLIN( 222)		bool result2;
HXDLIN( 222)		if (((Rect->x + Rect->width) > this->x)) {
HXLINE( 222)			result2 = (Rect->x < (this->x + this->width));
            		}
            		else {
HXLINE( 222)			result2 = false;
            		}
HXDLIN( 222)		if (result2) {
HXLINE( 222)			result1 = ((Rect->y + Rect->height) > this->y);
            		}
            		else {
HXLINE( 222)			result1 = false;
            		}
HXDLIN( 222)		if (result1) {
HXLINE( 222)			result = (Rect->y < (this->y + this->height));
            		}
            		else {
HXLINE( 222)			result = false;
            		}
HXLINE( 223)		if (Rect->_weak) {
HXLINE( 223)			if (!(Rect->_inPool)) {
HXLINE( 223)				Rect->_inPool = true;
HXDLIN( 223)				Rect->_weak = false;
HXDLIN( 223)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXLINE( 224)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

bool FlxRect_obj::containsPoint( ::flixel::math::FlxBasePoint Point){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_234_containsPoint)
HXLINE( 235)		bool result = ::flixel::math::FlxMath_obj::pointInFlxRect(Point->x,Point->y,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 236)		if (Point->_weak) {
HXLINE( 236)			Point->put();
            		}
HXLINE( 237)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsPoint,return )

 ::flixel::math::FlxRect FlxRect_obj::_hx_union( ::flixel::math::FlxRect Rect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_248_union)
HXLINE( 249)		Float minX = ::Math_obj::min(this->x,Rect->x);
HXLINE( 250)		Float minY = ::Math_obj::min(this->y,Rect->y);
HXLINE( 251)		Float maxX = ::Math_obj::max((this->x + this->width),(Rect->x + Rect->width));
HXLINE( 252)		Float maxY = ::Math_obj::max((this->y + this->height),(Rect->y + Rect->height));
HXLINE( 254)		if (Rect->_weak) {
HXLINE( 254)			if (!(Rect->_inPool)) {
HXLINE( 254)				Rect->_inPool = true;
HXDLIN( 254)				Rect->_weak = false;
HXDLIN( 254)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXLINE( 255)		this->x = minX;
HXDLIN( 255)		this->y = minY;
HXDLIN( 255)		this->width = (maxX - minX);
HXDLIN( 255)		this->height = (maxY - minY);
HXDLIN( 255)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_hx_union,return )

 ::flixel::math::FlxRect FlxRect_obj::floor(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_262_floor)
HXLINE( 263)		this->x = ( (Float)(::Math_obj::floor(this->x)) );
HXLINE( 264)		this->y = ( (Float)(::Math_obj::floor(this->y)) );
HXLINE( 265)		this->width = ( (Float)(::Math_obj::floor(this->width)) );
HXLINE( 266)		this->height = ( (Float)(::Math_obj::floor(this->height)) );
HXLINE( 267)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,floor,return )

 ::flixel::math::FlxRect FlxRect_obj::ceil(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_274_ceil)
HXLINE( 275)		this->x = ( (Float)(::Math_obj::ceil(this->x)) );
HXLINE( 276)		this->y = ( (Float)(::Math_obj::ceil(this->y)) );
HXLINE( 277)		this->width = ( (Float)(::Math_obj::ceil(this->width)) );
HXLINE( 278)		this->height = ( (Float)(::Math_obj::ceil(this->height)) );
HXLINE( 279)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,ceil,return )

 ::flixel::math::FlxRect FlxRect_obj::round(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_286_round)
HXLINE( 287)		this->x = ( (Float)(::Math_obj::round(this->x)) );
HXLINE( 288)		this->y = ( (Float)(::Math_obj::round(this->y)) );
HXLINE( 289)		this->width = ( (Float)(::Math_obj::round(this->width)) );
HXLINE( 290)		this->height = ( (Float)(::Math_obj::round(this->height)) );
HXLINE( 291)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,round,return )

 ::flixel::math::FlxRect FlxRect_obj::fromTwoPoints( ::flixel::math::FlxBasePoint Point1, ::flixel::math::FlxBasePoint Point2){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_302_fromTwoPoints)
HXLINE( 303)		Float minX = ::Math_obj::min(Point1->x,Point2->x);
HXLINE( 304)		Float minY = ::Math_obj::min(Point1->y,Point2->y);
HXLINE( 306)		Float maxX = ::Math_obj::max(Point1->x,Point2->x);
HXLINE( 307)		Float maxY = ::Math_obj::max(Point1->y,Point2->y);
HXLINE( 309)		if (Point1->_weak) {
HXLINE( 309)			Point1->put();
            		}
HXLINE( 310)		if (Point2->_weak) {
HXLINE( 310)			Point2->put();
            		}
HXLINE( 311)		this->x = minX;
HXDLIN( 311)		this->y = minY;
HXDLIN( 311)		this->width = (maxX - minX);
HXDLIN( 311)		this->height = (maxY - minY);
HXDLIN( 311)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,fromTwoPoints,return )

 ::flixel::math::FlxRect FlxRect_obj::unionWithPoint( ::flixel::math::FlxBasePoint Point){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_322_unionWithPoint)
HXLINE( 323)		Float minX = ::Math_obj::min(this->x,Point->x);
HXLINE( 324)		Float minY = ::Math_obj::min(this->y,Point->y);
HXLINE( 325)		Float maxX = ::Math_obj::max((this->x + this->width),Point->x);
HXLINE( 326)		Float maxY = ::Math_obj::max((this->y + this->height),Point->y);
HXLINE( 328)		if (Point->_weak) {
HXLINE( 328)			Point->put();
            		}
HXLINE( 329)		this->x = minX;
HXDLIN( 329)		this->y = minY;
HXDLIN( 329)		this->width = (maxX - minX);
HXDLIN( 329)		this->height = (maxY - minY);
HXDLIN( 329)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,unionWithPoint,return )

 ::flixel::math::FlxRect FlxRect_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_333_offset)
HXLINE( 334)		 ::flixel::math::FlxRect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 334)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE( 335)		 ::flixel::math::FlxRect _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 335)		_hx_tmp1->y = (_hx_tmp1->y + dy);
HXLINE( 336)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,offset,return )

 ::flixel::math::FlxRect FlxRect_obj::getRotatedBounds(Float degrees, ::flixel::math::FlxBasePoint origin, ::flixel::math::FlxRect newRect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_350_getRotatedBounds)
HXLINE( 351)		if (::hx::IsNull( origin )) {
HXLINE( 352)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(0,0);
HXDLIN( 352)			point->_inPool = false;
HXDLIN( 352)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 352)			point1->_weak = true;
HXDLIN( 352)			origin = point1;
            		}
HXLINE( 354)		if (::hx::IsNull( newRect )) {
HXLINE( 355)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 355)			_this->x = ( (Float)(0) );
HXDLIN( 355)			_this->y = ( (Float)(0) );
HXDLIN( 355)			_this->width = ( (Float)(0) );
HXDLIN( 355)			_this->height = ( (Float)(0) );
HXDLIN( 355)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 355)			rect->_inPool = false;
HXDLIN( 355)			newRect = rect;
            		}
HXLINE( 357)		degrees = ::hx::Mod(degrees,360);
HXLINE( 358)		if ((degrees == 0)) {
HXLINE( 360)			if (origin->_weak) {
HXLINE( 360)				origin->put();
            			}
HXLINE( 361)			newRect->x = this->x;
HXDLIN( 361)			newRect->y = this->y;
HXDLIN( 361)			newRect->width = this->width;
HXDLIN( 361)			newRect->height = this->height;
HXDLIN( 361)			return newRect;
            		}
HXLINE( 364)		if ((degrees < 0)) {
HXLINE( 365)			degrees = (degrees + 360);
            		}
HXLINE( 367)		Float radians = ((::Math_obj::PI / ( (Float)(180) )) * degrees);
HXLINE( 368)		Float cos = ::Math_obj::cos(radians);
HXLINE( 369)		Float sin = ::Math_obj::sin(radians);
HXLINE( 371)		Float left = -(origin->x);
HXLINE( 372)		Float top = -(origin->y);
HXLINE( 373)		Float right = (-(origin->x) + this->width);
HXLINE( 374)		Float bottom = (-(origin->y) + this->height);
HXLINE( 375)		if ((degrees < 90)) {
HXLINE( 377)			newRect->x = (((this->x + origin->x) + (cos * left)) - (sin * bottom));
HXLINE( 378)			newRect->y = (((this->y + origin->y) + (sin * left)) + (cos * top));
            		}
            		else {
HXLINE( 380)			if ((degrees < 180)) {
HXLINE( 382)				newRect->x = (((this->x + origin->x) + (cos * right)) - (sin * bottom));
HXLINE( 383)				newRect->y = (((this->y + origin->y) + (sin * left)) + (cos * bottom));
            			}
            			else {
HXLINE( 385)				if ((degrees < 270)) {
HXLINE( 387)					newRect->x = (((this->x + origin->x) + (cos * right)) - (sin * top));
HXLINE( 388)					newRect->y = (((this->y + origin->y) + (sin * right)) + (cos * bottom));
            				}
            				else {
HXLINE( 392)					newRect->x = (((this->x + origin->x) + (cos * left)) - (sin * top));
HXLINE( 393)					newRect->y = (((this->y + origin->y) + (sin * right)) + (cos * top));
            				}
            			}
            		}
HXLINE( 396)		Float newHeight = (::Math_obj::abs((cos * this->height)) + ::Math_obj::abs((sin * this->width)));
HXLINE( 397)		newRect->width = (::Math_obj::abs((cos * this->width)) + ::Math_obj::abs((sin * this->height)));
HXLINE( 398)		newRect->height = newHeight;
HXLINE( 400)		if (origin->_weak) {
HXLINE( 400)			origin->put();
            		}
HXLINE( 401)		return newRect;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxRect_obj,getRotatedBounds,return )

void FlxRect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_407_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,destroy,(void))

bool FlxRect_obj::equals( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_416_equals)
HXLINE( 417)		bool result;
HXDLIN( 417)		bool result1;
HXDLIN( 417)		bool result2;
HXDLIN( 417)		if ((::Math_obj::abs((this->x - rect->x)) <= ((Float)0.0000001))) {
HXLINE( 417)			result2 = (::Math_obj::abs((this->y - rect->y)) <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 417)			result2 = false;
            		}
HXDLIN( 417)		if (result2) {
HXLINE( 417)			result1 = (::Math_obj::abs((this->width - rect->width)) <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 417)			result1 = false;
            		}
HXDLIN( 417)		if (result1) {
HXLINE( 417)			result = (::Math_obj::abs((this->height - rect->height)) <= ((Float)0.0000001));
            		}
            		else {
HXLINE( 417)			result = false;
            		}
HXLINE( 418)		if (rect->_weak) {
HXLINE( 418)			if (!(rect->_inPool)) {
HXLINE( 418)				rect->_inPool = true;
HXDLIN( 418)				rect->_weak = false;
HXDLIN( 418)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            			}
            		}
HXLINE( 419)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,equals,return )

 ::flixel::math::FlxRect FlxRect_obj::intersection( ::flixel::math::FlxRect rect, ::flixel::math::FlxRect result){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_430_intersection)
HXLINE( 431)		if (::hx::IsNull( result )) {
HXLINE( 432)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 432)			_this->x = ( (Float)(0) );
HXDLIN( 432)			_this->y = ( (Float)(0) );
HXDLIN( 432)			_this->width = ( (Float)(0) );
HXDLIN( 432)			_this->height = ( (Float)(0) );
HXDLIN( 432)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 432)			rect->_inPool = false;
HXDLIN( 432)			result = rect;
            		}
HXLINE( 434)		Float x0;
HXDLIN( 434)		if ((this->x < rect->x)) {
HXLINE( 434)			x0 = rect->x;
            		}
            		else {
HXLINE( 434)			x0 = this->x;
            		}
HXLINE( 435)		Float x1;
HXDLIN( 435)		if (((this->x + this->width) > (rect->x + rect->width))) {
HXLINE( 435)			x1 = (rect->x + rect->width);
            		}
            		else {
HXLINE( 435)			x1 = (this->x + this->width);
            		}
HXLINE( 436)		if ((x1 <= x0)) {
HXLINE( 438)			if (rect->_weak) {
HXLINE( 438)				if (!(rect->_inPool)) {
HXLINE( 438)					rect->_inPool = true;
HXDLIN( 438)					rect->_weak = false;
HXDLIN( 438)					::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            				}
            			}
HXLINE( 439)			return result;
            		}
HXLINE( 442)		Float y0;
HXDLIN( 442)		if ((this->y < rect->y)) {
HXLINE( 442)			y0 = rect->y;
            		}
            		else {
HXLINE( 442)			y0 = this->y;
            		}
HXLINE( 443)		Float y1;
HXDLIN( 443)		if (((this->y + this->height) > (rect->y + rect->height))) {
HXLINE( 443)			y1 = (rect->y + rect->height);
            		}
            		else {
HXLINE( 443)			y1 = (this->y + this->height);
            		}
HXLINE( 444)		if ((y1 <= y0)) {
HXLINE( 446)			if (rect->_weak) {
HXLINE( 446)				if (!(rect->_inPool)) {
HXLINE( 446)					rect->_inPool = true;
HXDLIN( 446)					rect->_weak = false;
HXDLIN( 446)					::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            				}
            			}
HXLINE( 447)			return result;
            		}
HXLINE( 450)		if (rect->_weak) {
HXLINE( 450)			if (!(rect->_inPool)) {
HXLINE( 450)				rect->_inPool = true;
HXDLIN( 450)				rect->_weak = false;
HXDLIN( 450)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            			}
            		}
HXLINE( 451)		result->x = x0;
HXDLIN( 451)		result->y = y0;
HXDLIN( 451)		result->width = (x1 - x0);
HXDLIN( 451)		result->height = (y1 - y0);
HXDLIN( 451)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,intersection,return )

::String FlxRect_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_459_toString)
HXLINE( 460)		 ::Dynamic value = this->x;
HXDLIN( 460)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 460)		_this->label = HX_("x",78,00,00,00);
HXDLIN( 460)		_this->value = value;
HXLINE( 461)		 ::Dynamic value1 = this->y;
HXDLIN( 461)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 461)		_this1->label = HX_("y",79,00,00,00);
HXDLIN( 461)		_this1->value = value1;
HXLINE( 462)		 ::Dynamic value2 = this->width;
HXDLIN( 462)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 462)		_this2->label = HX_("w",77,00,00,00);
HXDLIN( 462)		_this2->value = value2;
HXLINE( 463)		 ::Dynamic value3 = this->height;
HXDLIN( 463)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 463)		_this3->label = HX_("h",68,00,00,00);
HXDLIN( 463)		_this3->value = value3;
HXLINE( 459)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

Float FlxRect_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_469_get_left)
HXDLIN( 469)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )

Float FlxRect_obj::set_left(Float Value){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_473_set_left)
HXLINE( 474)		 ::flixel::math::FlxRect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 474)		_hx_tmp->width = (_hx_tmp->width - (Value - this->x));
HXLINE( 475)		return (this->x = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_left,return )

Float FlxRect_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_480_get_right)
HXDLIN( 480)		return (this->x + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::set_right(Float Value){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_484_set_right)
HXLINE( 485)		this->width = (Value - this->x);
HXLINE( 486)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_right,return )

Float FlxRect_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_491_get_top)
HXDLIN( 491)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::set_top(Float Value){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_495_set_top)
HXLINE( 496)		 ::flixel::math::FlxRect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 496)		_hx_tmp->height = (_hx_tmp->height - (Value - this->y));
HXLINE( 497)		return (this->y = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_top,return )

Float FlxRect_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_502_get_bottom)
HXDLIN( 502)		return (this->y + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::set_bottom(Float Value){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_506_set_bottom)
HXLINE( 507)		this->height = (Value - this->y);
HXLINE( 508)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_bottom,return )

bool FlxRect_obj::get_isEmpty(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_513_get_isEmpty)
HXDLIN( 513)		if ((this->width != 0)) {
HXDLIN( 513)			return (this->height == 0);
            		}
            		else {
HXDLIN( 513)			return true;
            		}
HXDLIN( 513)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_isEmpty,return )

 ::flixel::util::FlxPool FlxRect_obj::_pool;

 ::flixel::math::FlxRect FlxRect_obj::get(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_24_get)
HXLINE(  25)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  25)		_this->x = X;
HXDLIN(  25)		_this->y = Y;
HXDLIN(  25)		_this->width = Width;
HXDLIN(  25)		_this->height = Height;
HXDLIN(  25)		 ::flixel::math::FlxRect rect = _this;
HXLINE(  26)		rect->_inPool = false;
HXLINE(  27)		return rect;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,get,return )

 ::flixel::math::FlxRect FlxRect_obj::weak(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_35_weak)
HXLINE(  36)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  36)		_this->x = X;
HXDLIN(  36)		_this->y = Y;
HXDLIN(  36)		_this->width = Width;
HXDLIN(  36)		_this->height = Height;
HXDLIN(  36)		 ::flixel::math::FlxRect rect = _this;
HXDLIN(  36)		rect->_inPool = false;
HXDLIN(  36)		 ::flixel::math::FlxRect rect1 = rect;
HXLINE(  37)		rect1->_weak = true;
HXLINE(  38)		return rect1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,weak,return )

::Dynamic FlxRect_obj::get_pool(){
            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_518_get_pool)
HXDLIN( 518)		return ::flixel::math::FlxRect_obj::_pool;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_pool,return )


::hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	::hx::ObjectPtr< FlxRect_obj > __this = new FlxRect_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

::hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	FlxRect_obj *__this = (FlxRect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxRect_obj), false, "flixel.math.FlxRect"));
	*(void **)__this = FlxRect_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

FlxRect_obj::FlxRect_obj()
{
}

::hx::Val FlxRect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		if (HX_FIELD_EQ(inName,"put") ) { return ::hx::Val( put_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ::hx::Val( ceil_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_right() ); }
		if (HX_FIELD_EQ(inName,"_weak") ) { return ::hx::Val( _weak ); }
		if (HX_FIELD_EQ(inName,"union") ) { return ::hx::Val( _hx_union_dyn() ); }
		if (HX_FIELD_EQ(inName,"floor") ) { return ::hx::Val( floor_dyn() ); }
		if (HX_FIELD_EQ(inName,"round") ) { return ::hx::Val( round_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottom() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isEmpty() ); }
		if (HX_FIELD_EQ(inName,"_inPool") ) { return ::hx::Val( _inPool ); }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return ::hx::Val( putWeak_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return ::hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return ::hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return ::hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return ::hx::Val( set_bottom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return ::hx::Val( copyToFlash_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return ::hx::Val( get_isEmpty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return ::hx::Val( copyFromFlash_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromTwoPoints") ) { return ::hx::Val( fromTwoPoints_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unionWithPoint") ) { return ::hx::Val( unionWithPoint_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRotatedBounds") ) { return ::hx::Val( getRotatedBounds_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxRect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_pool() ); return true; } }
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_pool") ) { outValue = get_pool_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxRect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_right(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottom(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxRect_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::flixel::util::FlxPool >(); return true; }
	}
	return false;
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("bottom",eb,e6,78,65));
	outFields->push(HX_("isEmpty",43,de,5f,0c));
	outFields->push(HX_("_weak",57,78,06,02));
	outFields->push(HX_("_inPool",00,71,39,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxRect_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxRect_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxRect_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxRect_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxRect_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(FlxRect_obj,_weak),HX_("_weak",57,78,06,02)},
	{::hx::fsBool,(int)offsetof(FlxRect_obj,_inPool),HX_("_inPool",00,71,39,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxRect_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::FlxPool */ ,(void *) &FlxRect_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxRect_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("_weak",57,78,06,02),
	HX_("_inPool",00,71,39,f5),
	HX_("put",cf,62,55,00),
	HX_("putWeak",e7,fe,6e,fd),
	HX_("setSize",83,e1,d7,11),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("set",a2,9b,57,00),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("copyFromFlash",71,a5,da,18),
	HX_("copyToFlash",00,ff,24,25),
	HX_("overlaps",0c,d3,2a,45),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("union",0f,65,e7,a6),
	HX_("floor",cc,d1,96,02),
	HX_("ceil",05,1f,bd,41),
	HX_("round",4e,f8,65,ed),
	HX_("fromTwoPoints",05,e2,50,d3),
	HX_("unionWithPoint",5b,f9,30,56),
	HX_("offset",93,97,3f,60),
	HX_("getRotatedBounds",88,12,38,3c),
	HX_("destroy",fa,2c,86,24),
	HX_("equals",3f,ee,f2,bf),
	HX_("intersection",49,a2,61,88),
	HX_("toString",ac,d0,6e,38),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_right",33,68,0d,2d),
	HX_("set_right",3f,54,5e,10),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("get_bottom",b4,56,00,56),
	HX_("set_bottom",28,f5,7d,59),
	HX_("get_isEmpty",5a,3e,5a,92),
	::String(null()) };

static void FlxRect_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxRect_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#endif

::hx::Class FlxRect_obj::__mClass;

static ::String FlxRect_obj_sStaticFields[] = {
	HX_("_pool",bb,9c,6d,fd),
	HX_("get",96,80,4e,00),
	HX_("weak",78,5c,f5,4e),
	HX_("get_pool",65,3c,17,ca),
	::String(null())
};

void FlxRect_obj::__register()
{
	FlxRect_obj _hx_dummy;
	FlxRect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxRect",42,53,98,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRect_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxRect_obj::__SetStatic;
	__mClass->mMarkFunc = FlxRect_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxRect_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxRect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxRect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxRect_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxRect_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		 ::flixel::util::FlxPool _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0,Float,X,Float,Width,Float,Height,Float,Y) HXARGC(0)
            			 ::flixel::math::FlxRect _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_15_boot)
HXDLIN(  15)				return  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,X,Y,Width,Height);
            			}
            			HX_END_LOCAL_FUNC0(return)

            			HX_GC_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_15_boot)
HXDLIN(  15)			Float X = ( (Float)(0) );
HXDLIN(  15)			Float Y = ( (Float)(0) );
HXDLIN(  15)			Float Width = ( (Float)(0) );
HXDLIN(  15)			Float Height = ( (Float)(0) );
HXDLIN(  15)			return  ::flixel::util::FlxPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(X,Width,Height,Y)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_4c6d58e3fc627ab0_15_boot)
HXDLIN(  15)		_pool = ( ( ::flixel::util::FlxPool)( ::Dynamic(new _hx_Closure_1())()) );
            	}
}

} // end namespace flixel
} // end namespace math
