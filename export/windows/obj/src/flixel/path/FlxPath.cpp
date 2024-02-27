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
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPath
#include <flixel/path/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPathDrawData
#include <flixel/path/FlxPathDrawData.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_128203ded77fa8c1_47_new,"flixel.path.FlxPath","new",0xc203a592,"flixel.path.FlxPath.new","flixel/path/FlxPath.hx",47,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_203_reset,"flixel.path.FlxPath","reset",0x53fd4f81,"flixel.path.FlxPath.reset","flixel/path/FlxPath.hx",203,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_224_setProperties,"flixel.path.FlxPath","setProperties",0x8fa441e7,"flixel.path.FlxPath.setProperties","flixel/path/FlxPath.hx",224,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_243_start,"flixel.path.FlxPath","start",0xf1407a14,"flixel.path.FlxPath.start","flixel/path/FlxPath.hx",243,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_270_restart,"flixel.path.FlxPath","restart",0x536d1e01,"flixel.path.FlxPath.restart","flixel/path/FlxPath.hx",270,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_300_setNode,"flixel.path.FlxPath","setNode",0xf755a0f6,"flixel.path.FlxPath.setNode","flixel/path/FlxPath.hx",300,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_317_update,"flixel.path.FlxPath","update",0xa8357c17,"flixel.path.FlxPath.update","flixel/path/FlxPath.hx",317,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_405_calculateVelocity,"flixel.path.FlxPath","calculateVelocity",0x3166f255,"flixel.path.FlxPath.calculateVelocity","flixel/path/FlxPath.hx",405,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_439_advancePath,"flixel.path.FlxPath","advancePath",0x4125da79,"flixel.path.FlxPath.advancePath","flixel/path/FlxPath.hx",439,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_546_cancel,"flixel.path.FlxPath","cancel",0xd963e388,"flixel.path.FlxPath.cancel","flixel/path/FlxPath.hx",546,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_560_onEnd,"flixel.path.FlxPath","onEnd",0x9f999dae,"flixel.path.FlxPath.onEnd","flixel/path/FlxPath.hx",560,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_572_destroy,"flixel.path.FlxPath","destroy",0x0d4d832c,"flixel.path.FlxPath.destroy","flixel/path/FlxPath.hx",572,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_588_add,"flixel.path.FlxPath","add",0xc1f9c753,"flixel.path.FlxPath.add","flixel/path/FlxPath.hx",588,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_603_addAt,"flixel.path.FlxPath","addAt",0x8978bb26,"flixel.path.FlxPath.addAt","flixel/path/FlxPath.hx",603,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_621_addPoint,"flixel.path.FlxPath","addPoint",0x0590effd,"flixel.path.FlxPath.addPoint","flixel/path/FlxPath.hx",621,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_645_addPointAt,"flixel.path.FlxPath","addPointAt",0x3faae250,"flixel.path.FlxPath.addPointAt","flixel/path/FlxPath.hx",645,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_667_remove,"flixel.path.FlxPath","remove",0x25b89252,"flixel.path.FlxPath.remove","flixel/path/FlxPath.hx",667,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_683_removeAt,"flixel.path.FlxPath","removeAt",0x72bf83e5,"flixel.path.FlxPath.removeAt","flixel/path/FlxPath.hx",683,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_701_head,"flixel.path.FlxPath","head",0xfd35dfae,"flixel.path.FlxPath.head","flixel/path/FlxPath.hx",701,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_715_tail,"flixel.path.FlxPath","tail",0x05216d1e,"flixel.path.FlxPath.tail","flixel/path/FlxPath.hx",715,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_734_drawDebug,"flixel.path.FlxPath","drawDebug",0xc9194e61,"flixel.path.FlxPath.drawDebug","flixel/path/FlxPath.hx",734,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_829_get_nodes,"flixel.path.FlxPath","get_nodes",0x0d56db3a,"flixel.path.FlxPath.get_nodes","flixel/path/FlxPath.hx",829,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_833_set_nodes,"flixel.path.FlxPath","set_nodes",0xf0a7c746,"flixel.path.FlxPath.set_nodes","flixel/path/FlxPath.hx",833,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_842_set_immovable,"flixel.path.FlxPath","set_immovable",0xbaf6e49f,"flixel.path.FlxPath.set_immovable","flixel/path/FlxPath.hx",842,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_54_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",54,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_61_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",61,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_68_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",68,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_75_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",75,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_82_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",82,0xbf2b467e)
HX_LOCAL_STACK_FRAME(_hx_pos_128203ded77fa8c1_87_boot,"flixel.path.FlxPath","boot",0xf9463ac0,"flixel.path.FlxPath.boot","flixel/path/FlxPath.hx",87,0xbf2b467e)
namespace flixel{
namespace path{

void FlxPath_obj::__construct(::Array< ::Dynamic> nodes){
            	HX_GC_STACKFRAME(&_hx_pos_128203ded77fa8c1_47_new)
HXLINE( 181)		this->_firstUpdate = false;
HXLINE( 179)		this->_wasObjectImmovable = null();
HXLINE( 177)		this->_inc = 1;
HXLINE( 167)		this->axes = 17;
HXLINE( 162)		this->finished = false;
HXLINE( 160)		this->nodeIndex = 0;
HXLINE( 154)		this->ignoreDrawDebug = false;
HXLINE( 148)		this->debugDrawData =  ::flixel::path::FlxPathDrawData_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 140)		this->active = false;
HXLINE( 135)		this->angleOffset = ((Float)0);
HXLINE( 126)		this->autoRotate = false;
HXLINE( 121)		this->autoCenter = true;
HXLINE( 116)		this->angle = ((Float)0);
HXLINE( 111)		this->immovable = false;
HXLINE( 106)		this->speed = ((Float)0);
HXLINE( 191)		if (::hx::IsNotNull( nodes )) {
HXLINE( 192)			this->_nodes = nodes->copy();
            		}
            		else {
HXLINE( 194)			this->_nodes = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}

Dynamic FlxPath_obj::__CreateEmpty() { return new FlxPath_obj; }

void *FlxPath_obj::_hx_vtable = 0;

Dynamic FlxPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPath_obj > _hx_result = new FlxPath_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d90b1b6;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_path_FlxPath__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::path::FlxPath_obj::destroy,
};

void *FlxPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_path_FlxPath__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::path::FlxPath FlxPath_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_128203ded77fa8c1_203_reset)
HXLINE( 205)		this->debugDrawData =  ::flixel::path::FlxPathDrawData_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 206)		this->ignoreDrawDebug = false;
HXLINE( 208)		this->autoCenter = true;
HXLINE( 209)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

 ::flixel::path::FlxPath FlxPath_obj::setProperties(::hx::Null< Float >  __o_speed,::hx::Null< int >  __o_mode,::hx::Null< bool >  __o_autoRotate){
            		Float speed = __o_speed.Default(((Float)100.0));
            		int mode = __o_mode.Default(0);
            		bool autoRotate = __o_autoRotate.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_224_setProperties)
HXLINE( 225)		this->speed = ::Math_obj::abs(speed);
HXLINE( 226)		this->_mode = mode;
HXLINE( 227)		this->autoRotate = autoRotate;
HXLINE( 228)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,setProperties,return )

 ::flixel::path::FlxPath FlxPath_obj::start(::Array< ::Dynamic> nodes,::hx::Null< Float >  __o_speed,::hx::Null< int >  __o_mode,::hx::Null< bool >  __o_autoRotate,::hx::Null< bool >  __o_nodesAsReference){
            		Float speed = __o_speed.Default(((Float)100.0));
            		int mode = __o_mode.Default(0);
            		bool autoRotate = __o_autoRotate.Default(false);
            		bool nodesAsReference = __o_nodesAsReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_243_start)
HXLINE( 244)		if (::hx::IsNotNull( nodes )) {
HXLINE( 246)			if (nodesAsReference) {
HXLINE( 248)				this->_nodes = nodes;
            			}
            			else {
HXLINE( 252)				this->_nodes = nodes->copy();
            			}
            		}
HXLINE( 255)		this->setProperties(speed,mode,autoRotate);
HXLINE( 256)		if ((this->_nodes->length > 0)) {
HXLINE( 258)			this->restart();
            		}
HXLINE( 260)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

 ::flixel::path::FlxPath FlxPath_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_270_restart)
HXLINE( 271)		this->finished = false;
HXLINE( 272)		this->_firstUpdate = true;
HXLINE( 273)		this->active = (this->_nodes->length > 0);
HXLINE( 274)		if (!(this->active)) {
HXLINE( 276)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		if ((this->_mode != 1)) {
HXLINE( 280)			_hx_tmp = (this->_mode == 256);
            		}
            		else {
HXLINE( 280)			_hx_tmp = true;
            		}
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 282)			this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 283)			this->_inc = -1;
            		}
            		else {
HXLINE( 287)			this->nodeIndex = 0;
HXLINE( 288)			this->_inc = 1;
            		}
HXLINE( 291)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

 ::flixel::path::FlxPath FlxPath_obj::setNode(int nodeIndex){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_300_setNode)
HXLINE( 301)		if ((nodeIndex < 0)) {
HXLINE( 302)			nodeIndex = 0;
            		}
            		else {
HXLINE( 303)			if ((nodeIndex > (this->_nodes->length - 1))) {
HXLINE( 304)				nodeIndex = (this->_nodes->length - 1);
            			}
            		}
HXLINE( 306)		this->nodeIndex = nodeIndex;
HXLINE( 307)		this->advancePath(null());
HXLINE( 308)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,return )

void FlxPath_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_317_update)
HXLINE( 318)		if (::hx::IsNull( this->object )) {
HXLINE( 319)			return;
            		}
HXLINE( 321)		if (this->_firstUpdate) {
HXLINE( 323)			if (this->immovable) {
HXLINE( 325)				this->_wasObjectImmovable = this->object->immovable;
HXLINE( 326)				this->object->set_immovable(true);
            			}
HXLINE( 328)			this->_firstUpdate = false;
            		}
HXLINE( 332)		::flixel::path::FlxPath_obj::_point->set_x(this->object->x);
HXLINE( 333)		::flixel::path::FlxPath_obj::_point->set_y(this->object->y);
HXLINE( 334)		if (this->autoCenter) {
HXLINE( 336)			 ::flixel::math::FlxBasePoint this1 = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 336)			Float x = (this->object->get_width() * ((Float)0.5));
HXDLIN( 336)			Float y = (this->object->get_height() * ((Float)0.5));
HXDLIN( 336)			this1->set_x((this1->x + x));
HXDLIN( 336)			this1->set_y((this1->y + y));
            		}
HXLINE( 338)		 ::flixel::math::FlxBasePoint node = this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 339)		Float deltaX = (node->x - ::flixel::path::FlxPath_obj::_point->x);
HXLINE( 340)		Float deltaY = (node->y - ::flixel::path::FlxPath_obj::_point->y);
HXLINE( 342)		bool horizontalOnly = (this->axes == 1);
HXLINE( 343)		bool verticalOnly = (this->axes == 16);
HXLINE( 345)		if (horizontalOnly) {
HXLINE( 347)			Float _hx_tmp;
HXDLIN( 347)			if ((deltaX > 0)) {
HXLINE( 347)				_hx_tmp = deltaX;
            			}
            			else {
HXLINE( 347)				_hx_tmp = -(deltaX);
            			}
HXDLIN( 347)			if ((_hx_tmp < (this->speed * elapsed))) {
HXLINE( 349)				node = this->advancePath(null());
            			}
            		}
            		else {
HXLINE( 352)			if (verticalOnly) {
HXLINE( 354)				Float _hx_tmp;
HXDLIN( 354)				if ((deltaY > 0)) {
HXLINE( 354)					_hx_tmp = deltaY;
            				}
            				else {
HXLINE( 354)					_hx_tmp = -(deltaY);
            				}
HXDLIN( 354)				if ((_hx_tmp < (this->speed * elapsed))) {
HXLINE( 356)					node = this->advancePath(null());
            				}
            			}
            			else {
HXLINE( 361)				if ((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->speed * elapsed))) {
HXLINE( 363)					node = this->advancePath(null());
            				}
            			}
            		}
HXLINE( 368)		bool _hx_tmp;
HXDLIN( 368)		if (::hx::IsNotNull( this->object )) {
HXLINE( 368)			_hx_tmp = (this->speed != 0);
            		}
            		else {
HXLINE( 368)			_hx_tmp = false;
            		}
HXDLIN( 368)		if (_hx_tmp) {
HXLINE( 371)			::flixel::path::FlxPath_obj::_point->set_x(this->object->x);
HXLINE( 372)			::flixel::path::FlxPath_obj::_point->set_y(this->object->y);
HXLINE( 374)			if (this->autoCenter) {
HXLINE( 376)				 ::flixel::math::FlxBasePoint this1 = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 376)				Float x = (this->object->get_width() * ((Float)0.5));
HXDLIN( 376)				Float y = (this->object->get_height() * ((Float)0.5));
HXDLIN( 376)				this1->set_x((this1->x + x));
HXDLIN( 376)				this1->set_y((this1->y + y));
            			}
HXLINE( 379)			 ::flixel::math::FlxBasePoint _this = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 379)			bool result;
HXDLIN( 379)			if ((::Math_obj::abs((_this->x - node->x)) <= ((Float)0.0000001))) {
HXLINE( 379)				result = (::Math_obj::abs((_this->y - node->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE( 379)				result = false;
            			}
HXDLIN( 379)			if (node->_weak) {
HXLINE( 379)				node->put();
            			}
HXDLIN( 379)			if (!(result)) {
HXLINE( 381)				this->calculateVelocity(node,horizontalOnly,verticalOnly);
            			}
            			else {
HXLINE( 385)				 ::flixel::math::FlxBasePoint this1 = this->object->velocity;
HXDLIN( 385)				this1->set_x(( (Float)(0) ));
HXDLIN( 385)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 389)			if (this->autoRotate) {
HXLINE( 391)				this->object->angularVelocity = ( (Float)(0) );
HXLINE( 392)				this->object->angularAcceleration = ( (Float)(0) );
HXLINE( 393)				this->object->set_angle((this->angle + this->angleOffset));
            			}
HXLINE( 396)			if (this->finished) {
HXLINE( 398)				this->cancel();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,update,(void))

void FlxPath_obj::calculateVelocity( ::flixel::math::FlxBasePoint node,bool horizontalOnly,bool verticalOnly){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_405_calculateVelocity)
HXDLIN( 405)		bool _hx_tmp;
HXDLIN( 405)		if (!(horizontalOnly)) {
HXDLIN( 405)			_hx_tmp = (::flixel::path::FlxPath_obj::_point->y == node->y);
            		}
            		else {
HXDLIN( 405)			_hx_tmp = true;
            		}
HXDLIN( 405)		if (_hx_tmp) {
HXLINE( 407)			{
HXLINE( 407)				Float x;
HXDLIN( 407)				if ((::flixel::path::FlxPath_obj::_point->x < node->x)) {
HXLINE( 407)					x = this->speed;
            				}
            				else {
HXLINE( 407)					x = -(this->speed);
            				}
HXDLIN( 407)				this->object->velocity->set_x(x);
            			}
HXLINE( 408)			Float _hx_tmp;
HXDLIN( 408)			if ((this->object->velocity->x < 0)) {
HXLINE( 408)				_hx_tmp = ( (Float)(180) );
            			}
            			else {
HXLINE( 408)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 408)			this->angle = _hx_tmp;
HXLINE( 410)			if (!(horizontalOnly)) {
HXLINE( 412)				this->object->velocity->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 415)			bool _hx_tmp;
HXDLIN( 415)			if (!(verticalOnly)) {
HXLINE( 415)				_hx_tmp = (::flixel::path::FlxPath_obj::_point->x == node->x);
            			}
            			else {
HXLINE( 415)				_hx_tmp = true;
            			}
HXDLIN( 415)			if (_hx_tmp) {
HXLINE( 417)				{
HXLINE( 417)					Float y;
HXDLIN( 417)					if ((::flixel::path::FlxPath_obj::_point->y < node->y)) {
HXLINE( 417)						y = this->speed;
            					}
            					else {
HXLINE( 417)						y = -(this->speed);
            					}
HXDLIN( 417)					this->object->velocity->set_y(y);
            				}
HXLINE( 418)				Float _hx_tmp;
HXDLIN( 418)				if ((this->object->velocity->y < 0)) {
HXLINE( 418)					_hx_tmp = ( (Float)(-90) );
            				}
            				else {
HXLINE( 418)					_hx_tmp = ( (Float)(90) );
            				}
HXDLIN( 418)				this->angle = _hx_tmp;
HXLINE( 420)				if (!(verticalOnly)) {
HXLINE( 422)					this->object->velocity->set_x(( (Float)(0) ));
            				}
            			}
            			else {
HXLINE( 427)				 ::flixel::math::FlxBasePoint this1 = this->object->velocity;
HXDLIN( 427)				{
HXLINE( 427)					Float y = node->y;
HXDLIN( 427)					this1->set_x(node->x);
HXDLIN( 427)					this1->set_y(y);
            				}
HXDLIN( 427)				if (node->_weak) {
HXLINE( 427)					node->put();
            				}
HXDLIN( 427)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 427)				 ::flixel::math::FlxBasePoint point = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 427)				{
HXLINE( 427)					Float y1 = point->y;
HXDLIN( 427)					this2->set_x((this2->x - point->x));
HXDLIN( 427)					this2->set_y((this2->y - y1));
            				}
HXDLIN( 427)				if (point->_weak) {
HXLINE( 427)					point->put();
            				}
HXDLIN( 427)				 ::flixel::math::FlxBasePoint velocity = this2;
HXLINE( 428)				{
HXLINE( 428)					Float l = this->speed;
HXDLIN( 428)					bool _hx_tmp;
HXDLIN( 428)					if ((::Math_obj::abs(velocity->x) < ((Float)0.0000001))) {
HXLINE( 428)						_hx_tmp = (::Math_obj::abs(velocity->y) < ((Float)0.0000001));
            					}
            					else {
HXLINE( 428)						_hx_tmp = false;
            					}
HXDLIN( 428)					if (!(_hx_tmp)) {
HXLINE( 428)						Float a = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(velocity);
HXDLIN( 428)						velocity->set_x((l * ::Math_obj::cos(a)));
HXDLIN( 428)						velocity->set_y((l * ::Math_obj::sin(a)));
            					}
            				}
HXLINE( 429)				Float _hx_tmp1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(velocity);
HXDLIN( 429)				this->angle = (_hx_tmp1 * (( (Float)(180) ) / ::Math_obj::PI));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,calculateVelocity,(void))

 ::flixel::math::FlxBasePoint FlxPath_obj::advancePath(::hx::Null< bool >  __o_snap){
            		bool snap = __o_snap.Default(true);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_439_advancePath)
HXLINE( 440)		if (snap) {
HXLINE( 442)			 ::flixel::math::FlxBasePoint oldNode = this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 443)			if (::hx::IsNotNull( oldNode )) {
HXLINE( 445)				int this1 = this->axes;
HXDLIN( 445)				bool _hx_tmp;
HXDLIN( 445)				if ((this1 != 1)) {
HXLINE( 445)					_hx_tmp = (this1 == 17);
            				}
            				else {
HXLINE( 445)					_hx_tmp = true;
            				}
HXDLIN( 445)				if (_hx_tmp) {
HXLINE( 447)					this->object->set_x(oldNode->x);
HXLINE( 448)					if (this->autoCenter) {
HXLINE( 449)						 ::flixel::FlxObject fh = this->object;
HXDLIN( 449)						Float fh1 = fh->x;
HXDLIN( 449)						fh->set_x((fh1 - (this->object->get_width() * ((Float)0.5))));
            					}
            				}
HXLINE( 451)				int this2 = this->axes;
HXDLIN( 451)				bool _hx_tmp1;
HXDLIN( 451)				if ((this2 != 16)) {
HXLINE( 451)					_hx_tmp1 = (this2 == 17);
            				}
            				else {
HXLINE( 451)					_hx_tmp1 = true;
            				}
HXDLIN( 451)				if (_hx_tmp1) {
HXLINE( 453)					this->object->set_y(oldNode->y);
HXLINE( 454)					if (this->autoCenter) {
HXLINE( 455)						 ::flixel::FlxObject fh = this->object;
HXDLIN( 455)						Float fh1 = fh->y;
HXDLIN( 455)						fh->set_y((fh1 - (this->object->get_height() * ((Float)0.5))));
            					}
            				}
            			}
            		}
HXLINE( 460)		bool callComplete = false;
HXLINE( 461)		 ::flixel::path::FlxPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 461)		_hx_tmp->nodeIndex = (_hx_tmp->nodeIndex + this->_inc);
HXLINE( 463)		if ((this->_mode == 1)) {
HXLINE( 465)			if ((this->nodeIndex < 0)) {
HXLINE( 467)				this->nodeIndex = 0;
HXLINE( 468)				callComplete = true;
HXLINE( 469)				this->onEnd();
            			}
            		}
            		else {
HXLINE( 472)			if ((this->_mode == 16)) {
HXLINE( 474)				if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 476)					callComplete = true;
HXLINE( 477)					this->nodeIndex = 0;
            				}
            			}
            			else {
HXLINE( 480)				if ((this->_mode == 256)) {
HXLINE( 482)					if ((this->nodeIndex < 0)) {
HXLINE( 484)						this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 485)						callComplete = true;
HXLINE( 486)						if ((this->nodeIndex < 0)) {
HXLINE( 488)							this->nodeIndex = 0;
            						}
            					}
            				}
            				else {
HXLINE( 492)					if ((this->_mode == 4096)) {
HXLINE( 494)						if ((this->_inc > 0)) {
HXLINE( 496)							if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 498)								this->nodeIndex = (this->_nodes->length - 2);
HXLINE( 499)								callComplete = true;
HXLINE( 500)								if ((this->nodeIndex < 0)) {
HXLINE( 502)									this->nodeIndex = 0;
            								}
HXLINE( 504)								this->_inc = -(this->_inc);
            							}
            						}
            						else {
HXLINE( 507)							if ((this->nodeIndex < 0)) {
HXLINE( 509)								this->nodeIndex = 1;
HXLINE( 510)								callComplete = true;
HXLINE( 511)								if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 513)									this->nodeIndex = (this->_nodes->length - 1);
            								}
HXLINE( 515)								if ((this->nodeIndex < 0)) {
HXLINE( 517)									this->nodeIndex = 0;
            								}
HXLINE( 519)								this->_inc = -(this->_inc);
            							}
            						}
            					}
            					else {
HXLINE( 524)						if ((this->nodeIndex >= this->_nodes->length)) {
HXLINE( 526)							this->nodeIndex = (this->_nodes->length - 1);
HXLINE( 527)							callComplete = true;
HXLINE( 528)							this->onEnd();
            						}
            					}
            				}
            			}
            		}
HXLINE( 532)		bool _hx_tmp1;
HXDLIN( 532)		if (callComplete) {
HXLINE( 532)			_hx_tmp1 = ::hx::IsNotNull( this->onComplete );
            		}
            		else {
HXLINE( 532)			_hx_tmp1 = false;
            		}
HXDLIN( 532)		if (_hx_tmp1) {
HXLINE( 534)			this->onComplete(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 537)		return this->_nodes->__get(this->nodeIndex).StaticCast<  ::flixel::math::FlxBasePoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

 ::flixel::path::FlxPath FlxPath_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_546_cancel)
HXLINE( 547)		this->onEnd();
HXLINE( 549)		if (::hx::IsNotNull( this->object )) {
HXLINE( 551)			 ::flixel::math::FlxBasePoint this1 = this->object->velocity;
HXDLIN( 551)			this1->set_x(( (Float)(0) ));
HXDLIN( 551)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 553)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,return )

void FlxPath_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_560_onEnd)
HXLINE( 561)		this->finished = true;
HXLINE( 562)		this->active = false;
HXLINE( 563)		if (::hx::IsNotNull( this->_wasObjectImmovable )) {
HXLINE( 564)			this->object->set_immovable(( (bool)(this->_wasObjectImmovable) ));
            		}
HXLINE( 565)		this->_wasObjectImmovable = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,onEnd,(void))

void FlxPath_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_572_destroy)
HXLINE( 573)		::flixel::util::FlxDestroyUtil_obj::putArray(this->_nodes);
HXLINE( 574)		this->_nodes = null();
HXLINE( 575)		this->object = null();
HXLINE( 576)		this->onComplete = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

 ::flixel::path::FlxPath FlxPath_obj::add(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_588_add)
HXLINE( 589)		::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 589)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 589)		point->_inPool = false;
HXDLIN( 589)		_hx_tmp->push(point);
HXLINE( 590)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

 ::flixel::path::FlxPath FlxPath_obj::addAt(Float x,Float y,int index){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_603_addAt)
HXLINE( 604)		if ((index < 0)) {
HXLINE( 605)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 606)		::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 606)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 606)		point->_inPool = false;
HXDLIN( 606)		_hx_tmp->insert(index,point);
HXLINE( 607)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

 ::flixel::path::FlxPath FlxPath_obj::addPoint( ::flixel::math::FlxBasePoint node,::hx::Null< bool >  __o_asReference){
            		bool asReference = __o_asReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_621_addPoint)
HXLINE( 622)		if (asReference) {
HXLINE( 624)			this->_nodes->push(node);
            		}
            		else {
HXLINE( 628)			::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 628)			Float x = node->x;
HXDLIN( 628)			Float y = node->y;
HXDLIN( 628)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 628)			point->_inPool = false;
HXDLIN( 628)			_hx_tmp->push(point);
            		}
HXLINE( 630)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

 ::flixel::path::FlxPath FlxPath_obj::addPointAt( ::flixel::math::FlxBasePoint node,int index,::hx::Null< bool >  __o_asReference){
            		bool asReference = __o_asReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_645_addPointAt)
HXLINE( 646)		if ((index < 0)) {
HXLINE( 647)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 648)		if (asReference) {
HXLINE( 650)			this->_nodes->insert(index,node);
            		}
            		else {
HXLINE( 654)			::Array< ::Dynamic> _hx_tmp = this->_nodes;
HXDLIN( 654)			Float x = node->x;
HXDLIN( 654)			Float y = node->y;
HXDLIN( 654)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 654)			point->_inPool = false;
HXDLIN( 654)			_hx_tmp->insert(index,point);
            		}
HXLINE( 656)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::remove( ::flixel::math::FlxBasePoint node){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_667_remove)
HXLINE( 668)		int index = this->_nodes->indexOf(node,null());
HXLINE( 669)		if ((index >= 0)) {
HXLINE( 671)			return this->_nodes->splice(index,1)->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 673)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::removeAt(int index){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_683_removeAt)
HXLINE( 684)		if ((this->_nodes->length <= 0)) {
HXLINE( 686)			return null();
            		}
HXLINE( 688)		if ((index >= (this->_nodes->length - 1))) {
HXLINE( 690)			this->_nodes->pop().StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 692)		return this->_nodes->splice(index,1)->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::head(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_701_head)
HXLINE( 702)		if ((this->_nodes->length > 0)) {
HXLINE( 704)			return this->_nodes->__get(0).StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 706)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

 ::flixel::math::FlxBasePoint FlxPath_obj::tail(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_715_tail)
HXLINE( 716)		if ((this->_nodes->length > 0)) {
HXLINE( 718)			return this->_nodes->__get((this->_nodes->length - 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
            		}
HXLINE( 720)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

void FlxPath_obj::drawDebug( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_734_drawDebug)
HXLINE( 735)		bool _hx_tmp;
HXDLIN( 735)		if (::hx::IsNotNull( this->_nodes )) {
HXLINE( 735)			_hx_tmp = (this->_nodes->length <= 0);
            		}
            		else {
HXLINE( 735)			_hx_tmp = true;
            		}
HXDLIN( 735)		if (_hx_tmp) {
HXLINE( 737)			return;
            		}
HXLINE( 740)		if (::hx::IsNull( camera )) {
HXLINE( 742)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 745)		 ::openfl::display::Graphics gfx = null();
HXLINE( 748)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 750)			gfx = ::flixel::util::FlxSpriteUtil_obj::flashGfx;
HXLINE( 751)			gfx->clear();
            		}
            		else {
HXLINE( 755)			gfx = camera->debugLayer->get_graphics();
            		}
HXLINE( 759)		int length = this->_nodes->length;
HXLINE( 760)		{
HXLINE( 760)			int _g = 0;
HXDLIN( 760)			int _g1 = length;
HXDLIN( 760)			while((_g < _g1)){
HXLINE( 760)				_g = (_g + 1);
HXDLIN( 760)				int i = (_g - 1);
HXLINE( 763)				 ::flixel::math::FlxBasePoint node = this->_nodes->__get(i).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 766)				::flixel::path::FlxPath_obj::_point->set_x((node->x - (camera->scroll->x * this->object->scrollFactor->x)));
HXLINE( 767)				::flixel::path::FlxPath_obj::_point->set_y((node->y - (camera->scroll->y * this->object->scrollFactor->y)));
HXLINE( 769)				::flixel::path::FlxPath_obj::_point = camera->transformPoint(::flixel::path::FlxPath_obj::_point);
HXLINE( 772)				int nodeSize = this->debugDrawData->nodeSize;
HXLINE( 773)				int nodeColor = this->debugDrawData->nodeColor;
HXLINE( 774)				if ((length > 1)) {
HXLINE( 776)					if ((i == 0)) {
HXLINE( 778)						nodeColor = this->debugDrawData->startColor;
HXLINE( 779)						nodeSize = this->debugDrawData->startSize;
            					}
            					else {
HXLINE( 781)						if ((i == (length - 1))) {
HXLINE( 783)							nodeColor = this->debugDrawData->endColor;
HXLINE( 784)							nodeSize = this->debugDrawData->endSize;
            						}
            					}
            				}
HXLINE( 789)				gfx->beginFill((nodeColor & 16777215),(( (Float)(((nodeColor >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 790)				gfx->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 791)				int nodeOffset = ::Math_obj::floor((( (Float)(nodeSize) ) * ((Float)0.5)));
HXLINE( 792)				gfx->drawRect((::flixel::path::FlxPath_obj::_point->x - ( (Float)(nodeOffset) )),(::flixel::path::FlxPath_obj::_point->y - ( (Float)(nodeOffset) )),( (Float)(nodeSize) ),( (Float)(nodeSize) ));
HXLINE( 793)				gfx->endFill();
HXLINE( 796)				 ::flixel::math::FlxBasePoint nextNode;
HXLINE( 797)				if ((i < (length - 1))) {
HXLINE( 799)					nextNode = this->_nodes->__get((i + 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
            				}
            				else {
HXLINE( 803)					nextNode = this->_nodes->__get(i).StaticCast<  ::flixel::math::FlxBasePoint >();
            				}
HXLINE( 807)				Float lineOffset = (( (Float)(this->debugDrawData->lineSize) ) / ( (Float)(2) ));
HXLINE( 808)				gfx->moveTo((::flixel::path::FlxPath_obj::_point->x + lineOffset),(::flixel::path::FlxPath_obj::_point->y + lineOffset));
HXLINE( 809)				gfx->lineStyle(this->debugDrawData->lineSize,(this->debugDrawData->lineColor & 16777215),(( (Float)(((this->debugDrawData->lineColor >> 24) & 255)) ) / ( (Float)(255) )),null(),null(),null(),null(),null());
HXLINE( 810)				::flixel::path::FlxPath_obj::_point->set_x((nextNode->x - (camera->scroll->x * this->object->scrollFactor->x)));
HXLINE( 811)				::flixel::path::FlxPath_obj::_point->set_y((nextNode->y - (camera->scroll->y * this->object->scrollFactor->y)));
HXLINE( 813)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 814)					 ::flixel::math::FlxBasePoint this1 = ::flixel::path::FlxPath_obj::_point;
HXDLIN( 814)					Float y = camera->viewMarginY;
HXDLIN( 814)					this1->set_x((this1->x - camera->viewMarginX));
HXDLIN( 814)					this1->set_y((this1->y - y));
            				}
HXLINE( 816)				gfx->lineTo((::flixel::path::FlxPath_obj::_point->x + lineOffset),(::flixel::path::FlxPath_obj::_point->y + lineOffset));
            			}
            		}
HXLINE( 819)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 822)			camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,drawDebug,(void))

::Array< ::Dynamic> FlxPath_obj::get_nodes(){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_829_get_nodes)
HXDLIN( 829)		return this->_nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,get_nodes,return )

::Array< ::Dynamic> FlxPath_obj::set_nodes(::Array< ::Dynamic> nodes){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_833_set_nodes)
HXLINE( 834)		if (::hx::IsNotNull( nodes )) {
HXLINE( 836)			this->_nodes = nodes;
            		}
HXLINE( 838)		return this->_nodes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_nodes,return )

bool FlxPath_obj::set_immovable(bool value){
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_842_set_immovable)
HXLINE( 843)		bool _hx_tmp;
HXDLIN( 843)		bool _hx_tmp1;
HXDLIN( 843)		if (!(this->_firstUpdate)) {
HXLINE( 843)			_hx_tmp1 = this->finished;
            		}
            		else {
HXLINE( 843)			_hx_tmp1 = true;
            		}
HXDLIN( 843)		if (!(_hx_tmp1)) {
HXLINE( 843)			_hx_tmp = (value == this->immovable);
            		}
            		else {
HXLINE( 843)			_hx_tmp = true;
            		}
HXDLIN( 843)		if (_hx_tmp) {
HXLINE( 844)			return (this->immovable = value);
            		}
HXLINE( 846)		if (value) {
HXLINE( 848)			this->_wasObjectImmovable = this->object->immovable;
HXLINE( 849)			this->object->set_immovable(true);
            		}
            		else {
HXLINE( 851)			if (::hx::IsNotNull( this->_wasObjectImmovable )) {
HXLINE( 853)				this->object->set_immovable(( (bool)(this->_wasObjectImmovable) ));
HXLINE( 854)				this->_wasObjectImmovable = null();
            			}
            		}
HXLINE( 857)		return (this->immovable = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_immovable,return )

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

 ::flixel::math::FlxBasePoint FlxPath_obj::_point;


::hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(::Array< ::Dynamic> nodes) {
	::hx::ObjectPtr< FlxPath_obj > __this = new FlxPath_obj();
	__this->__construct(nodes);
	return __this;
}

::hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> nodes) {
	FlxPath_obj *__this = (FlxPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPath_obj), true, "flixel.path.FlxPath"));
	*(void **)__this = FlxPath_obj::_hx_vtable;
	__this->__construct(nodes);
	return __this;
}

FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(_nodes,"_nodes");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(autoRotate,"autoRotate");
	HX_MARK_MEMBER_NAME(angleOffset,"angleOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(debugDrawData,"debugDrawData");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(axes,"axes");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_MARK_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nodes,"_nodes");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(autoRotate,"autoRotate");
	HX_VISIT_MEMBER_NAME(angleOffset,"angleOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(debugDrawData,"debugDrawData");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(axes,"axes");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_VISIT_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_VISIT_MEMBER_NAME(object,"object");
}

::hx::Val FlxPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { return ::hx::Val( axes ); }
		if (HX_FIELD_EQ(inName,"_inc") ) { return ::hx::Val( _inc ); }
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head_dyn() ); }
		if (HX_FIELD_EQ(inName,"tail") ) { return ::hx::Val( tail_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_nodes() ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"_mode") ) { return ::hx::Val( _mode ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return ::hx::Val( addAt_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { return ::hx::Val( _nodes ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return ::hx::Val( setNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return ::hx::Val( removeAt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { return ::hx::Val( nodeIndex ); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return ::hx::Val( drawDebug_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nodes") ) { return ::hx::Val( get_nodes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_nodes") ) { return ::hx::Val( set_nodes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return ::hx::Val( autoCenter ); }
		if (HX_FIELD_EQ(inName,"autoRotate") ) { return ::hx::Val( autoRotate ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return ::hx::Val( addPointAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angleOffset") ) { return ::hx::Val( angleOffset ); }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return ::hx::Val( advancePath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { return ::hx::Val( _firstUpdate ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debugDrawData") ) { return ::hx::Val( debugDrawData ); }
		if (HX_FIELD_EQ(inName,"setProperties") ) { return ::hx::Val( setProperties_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ::hx::Val( ignoreDrawDebug ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateVelocity") ) { return ::hx::Val( calculateVelocity_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return ::hx::Val( _wasObjectImmovable ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = ( _point ); return true; }
	}
	return false;
}

::hx::Val FlxPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { axes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_nodes(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { _nodes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { nodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoRotate") ) { autoRotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angleOffset") ) { angleOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { _firstUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debugDrawData") ) { debugDrawData=inValue.Cast<  ::flixel::path::FlxPathDrawData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast<  ::flixel::math::FlxBasePoint >(); return true; }
	}
	return false;
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nodes",31,b8,be,9f));
	outFields->push(HX_("_nodes",72,ff,a5,9b));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("autoCenter",a4,36,a6,71));
	outFields->push(HX_("autoRotate",2a,57,eb,36));
	outFields->push(HX_("angleOffset",c6,6f,7b,71));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("debugDrawData",c1,19,85,76));
	outFields->push(HX_("ignoreDrawDebug",3d,fc,11,6b));
	outFields->push(HX_("nodeIndex",b0,79,4a,62));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("axes",25,19,79,40));
	outFields->push(HX_("_mode",42,ef,71,fb));
	outFields->push(HX_("_inc",df,51,1b,3f));
	outFields->push(HX_("_wasObjectImmovable",41,d9,92,98));
	outFields->push(HX_("_firstUpdate",5a,64,b1,d1));
	outFields->push(HX_("object",bf,7e,3f,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxPath_obj,_nodes),HX_("_nodes",72,ff,a5,9b)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_("autoCenter",a4,36,a6,71)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,autoRotate),HX_("autoRotate",2a,57,eb,36)},
	{::hx::fsFloat,(int)offsetof(FlxPath_obj,angleOffset),HX_("angleOffset",c6,6f,7b,71)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxPath_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::flixel::path::FlxPathDrawData */ ,(int)offsetof(FlxPath_obj,debugDrawData),HX_("debugDrawData",c1,19,85,76)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,ignoreDrawDebug),HX_("ignoreDrawDebug",3d,fc,11,6b)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,nodeIndex),HX_("nodeIndex",b0,79,4a,62)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,axes),HX_("axes",25,19,79,40)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_("_mode",42,ef,71,fb)},
	{::hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_("_inc",df,51,1b,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxPath_obj,_wasObjectImmovable),HX_("_wasObjectImmovable",41,d9,92,98)},
	{::hx::fsBool,(int)offsetof(FlxPath_obj,_firstUpdate),HX_("_firstUpdate",5a,64,b1,d1)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxPath_obj,object),HX_("object",bf,7e,3f,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxPath_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxPath_obj::FORWARD,HX_("FORWARD",a5,b5,9e,65)},
	{::hx::fsInt,(void *) &FlxPath_obj::BACKWARD,HX_("BACKWARD",e3,6b,9e,80)},
	{::hx::fsInt,(void *) &FlxPath_obj::LOOP_FORWARD,HX_("LOOP_FORWARD",8a,81,3a,2b)},
	{::hx::fsInt,(void *) &FlxPath_obj::LOOP_BACKWARD,HX_("LOOP_BACKWARD",5e,08,55,a3)},
	{::hx::fsInt,(void *) &FlxPath_obj::YOYO,HX_("YOYO",2c,3d,10,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxPath_obj::_point,HX_("_point",91,fb,76,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPath_obj_sMemberFields[] = {
	HX_("_nodes",72,ff,a5,9b),
	HX_("speed",87,97,69,81),
	HX_("immovable",0a,27,70,27),
	HX_("angle",d3,43,e2,22),
	HX_("autoCenter",a4,36,a6,71),
	HX_("autoRotate",2a,57,eb,36),
	HX_("angleOffset",c6,6f,7b,71),
	HX_("active",c6,41,46,16),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("debugDrawData",c1,19,85,76),
	HX_("ignoreDrawDebug",3d,fc,11,6b),
	HX_("nodeIndex",b0,79,4a,62),
	HX_("finished",72,93,0e,95),
	HX_("axes",25,19,79,40),
	HX_("_mode",42,ef,71,fb),
	HX_("_inc",df,51,1b,3f),
	HX_("_wasObjectImmovable",41,d9,92,98),
	HX_("_firstUpdate",5a,64,b1,d1),
	HX_("object",bf,7e,3f,15),
	HX_("reset",cf,49,c8,e6),
	HX_("setProperties",35,3a,87,02),
	HX_("start",62,74,0b,84),
	HX_("restart",cf,c7,a5,6a),
	HX_("setNode",c4,4a,8e,0e),
	HX_("update",09,86,05,87),
	HX_("calculateVelocity",a3,29,67,06),
	HX_("advancePath",47,83,f2,a8),
	HX_("cancel",7a,ed,33,b8),
	HX_("onEnd",fc,97,64,32),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	HX_("addAt",74,b5,43,1c),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPointAt",42,cd,ab,b8),
	HX_("remove",44,9c,88,04),
	HX_("removeAt",57,6e,1b,ad),
	HX_("head",20,29,0b,45),
	HX_("tail",90,b6,f6,4c),
	HX_("drawDebug",af,87,2a,9f),
	HX_("get_nodes",88,14,68,e3),
	HX_("set_nodes",94,00,b9,c6),
	HX_("set_immovable",ed,dc,d9,2d),
	::String(null()) };

static void FlxPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

::hx::Class FlxPath_obj::__mClass;

static ::String FlxPath_obj_sStaticFields[] = {
	HX_("FORWARD",a5,b5,9e,65),
	HX_("BACKWARD",e3,6b,9e,80),
	HX_("LOOP_FORWARD",8a,81,3a,2b),
	HX_("LOOP_BACKWARD",5e,08,55,a3),
	HX_("YOYO",2c,3d,10,3b),
	HX_("_point",91,fb,76,c2),
	::String(null())
};

void FlxPath_obj::__register()
{
	FlxPath_obj _hx_dummy;
	FlxPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.path.FlxPath",a0,34,81,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPath_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPath_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPath_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPath_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_54_boot)
HXDLIN(  54)		FORWARD = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_61_boot)
HXDLIN(  61)		BACKWARD = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_68_boot)
HXDLIN(  68)		LOOP_FORWARD = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_75_boot)
HXDLIN(  75)		LOOP_BACKWARD = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_82_boot)
HXDLIN(  82)		YOYO = 4096;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_87_boot)
HXDLIN(  87)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  87)			point->_inPool = false;
HXDLIN(  87)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_128203ded77fa8c1_87_boot)
HXDLIN(  87)		_point = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace path
