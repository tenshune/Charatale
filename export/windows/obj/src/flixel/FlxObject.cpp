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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPath
#include <flixel/path/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c625bfaa5b4263df_75_new,"flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",75,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_820_initVars,"flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",820,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_834_initMotionVars,"flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",834,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_852_destroy,"flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",852,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_870_update,"flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",870,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_895_updateMotion,"flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",895,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_918_draw,"flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",918,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_940_overlaps,"flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",940,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_944_overlaps,"flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",944,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_976_overlapsCallback,"flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",976,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_999_overlapsAt,"flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",999,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1003_overlapsAt,"flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",1003,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1037_overlapsAtCallback,"flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",1037,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1050_overlapsPoint,"flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",1050,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1075_inWorldBounds,"flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",1075,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1086_getScreenPosition,"flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",1086,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1107_getPosition,"flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",1107,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1122_getMidpoint,"flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",1122,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1129_getHitbox,"flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",1129,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1143_reset,"flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",1143,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1160_isOnScreen,"flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",1160,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1172_isPixelPerfectRender,"flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",1172,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1187_isTouching,"flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",1187,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1199_justTouched,"flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",1199,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1209_hurt,"flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",1209,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1222_screenCenter,"flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",1222,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1240_setPosition,"flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",1240,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1252_setSize,"flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",1252,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1332_getBoundingBox,"flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1332,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1356_getRotatedBounds,"flixel.FlxObject","getRotatedBounds",0x6b926bb7,"flixel.FlxObject.getRotatedBounds","flixel/FlxObject.hx",1356,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1369_toString,"flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1369,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1382_set_x,"flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1382,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1388_set_y,"flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1388,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1402_set_width,"flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1402,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1416_set_height,"flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1416,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1422_get_width,"flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1422,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1428_get_height,"flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1428,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1434_get_solid,"flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1434,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1439_set_solid,"flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1439,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1447_set_angle,"flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1447,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1453_set_moves,"flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1453,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1459_set_immovable,"flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1459,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1465_set_pixelPerfectRender,"flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1465,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1471_set_allowCollisions,"flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1471,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1477_get_collisonXDrag,"flixel.FlxObject","get_collisonXDrag",0x511e85df,"flixel.FlxObject.get_collisonXDrag","flixel/FlxObject.hx",1477,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1482_set_collisonXDrag,"flixel.FlxObject","set_collisonXDrag",0x748c5deb,"flixel.FlxObject.set_collisonXDrag","flixel/FlxObject.hx",1482,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1509_set_path,"flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1509,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_181_separate,"flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",181,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_196_updateTouchingFlags,"flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",196,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_204_allowCollisionDrag,"flixel.FlxObject","allowCollisionDrag",0x3ed42e2c,"flixel.FlxObject.allowCollisionDrag","flixel/FlxObject.hx",204,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_220_computeOverlapX,"flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",220,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_288_separateX,"flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",288,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_379_updateTouchingFlagsX,"flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",379,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_402_computeOverlapY,"flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",402,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_470_separateY,"flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",470,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_561_updateTouchingFlagsY,"flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",561,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_80_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",80,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_87_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",87,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_94_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",94,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_102_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",102,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_110_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",110,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_118_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",118,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_126_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",126,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_134_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",134,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_142_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",142,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_150_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",150,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_158_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",158,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_166_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",166,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_169_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",169,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_171_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",171,0xf0fe0d80)
namespace flixel{

void FlxObject_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_75_new)
HXLINE( 795)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 795)		_this->x = ( (Float)(0) );
HXDLIN( 795)		_this->y = ( (Float)(0) );
HXDLIN( 795)		_this->width = ( (Float)(0) );
HXDLIN( 795)		_this->height = ( (Float)(0) );
HXDLIN( 795)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 795)		rect->_inPool = false;
HXDLIN( 795)		this->_rect = rect;
HXLINE( 793)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 793)		point->_inPool = false;
HXDLIN( 793)		this->_point = point;
HXLINE( 790)		this->path = null();
HXLINE( 748)		this->collisionYDrag = 0;
HXLINE( 740)		this->collisionXDrag = 2;
HXLINE( 723)		this->allowCollisions = 4369;
HXLINE( 717)		this->wasTouching = 0;
HXLINE( 711)		this->touching = 0;
HXLINE( 705)		this->health = ((Float)1);
HXLINE( 700)		this->maxAngular = ((Float)10000);
HXLINE( 695)		this->angularDrag = ((Float)0);
HXLINE( 690)		this->angularAcceleration = ((Float)0);
HXLINE( 685)		this->angularVelocity = ((Float)0);
HXLINE( 680)		this->elasticity = ((Float)0);
HXLINE( 675)		this->mass = ((Float)1);
HXLINE( 627)		this->immovable = false;
HXLINE( 622)		this->moves = ::flixel::FlxObject_obj::defaultMoves;
HXLINE( 616)		this->angle = ((Float)0);
HXLINE( 610)		this->pixelPerfectPosition = true;
HXLINE( 585)		this->y = ((Float)0);
HXLINE( 580)		this->x = ((Float)0);
HXLINE( 805)		super::__construct();
HXLINE( 807)		this->set_x(x);
HXLINE( 808)		this->set_y(y);
HXLINE( 809)		this->set_width(width);
HXLINE( 810)		this->set_height(height);
HXLINE( 812)		this->initVars();
            	}

Dynamic FlxObject_obj::__CreateEmpty() { return new FlxObject_obj; }

void *FlxObject_obj::_hx_vtable = 0;

Dynamic FlxObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxObject_obj > _hx_result = new FlxObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7ccf8994;
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxObject_obj::initVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_820_initVars)
HXLINE( 821)		this->flixelType = 1;
HXLINE( 822)		Float x = this->x;
HXDLIN( 822)		Float y = this->y;
HXDLIN( 822)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 822)		point->_inPool = false;
HXDLIN( 822)		this->last = point;
HXLINE( 823)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(1,1);
HXDLIN( 823)		point1->_inPool = false;
HXDLIN( 823)		this->scrollFactor = point1;
HXLINE( 824)		this->pixelPerfectPosition = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;
HXLINE( 826)		{
HXLINE( 826)			 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 826)			point2->_inPool = false;
HXDLIN( 826)			this->velocity = point2;
HXDLIN( 826)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 826)			point3->_inPool = false;
HXDLIN( 826)			this->acceleration = point3;
HXDLIN( 826)			 ::flixel::math::FlxBasePoint point4 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 826)			point4->_inPool = false;
HXDLIN( 826)			this->drag = point4;
HXDLIN( 826)			 ::flixel::math::FlxBasePoint point5 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(10000,10000);
HXDLIN( 826)			point5->_inPool = false;
HXDLIN( 826)			this->maxVelocity = point5;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

void FlxObject_obj::initMotionVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_834_initMotionVars)
HXLINE( 835)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 835)		point->_inPool = false;
HXDLIN( 835)		this->velocity = point;
HXLINE( 836)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 836)		point1->_inPool = false;
HXDLIN( 836)		this->acceleration = point1;
HXLINE( 837)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 837)		point2->_inPool = false;
HXDLIN( 837)		this->drag = point2;
HXLINE( 838)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(10000,10000);
HXDLIN( 838)		point3->_inPool = false;
HXDLIN( 838)		this->maxVelocity = point3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

void FlxObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_852_destroy)
HXLINE( 853)		this->super::destroy();
HXLINE( 855)		this->velocity = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocity)) );
HXLINE( 856)		this->acceleration = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->acceleration)) );
HXLINE( 857)		this->drag = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->drag)) );
HXLINE( 858)		this->maxVelocity = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->maxVelocity)) );
HXLINE( 859)		this->scrollFactor = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scrollFactor)) );
HXLINE( 860)		this->last = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->last)) );
HXLINE( 861)		this->_point = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE( 862)		this->_rect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->_rect)) );
            	}


void FlxObject_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_870_update)
HXLINE( 876)		{
HXLINE( 876)			 ::flixel::math::FlxBasePoint this1 = this->last;
HXDLIN( 876)			Float y = this->y;
HXDLIN( 876)			this1->set_x(this->x);
HXDLIN( 876)			this1->set_y(y);
            		}
HXLINE( 878)		bool _hx_tmp;
HXDLIN( 878)		if (::hx::IsNotNull( this->path )) {
HXLINE( 878)			_hx_tmp = this->path->active;
            		}
            		else {
HXLINE( 878)			_hx_tmp = false;
            		}
HXDLIN( 878)		if (_hx_tmp) {
HXLINE( 879)			this->path->update(elapsed);
            		}
HXLINE( 881)		if (this->moves) {
HXLINE( 882)			this->updateMotion(elapsed);
            		}
HXLINE( 884)		this->wasTouching = this->touching;
HXLINE( 885)		this->touching = 0;
            	}


void FlxObject_obj::updateMotion(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_895_updateMotion)
HXLINE( 896)		Float velocityDelta = ::flixel::math::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular,elapsed);
HXDLIN( 896)		Float velocityDelta1 = (((Float)0.5) * (velocityDelta - this->angularVelocity));
HXLINE( 897)		 ::flixel::FlxObject _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 897)		_hx_tmp->angularVelocity = (_hx_tmp->angularVelocity + velocityDelta1);
HXLINE( 898)		this->set_angle((this->angle + (this->angularVelocity * elapsed)));
HXLINE( 899)		 ::flixel::FlxObject _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 899)		_hx_tmp1->angularVelocity = (_hx_tmp1->angularVelocity + velocityDelta1);
HXLINE( 901)		Float velocityDelta2 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x,elapsed);
HXDLIN( 901)		velocityDelta1 = (((Float)0.5) * (velocityDelta2 - this->velocity->x));
HXLINE( 902)		this->velocity->set_x((this->velocity->x + velocityDelta1));
HXLINE( 903)		Float delta = (this->velocity->x * elapsed);
HXLINE( 904)		this->velocity->set_x((this->velocity->x + velocityDelta1));
HXLINE( 905)		this->set_x((this->x + delta));
HXLINE( 907)		Float velocityDelta3 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y,elapsed);
HXDLIN( 907)		velocityDelta1 = (((Float)0.5) * (velocityDelta3 - this->velocity->y));
HXLINE( 908)		this->velocity->set_y((this->velocity->y + velocityDelta1));
HXLINE( 909)		delta = (this->velocity->y * elapsed);
HXLINE( 910)		this->velocity->set_y((this->velocity->y + velocityDelta1));
HXLINE( 911)		this->set_y((this->y + delta));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

void FlxObject_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_918_draw)
            	}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_940_overlaps)
HXLINE( 941)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(objectOrGroup);
HXLINE( 942)		if (::hx::IsNotNull( group )) {
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0,Float,y,Float,x, ::Dynamic,_g,bool,inScreenSpace1, ::flixel::FlxCamera,camera1) HXARGC(1)
            			bool _hx_run( ::flixel::FlxBasic objectOrGroup){
            				HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_944_overlaps)
HXLINE( 944)				return ( (bool)(_g(objectOrGroup,x,y,inScreenSpace1,camera1)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 944)			 ::Dynamic _g = this->overlapsCallback_dyn();
HXDLIN( 944)			Float x = ( (Float)(0) );
HXDLIN( 944)			Float y = ( (Float)(0) );
HXDLIN( 944)			bool inScreenSpace1 = inScreenSpace;
HXDLIN( 944)			 ::flixel::FlxCamera camera1 = camera;
HXDLIN( 944)			return group->any( ::Dynamic(new _hx_Closure_0(y,x,_g,inScreenSpace1,camera1)));
            		}
HXLINE( 947)		if ((objectOrGroup->flixelType == 3)) {
HXLINE( 951)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(objectOrGroup) );
HXLINE( 952)			return tilemap->overlaps(::hx::ObjectPtr<OBJ_>(this),inScreenSpace,camera);
            		}
HXLINE( 955)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(objectOrGroup) );
HXLINE( 956)		if (!(inScreenSpace)) {
HXLINE( 958)			bool _hx_tmp;
HXDLIN( 958)			bool _hx_tmp1;
HXDLIN( 958)			Float object1 = object->x;
HXDLIN( 958)			Float _hx_tmp2 = (object1 + object->get_width());
HXDLIN( 958)			if ((_hx_tmp2 > this->x)) {
HXLINE( 958)				Float object1 = object->x;
HXDLIN( 958)				Float _hx_tmp = this->x;
HXDLIN( 958)				_hx_tmp1 = (object1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 958)				_hx_tmp1 = false;
            			}
HXDLIN( 958)			if (_hx_tmp1) {
HXLINE( 958)				Float object1 = object->y;
HXDLIN( 958)				Float _hx_tmp1 = (object1 + object->get_height());
HXDLIN( 958)				_hx_tmp = (_hx_tmp1 > this->y);
            			}
            			else {
HXLINE( 958)				_hx_tmp = false;
            			}
HXDLIN( 958)			if (_hx_tmp) {
HXLINE( 958)				Float object1 = object->y;
HXDLIN( 958)				Float _hx_tmp = this->y;
HXDLIN( 958)				return (object1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 958)				return false;
            			}
            		}
HXLINE( 961)		if (::hx::IsNull( camera )) {
HXLINE( 963)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 965)		 ::flixel::math::FlxBasePoint objectScreenPos = object->getScreenPosition(null(),camera);
HXLINE( 966)		this->getScreenPosition(this->_point,camera);
HXLINE( 967)		bool _hx_tmp;
HXDLIN( 967)		bool _hx_tmp1;
HXDLIN( 967)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 967)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 967)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 968)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 968)			Float _hx_tmp = this->_point->x;
HXLINE( 967)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 967)			_hx_tmp1 = false;
            		}
HXDLIN( 967)		if (_hx_tmp1) {
HXLINE( 969)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 969)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 967)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 967)			_hx_tmp = false;
            		}
HXDLIN( 967)		if (_hx_tmp) {
HXLINE( 970)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 970)			Float _hx_tmp = this->_point->y;
HXDLIN( 970)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 967)			return false;
            		}
HXDLIN( 967)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic objectOrGroup,Float x,Float y,bool inScreenSpace, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_976_overlapsCallback)
HXDLIN( 976)		return this->overlaps(objectOrGroup,inScreenSpace,camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt(Float x,Float y, ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_999_overlapsAt)
HXLINE(1000)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(objectOrGroup);
HXLINE(1001)		if (::hx::IsNotNull( group )) {
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0,Float,y1,Float,x1, ::Dynamic,_g,bool,inScreenSpace1, ::flixel::FlxCamera,camera1) HXARGC(1)
            			bool _hx_run( ::flixel::FlxBasic objectOrGroup){
            				HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1003_overlapsAt)
HXLINE(1003)				return ( (bool)(_g(objectOrGroup,x1,y1,inScreenSpace1,camera1)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(1003)			 ::Dynamic _g = this->overlapsAtCallback_dyn();
HXDLIN(1003)			Float x1 = x;
HXDLIN(1003)			Float y1 = y;
HXDLIN(1003)			bool inScreenSpace1 = inScreenSpace;
HXDLIN(1003)			 ::flixel::FlxCamera camera1 = camera;
HXDLIN(1003)			return group->any( ::Dynamic(new _hx_Closure_0(y1,x1,_g,inScreenSpace1,camera1)));
            		}
HXLINE(1006)		if ((objectOrGroup->flixelType == 3)) {
HXLINE(1012)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(objectOrGroup) );
HXLINE(1013)			return tilemap->overlapsAt((tilemap->x - (x - this->x)),(tilemap->y - (y - this->y)),::hx::ObjectPtr<OBJ_>(this),inScreenSpace,camera);
            		}
HXLINE(1016)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(objectOrGroup) );
HXLINE(1017)		if (!(inScreenSpace)) {
HXLINE(1019)			bool _hx_tmp;
HXDLIN(1019)			bool _hx_tmp1;
HXDLIN(1019)			Float object1 = object->x;
HXDLIN(1019)			if (((object1 + object->get_width()) > x)) {
HXLINE(1019)				Float object1 = object->x;
HXDLIN(1019)				_hx_tmp1 = (object1 < (x + this->get_width()));
            			}
            			else {
HXLINE(1019)				_hx_tmp1 = false;
            			}
HXDLIN(1019)			if (_hx_tmp1) {
HXLINE(1019)				Float object1 = object->y;
HXDLIN(1019)				_hx_tmp = ((object1 + object->get_height()) > y);
            			}
            			else {
HXLINE(1019)				_hx_tmp = false;
            			}
HXDLIN(1019)			if (_hx_tmp) {
HXLINE(1019)				Float object1 = object->y;
HXDLIN(1019)				return (object1 < (y + this->get_height()));
            			}
            			else {
HXLINE(1019)				return false;
            			}
            		}
HXLINE(1022)		if (::hx::IsNull( camera )) {
HXLINE(1024)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1026)		 ::flixel::math::FlxBasePoint objectScreenPos = object->getScreenPosition(null(),camera);
HXLINE(1027)		this->getScreenPosition(this->_point,camera);
HXLINE(1028)		bool _hx_tmp;
HXDLIN(1028)		bool _hx_tmp1;
HXDLIN(1028)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN(1028)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN(1028)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE(1029)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN(1029)			Float _hx_tmp = this->_point->x;
HXLINE(1028)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE(1028)			_hx_tmp1 = false;
            		}
HXDLIN(1028)		if (_hx_tmp1) {
HXLINE(1030)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN(1030)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE(1028)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE(1028)			_hx_tmp = false;
            		}
HXDLIN(1028)		if (_hx_tmp) {
HXLINE(1031)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN(1031)			Float _hx_tmp = this->_point->y;
HXDLIN(1031)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE(1028)			return false;
            		}
HXDLIN(1028)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic objectOrGroup,Float x,Float y,bool inScreenSpace, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1037_overlapsAtCallback)
HXDLIN(1037)		return this->overlapsAt(x,y,objectOrGroup,inScreenSpace,camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxBasePoint point,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1050_overlapsPoint)
HXLINE(1051)		if (!(inScreenSpace)) {
HXLINE(1053)			bool _hx_tmp;
HXDLIN(1053)			bool _hx_tmp1;
HXDLIN(1053)			if ((point->x >= this->x)) {
HXLINE(1053)				Float point1 = point->x;
HXDLIN(1053)				Float _hx_tmp = this->x;
HXDLIN(1053)				_hx_tmp1 = (point1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE(1053)				_hx_tmp1 = false;
            			}
HXDLIN(1053)			if (_hx_tmp1) {
HXLINE(1053)				_hx_tmp = (point->y >= this->y);
            			}
            			else {
HXLINE(1053)				_hx_tmp = false;
            			}
HXDLIN(1053)			if (_hx_tmp) {
HXLINE(1053)				Float point1 = point->y;
HXDLIN(1053)				Float _hx_tmp = this->y;
HXDLIN(1053)				return (point1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE(1053)				return false;
            			}
            		}
HXLINE(1056)		if (::hx::IsNull( camera )) {
HXLINE(1058)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1060)		Float xPos = (point->x - camera->scroll->x);
HXLINE(1061)		Float yPos = (point->y - camera->scroll->y);
HXLINE(1062)		this->getScreenPosition(this->_point,camera);
HXLINE(1063)		if (point->_weak) {
HXLINE(1063)			point->put();
            		}
HXLINE(1064)		bool _hx_tmp;
HXDLIN(1064)		bool _hx_tmp1;
HXDLIN(1064)		if ((xPos >= this->_point->x)) {
HXLINE(1064)			Float _hx_tmp = this->_point->x;
HXDLIN(1064)			_hx_tmp1 = (xPos < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE(1064)			_hx_tmp1 = false;
            		}
HXDLIN(1064)		if (_hx_tmp1) {
HXLINE(1064)			_hx_tmp = (yPos >= this->_point->y);
            		}
            		else {
HXLINE(1064)			_hx_tmp = false;
            		}
HXDLIN(1064)		if (_hx_tmp) {
HXLINE(1064)			Float _hx_tmp = this->_point->y;
HXDLIN(1064)			return (yPos < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE(1064)			return false;
            		}
HXDLIN(1064)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1075_inWorldBounds)
HXDLIN(1075)		bool _hx_tmp;
HXDLIN(1075)		bool _hx_tmp1;
HXDLIN(1075)		Float _hx_tmp2 = this->x;
HXDLIN(1075)		Float _hx_tmp3 = (_hx_tmp2 + this->get_width());
HXDLIN(1075)		if ((_hx_tmp3 > ::flixel::FlxG_obj::worldBounds->x)) {
HXDLIN(1075)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(1075)			_hx_tmp1 = (this->x < (_this->x + _this->width));
            		}
            		else {
HXDLIN(1075)			_hx_tmp1 = false;
            		}
HXDLIN(1075)		if (_hx_tmp1) {
HXDLIN(1075)			Float _hx_tmp1 = this->y;
HXDLIN(1075)			Float _hx_tmp2 = (_hx_tmp1 + this->get_height());
HXDLIN(1075)			_hx_tmp = (_hx_tmp2 > ::flixel::FlxG_obj::worldBounds->y);
            		}
            		else {
HXDLIN(1075)			_hx_tmp = false;
            		}
HXDLIN(1075)		if (_hx_tmp) {
HXDLIN(1075)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(1075)			return (this->y < (_this->y + _this->height));
            		}
            		else {
HXDLIN(1075)			return false;
            		}
HXDLIN(1075)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

 ::flixel::math::FlxBasePoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxBasePoint result, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1086_getScreenPosition)
HXLINE(1087)		if (::hx::IsNull( result )) {
HXLINE(1088)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1088)			point->_inPool = false;
HXDLIN(1088)			result = point;
            		}
HXLINE(1090)		if (::hx::IsNull( camera )) {
HXLINE(1091)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1093)		{
HXLINE(1093)			Float y = this->y;
HXDLIN(1093)			result->set_x(this->x);
HXDLIN(1093)			result->set_y(y);
            		}
HXLINE(1094)		if (this->pixelPerfectPosition) {
HXLINE(1095)			result->set_x(( (Float)(::Math_obj::floor(result->x)) ));
HXDLIN(1095)			result->set_y(( (Float)(::Math_obj::floor(result->y)) ));
            		}
HXLINE(1097)		Float y1 = (camera->scroll->y * this->scrollFactor->y);
HXDLIN(1097)		result->set_x((result->x - (camera->scroll->x * this->scrollFactor->x)));
HXDLIN(1097)		result->set_y((result->y - y1));
HXDLIN(1097)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

 ::flixel::math::FlxBasePoint FlxObject_obj::getPosition( ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1107_getPosition)
HXLINE(1108)		if (::hx::IsNull( result )) {
HXLINE(1109)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1109)			point->_inPool = false;
HXDLIN(1109)			result = point;
            		}
HXLINE(1111)		Float y = this->y;
HXDLIN(1111)		result->set_x(this->x);
HXDLIN(1111)		result->set_y(y);
HXDLIN(1111)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

 ::flixel::math::FlxBasePoint FlxObject_obj::getMidpoint( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1122_getMidpoint)
HXLINE(1123)		if (::hx::IsNull( point )) {
HXLINE(1124)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1124)			point1->_inPool = false;
HXDLIN(1124)			point = point1;
            		}
HXLINE(1125)		Float x = this->x;
HXDLIN(1125)		Float x1 = (x + (this->get_width() * ((Float)0.5)));
HXDLIN(1125)		Float y = this->y;
HXDLIN(1125)		Float y1 = (y + (this->get_height() * ((Float)0.5)));
HXDLIN(1125)		point->set_x(x1);
HXDLIN(1125)		point->set_y(y1);
HXDLIN(1125)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

 ::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1129_getHitbox)
HXLINE(1130)		if (::hx::IsNull( rect )) {
HXLINE(1131)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1131)			_this->x = ( (Float)(0) );
HXDLIN(1131)			_this->y = ( (Float)(0) );
HXDLIN(1131)			_this->width = ( (Float)(0) );
HXDLIN(1131)			_this->height = ( (Float)(0) );
HXDLIN(1131)			 ::flixel::math::FlxRect rect1 = _this;
HXDLIN(1131)			rect1->_inPool = false;
HXDLIN(1131)			rect = rect1;
            		}
HXLINE(1132)		Float X = this->x;
HXDLIN(1132)		Float Y = this->y;
HXDLIN(1132)		Float Width = this->get_width();
HXDLIN(1132)		Float Height = this->get_height();
HXDLIN(1132)		rect->x = X;
HXDLIN(1132)		rect->y = Y;
HXDLIN(1132)		rect->width = Width;
HXDLIN(1132)		rect->height = Height;
HXDLIN(1132)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

void FlxObject_obj::reset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1143_reset)
HXLINE(1144)		this->touching = 0;
HXLINE(1145)		this->wasTouching = 0;
HXLINE(1146)		this->setPosition(x,y);
HXLINE(1147)		{
HXLINE(1147)			 ::flixel::math::FlxBasePoint this1 = this->last;
HXDLIN(1147)			Float y1 = this->y;
HXDLIN(1147)			this1->set_x(this->x);
HXDLIN(1147)			this1->set_y(y1);
            		}
HXLINE(1148)		{
HXLINE(1148)			 ::flixel::math::FlxBasePoint this2 = this->velocity;
HXDLIN(1148)			this2->set_x(( (Float)(0) ));
HXDLIN(1148)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(1149)		this->revive();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1160_isOnScreen)
HXLINE(1161)		if (::hx::IsNull( camera )) {
HXLINE(1162)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1164)		this->getScreenPosition(this->_point,camera);
HXLINE(1165)		 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN(1165)		Float width = this->get_width();
HXDLIN(1165)		Float height = this->get_height();
HXDLIN(1165)		bool contained;
HXDLIN(1165)		bool contained1;
HXDLIN(1165)		bool contained2;
HXDLIN(1165)		if (((point->x + width) > camera->viewMarginX)) {
HXLINE(1165)			contained2 = (point->x < (( (Float)(camera->width) ) - camera->viewMarginX));
            		}
            		else {
HXLINE(1165)			contained2 = false;
            		}
HXDLIN(1165)		if (contained2) {
HXLINE(1165)			contained1 = ((point->y + height) > camera->viewMarginY);
            		}
            		else {
HXLINE(1165)			contained1 = false;
            		}
HXDLIN(1165)		if (contained1) {
HXLINE(1165)			contained = (point->y < (( (Float)(camera->height) ) - camera->viewMarginY));
            		}
            		else {
HXLINE(1165)			contained = false;
            		}
HXDLIN(1165)		if (point->_weak) {
HXLINE(1165)			point->put();
            		}
HXDLIN(1165)		return contained;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1172_isPixelPerfectRender)
HXLINE(1173)		if (::hx::IsNull( camera )) {
HXLINE(1174)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1175)		if (::hx::IsNull( this->pixelPerfectRender )) {
HXLINE(1175)			return camera->pixelPerfectRender;
            		}
            		else {
HXLINE(1175)			return ( (bool)(this->pixelPerfectRender) );
            		}
HXDLIN(1175)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching(int direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1187_isTouching)
HXDLIN(1187)		return ((this->touching & direction) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched(int direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1199_justTouched)
HXDLIN(1199)		if (((this->touching & direction) > 0)) {
HXDLIN(1199)			return !(((this->wasTouching & direction) > 0));
            		}
            		else {
HXDLIN(1199)			return false;
            		}
HXDLIN(1199)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

void FlxObject_obj::hurt(Float damage){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1209_hurt)
HXLINE(1210)		this->health = (this->health - damage);
HXLINE(1211)		if ((this->health <= 0)) {
HXLINE(1212)			this->kill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

 ::flixel::FlxObject FlxObject_obj::screenCenter(::hx::Null< int >  __o_axes){
            		int axes = __o_axes.Default(17);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1222_screenCenter)
HXLINE(1223)		bool _hx_tmp;
HXDLIN(1223)		if ((axes != 1)) {
HXLINE(1223)			_hx_tmp = (axes == 17);
            		}
            		else {
HXLINE(1223)			_hx_tmp = true;
            		}
HXDLIN(1223)		if (_hx_tmp) {
HXLINE(1224)			int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(1224)			this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            		}
HXLINE(1226)		bool _hx_tmp1;
HXDLIN(1226)		if ((axes != 16)) {
HXLINE(1226)			_hx_tmp1 = (axes == 17);
            		}
            		else {
HXLINE(1226)			_hx_tmp1 = true;
            		}
HXDLIN(1226)		if (_hx_tmp1) {
HXLINE(1227)			int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(1227)			this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            		}
HXLINE(1229)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

void FlxObject_obj::setPosition(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(((Float)0.0));
            		Float y = __o_y.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1240_setPosition)
HXLINE(1241)		this->set_x(x);
HXLINE(1242)		this->set_y(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

void FlxObject_obj::setSize(Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1252_setSize)
HXLINE(1253)		this->set_width(width);
HXLINE(1254)		this->set_height(height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

 ::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1332_getBoundingBox)
HXLINE(1333)		this->getScreenPosition(this->_point,camera);
HXLINE(1335)		{
HXLINE(1335)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1335)			Float X = this->_point->x;
HXDLIN(1335)			Float Y = this->_point->y;
HXDLIN(1335)			Float Width = this->get_width();
HXDLIN(1335)			Float Height = this->get_height();
HXDLIN(1335)			_this->x = X;
HXDLIN(1335)			_this->y = Y;
HXDLIN(1335)			_this->width = Width;
HXDLIN(1335)			_this->height = Height;
            		}
HXLINE(1336)		this->_rect = camera->transformRect(this->_rect);
HXLINE(1338)		if (this->isPixelPerfectRender(camera)) {
HXLINE(1340)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1340)			_this->x = ( (Float)(::Math_obj::floor(_this->x)) );
HXDLIN(1340)			_this->y = ( (Float)(::Math_obj::floor(_this->y)) );
HXDLIN(1340)			_this->width = ( (Float)(::Math_obj::floor(_this->width)) );
HXDLIN(1340)			_this->height = ( (Float)(::Math_obj::floor(_this->height)) );
            		}
HXLINE(1343)		return this->_rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

 ::flixel::math::FlxRect FlxObject_obj::getRotatedBounds( ::flixel::math::FlxRect newRect){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1356_getRotatedBounds)
HXLINE(1357)		if (::hx::IsNull( newRect )) {
HXLINE(1358)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1358)			_this->x = ( (Float)(0) );
HXDLIN(1358)			_this->y = ( (Float)(0) );
HXDLIN(1358)			_this->width = ( (Float)(0) );
HXDLIN(1358)			_this->height = ( (Float)(0) );
HXDLIN(1358)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1358)			rect->_inPool = false;
HXDLIN(1358)			newRect = rect;
            		}
HXLINE(1360)		{
HXLINE(1360)			Float X = this->x;
HXDLIN(1360)			Float Y = this->y;
HXDLIN(1360)			Float Width = this->get_width();
HXDLIN(1360)			Float Height = this->get_height();
HXDLIN(1360)			newRect->x = X;
HXDLIN(1360)			newRect->y = Y;
HXDLIN(1360)			newRect->width = Width;
HXDLIN(1360)			newRect->height = Height;
            		}
HXLINE(1361)		return newRect->getRotatedBounds(this->angle,null(),newRect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getRotatedBounds,return )

::String FlxObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1369_toString)
HXLINE(1370)		 ::Dynamic value = this->x;
HXDLIN(1370)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(1370)		_this->label = HX_("x",78,00,00,00);
HXDLIN(1370)		_this->value = value;
HXLINE(1371)		 ::Dynamic value1 = this->y;
HXDLIN(1371)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(1371)		_this1->label = HX_("y",79,00,00,00);
HXDLIN(1371)		_this1->value = value1;
HXLINE(1372)		 ::Dynamic value2 = this->get_width();
HXDLIN(1372)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(1372)		_this2->label = HX_("w",77,00,00,00);
HXDLIN(1372)		_this2->value = value2;
HXLINE(1373)		 ::Dynamic value3 = this->get_height();
HXDLIN(1373)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(1373)		_this3->label = HX_("h",68,00,00,00);
HXDLIN(1373)		_this3->value = value3;
HXLINE(1374)		 ::Dynamic value4 = this->visible;
HXDLIN(1374)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(1374)		_this4->label = HX_("visible",72,78,24,a3);
HXDLIN(1374)		_this4->value = value4;
HXLINE(1375)		 ::Dynamic value5 = this->velocity;
HXDLIN(1375)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(1375)		_this5->label = HX_("velocity",1d,02,fe,1e);
HXDLIN(1375)		_this5->value = value5;
HXLINE(1369)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


Float FlxObject_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1382_set_x)
HXDLIN(1382)		return (this->x = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1388_set_y)
HXDLIN(1388)		return (this->y = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1402_set_width)
HXDLIN(1402)		return (this->width = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1416_set_height)
HXDLIN(1416)		return (this->height = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1422_get_width)
HXDLIN(1422)		return this->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1428_get_height)
HXDLIN(1428)		return this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1434_get_solid)
HXDLIN(1434)		return ((this->allowCollisions & 4369) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid(bool value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1439_set_solid)
HXLINE(1440)		int _hx_tmp;
HXDLIN(1440)		if (value) {
HXLINE(1440)			_hx_tmp = 4369;
            		}
            		else {
HXLINE(1440)			_hx_tmp = 0;
            		}
HXDLIN(1440)		this->set_allowCollisions(_hx_tmp);
HXLINE(1441)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle(Float value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1447_set_angle)
HXDLIN(1447)		return (this->angle = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves(bool value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1453_set_moves)
HXDLIN(1453)		return (this->moves = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable(bool value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1459_set_immovable)
HXDLIN(1459)		return (this->immovable = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender(bool value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1465_set_pixelPerfectRender)
HXDLIN(1465)		return ( (bool)((this->pixelPerfectRender = value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions(int value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1471_set_allowCollisions)
HXDLIN(1471)		return (this->allowCollisions = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

bool FlxObject_obj::get_collisonXDrag(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1477_get_collisonXDrag)
HXDLIN(1477)		return (this->collisionXDrag == 2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_collisonXDrag,return )

bool FlxObject_obj::set_collisonXDrag(bool value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1482_set_collisonXDrag)
HXLINE(1483)		int _hx_tmp;
HXDLIN(1483)		if (value) {
HXLINE(1483)			_hx_tmp = 2;
            		}
            		else {
HXLINE(1483)			_hx_tmp = 0;
            		}
HXDLIN(1483)		this->collisionXDrag = _hx_tmp;
HXLINE(1484)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_collisonXDrag,return )

 ::flixel::path::FlxPath FlxObject_obj::set_path( ::flixel::path::FlxPath path){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1509_set_path)
HXLINE(1510)		if (::hx::IsInstanceEq( this->path,path )) {
HXLINE(1511)			return path;
            		}
HXLINE(1513)		if (::hx::IsNotNull( this->path )) {
HXLINE(1514)			this->path->object = null();
            		}
HXLINE(1516)		if (::hx::IsNotNull( path )) {
HXLINE(1517)			path->object = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(1518)		return (this->path = path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

bool FlxObject_obj::defaultMoves;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

 ::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

 ::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject object1, ::flixel::FlxObject object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_181_separate)
HXLINE( 182)		bool separatedX = ::flixel::FlxObject_obj::separateX(object1,object2);
HXLINE( 183)		bool separatedY = ::flixel::FlxObject_obj::separateY(object1,object2);
HXLINE( 184)		if (!(separatedX)) {
HXLINE( 184)			return separatedY;
            		}
            		else {
HXLINE( 184)			return true;
            		}
HXDLIN( 184)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_196_updateTouchingFlags)
HXLINE( 197)		bool touchingX = ::flixel::FlxObject_obj::updateTouchingFlagsX(Object1,Object2);
HXLINE( 198)		bool touchingY = ::flixel::FlxObject_obj::updateTouchingFlagsY(Object1,Object2);
HXLINE( 199)		if (!(touchingX)) {
HXLINE( 199)			return touchingY;
            		}
            		else {
HXLINE( 199)			return true;
            		}
HXDLIN( 199)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

bool FlxObject_obj::allowCollisionDrag(int type, ::flixel::FlxObject object1, ::flixel::FlxObject object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_204_allowCollisionDrag)
HXDLIN( 204)		bool _hx_tmp;
HXDLIN( 204)		if (object2->active) {
HXDLIN( 204)			_hx_tmp = object2->moves;
            		}
            		else {
HXDLIN( 204)			_hx_tmp = false;
            		}
HXDLIN( 204)		if (_hx_tmp) {
HXDLIN( 204)			switch((int)(type)){
            				case (int)0: {
HXLINE( 206)					return false;
            				}
            				break;
            				case (int)1: {
HXLINE( 207)					return true;
            				}
            				break;
            				case (int)2: {
HXLINE( 208)					return object2->immovable;
            				}
            				break;
            				case (int)3: {
HXLINE( 209)					if (!(object2->immovable)) {
HXLINE( 209)						return (object2->mass > object1->mass);
            					}
            					else {
HXLINE( 209)						return true;
            					}
            				}
            				break;
            			}
            		}
            		else {
HXDLIN( 204)			return false;
            		}
HXDLIN( 204)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,allowCollisionDrag,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject object1, ::flixel::FlxObject object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_220_computeOverlapX)
HXLINE( 221)		Float overlap = ( (Float)(0) );
HXLINE( 223)		Float obj1delta = (object1->x - object1->last->x);
HXLINE( 224)		Float obj2delta = (object2->x - object2->last->x);
HXLINE( 226)		if ((obj1delta != obj2delta)) {
HXLINE( 229)			Float obj1deltaAbs;
HXDLIN( 229)			if ((obj1delta > 0)) {
HXLINE( 229)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 229)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 230)			Float obj2deltaAbs;
HXDLIN( 230)			if ((obj2delta > 0)) {
HXLINE( 230)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 230)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 232)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 232)			Float X;
HXDLIN( 232)			if ((obj1delta > 0)) {
HXLINE( 232)				X = obj1delta;
            			}
            			else {
HXLINE( 232)				X = ( (Float)(0) );
            			}
HXDLIN( 232)			Float X1 = (object1->x - X);
HXDLIN( 232)			Float Y = object1->last->y;
HXDLIN( 232)			Float Width = (object1->get_width() + obj1deltaAbs);
HXDLIN( 232)			Float Height = object1->get_height();
HXDLIN( 232)			_this->x = X1;
HXDLIN( 232)			_this->y = Y;
HXDLIN( 232)			_this->width = Width;
HXDLIN( 232)			_this->height = Height;
HXDLIN( 232)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 234)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 234)			Float X2;
HXDLIN( 234)			if ((obj2delta > 0)) {
HXLINE( 234)				X2 = obj2delta;
            			}
            			else {
HXLINE( 234)				X2 = ( (Float)(0) );
            			}
HXDLIN( 234)			Float X3 = (object2->x - X2);
HXDLIN( 234)			Float Y1 = object2->last->y;
HXDLIN( 234)			Float Width1 = (object2->get_width() + obj2deltaAbs);
HXDLIN( 234)			Float Height1 = object2->get_height();
HXDLIN( 234)			_this1->x = X3;
HXDLIN( 234)			_this1->y = Y1;
HXDLIN( 234)			_this1->width = Width1;
HXDLIN( 234)			_this1->height = Height1;
HXDLIN( 234)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 237)			bool _hx_tmp;
HXDLIN( 237)			bool _hx_tmp1;
HXDLIN( 237)			bool _hx_tmp2;
HXDLIN( 237)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 237)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 237)				_hx_tmp2 = false;
            			}
HXDLIN( 237)			if (_hx_tmp2) {
HXLINE( 237)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 237)				_hx_tmp1 = false;
            			}
HXDLIN( 237)			if (_hx_tmp1) {
HXLINE( 237)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 237)				_hx_tmp = false;
            			}
HXDLIN( 237)			if (_hx_tmp) {
HXLINE( 242)				Float maxOverlap;
HXDLIN( 242)				if (checkMaxOverlap) {
HXLINE( 242)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 242)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 245)				if ((obj1delta > obj2delta)) {
HXLINE( 247)					Float object11 = object1->x;
HXDLIN( 247)					Float overlap1 = (object11 + object1->get_width());
HXDLIN( 247)					overlap = (overlap1 - object2->x);
HXLINE( 248)					bool _hx_tmp;
HXDLIN( 248)					bool _hx_tmp1;
HXDLIN( 248)					bool _hx_tmp2;
HXDLIN( 248)					if (checkMaxOverlap) {
HXLINE( 248)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 248)						_hx_tmp2 = false;
            					}
HXDLIN( 248)					if (!(_hx_tmp2)) {
HXLINE( 248)						_hx_tmp1 = ((object1->allowCollisions & 16) == 0);
            					}
            					else {
HXLINE( 248)						_hx_tmp1 = true;
            					}
HXDLIN( 248)					if (!(_hx_tmp1)) {
HXLINE( 248)						_hx_tmp = ((object2->allowCollisions & 1) == 0);
            					}
            					else {
HXLINE( 248)						_hx_tmp = true;
            					}
HXDLIN( 248)					if (_hx_tmp) {
HXLINE( 252)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 256)						 ::flixel::FlxObject object11 = object1;
HXDLIN( 256)						object11->touching = (object11->touching | 16);
HXLINE( 257)						 ::flixel::FlxObject object21 = object2;
HXDLIN( 257)						object21->touching = (object21->touching | 1);
            					}
            				}
            				else {
HXLINE( 260)					if ((obj1delta < obj2delta)) {
HXLINE( 262)						Float object11 = object1->x;
HXDLIN( 262)						Float overlap1 = (object11 - object2->get_width());
HXDLIN( 262)						overlap = (overlap1 - object2->x);
HXLINE( 263)						bool _hx_tmp;
HXDLIN( 263)						bool _hx_tmp1;
HXDLIN( 263)						bool _hx_tmp2;
HXDLIN( 263)						if (checkMaxOverlap) {
HXLINE( 263)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 263)							_hx_tmp2 = false;
            						}
HXDLIN( 263)						if (!(_hx_tmp2)) {
HXLINE( 263)							_hx_tmp1 = ((object1->allowCollisions & 1) == 0);
            						}
            						else {
HXLINE( 263)							_hx_tmp1 = true;
            						}
HXDLIN( 263)						if (!(_hx_tmp1)) {
HXLINE( 263)							_hx_tmp = ((object2->allowCollisions & 16) == 0);
            						}
            						else {
HXLINE( 263)							_hx_tmp = true;
            						}
HXDLIN( 263)						if (_hx_tmp) {
HXLINE( 267)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 271)							 ::flixel::FlxObject object11 = object1;
HXDLIN( 271)							object11->touching = (object11->touching | 1);
HXLINE( 272)							 ::flixel::FlxObject object21 = object2;
HXDLIN( 272)							object21->touching = (object21->touching | 16);
            						}
            					}
            				}
            			}
            		}
HXLINE( 277)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject object1, ::flixel::FlxObject object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_288_separateX)
HXLINE( 290)		bool immovable1 = object1->immovable;
HXLINE( 291)		bool immovable2 = object2->immovable;
HXLINE( 292)		bool _hx_tmp;
HXDLIN( 292)		if (immovable1) {
HXLINE( 292)			_hx_tmp = immovable2;
            		}
            		else {
HXLINE( 292)			_hx_tmp = false;
            		}
HXDLIN( 292)		if (_hx_tmp) {
HXLINE( 294)			return false;
            		}
HXLINE( 298)		if ((object1->flixelType == 3)) {
HXLINE( 300)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object1) );
HXLINE( 301)			return tilemap->overlapsWithCallback(object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
            		}
HXLINE( 303)		if ((object2->flixelType == 3)) {
HXLINE( 305)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object2) );
HXLINE( 306)			return tilemap->overlapsWithCallback(object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
            		}
HXLINE( 309)		Float overlap = ::flixel::FlxObject_obj::computeOverlapX(object1,object2,null());
HXLINE( 311)		if ((overlap != 0)) {
HXLINE( 313)			Float delta1 = (object1->x - object1->last->x);
HXLINE( 314)			Float delta2 = (object2->x - object2->last->x);
HXLINE( 315)			Float vel1 = object1->velocity->x;
HXLINE( 316)			Float vel2 = object2->velocity->x;
HXLINE( 317)			Float mass1 = object1->mass;
HXLINE( 318)			Float mass2 = object2->mass;
HXLINE( 319)			Float massSum = (mass1 + mass2);
HXLINE( 320)			Float elasticity1 = object1->elasticity;
HXLINE( 321)			Float elasticity2 = object2->elasticity;
HXLINE( 323)			bool _hx_tmp;
HXDLIN( 323)			if (!(immovable1)) {
HXLINE( 323)				_hx_tmp = !(immovable2);
            			}
            			else {
HXLINE( 323)				_hx_tmp = false;
            			}
HXDLIN( 323)			if (_hx_tmp) {
HXLINE( 338)				object1->set_x((object1->x - (overlap / ( (Float)(2) ))));
HXLINE( 339)				object2->set_x((object2->x + (overlap / ( (Float)(2) ))));
HXLINE( 341)				Float momentum = ((mass1 * vel1) + (mass2 * vel2));
HXLINE( 342)				Float newVel1 = ((momentum + ((elasticity1 * mass2) * (vel2 - vel1))) / massSum);
HXLINE( 343)				Float newVel2 = ((momentum + ((elasticity2 * mass1) * (vel1 - vel2))) / massSum);
HXLINE( 344)				object1->velocity->set_x(newVel1);
HXLINE( 345)				object2->velocity->set_x(newVel2);
            			}
            			else {
HXLINE( 348)				if (!(immovable1)) {
HXLINE( 350)					object1->set_x((object1->x - overlap));
HXLINE( 351)					object1->velocity->set_x((vel2 - (vel1 * elasticity1)));
            				}
            				else {
HXLINE( 353)					if (!(immovable2)) {
HXLINE( 355)						object2->set_x((object2->x + overlap));
HXLINE( 356)						object2->velocity->set_x((vel1 - (vel2 * elasticity2)));
            					}
            				}
            			}
HXLINE( 360)			bool _hx_tmp1;
HXDLIN( 360)			if (::flixel::FlxObject_obj::allowCollisionDrag(object1->collisionYDrag,object1,object2)) {
HXLINE( 360)				_hx_tmp1 = (delta1 > delta2);
            			}
            			else {
HXLINE( 360)				_hx_tmp1 = false;
            			}
HXDLIN( 360)			if (_hx_tmp1) {
HXLINE( 361)				object1->set_y((object1->y + (object2->y - object2->last->y)));
            			}
            			else {
HXLINE( 362)				bool _hx_tmp;
HXDLIN( 362)				if (::flixel::FlxObject_obj::allowCollisionDrag(object2->collisionYDrag,object2,object1)) {
HXLINE( 362)					_hx_tmp = (delta2 > delta1);
            				}
            				else {
HXLINE( 362)					_hx_tmp = false;
            				}
HXDLIN( 362)				if (_hx_tmp) {
HXLINE( 363)					object2->set_y((object2->y + (object1->y - object1->last->y)));
            				}
            			}
HXLINE( 365)			return true;
            		}
HXLINE( 368)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject object1, ::flixel::FlxObject object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_379_updateTouchingFlagsX)
HXLINE( 381)		if ((object1->flixelType == 3)) {
HXLINE( 383)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object1) );
HXLINE( 384)			return tilemap->overlapsWithCallback(object2,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),null(),null());
            		}
HXLINE( 386)		if ((object2->flixelType == 3)) {
HXLINE( 388)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object2) );
HXLINE( 389)			return tilemap->overlapsWithCallback(object1,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),true,null());
            		}
HXLINE( 392)		return (::flixel::FlxObject_obj::computeOverlapX(object1,object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject object1, ::flixel::FlxObject object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_402_computeOverlapY)
HXLINE( 403)		Float overlap = ( (Float)(0) );
HXLINE( 405)		Float obj1delta = (object1->y - object1->last->y);
HXLINE( 406)		Float obj2delta = (object2->y - object2->last->y);
HXLINE( 408)		if ((obj1delta != obj2delta)) {
HXLINE( 411)			Float obj1deltaAbs;
HXDLIN( 411)			if ((obj1delta > 0)) {
HXLINE( 411)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 411)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 412)			Float obj2deltaAbs;
HXDLIN( 412)			if ((obj2delta > 0)) {
HXLINE( 412)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 412)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 414)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 414)			Float X = object1->x;
HXDLIN( 414)			Float Y;
HXDLIN( 414)			if ((obj1delta > 0)) {
HXLINE( 414)				Y = obj1delta;
            			}
            			else {
HXLINE( 414)				Y = ( (Float)(0) );
            			}
HXDLIN( 414)			Float Y1 = (object1->y - Y);
HXDLIN( 414)			Float Width = object1->get_width();
HXDLIN( 414)			Float Height = (object1->get_height() + obj1deltaAbs);
HXDLIN( 414)			_this->x = X;
HXDLIN( 414)			_this->y = Y1;
HXDLIN( 414)			_this->width = Width;
HXDLIN( 414)			_this->height = Height;
HXDLIN( 414)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 416)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 416)			Float X1 = object2->x;
HXDLIN( 416)			Float Y2;
HXDLIN( 416)			if ((obj2delta > 0)) {
HXLINE( 416)				Y2 = obj2delta;
            			}
            			else {
HXLINE( 416)				Y2 = ( (Float)(0) );
            			}
HXDLIN( 416)			Float Y3 = (object2->y - Y2);
HXDLIN( 416)			Float Width1 = object2->get_width();
HXDLIN( 416)			Float Height1 = (object2->get_height() + obj2deltaAbs);
HXDLIN( 416)			_this1->x = X1;
HXDLIN( 416)			_this1->y = Y3;
HXDLIN( 416)			_this1->width = Width1;
HXDLIN( 416)			_this1->height = Height1;
HXDLIN( 416)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 419)			bool _hx_tmp;
HXDLIN( 419)			bool _hx_tmp1;
HXDLIN( 419)			bool _hx_tmp2;
HXDLIN( 419)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 419)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 419)				_hx_tmp2 = false;
            			}
HXDLIN( 419)			if (_hx_tmp2) {
HXLINE( 419)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 419)				_hx_tmp1 = false;
            			}
HXDLIN( 419)			if (_hx_tmp1) {
HXLINE( 419)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 419)				_hx_tmp = false;
            			}
HXDLIN( 419)			if (_hx_tmp) {
HXLINE( 424)				Float maxOverlap;
HXDLIN( 424)				if (checkMaxOverlap) {
HXLINE( 424)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 424)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 427)				if ((obj1delta > obj2delta)) {
HXLINE( 429)					Float object11 = object1->y;
HXDLIN( 429)					Float overlap1 = (object11 + object1->get_height());
HXDLIN( 429)					overlap = (overlap1 - object2->y);
HXLINE( 430)					bool _hx_tmp;
HXDLIN( 430)					bool _hx_tmp1;
HXDLIN( 430)					bool _hx_tmp2;
HXDLIN( 430)					if (checkMaxOverlap) {
HXLINE( 430)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 430)						_hx_tmp2 = false;
            					}
HXDLIN( 430)					if (!(_hx_tmp2)) {
HXLINE( 430)						_hx_tmp1 = ((object1->allowCollisions & 4096) == 0);
            					}
            					else {
HXLINE( 430)						_hx_tmp1 = true;
            					}
HXDLIN( 430)					if (!(_hx_tmp1)) {
HXLINE( 430)						_hx_tmp = ((object2->allowCollisions & 256) == 0);
            					}
            					else {
HXLINE( 430)						_hx_tmp = true;
            					}
HXDLIN( 430)					if (_hx_tmp) {
HXLINE( 434)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 438)						 ::flixel::FlxObject object11 = object1;
HXDLIN( 438)						object11->touching = (object11->touching | 4096);
HXLINE( 439)						 ::flixel::FlxObject object21 = object2;
HXDLIN( 439)						object21->touching = (object21->touching | 256);
            					}
            				}
            				else {
HXLINE( 442)					if ((obj1delta < obj2delta)) {
HXLINE( 444)						Float object11 = object1->y;
HXDLIN( 444)						Float overlap1 = (object11 - object2->get_height());
HXDLIN( 444)						overlap = (overlap1 - object2->y);
HXLINE( 445)						bool _hx_tmp;
HXDLIN( 445)						bool _hx_tmp1;
HXDLIN( 445)						bool _hx_tmp2;
HXDLIN( 445)						if (checkMaxOverlap) {
HXLINE( 445)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 445)							_hx_tmp2 = false;
            						}
HXDLIN( 445)						if (!(_hx_tmp2)) {
HXLINE( 445)							_hx_tmp1 = ((object1->allowCollisions & 256) == 0);
            						}
            						else {
HXLINE( 445)							_hx_tmp1 = true;
            						}
HXDLIN( 445)						if (!(_hx_tmp1)) {
HXLINE( 445)							_hx_tmp = ((object2->allowCollisions & 4096) == 0);
            						}
            						else {
HXLINE( 445)							_hx_tmp = true;
            						}
HXDLIN( 445)						if (_hx_tmp) {
HXLINE( 449)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 453)							 ::flixel::FlxObject object11 = object1;
HXDLIN( 453)							object11->touching = (object11->touching | 256);
HXLINE( 454)							 ::flixel::FlxObject object21 = object2;
HXDLIN( 454)							object21->touching = (object21->touching | 4096);
            						}
            					}
            				}
            			}
            		}
HXLINE( 459)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject object1, ::flixel::FlxObject object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_470_separateY)
HXLINE( 472)		bool immovable1 = object1->immovable;
HXLINE( 473)		bool immovable2 = object2->immovable;
HXLINE( 474)		bool _hx_tmp;
HXDLIN( 474)		if (immovable1) {
HXLINE( 474)			_hx_tmp = immovable2;
            		}
            		else {
HXLINE( 474)			_hx_tmp = false;
            		}
HXDLIN( 474)		if (_hx_tmp) {
HXLINE( 476)			return false;
            		}
HXLINE( 480)		if ((object1->flixelType == 3)) {
HXLINE( 482)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object1) );
HXLINE( 483)			return tilemap->overlapsWithCallback(object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
            		}
HXLINE( 485)		if ((object2->flixelType == 3)) {
HXLINE( 487)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object2) );
HXLINE( 488)			return tilemap->overlapsWithCallback(object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
            		}
HXLINE( 491)		Float overlap = ::flixel::FlxObject_obj::computeOverlapY(object1,object2,null());
HXLINE( 493)		if ((overlap != 0)) {
HXLINE( 495)			Float delta1 = (object1->y - object1->last->y);
HXLINE( 496)			Float delta2 = (object2->y - object2->last->y);
HXLINE( 497)			Float vel1 = object1->velocity->y;
HXLINE( 498)			Float vel2 = object2->velocity->y;
HXLINE( 499)			Float mass1 = object1->mass;
HXLINE( 500)			Float mass2 = object2->mass;
HXLINE( 501)			Float massSum = (mass1 + mass2);
HXLINE( 502)			Float elasticity1 = object1->elasticity;
HXLINE( 503)			Float elasticity2 = object2->elasticity;
HXLINE( 505)			bool _hx_tmp;
HXDLIN( 505)			if (!(immovable1)) {
HXLINE( 505)				_hx_tmp = !(immovable2);
            			}
            			else {
HXLINE( 505)				_hx_tmp = false;
            			}
HXDLIN( 505)			if (_hx_tmp) {
HXLINE( 520)				object1->set_y((object1->y - (overlap / ( (Float)(2) ))));
HXLINE( 521)				object2->set_y((object2->y + (overlap / ( (Float)(2) ))));
HXLINE( 523)				Float momentum = ((mass1 * vel1) + (mass2 * vel2));
HXLINE( 524)				Float newVel1 = ((momentum + ((elasticity1 * mass2) * (vel2 - vel1))) / massSum);
HXLINE( 525)				Float newVel2 = ((momentum + ((elasticity2 * mass1) * (vel1 - vel2))) / massSum);
HXLINE( 526)				object1->velocity->set_y(newVel1);
HXLINE( 527)				object2->velocity->set_y(newVel2);
            			}
            			else {
HXLINE( 530)				if (!(immovable1)) {
HXLINE( 532)					object1->set_y((object1->y - overlap));
HXLINE( 533)					object1->velocity->set_y((vel2 - (vel1 * elasticity1)));
            				}
            				else {
HXLINE( 535)					if (!(immovable2)) {
HXLINE( 537)						object2->set_y((object2->y + overlap));
HXLINE( 538)						object2->velocity->set_y((vel1 - (vel2 * elasticity2)));
            					}
            				}
            			}
HXLINE( 542)			bool _hx_tmp1;
HXDLIN( 542)			if (::flixel::FlxObject_obj::allowCollisionDrag(object1->collisionXDrag,object1,object2)) {
HXLINE( 542)				_hx_tmp1 = (delta1 > delta2);
            			}
            			else {
HXLINE( 542)				_hx_tmp1 = false;
            			}
HXDLIN( 542)			if (_hx_tmp1) {
HXLINE( 543)				object1->set_x((object1->x + (object2->x - object2->last->x)));
            			}
            			else {
HXLINE( 544)				bool _hx_tmp;
HXDLIN( 544)				if (::flixel::FlxObject_obj::allowCollisionDrag(object2->collisionXDrag,object2,object1)) {
HXLINE( 544)					_hx_tmp = (delta2 > delta1);
            				}
            				else {
HXLINE( 544)					_hx_tmp = false;
            				}
HXDLIN( 544)				if (_hx_tmp) {
HXLINE( 545)					object2->set_x((object2->x + (object1->x - object1->last->x)));
            				}
            			}
HXLINE( 547)			return true;
            		}
HXLINE( 550)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject object1, ::flixel::FlxObject object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_561_updateTouchingFlagsY)
HXLINE( 563)		if ((object1->flixelType == 3)) {
HXLINE( 565)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object1) );
HXLINE( 566)			return tilemap->overlapsWithCallback(object2,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),null(),null());
            		}
HXLINE( 568)		if ((object2->flixelType == 3)) {
HXLINE( 570)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(object2) );
HXLINE( 571)			return tilemap->overlapsWithCallback(object1,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),true,null());
            		}
HXLINE( 574)		return (::flixel::FlxObject_obj::computeOverlapY(object1,object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< FlxObject_obj > __this = new FlxObject_obj();
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	FlxObject_obj *__this = (FlxObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxObject_obj), true, "flixel.FlxObject"));
	*(void **)__this = FlxObject_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisionXDrag,"collisionXDrag");
	HX_MARK_MEMBER_NAME(collisionYDrag,"collisionYDrag");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisionXDrag,"collisionXDrag");
	HX_VISIT_MEMBER_NAME(collisionYDrag,"collisionYDrag");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return ::hx::Val( drag ); }
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		if (HX_FIELD_EQ(inName,"mass") ) { return ::hx::Val( mass ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return ::hx::Val( hurt_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"moves") ) { return ::hx::Val( moves ); }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_solid() ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return ::hx::Val( _rect ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"health") ) { return ::hx::Val( health ); }
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		if (HX_FIELD_EQ(inName,"touching") ) { return ::hx::Val( touching ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return ::hx::Val( set_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return ::hx::Val( getHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return ::hx::Val( get_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return ::hx::Val( elasticity ); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return ::hx::Val( maxAngular ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return ::hx::Val( isTouching_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return ::hx::Val( maxVelocity ); }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return ::hx::Val( angularDrag ); }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return ::hx::Val( wasTouching ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return ::hx::Val( getMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return ::hx::Val( justTouched_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return ::hx::Val( scrollFactor ); }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return ::hx::Val( acceleration ); }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return ::hx::Val( updateMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return ::hx::Val( screenCenter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_collisonXDrag() ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return ::hx::Val( inWorldBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionXDrag") ) { return ::hx::Val( collisionXDrag ); }
		if (HX_FIELD_EQ(inName,"collisionYDrag") ) { return ::hx::Val( collisionYDrag ); }
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return ::hx::Val( initMotionVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return ::hx::Val( getBoundingBox_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return ::hx::Val( angularVelocity ); }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return ::hx::Val( allowCollisions ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return ::hx::Val( overlapsCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRotatedBounds") ) { return ::hx::Val( getRotatedBounds_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_collisonXDrag") ) { return ::hx::Val( get_collisonXDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_collisonXDrag") ) { return ::hx::Val( set_collisonXDrag_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return ::hx::Val( overlapsAtCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return ::hx::Val( angularAcceleration ); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return ::hx::Val( set_allowCollisions_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return ::hx::Val( pixelPerfectPosition ); }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return ::hx::Val( isPixelPerfectRender_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultMoves") ) { outValue = ( defaultMoves ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = ( SEPARATE_BIAS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowCollisionDrag") ) { outValue = allowCollisionDrag_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = ( _firstSeparateFlxRect ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = ( _secondSeparateFlxRect ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = ( defaultPixelPerfectPosition ); return true; }
	}
	return false;
}

::hx::Val FlxObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_path(inValue.Cast<  ::flixel::path::FlxPath >()) );path=inValue.Cast<  ::flixel::path::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) );width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_moves(inValue.Cast< bool >()) );moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_solid(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) );height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_collisonXDrag(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionXDrag") ) { collisionXDrag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionYDrag") ) { collisionYDrag=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowCollisions(inValue.Cast< int >()) );allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixelPerfectRender(inValue.Cast<  ::Dynamic >()) );pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"defaultMoves") ) { defaultMoves=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixelPerfectPosition",f0,7e,5e,3d));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("moves",42,cc,65,0c));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("solid",2b,b4,c5,80));
	outFields->push(HX_("scrollFactor",bc,ec,cf,3b));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("acceleration",40,00,61,9a));
	outFields->push(HX_("drag",f4,2b,70,42));
	outFields->push(HX_("maxVelocity",e1,0c,c4,94));
	outFields->push(HX_("last",56,0a,ad,47));
	outFields->push(HX_("mass",f4,40,56,48));
	outFields->push(HX_("elasticity",79,23,b4,4d));
	outFields->push(HX_("angularVelocity",1f,1f,fe,58));
	outFields->push(HX_("angularAcceleration",42,c6,00,9a));
	outFields->push(HX_("angularDrag",f6,1f,19,9c));
	outFields->push(HX_("maxAngular",9e,28,f6,c2));
	outFields->push(HX_("health",9c,28,06,fd));
	outFields->push(HX_("touching",83,16,25,00));
	outFields->push(HX_("wasTouching",cc,44,e4,5f));
	outFields->push(HX_("allowCollisions",aa,c9,d9,59));
	outFields->push(HX_("collisonXDrag",97,ca,fa,0a));
	outFields->push(HX_("collisionXDrag",ba,de,5f,94));
	outFields->push(HX_("collisionYDrag",3b,73,c6,27));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("_rect",03,69,b8,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxObject_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_("pixelPerfectPosition",f0,7e,5e,3d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_("moves",42,cc,65,0c)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_("scrollFactor",bc,ec,cf,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,acceleration),HX_("acceleration",40,00,61,9a)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,drag),HX_("drag",f4,2b,70,42)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_("maxVelocity",e1,0c,c4,94)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_("mass",f4,40,56,48)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_("elasticity",79,23,b4,4d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_("angularVelocity",1f,1f,fe,58)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_("angularAcceleration",42,c6,00,9a)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_("angularDrag",f6,1f,19,9c)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_("maxAngular",9e,28,f6,c2)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_("health",9c,28,06,fd)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_("touching",83,16,25,00)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_("wasTouching",cc,44,e4,5f)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_("allowCollisions",aa,c9,d9,59)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,collisionXDrag),HX_("collisionXDrag",ba,de,5f,94)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,collisionYDrag),HX_("collisionYDrag",3b,73,c6,27)},
	{::hx::fsObject /*  ::flixel::path::FlxPath */ ,(int)offsetof(FlxObject_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxObject_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxObject_obj,_rect),HX_("_rect",03,69,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxObject_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_("defaultPixelPerfectPosition",51,0a,c2,b0)},
	{::hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_("SEPARATE_BIAS",15,78,21,a0)},
	{::hx::fsBool,(void *) &FlxObject_obj::defaultMoves,HX_("defaultMoves",c1,07,c1,c1)},
	{::hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxObject_obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsInt,(void *) &FlxObject_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_("CEILING",dd,32,72,b3)},
	{::hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_("FLOOR",ac,09,85,80)},
	{::hx::fsInt,(void *) &FlxObject_obj::WALL,HX_("WALL",0a,25,b3,39)},
	{::hx::fsInt,(void *) &FlxObject_obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_("_firstSeparateFlxRect",22,b9,2f,5e)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_("_secondSeparateFlxRect",c0,bd,fc,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxObject_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixelPerfectPosition",f0,7e,5e,3d),
	HX_("angle",d3,43,e2,22),
	HX_("moves",42,cc,65,0c),
	HX_("immovable",0a,27,70,27),
	HX_("scrollFactor",bc,ec,cf,3b),
	HX_("velocity",1d,02,fe,1e),
	HX_("acceleration",40,00,61,9a),
	HX_("drag",f4,2b,70,42),
	HX_("maxVelocity",e1,0c,c4,94),
	HX_("last",56,0a,ad,47),
	HX_("mass",f4,40,56,48),
	HX_("elasticity",79,23,b4,4d),
	HX_("angularVelocity",1f,1f,fe,58),
	HX_("angularAcceleration",42,c6,00,9a),
	HX_("angularDrag",f6,1f,19,9c),
	HX_("maxAngular",9e,28,f6,c2),
	HX_("health",9c,28,06,fd),
	HX_("touching",83,16,25,00),
	HX_("wasTouching",cc,44,e4,5f),
	HX_("allowCollisions",aa,c9,d9,59),
	HX_("collisionXDrag",ba,de,5f,94),
	HX_("collisionYDrag",3b,73,c6,27),
	HX_("path",a5,e5,51,4a),
	HX_("_point",91,fb,76,c2),
	HX_("_rect",03,69,b8,fe),
	HX_("initVars",dc,5a,00,53),
	HX_("initMotionVars",32,e4,28,65),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateMotion",1f,2d,21,cb),
	HX_("draw",04,2c,70,42),
	HX_("overlaps",0c,d3,2a,45),
	HX_("overlapsCallback",f1,14,bf,b4),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("overlapsAtCallback",04,f4,81,3b),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("inWorldBounds",82,46,f2,f1),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("getPosition",5f,63,ee,f0),
	HX_("getMidpoint",7e,d8,fb,50),
	HX_("getHitbox",ce,76,7e,d3),
	HX_("reset",cf,49,c8,e6),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isPixelPerfectRender",67,1c,f9,26),
	HX_("isTouching",8d,28,d4,7a),
	HX_("justTouched",12,59,b8,91),
	HX_("hurt",0f,5c,17,45),
	HX_("screenCenter",61,2e,f9,e2),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setSize",83,e1,d7,11),
	HX_("getBoundingBox",11,e8,45,0d),
	HX_("getRotatedBounds",88,12,38,3c),
	HX_("toString",ac,d0,6e,38),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_solid",82,10,6f,c4),
	HX_("set_solid",8e,fc,bf,a7),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_allowCollisions",cd,8b,81,21),
	HX_("get_collisonXDrag",ee,d5,6a,11),
	HX_("set_collisonXDrag",fa,ad,d8,34),
	HX_("set_path",a2,fa,69,78),
	::String(null()) };

static void FlxObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultMoves,"defaultMoves");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultMoves,"defaultMoves");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

::hx::Class FlxObject_obj::__mClass;

static ::String FlxObject_obj_sStaticFields[] = {
	HX_("defaultPixelPerfectPosition",51,0a,c2,b0),
	HX_("SEPARATE_BIAS",15,78,21,a0),
	HX_("defaultMoves",c1,07,c1,c1),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("NONE",b8,da,ca,33),
	HX_("CEILING",dd,32,72,b3),
	HX_("FLOOR",ac,09,85,80),
	HX_("WALL",0a,25,b3,39),
	HX_("ANY",cc,96,31,00),
	HX_("_firstSeparateFlxRect",22,b9,2f,5e),
	HX_("_secondSeparateFlxRect",c0,bd,fc,da),
	HX_("separate",63,1f,1c,07),
	HX_("updateTouchingFlags",fb,01,ac,bd),
	HX_("allowCollisionDrag",3d,eb,4d,c1),
	HX_("computeOverlapX",88,a5,ab,dc),
	HX_("separateX",95,57,7f,31),
	HX_("updateTouchingFlagsX",fd,b9,d5,38),
	HX_("computeOverlapY",89,a5,ab,dc),
	HX_("separateY",96,57,7f,31),
	HX_("updateTouchingFlagsY",fe,b9,d5,38),
	::String(null())
};

void FlxObject_obj::__register()
{
	FlxObject_obj _hx_dummy;
	FlxObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxObject",1f,50,95,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = FlxObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_80_boot)
HXDLIN(  80)		defaultPixelPerfectPosition = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_87_boot)
HXDLIN(  87)		SEPARATE_BIAS = ((Float)4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_94_boot)
HXDLIN(  94)		defaultMoves = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_102_boot)
HXDLIN( 102)		LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_110_boot)
HXDLIN( 110)		RIGHT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_118_boot)
HXDLIN( 118)		UP = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_126_boot)
HXDLIN( 126)		DOWN = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_134_boot)
HXDLIN( 134)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_142_boot)
HXDLIN( 142)		CEILING = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_150_boot)
HXDLIN( 150)		FLOOR = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_158_boot)
HXDLIN( 158)		WALL = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_166_boot)
HXDLIN( 166)		ANY = 4369;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_169_boot)
HXDLIN( 169)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 169)			_this->x = ( (Float)(0) );
HXDLIN( 169)			_this->y = ( (Float)(0) );
HXDLIN( 169)			_this->width = ( (Float)(0) );
HXDLIN( 169)			_this->height = ( (Float)(0) );
HXDLIN( 169)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 169)			rect->_inPool = false;
HXDLIN( 169)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_169_boot)
HXDLIN( 169)		_firstSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_171_boot)
HXDLIN( 171)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 171)			_this->x = ( (Float)(0) );
HXDLIN( 171)			_this->y = ( (Float)(0) );
HXDLIN( 171)			_this->width = ( (Float)(0) );
HXDLIN( 171)			_this->height = ( (Float)(0) );
HXDLIN( 171)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 171)			rect->_inPool = false;
HXDLIN( 171)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_171_boot)
HXDLIN( 171)		_secondSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
