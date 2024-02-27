#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
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
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36781f4cf25b4c07_27_new,"flixel.graphics.frames.FlxImageFrame","new",0xda56055f,"flixel.graphics.frames.FlxImageFrame.new","flixel/graphics/frames/FlxImageFrame.hx",27,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_211_equals,"flixel.graphics.frames.FlxImageFrame","equals",0x9ad6a2a0,"flixel.graphics.frames.FlxImageFrame.equals","flixel/graphics/frames/FlxImageFrame.hx",211,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_236_addBorder,"flixel.graphics.frames.FlxImageFrame","addBorder",0x2bc1002c,"flixel.graphics.frames.FlxImageFrame.addBorder","flixel/graphics/frames/FlxImageFrame.hx",236,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_249_destroy,"flixel.graphics.frames.FlxImageFrame","destroy",0xd0e04d79,"flixel.graphics.frames.FlxImageFrame.destroy","flixel/graphics/frames/FlxImageFrame.hx",249,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_256_get_frame,"flixel.graphics.frames.FlxImageFrame","get_frame",0x59af52c3,"flixel.graphics.frames.FlxImageFrame.get_frame","flixel/graphics/frames/FlxImageFrame.hx",256,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_39_fromEmptyFrame,"flixel.graphics.frames.FlxImageFrame","fromEmptyFrame",0x20331dcb,"flixel.graphics.frames.FlxImageFrame.fromEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",39,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_61_fromFrame,"flixel.graphics.frames.FlxImageFrame","fromFrame",0xca8ee0a2,"flixel.graphics.frames.FlxImageFrame.fromFrame","flixel/graphics/frames/FlxImageFrame.hx",61,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_82_fromImage,"flixel.graphics.frames.FlxImageFrame","fromImage",0x817487d0,"flixel.graphics.frames.FlxImageFrame.fromImage","flixel/graphics/frames/FlxImageFrame.hx",82,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_93_fromGraphic,"flixel.graphics.frames.FlxImageFrame","fromGraphic",0xe0158a5d,"flixel.graphics.frames.FlxImageFrame.fromGraphic","flixel/graphics/frames/FlxImageFrame.hx",93,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_135_fromRectangle,"flixel.graphics.frames.FlxImageFrame","fromRectangle",0x493e1b24,"flixel.graphics.frames.FlxImageFrame.fromRectangle","flixel/graphics/frames/FlxImageFrame.hx",135,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_151_fromBitmapAddSpacesAndBorders,"flixel.graphics.frames.FlxImageFrame","fromBitmapAddSpacesAndBorders",0x2600d1c4,"flixel.graphics.frames.FlxImageFrame.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",151,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_177_fromFrameAddSpacesAndBorders,"flixel.graphics.frames.FlxImageFrame","fromFrameAddSpacesAndBorders",0x6359dbfc,"flixel.graphics.frames.FlxImageFrame.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",177,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_192_findFrame,"flixel.graphics.frames.FlxImageFrame","findFrame",0x04fd2773,"flixel.graphics.frames.FlxImageFrame.findFrame","flixel/graphics/frames/FlxImageFrame.hx",192,0x94146112)
HX_LOCAL_STACK_FRAME(_hx_pos_36781f4cf25b4c07_222_findEmptyFrame,"flixel.graphics.frames.FlxImageFrame","findEmptyFrame",0xe2dd815a,"flixel.graphics.frames.FlxImageFrame.findEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",222,0x94146112)
namespace flixel{
namespace graphics{
namespace frames{

void FlxImageFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_27_new)
HXDLIN(  27)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn(),border);
            	}

Dynamic FlxImageFrame_obj::__CreateEmpty() { return new FlxImageFrame_obj; }

void *FlxImageFrame_obj::_hx_vtable = 0;

Dynamic FlxImageFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxImageFrame_obj > _hx_result = new FlxImageFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxImageFrame_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x071ccbb3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x071ccbb3;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

bool FlxImageFrame_obj::equals( ::flixel::math::FlxRect rect, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_211_equals)
HXDLIN( 211)		 ::flixel::math::FlxRect rect1 = this->get_frame()->frame;
HXDLIN( 211)		bool result;
HXDLIN( 211)		bool result1;
HXDLIN( 211)		bool result2;
HXDLIN( 211)		if ((::Math_obj::abs((rect->x - rect1->x)) <= ((Float)0.0000001))) {
HXDLIN( 211)			result2 = (::Math_obj::abs((rect->y - rect1->y)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN( 211)			result2 = false;
            		}
HXDLIN( 211)		if (result2) {
HXDLIN( 211)			result1 = (::Math_obj::abs((rect->width - rect1->width)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN( 211)			result1 = false;
            		}
HXDLIN( 211)		if (result1) {
HXDLIN( 211)			result = (::Math_obj::abs((rect->height - rect1->height)) <= ((Float)0.0000001));
            		}
            		else {
HXDLIN( 211)			result = false;
            		}
HXDLIN( 211)		if (rect1->_weak) {
HXDLIN( 211)			if (!(rect1->_inPool)) {
HXDLIN( 211)				rect1->_inPool = true;
HXDLIN( 211)				rect1->_weak = false;
HXDLIN( 211)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect1);
            			}
            		}
HXDLIN( 211)		if (result) {
HXDLIN( 211)			 ::flixel::math::FlxBasePoint point = this->border;
HXDLIN( 211)			bool result;
HXDLIN( 211)			if ((::Math_obj::abs((border->x - point->x)) <= ((Float)0.0000001))) {
HXDLIN( 211)				result = (::Math_obj::abs((border->y - point->y)) <= ((Float)0.0000001));
            			}
            			else {
HXDLIN( 211)				result = false;
            			}
HXDLIN( 211)			if (point->_weak) {
HXDLIN( 211)				point->put();
            			}
HXDLIN( 211)			return result;
            		}
            		else {
HXDLIN( 211)			return false;
            		}
HXDLIN( 211)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,equals,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxImageFrame_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_236_addBorder)
HXLINE( 237)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 237)		point->_inPool = false;
HXDLIN( 237)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 237)		point1->_weak = true;
HXDLIN( 237)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 237)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 237)		{
HXLINE( 237)			Float y = point2->y;
HXDLIN( 237)			this1->set_x((this1->x + point2->x));
HXDLIN( 237)			this1->set_y((this1->y + y));
            		}
HXDLIN( 237)		if (point2->_weak) {
HXLINE( 237)			point2->put();
            		}
HXDLIN( 237)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 237)		{
HXLINE( 237)			Float y1 = border->y;
HXDLIN( 237)			this2->set_x((this2->x + border->x));
HXDLIN( 237)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 237)		if (border->_weak) {
HXLINE( 237)			border->put();
            		}
HXDLIN( 237)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 239)		 ::flixel::graphics::FlxGraphic imageFrame = this->parent;
HXDLIN( 239)		 ::flixel::graphics::frames::FlxImageFrame imageFrame1 = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(imageFrame,this->get_frame()->frame,resultBorder);
HXLINE( 240)		if (::hx::IsNotNull( imageFrame1 )) {
HXLINE( 241)			return imageFrame1;
            		}
HXLINE( 243)		imageFrame1 =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 244)		imageFrame1->pushFrame(this->get_frame()->setBorderTo(border,null()),null());
HXLINE( 245)		return imageFrame1;
            	}


void FlxImageFrame_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_249_destroy)
HXLINE( 250)		this->super::destroy();
HXLINE( 251)		::flixel::util::FlxDestroyUtil_obj::destroy(this->get_frame());
            	}


 ::flixel::graphics::frames::FlxFrame FlxImageFrame_obj::get_frame(){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_256_get_frame)
HXDLIN( 256)		return this->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxImageFrame_obj,get_frame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_39_fromEmptyFrame)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::hx::IsNotNull( graphic )) {
HXLINE(  40)			_hx_tmp = ::hx::IsNull( frameRect );
            		}
            		else {
HXLINE(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return null();
            		}
HXLINE(  44)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findEmptyFrame(graphic,frameRect);
HXLINE(  45)		if (::hx::IsNotNull( imageFrame )) {
HXLINE(  46)			return imageFrame;
            		}
HXLINE(  49)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  50)		imageFrame->addEmptyFrame(frameRect);
HXLINE(  51)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromEmptyFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrame( ::flixel::graphics::frames::FlxFrame source){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_61_fromFrame)
HXLINE(  62)		 ::flixel::graphics::FlxGraphic graphic = source->parent;
HXLINE(  63)		 ::flixel::math::FlxRect rect = source->frame;
HXLINE(  65)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,rect,null());
HXLINE(  66)		if (::hx::IsNotNull( imageFrame )) {
HXLINE(  67)			return imageFrame;
            		}
HXLINE(  69)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  70)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  70)		_this->x = ( (Float)(0) );
HXDLIN(  70)		_this->y = ( (Float)(0) );
HXDLIN(  70)		_this->width = ( (Float)(0) );
HXDLIN(  70)		_this->height = ( (Float)(0) );
HXDLIN(  70)		 ::flixel::math::FlxRect rect1 = _this;
HXDLIN(  70)		rect1->_inPool = false;
HXDLIN(  70)		 ::flixel::math::FlxRect Rect = rect1;
HXDLIN(  70)		Rect->x = rect->x;
HXDLIN(  70)		Rect->y = rect->y;
HXDLIN(  70)		Rect->width = rect->width;
HXDLIN(  70)		Rect->height = rect->height;
HXDLIN(  70)		if (Rect->_weak) {
HXLINE(  70)			if (!(Rect->_inPool)) {
HXLINE(  70)				Rect->_inPool = true;
HXDLIN(  70)				Rect->_weak = false;
HXDLIN(  70)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN(  70)		imageFrame->addSpriteSheetFrame(Rect);
HXLINE(  71)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromImage( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_82_fromImage)
HXDLIN(  82)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(source,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromImage,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_36781f4cf25b4c07_93_fromGraphic)
HXLINE(  94)		if (::hx::IsNull( graphic )) {
HXLINE(  95)			return null();
            		}
HXLINE(  98)		 ::flixel::math::FlxRect checkRegion = region;
HXLINE( 100)		if (::hx::IsNull( checkRegion )) {
HXLINE( 101)			Float Width = ( (Float)(graphic->width) );
HXDLIN( 101)			Float Height = ( (Float)(graphic->height) );
HXDLIN( 101)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 101)			_this->x = ( (Float)(0) );
HXDLIN( 101)			_this->y = ( (Float)(0) );
HXDLIN( 101)			_this->width = Width;
HXDLIN( 101)			_this->height = Height;
HXDLIN( 101)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 101)			rect->_inPool = false;
HXDLIN( 101)			 ::flixel::math::FlxRect rect1 = rect;
HXDLIN( 101)			rect1->_weak = true;
HXDLIN( 101)			checkRegion = rect1;
            		}
HXLINE( 103)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,checkRegion,null());
HXLINE( 104)		if (::hx::IsNotNull( imageFrame )) {
HXLINE( 105)			return imageFrame;
            		}
HXLINE( 108)		imageFrame =  ::flixel::graphics::frames::FlxImageFrame_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 110)		if (::hx::IsNull( region )) {
HXLINE( 112)			Float Width = ( (Float)(graphic->width) );
HXDLIN( 112)			Float Height = ( (Float)(graphic->height) );
HXDLIN( 112)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 112)			_this->x = ( (Float)(0) );
HXDLIN( 112)			_this->y = ( (Float)(0) );
HXDLIN( 112)			_this->width = Width;
HXDLIN( 112)			_this->height = Height;
HXDLIN( 112)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 112)			rect->_inPool = false;
HXDLIN( 112)			region = rect;
            		}
            		else {
HXLINE( 116)			if ((region->width == 0)) {
HXLINE( 117)				region->width = (( (Float)(graphic->width) ) - region->x);
            			}
HXLINE( 119)			if ((region->height == 0)) {
HXLINE( 120)				region->height = (( (Float)(graphic->height) ) - region->y);
            			}
            		}
HXLINE( 123)		imageFrame->addSpriteSheetFrame(region);
HXLINE( 124)		return imageFrame;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromGraphic,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromRectangle( ::Dynamic source, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_135_fromRectangle)
HXLINE( 136)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 137)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,region);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromRectangle,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromBitmapAddSpacesAndBorders( ::Dynamic source, ::flixel::math::FlxBasePoint border, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_151_fromBitmapAddSpacesAndBorders)
HXLINE( 152)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 153)		if (::hx::IsNull( graphic )) {
HXLINE( 154)			return null();
            		}
HXLINE( 156)		::String key = ::flixel::FlxG_obj::bitmap->getKeyWithSpacesAndBorders(graphic->key,null(),null(),border,region);
HXLINE( 157)		 ::flixel::graphics::FlxGraphic result = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 158)		if (::hx::IsNull( result )) {
HXLINE( 160)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(graphic->bitmap,null(),null(),border,region);
HXLINE( 161)			result = ::flixel::FlxG_obj::bitmap->add(bitmap,false,key);
            		}
HXLINE( 164)		 ::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,null());
HXLINE( 165)		return Dynamic( imageFrame->addBorder(border)).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,fromBitmapAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_177_fromFrameAddSpacesAndBorders)
HXLINE( 178)		 ::openfl::display::BitmapData bitmap = frame->paint(null(),null(),null(),null());
HXLINE( 179)		return ::flixel::graphics::frames::FlxImageFrame_obj::fromBitmapAddSpacesAndBorders(bitmap,border,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromFrameAddSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect, ::flixel::math::FlxBasePoint frameBorder){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_192_findFrame)
HXLINE( 193)		if (::hx::IsNull( frameBorder )) {
HXLINE( 194)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 194)			point->_inPool = false;
HXDLIN( 194)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 194)			point1->_weak = true;
HXDLIN( 194)			frameBorder = point1;
            		}
HXLINE( 196)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn();
HXDLIN( 196)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 196)		if (::hx::IsNull( collections )) {
HXLINE( 196)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 196)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 196)		::Array< ::Dynamic> imageFrames = collections;
HXLINE( 197)		{
HXLINE( 197)			int _g = 0;
HXDLIN( 197)			while((_g < imageFrames->length)){
HXLINE( 197)				 ::flixel::graphics::frames::FlxImageFrame imageFrame = imageFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
HXDLIN( 197)				_g = (_g + 1);
HXLINE( 199)				bool _hx_tmp;
HXDLIN( 199)				bool _hx_tmp1;
HXDLIN( 199)				 ::flixel::math::FlxRect rect = imageFrame->get_frame()->frame;
HXDLIN( 199)				bool result;
HXDLIN( 199)				bool result1;
HXDLIN( 199)				bool result2;
HXDLIN( 199)				if ((::Math_obj::abs((frameRect->x - rect->x)) <= ((Float)0.0000001))) {
HXLINE( 199)					result2 = (::Math_obj::abs((frameRect->y - rect->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 199)					result2 = false;
            				}
HXDLIN( 199)				if (result2) {
HXLINE( 199)					result1 = (::Math_obj::abs((frameRect->width - rect->width)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 199)					result1 = false;
            				}
HXDLIN( 199)				if (result1) {
HXLINE( 199)					result = (::Math_obj::abs((frameRect->height - rect->height)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 199)					result = false;
            				}
HXDLIN( 199)				if (rect->_weak) {
HXLINE( 199)					if (!(rect->_inPool)) {
HXLINE( 199)						rect->_inPool = true;
HXDLIN( 199)						rect->_weak = false;
HXDLIN( 199)						::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            					}
            				}
HXDLIN( 199)				if (result) {
HXLINE( 199)					 ::flixel::math::FlxBasePoint point = imageFrame->border;
HXDLIN( 199)					bool result;
HXDLIN( 199)					if ((::Math_obj::abs((frameBorder->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 199)						result = (::Math_obj::abs((frameBorder->y - point->y)) <= ((Float)0.0000001));
            					}
            					else {
HXLINE( 199)						result = false;
            					}
HXDLIN( 199)					if (point->_weak) {
HXLINE( 199)						point->put();
            					}
HXDLIN( 199)					_hx_tmp1 = result;
            				}
            				else {
HXLINE( 199)					_hx_tmp1 = false;
            				}
HXDLIN( 199)				if (_hx_tmp1) {
HXLINE( 199)					_hx_tmp = (imageFrame->get_frame()->type != 2);
            				}
            				else {
HXLINE( 199)					_hx_tmp = false;
            				}
HXDLIN( 199)				if (_hx_tmp) {
HXLINE( 200)					return imageFrame;
            				}
            			}
            		}
HXLINE( 203)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,findFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect){
            	HX_STACKFRAME(&_hx_pos_36781f4cf25b4c07_222_findEmptyFrame)
HXLINE( 223)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE_dyn();
HXDLIN( 223)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 223)		if (::hx::IsNull( collections )) {
HXLINE( 223)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 223)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 223)		::Array< ::Dynamic> imageFrames = collections;
HXLINE( 225)		{
HXLINE( 225)			int _g = 0;
HXDLIN( 225)			while((_g < imageFrames->length)){
HXLINE( 225)				 ::flixel::graphics::frames::FlxImageFrame imageFrame = imageFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxImageFrame >();
HXDLIN( 225)				_g = (_g + 1);
HXLINE( 227)				 ::flixel::graphics::frames::FlxFrame frame = imageFrame->get_frame();
HXLINE( 228)				bool _hx_tmp;
HXDLIN( 228)				bool _hx_tmp1;
HXDLIN( 228)				if ((frame->sourceSize->x == frameRect->width)) {
HXLINE( 228)					_hx_tmp1 = (frame->sourceSize->y == frameRect->height);
            				}
            				else {
HXLINE( 228)					_hx_tmp1 = false;
            				}
HXDLIN( 228)				if (_hx_tmp1) {
HXLINE( 228)					_hx_tmp = (frame->type == 2);
            				}
            				else {
HXLINE( 228)					_hx_tmp = false;
            				}
HXDLIN( 228)				if (_hx_tmp) {
HXLINE( 229)					return imageFrame;
            				}
            			}
            		}
HXLINE( 232)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,findEmptyFrame,return )


::hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxImageFrame_obj > __this = new FlxImageFrame_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	FlxImageFrame_obj *__this = (FlxImageFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxImageFrame_obj), true, "flixel.graphics.frames.FlxImageFrame"));
	*(void **)__this = FlxImageFrame_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxImageFrame_obj::FlxImageFrame_obj()
{
}

::hx::Val FlxImageFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frame() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return ::hx::Val( get_frame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxImageFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromEmptyFrame") ) { outValue = fromEmptyFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findEmptyFrame") ) { outValue = findEmptyFrame_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true; }
	}
	return false;
}

void FlxImageFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frame",2d,78,83,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxImageFrame_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxImageFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxImageFrame_obj_sMemberFields[] = {
	HX_("equals",3f,ee,f2,bf),
	HX_("addBorder",ed,81,3e,1c),
	HX_("destroy",fa,2c,86,24),
	HX_("get_frame",84,d4,2c,4a),
	::String(null()) };

::hx::Class FlxImageFrame_obj::__mClass;

static ::String FlxImageFrame_obj_sStaticFields[] = {
	HX_("fromEmptyFrame",6a,a0,02,7f),
	HX_("fromFrame",63,62,0c,bb),
	HX_("fromImage",91,09,f2,71),
	HX_("fromGraphic",5e,be,47,0c),
	HX_("fromRectangle",65,11,66,8d),
	HX_("fromBitmapAddSpacesAndBorders",05,1a,dd,f3),
	HX_("fromFrameAddSpacesAndBorders",db,16,d1,bd),
	HX_("findFrame",34,a9,7a,f5),
	HX_("findEmptyFrame",f9,03,ad,41),
	::String(null())
};

void FlxImageFrame_obj::__register()
{
	FlxImageFrame_obj _hx_dummy;
	FlxImageFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxImageFrame",ed,69,ba,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxImageFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxImageFrame_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxImageFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxImageFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxImageFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxImageFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
