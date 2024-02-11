#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_69_roundDecimal,"flixel.math.FlxMath","roundDecimal",0xaa14776b,"flixel.math.FlxMath.roundDecimal","flixel/math/FlxMath.hx",69,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_89_bound,"flixel.math.FlxMath","bound",0xac2681b6,"flixel.math.FlxMath.bound","flixel/math/FlxMath.hx",89,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_109_lerp,"flixel.math.FlxMath","lerp",0xfe2b17ff,"flixel.math.FlxMath.lerp","flixel/math/FlxMath.hx",109,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_122_inBounds,"flixel.math.FlxMath","inBounds",0x4dfc39c2,"flixel.math.FlxMath.inBounds","flixel/math/FlxMath.hx",122,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_130_isOdd,"flixel.math.FlxMath","isOdd",0xb67c8d5d,"flixel.math.FlxMath.isOdd","flixel/math/FlxMath.hx",130,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_138_isEven,"flixel.math.FlxMath","isEven",0xeff0abac,"flixel.math.FlxMath.isEven","flixel/math/FlxMath.hx",138,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_145_numericComparison,"flixel.math.FlxMath","numericComparison",0xd7f909ee,"flixel.math.FlxMath.numericComparison","flixel/math/FlxMath.hx",145,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_170_pointInCoordinates,"flixel.math.FlxMath","pointInCoordinates",0xc68dec2e,"flixel.math.FlxMath.pointInCoordinates","flixel/math/FlxMath.hx",170,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_191_pointInFlxRect,"flixel.math.FlxMath","pointInFlxRect",0x061f0269,"flixel.math.FlxMath.pointInFlxRect","flixel/math/FlxMath.hx",191,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_204_mouseInFlxRect,"flixel.math.FlxMath","mouseInFlxRect",0x130b3df4,"flixel.math.FlxMath.mouseInFlxRect","flixel/math/FlxMath.hx",204,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_231_pointInRectangle,"flixel.math.FlxMath","pointInRectangle",0x49240aa2,"flixel.math.FlxMath.pointInRectangle","flixel/math/FlxMath.hx",231,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_245_maxAdd,"flixel.math.FlxMath","maxAdd",0x4db55565,"flixel.math.FlxMath.maxAdd","flixel/math/FlxMath.hx",245,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_270_wrap,"flixel.math.FlxMath","wrap",0x057a3f52,"flixel.math.FlxMath.wrap","flixel/math/FlxMath.hx",270,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_291_remapToRange,"flixel.math.FlxMath","remapToRange",0x60fbca01,"flixel.math.FlxMath.remapToRange","flixel/math/FlxMath.hx",291,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_306_dotProduct,"flixel.math.FlxMath","dotProduct",0x8564032e,"flixel.math.FlxMath.dotProduct","flixel/math/FlxMath.hx",306,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_314_vectorLength,"flixel.math.FlxMath","vectorLength",0x2dfefb91,"flixel.math.FlxMath.vectorLength","flixel/math/FlxMath.hx",314,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_325_distanceBetween,"flixel.math.FlxMath","distanceBetween",0x58607e8b,"flixel.math.FlxMath.distanceBetween","flixel/math/FlxMath.hx",325,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_342_isDistanceWithin,"flixel.math.FlxMath","isDistanceWithin",0x44c72392,"flixel.math.FlxMath.isDistanceWithin","flixel/math/FlxMath.hx",342,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_361_distanceToPoint,"flixel.math.FlxMath","distanceToPoint",0x84c0ed98,"flixel.math.FlxMath.distanceToPoint","flixel/math/FlxMath.hx",361,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_380_isDistanceToPointWithin,"flixel.math.FlxMath","isDistanceToPointWithin",0xb54ac0d9,"flixel.math.FlxMath.isDistanceToPointWithin","flixel/math/FlxMath.hx",380,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_400_distanceToMouse,"flixel.math.FlxMath","distanceToMouse",0xca964f6d,"flixel.math.FlxMath.distanceToMouse","flixel/math/FlxMath.hx",400,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_416_isDistanceToMouseWithin,"flixel.math.FlxMath","isDistanceToMouseWithin",0xc43ab06e,"flixel.math.FlxMath.isDistanceToMouseWithin","flixel/math/FlxMath.hx",416,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_468_getDecimals,"flixel.math.FlxMath","getDecimals",0x764a48f0,"flixel.math.FlxMath.getDecimals","flixel/math/FlxMath.hx",468,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_482_equal,"flixel.math.FlxMath","equal",0x67aca12c,"flixel.math.FlxMath.equal","flixel/math/FlxMath.hx",482,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_490_signOf,"flixel.math.FlxMath","signOf",0x43f3963c,"flixel.math.FlxMath.signOf","flixel/math/FlxMath.hx",490,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_498_sameSign,"flixel.math.FlxMath","sameSign",0xc637544b,"flixel.math.FlxMath.sameSign","flixel/math/FlxMath.hx",498,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_509_fastSin,"flixel.math.FlxMath","fastSin",0xce873d54,"flixel.math.FlxMath.fastSin","flixel/math/FlxMath.hx",509,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_542_fastCos,"flixel.math.FlxMath","fastCos",0xce7b1e83,"flixel.math.FlxMath.fastCos","flixel/math/FlxMath.hx",542,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_550_sinh,"flixel.math.FlxMath","sinh",0x02ce9bd8,"flixel.math.FlxMath.sinh","flixel/math/FlxMath.hx",550,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_558_maxInt,"flixel.math.FlxMath","maxInt",0x4dbb7033,"flixel.math.FlxMath.maxInt","flixel/math/FlxMath.hx",558,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_566_minInt,"flixel.math.FlxMath","minInt",0xe253f205,"flixel.math.FlxMath.minInt","flixel/math/FlxMath.hx",566,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_574_absInt,"flixel.math.FlxMath","absInt",0x118b9f25,"flixel.math.FlxMath.absInt","flixel/math/FlxMath.hx",574,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_29_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",29,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_35_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",35,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_40_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",40,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_45_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",45,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_50_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",50,0x837802f8)
HX_LOCAL_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_55_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",55,0x837802f8)
namespace flixel{
namespace math{

void FlxMath_obj::__construct() { }

Dynamic FlxMath_obj::__CreateEmpty() { return new FlxMath_obj; }

void *FlxMath_obj::_hx_vtable = 0;

Dynamic FlxMath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMath_obj > _hx_result = new FlxMath_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a539556;
}

Float FlxMath_obj::MIN_VALUE_FLOAT;

Float FlxMath_obj::MAX_VALUE_FLOAT;

int FlxMath_obj::MIN_VALUE_INT;

int FlxMath_obj::MAX_VALUE_INT;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::EPSILON;

Float FlxMath_obj::roundDecimal(Float Value,int Precision){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_69_roundDecimal)
HXLINE(  70)		Float mult = ( (Float)(1) );
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			int _g1 = Precision;
HXDLIN(  71)			while((_g < _g1)){
HXLINE(  71)				_g = (_g + 1);
HXDLIN(  71)				int i = (_g - 1);
HXLINE(  73)				mult = (mult * ( (Float)(10) ));
            			}
            		}
HXLINE(  75)		return (::Math_obj::fround((Value * mult)) / mult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound(Float Value, ::Dynamic Min, ::Dynamic Max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_89_bound)
HXLINE(  90)		Float lowerBound;
HXDLIN(  90)		bool lowerBound1;
HXDLIN(  90)		if (::hx::IsNotNull( Min )) {
HXLINE(  90)			lowerBound1 = ::hx::IsLess( Value,Min );
            		}
            		else {
HXLINE(  90)			lowerBound1 = false;
            		}
HXDLIN(  90)		if (lowerBound1) {
HXLINE(  90)			lowerBound = ( (Float)(Min) );
            		}
            		else {
HXLINE(  90)			lowerBound = Value;
            		}
HXLINE(  91)		bool _hx_tmp;
HXDLIN(  91)		if (::hx::IsNotNull( Max )) {
HXLINE(  91)			_hx_tmp = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE(  91)			_hx_tmp = false;
            		}
HXDLIN(  91)		if (_hx_tmp) {
HXLINE(  91)			return ( (Float)(Max) );
            		}
            		else {
HXLINE(  91)			return lowerBound;
            		}
HXDLIN(  91)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp(Float a,Float b,Float ratio){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_109_lerp)
HXDLIN( 109)		return (a + (ratio * (b - a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds(Float Value, ::Dynamic Min, ::Dynamic Max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_122_inBounds)
HXDLIN( 122)		bool _hx_tmp;
HXDLIN( 122)		if (::hx::IsNotNull( Min )) {
HXDLIN( 122)			_hx_tmp = ::hx::IsGreaterEq( Value,Min );
            		}
            		else {
HXDLIN( 122)			_hx_tmp = true;
            		}
HXDLIN( 122)		if (_hx_tmp) {
HXDLIN( 122)			if (::hx::IsNotNull( Max )) {
HXDLIN( 122)				return ::hx::IsLessEq( Value,Max );
            			}
            			else {
HXDLIN( 122)				return true;
            			}
            		}
            		else {
HXDLIN( 122)			return false;
            		}
HXDLIN( 122)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_130_isOdd)
HXDLIN( 130)		return ((::Std_obj::_hx_int(n) & 1) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_138_isEven)
HXDLIN( 138)		return ((::Std_obj::_hx_int(n) & 1) == 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_145_numericComparison)
HXLINE( 146)		if ((b > a)) {
HXLINE( 148)			return -1;
            		}
            		else {
HXLINE( 150)			if ((a > b)) {
HXLINE( 152)				return 1;
            			}
            		}
HXLINE( 154)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates(Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_170_pointInCoordinates)
HXLINE( 171)		bool _hx_tmp;
HXDLIN( 171)		if ((pointX >= rectX)) {
HXLINE( 171)			_hx_tmp = (pointX <= (rectX + rectWidth));
            		}
            		else {
HXLINE( 171)			_hx_tmp = false;
            		}
HXDLIN( 171)		if (_hx_tmp) {
HXLINE( 173)			bool _hx_tmp;
HXDLIN( 173)			if ((pointY >= rectY)) {
HXLINE( 173)				_hx_tmp = (pointY <= (rectY + rectHeight));
            			}
            			else {
HXLINE( 173)				_hx_tmp = false;
            			}
HXDLIN( 173)			if (_hx_tmp) {
HXLINE( 175)				return true;
            			}
            		}
HXLINE( 178)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect(Float pointX,Float pointY, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_191_pointInFlxRect)
HXDLIN( 191)		bool _hx_tmp;
HXDLIN( 191)		bool _hx_tmp1;
HXDLIN( 191)		if ((pointX >= rect->x)) {
HXDLIN( 191)			_hx_tmp1 = (pointX <= (rect->x + rect->width));
            		}
            		else {
HXDLIN( 191)			_hx_tmp1 = false;
            		}
HXDLIN( 191)		if (_hx_tmp1) {
HXDLIN( 191)			_hx_tmp = (pointY >= rect->y);
            		}
            		else {
HXDLIN( 191)			_hx_tmp = false;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXDLIN( 191)			return (pointY <= (rect->y + rect->height));
            		}
            		else {
HXDLIN( 191)			return false;
            		}
HXDLIN( 191)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect(bool useWorldCoords, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_204_mouseInFlxRect)
HXLINE( 205)		if (::hx::IsNull( rect )) {
HXLINE( 207)			return true;
            		}
HXLINE( 210)		if (useWorldCoords) {
HXLINE( 212)			return ::flixel::math::FlxMath_obj::pointInFlxRect(( (Float)(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->x) ))) ),( (Float)(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->y) ))) ),rect);
            		}
            		else {
HXLINE( 216)			return ::flixel::math::FlxMath_obj::pointInFlxRect(( (Float)(::flixel::FlxG_obj::mouse->screenX) ),( (Float)(::flixel::FlxG_obj::mouse->screenY) ),rect);
            		}
HXLINE( 210)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle(Float pointX,Float pointY, ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_231_pointInRectangle)
HXDLIN( 231)		bool _hx_tmp;
HXDLIN( 231)		bool _hx_tmp1;
HXDLIN( 231)		if ((pointX >= rect->x)) {
HXDLIN( 231)			_hx_tmp1 = (pointX <= rect->get_right());
            		}
            		else {
HXDLIN( 231)			_hx_tmp1 = false;
            		}
HXDLIN( 231)		if (_hx_tmp1) {
HXDLIN( 231)			_hx_tmp = (pointY >= rect->y);
            		}
            		else {
HXDLIN( 231)			_hx_tmp = false;
            		}
HXDLIN( 231)		if (_hx_tmp) {
HXDLIN( 231)			return (pointY <= rect->get_bottom());
            		}
            		else {
HXDLIN( 231)			return false;
            		}
HXDLIN( 231)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd(int value,int amount,int max,::hx::Null< int >  __o_min){
            		int min = __o_min.Default(0);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_245_maxAdd)
HXLINE( 246)		value = (value + amount);
HXLINE( 248)		if ((value > max)) {
HXLINE( 250)			value = max;
            		}
            		else {
HXLINE( 252)			if ((value <= min)) {
HXLINE( 254)				value = min;
            			}
            		}
HXLINE( 257)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrap(int value,int min,int max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_270_wrap)
HXLINE( 271)		int range = ((max - min) + 1);
HXLINE( 273)		if ((value < min)) {
HXLINE( 274)			value = (value + (range * ::Std_obj::_hx_int(((( (Float)((min - value)) ) / ( (Float)(range) )) + 1))));
            		}
HXLINE( 276)		return (min + ::hx::Mod((value - min),range));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrap,return )

Float FlxMath_obj::remapToRange(Float value,Float start1,Float stop1,Float start2,Float stop2){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_291_remapToRange)
HXDLIN( 291)		return (start2 + ((value - start1) * ((stop2 - start2) / (stop1 - start1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxMath_obj,remapToRange,return )

Float FlxMath_obj::dotProduct(Float ax,Float ay,Float bx,Float by){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_306_dotProduct)
HXDLIN( 306)		return ((ax * bx) + (ay * by));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_314_vectorLength)
HXDLIN( 314)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_325_distanceBetween)
HXLINE( 326)		Float dx = ((SpriteA->x + SpriteA->origin->x) - (SpriteB->x + SpriteB->origin->x));
HXLINE( 327)		Float dy = ((SpriteA->y + SpriteA->origin->y) - (SpriteB->y + SpriteB->origin->y));
HXLINE( 328)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,Float Distance,::hx::Null< bool >  __o_IncludeEqual){
            		bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_342_isDistanceWithin)
HXLINE( 343)		Float dx = ((SpriteA->x + SpriteA->origin->x) - (SpriteB->x + SpriteB->origin->x));
HXLINE( 344)		Float dy = ((SpriteA->y + SpriteA->origin->y) - (SpriteB->y + SpriteB->origin->y));
HXLINE( 346)		if (IncludeEqual) {
HXLINE( 347)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 349)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 346)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Target){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_361_distanceToPoint)
HXLINE( 362)		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);
HXLINE( 363)		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);
HXLINE( 364)		if (Target->_weak) {
HXLINE( 364)			Target->put();
            		}
HXLINE( 365)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Target,Float Distance,::hx::Null< bool >  __o_IncludeEqual){
            		bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_380_isDistanceToPointWithin)
HXLINE( 381)		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);
HXLINE( 382)		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);
HXLINE( 384)		if (Target->_weak) {
HXLINE( 384)			Target->put();
            		}
HXLINE( 386)		if (IncludeEqual) {
HXLINE( 387)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 389)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 386)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_400_distanceToMouse)
HXLINE( 401)		Float dx = ((Sprite->x + Sprite->origin->x) - ( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXLINE( 402)		Float dy = ((Sprite->y + Sprite->origin->y) - ( (Float)(::flixel::FlxG_obj::mouse->screenY) ));
HXLINE( 403)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,::hx::Null< bool >  __o_IncludeEqual){
            		bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_416_isDistanceToMouseWithin)
HXLINE( 417)		Float dx = ((Sprite->x + Sprite->origin->x) - ( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXLINE( 418)		Float dy = ((Sprite->y + Sprite->origin->y) - ( (Float)(::flixel::FlxG_obj::mouse->screenY) ));
HXLINE( 420)		if (IncludeEqual) {
HXLINE( 421)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 423)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 420)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::getDecimals(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_468_getDecimals)
HXLINE( 469)		::Array< ::String > helperArray = ::Std_obj::string(n).split(HX_(".",2e,00,00,00));
HXLINE( 470)		int decimals = 0;
HXLINE( 472)		if ((helperArray->length > 1)) {
HXLINE( 474)			decimals = helperArray->__get(1).length;
            		}
HXLINE( 477)		return decimals;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal(Float aValueA,Float aValueB,::hx::Null< Float >  __o_aDiff){
            		Float aDiff = __o_aDiff.Default(((Float)0.0000001));
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_482_equal)
HXDLIN( 482)		return (::Math_obj::abs((aValueA - aValueB)) <= aDiff);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_490_signOf)
HXDLIN( 490)		if ((n < 0)) {
HXDLIN( 490)			return -1;
            		}
            		else {
HXDLIN( 490)			return 1;
            		}
HXDLIN( 490)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_498_sameSign)
HXDLIN( 498)		int _hx_tmp;
HXDLIN( 498)		if ((a < 0)) {
HXDLIN( 498)			_hx_tmp = -1;
            		}
            		else {
HXDLIN( 498)			_hx_tmp = 1;
            		}
HXDLIN( 498)		int _hx_tmp1;
HXDLIN( 498)		if ((b < 0)) {
HXDLIN( 498)			_hx_tmp1 = -1;
            		}
            		else {
HXDLIN( 498)			_hx_tmp1 = 1;
            		}
HXDLIN( 498)		return (_hx_tmp == _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )

Float FlxMath_obj::fastSin(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_509_fastSin)
HXLINE( 510)		n = (n * ((Float)0.3183098862));
HXLINE( 513)		if ((n > 1)) {
HXLINE( 515)			n = (n - ( (Float)(((::Math_obj::ceil(n) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 517)			if ((n < -1)) {
HXLINE( 519)				n = (n + ((::Math_obj::ceil(-(n)) >> 1) << 1));
            			}
            		}
HXLINE( 523)		if ((n > 0)) {
HXLINE( 525)			return (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 529)			return (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            		}
HXLINE( 523)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastSin,return )

Float FlxMath_obj::fastCos(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_542_fastCos)
HXDLIN( 542)		Float n1 = (n + ((Float)1.570796327));
HXDLIN( 542)		n1 = (n1 * ((Float)0.3183098862));
HXDLIN( 542)		if ((n1 > 1)) {
HXDLIN( 542)			n1 = (n1 - ( (Float)(((::Math_obj::ceil(n1) >> 1) << 1)) ));
            		}
            		else {
HXDLIN( 542)			if ((n1 < -1)) {
HXDLIN( 542)				n1 = (n1 + ((::Math_obj::ceil(-(n1)) >> 1) << 1));
            			}
            		}
HXDLIN( 542)		if ((n1 > 0)) {
HXDLIN( 542)			return (n1 * (((Float)3.1) + (n1 * (((Float)0.5) + (n1 * (((Float)-7.2) + (n1 * ((Float)3.6))))))));
            		}
            		else {
HXDLIN( 542)			return (n1 * (((Float)3.1) - (n1 * (((Float)0.5) + (n1 * (((Float)7.2) + (n1 * ((Float)3.6))))))));
            		}
HXDLIN( 542)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastCos,return )

Float FlxMath_obj::sinh(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_550_sinh)
HXDLIN( 550)		return ((::Math_obj::exp(n) - ::Math_obj::exp(-(n))) / ( (Float)(2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,sinh,return )

int FlxMath_obj::maxInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_558_maxInt)
HXDLIN( 558)		if ((a > b)) {
HXDLIN( 558)			return a;
            		}
            		else {
HXDLIN( 558)			return b;
            		}
HXDLIN( 558)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,maxInt,return )

int FlxMath_obj::minInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_566_minInt)
HXDLIN( 566)		if ((a > b)) {
HXDLIN( 566)			return b;
            		}
            		else {
HXDLIN( 566)			return a;
            		}
HXDLIN( 566)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,minInt,return )

int FlxMath_obj::absInt(int n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_574_absInt)
HXDLIN( 574)		if ((n > 0)) {
HXDLIN( 574)			return n;
            		}
            		else {
HXDLIN( 574)			return -(n);
            		}
HXDLIN( 574)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,absInt,return )


FlxMath_obj::FlxMath_obj()
{
}

bool FlxMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"wrap") ) { outValue = wrap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sinh") ) { outValue = sinh_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isOdd") ) { outValue = isOdd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equal") ) { outValue = equal_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { outValue = isEven_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { outValue = maxAdd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"signOf") ) { outValue = signOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxInt") ) { outValue = maxInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minInt") ) { outValue = minInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"absInt") ) { outValue = absInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastSin") ) { outValue = fastSin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fastCos") ) { outValue = fastCos_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { outValue = inBounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sameSign") ) { outValue = sameSign_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDecimals") ) { outValue = getDecimals_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { outValue = roundDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remapToRange") ) { outValue = remapToRange_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { outValue = vectorLength_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { outValue = pointInFlxRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { outValue = mouseInFlxRect_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { outValue = distanceBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { outValue = distanceToPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { outValue = distanceToMouse_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { outValue = pointInRectangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { outValue = isDistanceWithin_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { outValue = numericComparison_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { outValue = pointInCoordinates_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { outValue = isDistanceToPointWithin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { outValue = isDistanceToMouseWithin_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxMath_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxMath_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxMath_obj::MIN_VALUE_FLOAT,HX_("MIN_VALUE_FLOAT",41,8d,8c,66)},
	{::hx::fsFloat,(void *) &FlxMath_obj::MAX_VALUE_FLOAT,HX_("MAX_VALUE_FLOAT",53,d9,a6,0a)},
	{::hx::fsInt,(void *) &FlxMath_obj::MIN_VALUE_INT,HX_("MIN_VALUE_INT",54,4d,29,0b)},
	{::hx::fsInt,(void *) &FlxMath_obj::MAX_VALUE_INT,HX_("MAX_VALUE_INT",e6,10,de,05)},
	{::hx::fsFloat,(void *) &FlxMath_obj::SQUARE_ROOT_OF_TWO,HX_("SQUARE_ROOT_OF_TWO",df,00,e4,f7)},
	{::hx::fsFloat,(void *) &FlxMath_obj::EPSILON,HX_("EPSILON",4a,89,92,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxMath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_MARK_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#endif

::hx::Class FlxMath_obj::__mClass;

static ::String FlxMath_obj_sStaticFields[] = {
	HX_("MIN_VALUE_FLOAT",41,8d,8c,66),
	HX_("MAX_VALUE_FLOAT",53,d9,a6,0a),
	HX_("MIN_VALUE_INT",54,4d,29,0b),
	HX_("MAX_VALUE_INT",e6,10,de,05),
	HX_("SQUARE_ROOT_OF_TWO",df,00,e4,f7),
	HX_("EPSILON",4a,89,92,2c),
	HX_("roundDecimal",e3,a9,4c,b9),
	HX_("bound",3e,b0,fc,b6),
	HX_("lerp",77,12,b0,47),
	HX_("inBounds",3a,d0,9b,ee),
	HX_("isOdd",e5,bb,52,c1),
	HX_("isEven",24,34,83,60),
	HX_("numericComparison",76,e4,9e,70),
	HX_("pointInCoordinates",a6,48,07,bf),
	HX_("pointInFlxRect",e1,c2,a2,79),
	HX_("mouseInFlxRect",6c,fe,8e,86),
	HX_("pointInRectangle",1a,d9,72,75),
	HX_("maxAdd",dd,dd,47,be),
	HX_("wrap",ca,39,ff,4e),
	HX_("remapToRange",79,fc,33,70),
	HX_("dotProduct",a6,27,f0,3d),
	HX_("vectorLength",09,2e,37,3d),
	HX_("distanceBetween",13,27,25,f8),
	HX_("isDistanceWithin",0a,f2,15,71),
	HX_("distanceToPoint",20,96,85,24),
	HX_("isDistanceToPointWithin",61,31,37,36),
	HX_("distanceToMouse",f5,f7,5a,6a),
	HX_("isDistanceToMouseWithin",f6,20,27,45),
	HX_("getDecimals",78,0d,5e,38),
	HX_("equal",b4,cf,82,72),
	HX_("signOf",b4,1e,86,b4),
	HX_("sameSign",c3,ea,d6,66),
	HX_("fastSin",dc,1d,2c,de),
	HX_("fastCos",0b,ff,1f,de),
	HX_("sinh",50,96,53,4c),
	HX_("maxInt",ab,f8,4d,be),
	HX_("minInt",7d,7a,e6,52),
	HX_("absInt",9d,27,1e,82),
	::String(null())
};

void FlxMath_obj::__register()
{
	FlxMath_obj _hx_dummy;
	FlxMath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxMath",e6,47,47,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMath_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxMath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxMath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxMath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_29_boot)
HXDLIN(  29)		MIN_VALUE_FLOAT = ((Float)5e-324);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_35_boot)
HXDLIN(  35)		MAX_VALUE_FLOAT = ((Float)1.79e+308);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_40_boot)
HXDLIN(  40)		MIN_VALUE_INT = (int)-2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_45_boot)
HXDLIN(  45)		MAX_VALUE_INT = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_50_boot)
HXDLIN(  50)		SQUARE_ROOT_OF_TWO = ((Float)1.41421356237);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_55_boot)
HXDLIN(  55)		EPSILON = ((Float)0.0000001);
            	}
}

} // end namespace flixel
} // end namespace math
