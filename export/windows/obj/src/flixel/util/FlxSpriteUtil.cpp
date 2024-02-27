#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_58_alphaMask,"flixel.util.FlxSpriteUtil","alphaMask",0xaad6793b,"flixel.util.FlxSpriteUtil.alphaMask","flixel/util/FlxSpriteUtil.hx",58,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_87_alphaMaskFlxSprite,"flixel.util.FlxSpriteUtil","alphaMaskFlxSprite",0x13c0dd5c,"flixel.util.FlxSpriteUtil.alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",87,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_107_screenWrap,"flixel.util.FlxSpriteUtil","screenWrap",0x74418065,"flixel.util.FlxSpriteUtil.screenWrap","flixel/util/FlxSpriteUtil.hx",107,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_140_bound,"flixel.util.FlxSpriteUtil","bound",0x7d89918f,"flixel.util.FlxSpriteUtil.bound","flixel/util/FlxSpriteUtil.hx",140,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_169_cameraWrap,"flixel.util.FlxSpriteUtil","cameraWrap",0x62291c1e,"flixel.util.FlxSpriteUtil.cameraWrap","flixel/util/FlxSpriteUtil.hx",169,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_205_cameraBound,"flixel.util.FlxSpriteUtil","cameraBound",0x6878d76a,"flixel.util.FlxSpriteUtil.cameraBound","flixel/util/FlxSpriteUtil.hx",205,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_244_space,"flixel.util.FlxSpriteUtil","space",0x47f36e17,"flixel.util.FlxSpriteUtil.space","flixel/util/FlxSpriteUtil.hx",244,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_346_drawLine,"flixel.util.FlxSpriteUtil","drawLine",0x239cc967,"flixel.util.FlxSpriteUtil.drawLine","flixel/util/FlxSpriteUtil.hx",346,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_373_drawCurve,"flixel.util.FlxSpriteUtil","drawCurve",0xdee9dfdc,"flixel.util.FlxSpriteUtil.drawCurve","flixel/util/FlxSpriteUtil.hx",373,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_397_drawRect,"flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",397,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_421_drawRoundRect,"flixel.util.FlxSpriteUtil","drawRoundRect",0x00e2de3f,"flixel.util.FlxSpriteUtil.drawRoundRect","flixel/util/FlxSpriteUtil.hx",421,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_449_drawRoundRectComplex,"flixel.util.FlxSpriteUtil","drawRoundRectComplex",0xe28185b1,"flixel.util.FlxSpriteUtil.drawRoundRectComplex","flixel/util/FlxSpriteUtil.hx",449,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_471_drawCircle,"flixel.util.FlxSpriteUtil","drawCircle",0x44dca643,"flixel.util.FlxSpriteUtil.drawCircle","flixel/util/FlxSpriteUtil.hx",471,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_511_drawEllipse,"flixel.util.FlxSpriteUtil","drawEllipse",0x1204b94b,"flixel.util.FlxSpriteUtil.drawEllipse","flixel/util/FlxSpriteUtil.hx",511,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_532_drawTriangle,"flixel.util.FlxSpriteUtil","drawTriangle",0x35f0a5bb,"flixel.util.FlxSpriteUtil.drawTriangle","flixel/util/FlxSpriteUtil.hx",532,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_554_drawPolygon,"flixel.util.FlxSpriteUtil","drawPolygon",0x190f7ae7,"flixel.util.FlxSpriteUtil.drawPolygon","flixel/util/FlxSpriteUtil.hx",554,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_575_beginDraw,"flixel.util.FlxSpriteUtil","beginDraw",0x53d0689e,"flixel.util.FlxSpriteUtil.beginDraw","flixel/util/FlxSpriteUtil.hx",575,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_593_endDraw,"flixel.util.FlxSpriteUtil","endDraw",0x51197d10,"flixel.util.FlxSpriteUtil.endDraw","flixel/util/FlxSpriteUtil.hx",593,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_608_updateSpriteGraphic,"flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",608,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_632_setLineStyle,"flixel.util.FlxSpriteUtil","setLineStyle",0xc19fc36a,"flixel.util.FlxSpriteUtil.setLineStyle","flixel/util/FlxSpriteUtil.hx",632,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_654_getDefaultLineStyle,"flixel.util.FlxSpriteUtil","getDefaultLineStyle",0x36c9a563,"flixel.util.FlxSpriteUtil.getDefaultLineStyle","flixel/util/FlxSpriteUtil.hx",654,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_673_fill,"flixel.util.FlxSpriteUtil","fill",0x7a944252,"flixel.util.FlxSpriteUtil.fill","flixel/util/FlxSpriteUtil.hx",673,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_699_flicker,"flixel.util.FlxSpriteUtil","flicker",0xa3717289,"flixel.util.FlxSpriteUtil.flicker","flixel/util/FlxSpriteUtil.hx",699,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_709_isFlickering,"flixel.util.FlxSpriteUtil","isFlickering",0x05aae043,"flixel.util.FlxSpriteUtil.isFlickering","flixel/util/FlxSpriteUtil.hx",709,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_719_stopFlickering,"flixel.util.FlxSpriteUtil","stopFlickering",0x9d49141b,"flixel.util.FlxSpriteUtil.stopFlickering","flixel/util/FlxSpriteUtil.hx",719,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_737_fadeIn,"flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",737,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_732_fadeIn,"flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",732,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_750_fadeOut,"flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",750,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_749_fadeOut,"flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",749,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_756_alphaTween,"flixel.util.FlxSpriteUtil","alphaTween",0xe721b73c,"flixel.util.FlxSpriteUtil.alphaTween","flixel/util/FlxSpriteUtil.hx",756,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_768_setTint,"flixel.util.FlxSpriteUtil","setTint",0x3f05a54e,"flixel.util.FlxSpriteUtil.setTint","flixel/util/FlxSpriteUtil.hx",768,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_801_flashTint,"flixel.util.FlxSpriteUtil","flashTint",0xcc2d249c,"flixel.util.FlxSpriteUtil.flashTint","flixel/util/FlxSpriteUtil.hx",801,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_793_flashTint,"flixel.util.FlxSpriteUtil","flashTint",0xcc2d249c,"flixel.util.FlxSpriteUtil.flashTint","flixel/util/FlxSpriteUtil.hx",793,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_794_flashTint,"flixel.util.FlxSpriteUtil","flashTint",0xcc2d249c,"flixel.util.FlxSpriteUtil.flashTint","flixel/util/FlxSpriteUtil.hx",794,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_796_flashTint,"flixel.util.FlxSpriteUtil","flashTint",0xcc2d249c,"flixel.util.FlxSpriteUtil.flashTint","flixel/util/FlxSpriteUtil.hx",796,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_818_setBrightness,"flixel.util.FlxSpriteUtil","setBrightness",0x2521e664,"flixel.util.FlxSpriteUtil.setBrightness","flixel/util/FlxSpriteUtil.hx",818,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_40_boot,"flixel.util.FlxSpriteUtil","boot",0x77f3f801,"flixel.util.FlxSpriteUtil.boot","flixel/util/FlxSpriteUtil.hx",40,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_42_boot,"flixel.util.FlxSpriteUtil","boot",0x77f3f801,"flixel.util.FlxSpriteUtil.boot","flixel/util/FlxSpriteUtil.hx",42,0xc647097f)
namespace flixel{
namespace util{

void FlxSpriteUtil_obj::__construct() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return new FlxSpriteUtil_obj; }

void *FlxSpriteUtil_obj::_hx_vtable = 0;

Dynamic FlxSpriteUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSpriteUtil_obj > _hx_result = new FlxSpriteUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSpriteUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a1ec5f3;
}

 ::openfl::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

 ::openfl::display::Graphics FlxSpriteUtil_obj::flashGfx;

 ::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output, ::Dynamic source, ::Dynamic mask){
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_58_alphaMask)
HXLINE(  59)		 ::openfl::display::BitmapData data = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(source);
HXLINE(  60)		 ::openfl::display::BitmapData maskData = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(mask);
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if (::hx::IsNotNull( data )) {
HXLINE(  62)			_hx_tmp = ::hx::IsNull( maskData );
            		}
            		else {
HXLINE(  62)			_hx_tmp = true;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  64)			return null();
            		}
HXLINE(  67)		data = data->clone();
HXLINE(  68)		 ::openfl::geom::Rectangle _hx_tmp1 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,data->width,data->height);
HXDLIN(  68)		data->copyChannel(maskData,_hx_tmp1, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),8,8);
HXLINE(  69)		output->set_pixels(data);
HXLINE(  70)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite, ::flixel::FlxSprite mask, ::flixel::FlxSprite output){
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_87_alphaMaskFlxSprite)
HXLINE(  88)		sprite->drawFrame(null());
HXLINE(  89)		 ::openfl::display::BitmapData data = sprite->get_pixels()->clone();
HXLINE(  90)		 ::openfl::display::BitmapData _hx_tmp = mask->get_pixels();
HXDLIN(  90)		Float _hx_tmp1 = sprite->get_width();
HXDLIN(  90)		 ::openfl::geom::Rectangle _hx_tmp2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,_hx_tmp1,sprite->get_height());
HXDLIN(  90)		data->copyChannel(_hx_tmp,_hx_tmp2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),8,8);
HXLINE(  91)		output->set_pixels(data);
HXLINE(  92)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,::hx::Null< bool >  __o_Left,::hx::Null< bool >  __o_Right,::hx::Null< bool >  __o_Top,::hx::Null< bool >  __o_Bottom){
            		bool Left = __o_Left.Default(true);
            		bool Right = __o_Right.Default(true);
            		bool Top = __o_Top.Default(true);
            		bool Bottom = __o_Bottom.Default(true);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_107_screenWrap)
HXLINE( 108)		bool _hx_tmp;
HXDLIN( 108)		if (Left) {
HXLINE( 108)			_hx_tmp = ((sprite->x + (( (Float)(sprite->frameWidth) ) / ( (Float)(2) ))) <= 0);
            		}
            		else {
HXLINE( 108)			_hx_tmp = false;
            		}
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 110)			sprite->set_x(( (Float)(::flixel::FlxG_obj::width) ));
            		}
            		else {
HXLINE( 112)			bool _hx_tmp;
HXDLIN( 112)			if (Right) {
HXLINE( 112)				_hx_tmp = (sprite->x >= ::flixel::FlxG_obj::width);
            			}
            			else {
HXLINE( 112)				_hx_tmp = false;
            			}
HXDLIN( 112)			if (_hx_tmp) {
HXLINE( 114)				sprite->set_x(( (Float)(0) ));
            			}
            		}
HXLINE( 117)		bool _hx_tmp1;
HXDLIN( 117)		if (Top) {
HXLINE( 117)			_hx_tmp1 = ((sprite->y + (( (Float)(sprite->frameHeight) ) / ( (Float)(2) ))) <= 0);
            		}
            		else {
HXLINE( 117)			_hx_tmp1 = false;
            		}
HXDLIN( 117)		if (_hx_tmp1) {
HXLINE( 119)			sprite->set_y(( (Float)(::flixel::FlxG_obj::height) ));
            		}
            		else {
HXLINE( 121)			bool _hx_tmp;
HXDLIN( 121)			if (Bottom) {
HXLINE( 121)				_hx_tmp = (sprite->y >= ::flixel::FlxG_obj::height);
            			}
            			else {
HXLINE( 121)				_hx_tmp = false;
            			}
HXDLIN( 121)			if (_hx_tmp) {
HXLINE( 123)				sprite->set_y(( (Float)(0) ));
            			}
            		}
HXLINE( 125)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::bound( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_MinX,::hx::Null< Float >  __o_MaxX,::hx::Null< Float >  __o_MinY,::hx::Null< Float >  __o_MaxY){
            		Float MinX = __o_MinX.Default(0);
            		Float MaxX = __o_MaxX.Default(0);
            		Float MinY = __o_MinY.Default(0);
            		Float MaxY = __o_MaxY.Default(0);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_140_bound)
HXLINE( 141)		if ((MaxX <= 0)) {
HXLINE( 143)			MaxX = ( (Float)(::flixel::FlxG_obj::width) );
            		}
HXLINE( 145)		if ((MaxY <= 0)) {
HXLINE( 147)			MaxY = ( (Float)(::flixel::FlxG_obj::height) );
            		}
HXLINE( 150)		MaxX = (MaxX - ( (Float)(sprite->frameWidth) ));
HXLINE( 151)		MaxY = (MaxY - ( (Float)(sprite->frameHeight) ));
HXLINE( 153)		Float Value = sprite->x;
HXDLIN( 153)		Float lowerBound;
HXDLIN( 153)		bool lowerBound1;
HXDLIN( 153)		if (::hx::IsNotNull( MinX )) {
HXLINE( 153)			lowerBound1 = (Value < MinX);
            		}
            		else {
HXLINE( 153)			lowerBound1 = false;
            		}
HXDLIN( 153)		if (lowerBound1) {
HXLINE( 153)			lowerBound = MinX;
            		}
            		else {
HXLINE( 153)			lowerBound = Value;
            		}
HXDLIN( 153)		Float _hx_tmp;
HXDLIN( 153)		bool _hx_tmp1;
HXDLIN( 153)		if (::hx::IsNotNull( MaxX )) {
HXLINE( 153)			_hx_tmp1 = (lowerBound > MaxX);
            		}
            		else {
HXLINE( 153)			_hx_tmp1 = false;
            		}
HXDLIN( 153)		if (_hx_tmp1) {
HXLINE( 153)			_hx_tmp = MaxX;
            		}
            		else {
HXLINE( 153)			_hx_tmp = lowerBound;
            		}
HXDLIN( 153)		sprite->set_x(_hx_tmp);
HXLINE( 154)		Float Value1 = sprite->y;
HXDLIN( 154)		Float lowerBound2;
HXDLIN( 154)		bool lowerBound3;
HXDLIN( 154)		if (::hx::IsNotNull( MinY )) {
HXLINE( 154)			lowerBound3 = (Value1 < MinY);
            		}
            		else {
HXLINE( 154)			lowerBound3 = false;
            		}
HXDLIN( 154)		if (lowerBound3) {
HXLINE( 154)			lowerBound2 = MinY;
            		}
            		else {
HXLINE( 154)			lowerBound2 = Value1;
            		}
HXDLIN( 154)		Float _hx_tmp2;
HXDLIN( 154)		bool _hx_tmp3;
HXDLIN( 154)		if (::hx::IsNotNull( MaxY )) {
HXLINE( 154)			_hx_tmp3 = (lowerBound2 > MaxY);
            		}
            		else {
HXLINE( 154)			_hx_tmp3 = false;
            		}
HXDLIN( 154)		if (_hx_tmp3) {
HXLINE( 154)			_hx_tmp2 = MaxY;
            		}
            		else {
HXLINE( 154)			_hx_tmp2 = lowerBound2;
            		}
HXDLIN( 154)		sprite->set_y(_hx_tmp2);
HXLINE( 156)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,bound,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::cameraWrap( ::flixel::FlxSprite sprite, ::flixel::FlxCamera camera,::hx::Null< int >  __o_edges){
            		int edges = __o_edges.Default(4369);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_169_cameraWrap)
HXLINE( 170)		if (::hx::IsNull( camera )) {
HXLINE( 171)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 173)		 ::flixel::math::FlxRect spriteBounds = sprite->getScreenBounds(null(),camera);
HXLINE( 174)		Float x = ((sprite->x - spriteBounds->x) - camera->scroll->x);
HXDLIN( 174)		Float y = ((sprite->y - spriteBounds->y) - camera->scroll->y);
HXDLIN( 174)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 174)		point->_inPool = false;
HXDLIN( 174)		 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 179)		bool _hx_tmp;
HXDLIN( 179)		int dir = 1;
HXDLIN( 179)		if (((edges & dir) == dir)) {
HXLINE( 179)			_hx_tmp = ((spriteBounds->x + spriteBounds->width) < camera->viewMarginX);
            		}
            		else {
HXLINE( 179)			_hx_tmp = false;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 180)			sprite->set_x(((camera->scroll->x + (( (Float)(camera->width) ) - camera->viewMarginX)) + offset->x));
            		}
            		else {
HXLINE( 181)			bool _hx_tmp;
HXDLIN( 181)			int dir = 16;
HXDLIN( 181)			if (((edges & dir) == dir)) {
HXLINE( 181)				_hx_tmp = (spriteBounds->x > (( (Float)(camera->width) ) - camera->viewMarginX));
            			}
            			else {
HXLINE( 181)				_hx_tmp = false;
            			}
HXDLIN( 181)			if (_hx_tmp) {
HXLINE( 182)				sprite->set_x((((camera->scroll->x + camera->viewMarginX) + offset->x) - spriteBounds->width));
            			}
            		}
HXLINE( 184)		bool _hx_tmp1;
HXDLIN( 184)		int dir1 = 256;
HXDLIN( 184)		if (((edges & dir1) == dir1)) {
HXLINE( 184)			_hx_tmp1 = ((spriteBounds->y + spriteBounds->height) < camera->viewMarginY);
            		}
            		else {
HXLINE( 184)			_hx_tmp1 = false;
            		}
HXDLIN( 184)		if (_hx_tmp1) {
HXLINE( 185)			sprite->set_y(((camera->scroll->y + (( (Float)(camera->height) ) - camera->viewMarginY)) + offset->y));
            		}
            		else {
HXLINE( 186)			bool _hx_tmp;
HXDLIN( 186)			int dir = 4096;
HXDLIN( 186)			if (((edges & dir) == dir)) {
HXLINE( 186)				_hx_tmp = (spriteBounds->y > (( (Float)(camera->height) ) - camera->viewMarginY));
            			}
            			else {
HXLINE( 186)				_hx_tmp = false;
            			}
HXDLIN( 186)			if (_hx_tmp) {
HXLINE( 187)				sprite->set_y((((camera->scroll->y + camera->viewMarginY) + offset->y) - spriteBounds->height));
            			}
            		}
HXLINE( 189)		if (!(spriteBounds->_inPool)) {
HXLINE( 189)			spriteBounds->_inPool = true;
HXDLIN( 189)			spriteBounds->_weak = false;
HXDLIN( 189)			::flixel::math::FlxRect_obj::_pool->putUnsafe(spriteBounds);
            		}
HXLINE( 190)		offset->put();
HXLINE( 192)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,cameraWrap,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::cameraBound( ::flixel::FlxSprite sprite, ::flixel::FlxCamera camera,::hx::Null< int >  __o_edges){
            		int edges = __o_edges.Default(4369);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_205_cameraBound)
HXLINE( 206)		if (::hx::IsNull( camera )) {
HXLINE( 207)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 209)		 ::flixel::math::FlxRect spriteBounds = sprite->getScreenBounds(null(),camera);
HXLINE( 210)		Float x = ((sprite->x - spriteBounds->x) - camera->scroll->x);
HXDLIN( 210)		Float y = ((sprite->y - spriteBounds->y) - camera->scroll->y);
HXDLIN( 210)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 210)		point->_inPool = false;
HXDLIN( 210)		 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 215)		bool _hx_tmp;
HXDLIN( 215)		int dir = 1;
HXDLIN( 215)		if (((edges & dir) == dir)) {
HXLINE( 215)			_hx_tmp = (spriteBounds->x < camera->viewMarginX);
            		}
            		else {
HXLINE( 215)			_hx_tmp = false;
            		}
HXDLIN( 215)		if (_hx_tmp) {
HXLINE( 216)			sprite->set_x(((camera->scroll->x + camera->viewMarginX) + offset->x));
            		}
            		else {
HXLINE( 217)			bool _hx_tmp;
HXDLIN( 217)			int dir = 16;
HXDLIN( 217)			if (((edges & dir) == dir)) {
HXLINE( 217)				_hx_tmp = ((spriteBounds->x + spriteBounds->width) > (( (Float)(camera->width) ) - camera->viewMarginX));
            			}
            			else {
HXLINE( 217)				_hx_tmp = false;
            			}
HXDLIN( 217)			if (_hx_tmp) {
HXLINE( 218)				sprite->set_x((((camera->scroll->x + (( (Float)(camera->width) ) - camera->viewMarginX)) + offset->x) - spriteBounds->width));
            			}
            		}
HXLINE( 220)		bool _hx_tmp1;
HXDLIN( 220)		int dir1 = 256;
HXDLIN( 220)		if (((edges & dir1) == dir1)) {
HXLINE( 220)			_hx_tmp1 = (spriteBounds->y < camera->viewMarginY);
            		}
            		else {
HXLINE( 220)			_hx_tmp1 = false;
            		}
HXDLIN( 220)		if (_hx_tmp1) {
HXLINE( 221)			sprite->set_y(((camera->scroll->y + camera->viewMarginY) + offset->y));
            		}
            		else {
HXLINE( 222)			bool _hx_tmp;
HXDLIN( 222)			int dir = 4096;
HXDLIN( 222)			if (((edges & dir) == dir)) {
HXLINE( 222)				_hx_tmp = ((spriteBounds->y + spriteBounds->height) > (( (Float)(camera->height) ) - camera->viewMarginY));
            			}
            			else {
HXLINE( 222)				_hx_tmp = false;
            			}
HXDLIN( 222)			if (_hx_tmp) {
HXLINE( 223)				sprite->set_y((((camera->scroll->y + (( (Float)(camera->height) ) - camera->viewMarginY)) + offset->y) - spriteBounds->height));
            			}
            		}
HXLINE( 225)		if (!(spriteBounds->_inPool)) {
HXLINE( 225)			spriteBounds->_inPool = true;
HXDLIN( 225)			spriteBounds->_weak = false;
HXDLIN( 225)			::flixel::math::FlxRect_obj::_pool->putUnsafe(spriteBounds);
            		}
HXLINE( 226)		offset->put();
HXLINE( 228)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,cameraBound,return )

void FlxSpriteUtil_obj::space(::Array< ::Dynamic> objects,Float startX,Float startY, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing,::hx::Null< bool >  __o_spaceFromBounds, ::Dynamic position){
            		bool spaceFromBounds = __o_spaceFromBounds.Default(false);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_244_space)
HXLINE( 245)		Float prevWidth = ( (Float)(0) );
HXLINE( 246)		Float runningX = ( (Float)(0) );
HXLINE( 248)		if (::hx::IsNotNull( horizontalSpacing )) {
HXLINE( 250)			if (spaceFromBounds) {
HXLINE( 252)				prevWidth = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->get_width();
            			}
HXLINE( 254)			runningX = startX;
            		}
            		else {
HXLINE( 258)			runningX = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->x;
            		}
HXLINE( 261)		Float prevHeight = ( (Float)(0) );
HXLINE( 262)		Float runningY = ( (Float)(0) );
HXLINE( 264)		if (::hx::IsNotNull( verticalSpacing )) {
HXLINE( 266)			if (spaceFromBounds) {
HXLINE( 268)				prevHeight = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->get_height();
            			}
HXLINE( 270)			runningY = startY;
            		}
            		else {
HXLINE( 274)			runningY = objects->__get(0).StaticCast<  ::flixel::FlxObject >()->y;
            		}
HXLINE( 277)		if (::hx::IsNotNull( position )) {
HXLINE( 279)			position(objects->__get(0).StaticCast<  ::flixel::FlxObject >(),runningX,runningY);
            		}
            		else {
HXLINE( 283)			objects->__get(0).StaticCast<  ::flixel::FlxObject >()->set_x(runningX);
HXLINE( 284)			objects->__get(0).StaticCast<  ::flixel::FlxObject >()->set_y(runningY);
            		}
HXLINE( 287)		Float curX = ( (Float)(0) );
HXLINE( 288)		Float curY = ( (Float)(0) );
HXLINE( 290)		{
HXLINE( 290)			int _g = 1;
HXDLIN( 290)			int _g1 = objects->length;
HXDLIN( 290)			while((_g < _g1)){
HXLINE( 290)				_g = (_g + 1);
HXDLIN( 290)				int i = (_g - 1);
HXLINE( 292)				 ::flixel::FlxObject object = objects->__get(i).StaticCast<  ::flixel::FlxObject >();
HXLINE( 294)				if (::hx::IsNotNull( horizontalSpacing )) {
HXLINE( 296)					curX = ((runningX + prevWidth) + horizontalSpacing);
HXLINE( 297)					runningX = curX;
            				}
            				else {
HXLINE( 301)					curX = object->x;
            				}
HXLINE( 304)				if (::hx::IsNotNull( verticalSpacing )) {
HXLINE( 306)					curY = ((runningY + prevHeight) + verticalSpacing);
HXLINE( 307)					runningY = curY;
            				}
            				else {
HXLINE( 311)					curY = object->y;
            				}
HXLINE( 314)				if (::hx::IsNotNull( position )) {
HXLINE( 316)					position(object,curX,curY);
            				}
            				else {
HXLINE( 320)					object->set_x(curX);
HXLINE( 321)					object->set_y(curY);
            				}
HXLINE( 324)				if (spaceFromBounds) {
HXLINE( 326)					prevWidth = object->get_width();
HXLINE( 327)					prevHeight = object->get_height();
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,space,(void))

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY, ::Dynamic lineStyle, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_346_drawLine)
HXLINE( 347)		 ::Dynamic lineStyle1 = lineStyle;
HXDLIN( 347)		if (::hx::IsNull( lineStyle1 )) {
HXLINE( 347)			lineStyle1 =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("color",63,71,5c,4a),-1)
            				->setFixed(1,HX_("thickness",74,f1,66,5a),1));
            		}
HXDLIN( 347)		if (::hx::IsNull( lineStyle1->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 347)			lineStyle1->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            		}
HXDLIN( 347)		if (::hx::IsNull( lineStyle1->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 347)			lineStyle1->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            		}
HXDLIN( 347)		lineStyle = lineStyle1;
HXLINE( 348)		{
HXLINE( 348)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 348)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 348)				 ::Dynamic color;
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 348)					color = -16777216;
            				}
            				else {
HXLINE( 348)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 348)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 348)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 348)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 348)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 348)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 348)			if ((0 != 0)) {
HXLINE( 348)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((0 & 16777215),(( (Float)(((0 >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 349)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
HXLINE( 350)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(EndX,EndY);
HXLINE( 351)		{
HXLINE( 351)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 351)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 352)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawCurve( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Float ControlX,Float ControlY,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(0);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_373_drawCurve)
HXLINE( 374)		 ::Dynamic lineStyle1 = lineStyle;
HXDLIN( 374)		if (::hx::IsNull( lineStyle1 )) {
HXLINE( 374)			lineStyle1 =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("color",63,71,5c,4a),-1)
            				->setFixed(1,HX_("thickness",74,f1,66,5a),1));
            		}
HXDLIN( 374)		if (::hx::IsNull( lineStyle1->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 374)			lineStyle1->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            		}
HXDLIN( 374)		if (::hx::IsNull( lineStyle1->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 374)			lineStyle1->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            		}
HXDLIN( 374)		lineStyle = lineStyle1;
HXLINE( 375)		{
HXLINE( 375)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 375)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 375)				 ::Dynamic color;
HXDLIN( 375)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 375)					color = -16777216;
            				}
            				else {
HXLINE( 375)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 375)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 375)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 375)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 375)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 375)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 375)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 375)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 375)			if ((FillColor != 0)) {
HXLINE( 375)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 376)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
HXLINE( 377)		::flixel::util::FlxSpriteUtil_obj::flashGfx->curveTo(EndX,EndY,ControlX,ControlY);
HXLINE( 378)		{
HXLINE( 378)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 378)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 379)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawCurve,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_397_drawRect)
HXLINE( 398)		{
HXLINE( 398)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 398)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 398)				 ::Dynamic color;
HXDLIN( 398)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 398)					color = -16777216;
            				}
            				else {
HXLINE( 398)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 398)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 398)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 398)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 398)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 398)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 398)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 398)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 398)			if ((FillColor != 0)) {
HXLINE( 398)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 399)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
HXLINE( 400)		{
HXLINE( 400)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 400)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 401)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawRect,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_421_drawRoundRect)
HXLINE( 422)		{
HXLINE( 422)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 422)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 422)				 ::Dynamic color;
HXDLIN( 422)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 422)					color = -16777216;
            				}
            				else {
HXLINE( 422)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 422)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 422)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 422)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 422)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 422)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 422)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 422)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 422)			if ((FillColor != 0)) {
HXLINE( 422)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 423)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRect(X,Y,Width,Height,EllipseWidth,EllipseHeight);
HXLINE( 424)		{
HXLINE( 424)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 424)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 425)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawRoundRect,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRectComplex( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float TopLeftRadius,Float TopRightRadius,Float BottomLeftRadius,Float BottomRightRadius,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_449_drawRoundRectComplex)
HXLINE( 450)		{
HXLINE( 450)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 450)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 450)				 ::Dynamic color;
HXDLIN( 450)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 450)					color = -16777216;
            				}
            				else {
HXLINE( 450)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 450)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 450)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 450)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 450)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 450)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 450)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 450)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 450)			if ((FillColor != 0)) {
HXLINE( 450)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 451)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRectComplex(X,Y,Width,Height,TopLeftRadius,TopRightRadius,BottomLeftRadius,BottomRightRadius);
HXLINE( 452)		{
HXLINE( 452)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 452)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 453)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(FlxSpriteUtil_obj,drawRoundRectComplex,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Radius,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		Float X = __o_X.Default(-1);
            		Float Y = __o_Y.Default(-1);
            		Float Radius = __o_Radius.Default(-1);
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_471_drawCircle)
HXLINE( 472)		bool _hx_tmp;
HXDLIN( 472)		if ((X != -1)) {
HXLINE( 472)			_hx_tmp = (Y == -1);
            		}
            		else {
HXLINE( 472)			_hx_tmp = true;
            		}
HXDLIN( 472)		if (_hx_tmp) {
HXLINE( 474)			 ::flixel::math::FlxBasePoint midPoint = sprite->getGraphicMidpoint(null());
HXLINE( 476)			if ((X == -1)) {
HXLINE( 477)				X = (midPoint->x - sprite->x);
            			}
HXLINE( 478)			if ((Y == -1)) {
HXLINE( 479)				Y = (midPoint->y - sprite->y);
            			}
HXLINE( 481)			midPoint->put();
            		}
HXLINE( 484)		if ((Radius < 1)) {
HXLINE( 486)			Float minVal = ::Math_obj::min(( (Float)(sprite->frameWidth) ),( (Float)(sprite->frameHeight) ));
HXLINE( 487)			Radius = (minVal / ( (Float)(2) ));
            		}
HXLINE( 490)		{
HXLINE( 490)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 490)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 490)				 ::Dynamic color;
HXDLIN( 490)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 490)					color = -16777216;
            				}
            				else {
HXLINE( 490)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 490)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 490)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 490)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 490)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 490)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 490)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 490)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 490)			if ((FillColor != 0)) {
HXLINE( 490)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 491)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawCircle(X,Y,Radius);
HXLINE( 492)		{
HXLINE( 492)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 492)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 493)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawCircle,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_511_drawEllipse)
HXLINE( 512)		{
HXLINE( 512)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 512)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 512)				 ::Dynamic color;
HXDLIN( 512)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 512)					color = -16777216;
            				}
            				else {
HXLINE( 512)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 512)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 512)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 512)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 512)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 512)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 512)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 512)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 512)			if ((FillColor != 0)) {
HXLINE( 512)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 513)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawEllipse(X,Y,Width,Height);
HXLINE( 514)		{
HXLINE( 514)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 514)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 515)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawEllipse,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_532_drawTriangle)
HXLINE( 533)		{
HXLINE( 533)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 533)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 533)				 ::Dynamic color;
HXDLIN( 533)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 533)					color = -16777216;
            				}
            				else {
HXLINE( 533)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 533)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 533)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 533)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 533)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 533)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 533)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 533)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 533)			if ((FillColor != 0)) {
HXLINE( 533)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 534)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo((X + (Height / ( (Float)(2) ))),Y);
HXLINE( 535)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + Height),(Height + Y));
HXLINE( 536)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(X,(Height + Y));
HXLINE( 537)		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + (Height / ( (Float)(2) ))),Y);
HXLINE( 538)		{
HXLINE( 538)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 538)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 539)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawTriangle,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,::Array< ::Dynamic> Vertices,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_554_drawPolygon)
HXLINE( 555)		{
HXLINE( 555)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 555)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 555)				 ::Dynamic color;
HXDLIN( 555)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 555)					color = -16777216;
            				}
            				else {
HXLINE( 555)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 555)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 555)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 555)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 555)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 555)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 555)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 555)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 555)			if ((FillColor != 0)) {
HXLINE( 555)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 556)		 ::flixel::math::FlxBasePoint p = Vertices->shift().StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 557)		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(p->x,p->y);
HXLINE( 558)		{
HXLINE( 558)			int _g = 0;
HXDLIN( 558)			while((_g < Vertices->length)){
HXLINE( 558)				 ::flixel::math::FlxBasePoint p = Vertices->__get(_g).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN( 558)				_g = (_g + 1);
HXLINE( 560)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(p->x,p->y);
            			}
            		}
HXLINE( 562)		{
HXLINE( 562)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 562)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 563)		Vertices->unshift(p);
HXLINE( 564)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,drawPolygon,return )

void FlxSpriteUtil_obj::beginDraw(int FillColor, ::Dynamic lineStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_575_beginDraw)
HXLINE( 576)		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXLINE( 577)		if (::hx::IsNotNull( lineStyle )) {
HXLINE( 577)			 ::Dynamic color;
HXDLIN( 577)			if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 577)				color = -16777216;
            			}
            			else {
HXLINE( 577)				color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            			}
HXDLIN( 577)			if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 577)				lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            			}
HXDLIN( 577)			if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 577)				lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            			}
HXDLIN( 577)			if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 577)				lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            			}
HXDLIN( 577)			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            		}
HXLINE( 579)		if ((FillColor != 0)) {
HXLINE( 581)			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,beginDraw,(void))

 ::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_593_endDraw)
HXLINE( 594)		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXLINE( 595)		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
HXLINE( 596)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_608_updateSpriteGraphic)
HXLINE( 609)		if (::hx::IsNull( drawStyle )) {
HXLINE( 611)			drawStyle =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("smoothing",74,d5,e1,95),false));
            		}
            		else {
HXLINE( 613)			if (::hx::IsNull( drawStyle->__Field(HX_("smoothing",74,d5,e1,95),::hx::paccDynamic) )) {
HXLINE( 615)				drawStyle->__SetField(HX_("smoothing",74,d5,e1,95),false,::hx::paccDynamic);
            			}
            		}
HXLINE( 618)		sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,( ( ::openfl::geom::Matrix)(drawStyle->__Field(HX_("matrix",41,36,c8,bb),::hx::paccDynamic)) ),( ( ::openfl::geom::ColorTransform)(drawStyle->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic)) ),drawStyle->__Field(HX_("blendMode",54,e4,37,0c),::hx::paccDynamic),( ( ::openfl::geom::Rectangle)(drawStyle->__Field(HX_("clipRect",14,90,6a,58),::hx::paccDynamic)) ),drawStyle->__Field(HX_("smoothing",74,d5,e1,95),::hx::paccDynamic));
HXLINE( 619)		sprite->dirty = true;
HXLINE( 620)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

void FlxSpriteUtil_obj::setLineStyle( ::Dynamic lineStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_632_setLineStyle)
HXDLIN( 632)		if (::hx::IsNotNull( lineStyle )) {
HXLINE( 634)			 ::Dynamic color;
HXDLIN( 634)			if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 634)				color = -16777216;
            			}
            			else {
HXLINE( 634)				color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            			}
HXLINE( 636)			if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 637)				lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            			}
HXLINE( 638)			if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 639)				lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            			}
HXLINE( 640)			if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 641)				lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            			}
HXLINE( 643)			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

 ::Dynamic FlxSpriteUtil_obj::getDefaultLineStyle( ::Dynamic lineStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_654_getDefaultLineStyle)
HXLINE( 655)		if (::hx::IsNull( lineStyle )) {
HXLINE( 656)			lineStyle =  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("color",63,71,5c,4a),-1)
            				->setFixed(1,HX_("thickness",74,f1,66,5a),1));
            		}
HXLINE( 657)		if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 658)			lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            		}
HXLINE( 659)		if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 660)			lineStyle->__SetField(HX_("color",63,71,5c,4a),-1,::hx::paccDynamic);
            		}
HXLINE( 662)		return lineStyle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,getDefaultLineStyle,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int FillColor){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_673_fill)
HXLINE( 674)		 ::openfl::display::BitmapData _hx_tmp = sprite->get_pixels();
HXDLIN( 674)		_hx_tmp->fillRect(sprite->get_pixels()->rect,FillColor);
HXLINE( 676)		 ::openfl::display::BitmapData _hx_tmp1 = sprite->get_pixels();
HXDLIN( 676)		if (::hx::IsInstanceNotEq( _hx_tmp1,sprite->framePixels )) {
HXLINE( 678)			sprite->dirty = true;
            		}
HXLINE( 681)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

 ::flixel::effects::FlxFlicker FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,::hx::Null< Float >  __o_Duration,::hx::Null< Float >  __o_Interval,::hx::Null< bool >  __o_EndVisibility,::hx::Null< bool >  __o_ForceRestart, ::Dynamic CompletionCallback, ::Dynamic ProgressCallback){
            		Float Duration = __o_Duration.Default(1);
            		Float Interval = __o_Interval.Default(((Float)0.04));
            		bool EndVisibility = __o_EndVisibility.Default(true);
            		bool ForceRestart = __o_ForceRestart.Default(true);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_699_flicker)
HXDLIN( 699)		return ::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,CompletionCallback,ProgressCallback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_709_isFlickering)
HXDLIN( 709)		return ::flixel::effects::FlxFlicker_obj::isFlickering(Object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

 ::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_719_stopFlickering)
HXLINE( 720)		::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
HXLINE( 721)		return Object;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_Duration, ::Dynamic ResetAlpha, ::Dynamic OnComplete){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,sprite1) HXARGC(1)
            		void _hx_run(Float f){
            			HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_737_fadeIn)
HXLINE( 737)			::flixel::util::FlxSpriteUtil_obj::alphaTween(sprite1,f);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_732_fadeIn)
HXLINE( 733)		if (( (bool)(ResetAlpha) )) {
HXLINE( 735)			sprite->set_alpha(( (Float)(0) ));
            		}
HXLINE( 737)		 ::flixel::FlxSprite sprite1 = sprite;
HXDLIN( 737)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(sprite1));
HXDLIN( 737)		::flixel::tweens::FlxTween_obj::num(sprite->alpha,( (Float)(1) ),Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),OnComplete)),_hx_tmp);
HXLINE( 738)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,sprite1) HXARGC(1)
            		void _hx_run(Float f){
            			HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_750_fadeOut)
HXLINE( 750)			::flixel::util::FlxSpriteUtil_obj::alphaTween(sprite1,f);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_749_fadeOut)
HXLINE( 750)		 ::flixel::FlxSprite sprite1 = sprite;
HXDLIN( 750)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(sprite1));
HXDLIN( 750)		::flixel::tweens::FlxTween_obj::num(sprite->alpha,( (Float)(0) ),Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),OnComplete)),_hx_tmp);
HXLINE( 751)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,fadeOut,return )

void FlxSpriteUtil_obj::alphaTween( ::flixel::FlxSprite sprite,Float f){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_756_alphaTween)
HXDLIN( 756)		sprite->set_alpha(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,alphaTween,(void))

void FlxSpriteUtil_obj::setTint( ::flixel::FlxSprite sprite,int tint){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_768_setTint)
HXLINE( 769)		Float strength = (( (Float)(((tint >> 24) & 255)) ) / ( (Float)(255) ));
HXLINE( 775)		Float mult = (( (Float)(1) ) - strength);
HXLINE( 776)		sprite->setColorTransform(mult,mult,mult,((Float)1.0),::Math_obj::round((( (Float)(((tint >> 16) & 255)) ) * strength)),::Math_obj::round((( (Float)(((tint >> 8) & 255)) ) * strength)),::Math_obj::round((( (Float)((tint & 255)) ) * strength)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,setTint,(void))

 ::flixel::FlxSprite FlxSpriteUtil_obj::flashTint( ::flixel::FlxSprite sprite,::hx::Null< int >  __o_tint,::hx::Null< Float >  __o_duration, ::Dynamic func, ::Dynamic onComplete){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2,Float,strength,::Array< int >,color,::Array< ::Dynamic>,func1, ::flixel::FlxSprite,sprite) HXARGC(1)
            		void _hx_run(Float n){
            			HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_801_flashTint)
HXLINE( 802)			{
HXLINE( 802)				Float strength1 = strength;
HXDLIN( 802)				Float Value = (strength1 * ( (Float)(func1->__get(0)(n)) ));
HXDLIN( 802)				{
HXLINE( 802)					int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 802)					::Array< int > color1 = color;
HXDLIN( 802)					int _hx_tmp = 0;
HXDLIN( 802)					color1[_hx_tmp] = (color1->__get(_hx_tmp) & 16777215);
HXDLIN( 802)					::Array< int > color2 = color;
HXDLIN( 802)					int _hx_tmp1 = 0;
HXDLIN( 802)					int _hx_tmp2;
HXDLIN( 802)					if ((Value1 > 255)) {
HXLINE( 802)						_hx_tmp2 = 255;
            					}
            					else {
HXLINE( 802)						if ((Value1 < 0)) {
HXLINE( 802)							_hx_tmp2 = 0;
            						}
            						else {
HXLINE( 802)							_hx_tmp2 = Value1;
            						}
            					}
HXDLIN( 802)					color2[_hx_tmp1] = (color2->__get(_hx_tmp1) | (_hx_tmp2 << 24));
            				}
            			}
HXLINE( 803)			{
HXLINE( 803)				Float strength2 = (( (Float)(((color->__get(0) >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 803)				Float mult = (( (Float)(1) ) - strength2);
HXDLIN( 803)				sprite->setColorTransform(mult,mult,mult,((Float)1.0),::Math_obj::round((( (Float)(((color->__get(0) >> 16) & 255)) ) * strength2)),::Math_obj::round((( (Float)(((color->__get(0) >> 8) & 255)) ) * strength2)),::Math_obj::round((( (Float)((color->__get(0) & 255)) ) * strength2)),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int tint = __o_tint.Default(-1);
            		Float duration = __o_duration.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_793_flashTint)
HXDLIN( 793)		::Array< ::Dynamic> func1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,func);
HXLINE( 794)		 ::Dynamic options;
HXDLIN( 794)		if (::hx::IsNotNull( onComplete )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween _){
            				HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_794_flashTint)
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 794)			options =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0())));
            		}
            		else {
HXLINE( 794)			options = null();
            		}
HXLINE( 795)		if (::hx::IsNull( func1->__get(0) )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			Float _hx_run(Float n){
            				HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_796_flashTint)
HXLINE( 796)				return (( (Float)(1) ) - -((::Math_obj::sqrt((( (Float)(1) ) - (n * n))) - ( (Float)(1) ))));
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 796)			func1[0] =  ::Dynamic(new _hx_Closure_1());
            		}
HXLINE( 798)		::Array< int > color = ::Array_obj< int >::__new(1)->init(0,(tint & 16777215));
HXLINE( 799)		Float strength = (( (Float)(((tint >> 24) & 255)) ) / ( (Float)(255) ));
HXLINE( 800)		::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),duration,options, ::Dynamic(new _hx_Closure_2(strength,color,func1,sprite)));
HXLINE( 806)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,flashTint,return )

void FlxSpriteUtil_obj::setBrightness( ::flixel::FlxSprite sprite,Float brightness){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_818_setBrightness)
HXLINE( 819)		Float mult = (((Float)1.0) - ::Math_obj::abs(brightness));
HXLINE( 820)		int offset = ::Math_obj::round(::Math_obj::max(( (Float)(0) ),(( (Float)(255) ) * brightness)));
HXLINE( 821)		sprite->setColorTransform(mult,mult,mult,((Float)1.0),offset,offset,offset,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,setBrightness,(void))


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

bool FlxSpriteUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { outValue = fill_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { outValue = fadeIn_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { outValue = endDraw_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flicker") ) { outValue = flicker_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { outValue = fadeOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setTint") ) { outValue = setTint_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { outValue = ( flashGfx ); return true; }
		if (HX_FIELD_EQ(inName,"drawLine") ) { outValue = drawLine_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawRect") ) { outValue = drawRect_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { outValue = alphaMask_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { outValue = drawCurve_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { outValue = beginDraw_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flashTint") ) { outValue = flashTint_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { outValue = screenWrap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cameraWrap") ) { outValue = cameraWrap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { outValue = drawCircle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"alphaTween") ) { outValue = alphaTween_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraBound") ) { outValue = cameraBound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { outValue = drawEllipse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { outValue = drawPolygon_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { outValue = drawTriangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { outValue = setLineStyle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { outValue = isFlickering_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setBrightness") ) { outValue = setBrightness_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { outValue = ( flashGfxSprite ); return true; }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { outValue = stopFlickering_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { outValue = alphaMaskFlxSprite_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { outValue = updateSpriteGraphic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDefaultLineStyle") ) { outValue = getDefaultLineStyle_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { outValue = drawRoundRectComplex_dyn(); return true; }
	}
	return false;
}

bool FlxSpriteUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=ioValue.Cast<  ::openfl::display::Sprite >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSpriteUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxSpriteUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(void *) &FlxSpriteUtil_obj::flashGfxSprite,HX_("flashGfxSprite",8e,26,3f,ab)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &FlxSpriteUtil_obj::flashGfx,HX_("flashGfx",a9,b1,ce,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxSpriteUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSpriteUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

::hx::Class FlxSpriteUtil_obj::__mClass;

static ::String FlxSpriteUtil_obj_sStaticFields[] = {
	HX_("flashGfxSprite",8e,26,3f,ab),
	HX_("flashGfx",a9,b1,ce,99),
	HX_("alphaMask",6a,1b,50,e2),
	HX_("alphaMaskFlxSprite",4d,fd,ae,12),
	HX_("screenWrap",56,c7,35,c7),
	HX_("bound",3e,b0,fc,b6),
	HX_("cameraWrap",0f,63,1d,b5),
	HX_("cameraBound",59,a3,42,ab),
	HX_("space",c6,8c,66,81),
	HX_("drawLine",18,c2,1c,5c),
	HX_("drawCurve",0b,82,63,16),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawRoundRectComplex",e2,43,2c,11),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawTriangle",ec,4a,b9,63),
	HX_("drawPolygon",d6,46,d9,5b),
	HX_("beginDraw",cd,0a,4a,8b),
	HX_("endDraw",7f,e5,94,24),
	HX_("updateSpriteGraphic",5a,59,f9,55),
	HX_("setLineStyle",9b,68,68,ef),
	HX_("getDefaultLineStyle",52,78,37,48),
	HX_("fill",83,ce,bb,43),
	HX_("flicker",f8,da,ec,76),
	HX_("isFlickering",74,85,73,33),
	HX_("stopFlickering",8c,27,6a,4a),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("fadeOut",72,38,3c,31),
	HX_("alphaTween",2d,fe,15,3a),
	HX_("setTint",bd,0d,81,12),
	HX_("flashTint",cb,c6,a6,03),
	HX_("setBrightness",13,cc,e9,06),
	::String(null())
};

void FlxSpriteUtil_obj::__register()
{
	FlxSpriteUtil_obj _hx_dummy;
	FlxSpriteUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSpriteUtil",ff,7e,4e,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSpriteUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSpriteUtil_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSpriteUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSpriteUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxSpriteUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSpriteUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSpriteUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSpriteUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSpriteUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_40_boot)
HXDLIN(  40)		flashGfxSprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_42_boot)
HXDLIN(  42)		flashGfx = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
            	}
}

} // end namespace flixel
} // end namespace util
