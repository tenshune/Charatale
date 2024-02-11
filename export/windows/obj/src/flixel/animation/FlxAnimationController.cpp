#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ed655cc53689dfd_10_new,"flixel.animation.FlxAnimationController","new",0x0b6477fc,"flixel.animation.FlxAnimationController.new","flixel/animation/FlxAnimationController.hx",10,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_98_update,"flixel.animation.FlxAnimationController","update",0x8fb487ed,"flixel.animation.FlxAnimationController.update","flixel/animation/FlxAnimationController.hx",98,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_109_copyFrom,"flixel.animation.FlxAnimationController","copyFrom",0x9c3f4ea3,"flixel.animation.FlxAnimationController.copyFrom","flixel/animation/FlxAnimationController.hx",109,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_133_createPrerotated,"flixel.animation.FlxAnimationController","createPrerotated",0xc538c8e6,"flixel.animation.FlxAnimationController.createPrerotated","flixel/animation/FlxAnimationController.hx",133,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_141_destroyAnimations,"flixel.animation.FlxAnimationController","destroyAnimations",0x0b136325,"flixel.animation.FlxAnimationController.destroyAnimations","flixel/animation/FlxAnimationController.hx",141,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_147_destroy,"flixel.animation.FlxAnimationController","destroy",0xb4f8d296,"flixel.animation.FlxAnimationController.destroy","flixel/animation/FlxAnimationController.hx",147,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_157_getFrameDuration,"flixel.animation.FlxAnimationController","getFrameDuration",0x557d290f,"flixel.animation.FlxAnimationController.getFrameDuration","flixel/animation/FlxAnimationController.hx",157,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_161_clearPrerotated,"flixel.animation.FlxAnimationController","clearPrerotated",0x8ef9ed6f,"flixel.animation.FlxAnimationController.clearPrerotated","flixel/animation/FlxAnimationController.hx",161,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_170_clearAnimations,"flixel.animation.FlxAnimationController","clearAnimations",0x7ffc9e78,"flixel.animation.FlxAnimationController.clearAnimations","flixel/animation/FlxAnimationController.hx",170,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_199_add,"flixel.animation.FlxAnimationController","add",0x0b5a99bd,"flixel.animation.FlxAnimationController.add","flixel/animation/FlxAnimationController.hx",199,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_245_remove,"flixel.animation.FlxAnimationController","remove",0x0d379e28,"flixel.animation.FlxAnimationController.remove","flixel/animation/FlxAnimationController.hx",245,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_263_append,"flixel.animation.FlxAnimationController","append",0x9882e3be,"flixel.animation.FlxAnimationController.append","flixel/animation/FlxAnimationController.hx",263,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_299_addByNames,"flixel.animation.FlxAnimationController","addByNames",0x17c20e34,"flixel.animation.FlxAnimationController.addByNames","flixel/animation/FlxAnimationController.hx",299,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_321_appendByNames,"flixel.animation.FlxAnimationController","appendByNames",0xcdc97653,"flixel.animation.FlxAnimationController.appendByNames","flixel/animation/FlxAnimationController.hx",321,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_351_addByStringIndices,"flixel.animation.FlxAnimationController","addByStringIndices",0x0f3d3cc2,"flixel.animation.FlxAnimationController.addByStringIndices","flixel/animation/FlxAnimationController.hx",351,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_377_appendByStringIndices,"flixel.animation.FlxAnimationController","appendByStringIndices",0x42285be1,"flixel.animation.FlxAnimationController.appendByStringIndices","flixel/animation/FlxAnimationController.hx",377,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_407_addByIndices,"flixel.animation.FlxAnimationController","addByIndices",0x4dbf3893,"flixel.animation.FlxAnimationController.addByIndices","flixel/animation/FlxAnimationController.hx",407,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_434_appendByIndices,"flixel.animation.FlxAnimationController","appendByIndices",0x22882672,"flixel.animation.FlxAnimationController.appendByIndices","flixel/animation/FlxAnimationController.hx",434,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_456_findSpriteFrame,"flixel.animation.FlxAnimationController","findSpriteFrame",0x746a2bcb,"flixel.animation.FlxAnimationController.findSpriteFrame","flixel/animation/FlxAnimationController.hx",456,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_486_addByPrefix,"flixel.animation.FlxAnimationController","addByPrefix",0x4347f9a6,"flixel.animation.FlxAnimationController.addByPrefix","flixel/animation/FlxAnimationController.hx",486,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_514_appendByPrefix,"flixel.animation.FlxAnimationController","appendByPrefix",0xd3bbaca7,"flixel.animation.FlxAnimationController.appendByPrefix","flixel/animation/FlxAnimationController.hx",514,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_548_play,"flixel.animation.FlxAnimationController","play",0xeddc2ed8,"flixel.animation.FlxAnimationController.play","flixel/animation/FlxAnimationController.hx",548,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_587_reset,"flixel.animation.FlxAnimationController","reset",0x5507106b,"flixel.animation.FlxAnimationController.reset","flixel/animation/FlxAnimationController.hx",587,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_598_finish,"flixel.animation.FlxAnimationController","finish",0x8f2e4237,"flixel.animation.FlxAnimationController.finish","flixel/animation/FlxAnimationController.hx",598,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_609_stop,"flixel.animation.FlxAnimationController","stop",0xefddf0e6,"flixel.animation.FlxAnimationController.stop","flixel/animation/FlxAnimationController.hx",609,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_620_pause,"flixel.animation.FlxAnimationController","pause",0x2b969d92,"flixel.animation.FlxAnimationController.pause","flixel/animation/FlxAnimationController.hx",620,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_631_resume,"flixel.animation.FlxAnimationController","resume",0x11336b91,"flixel.animation.FlxAnimationController.resume","flixel/animation/FlxAnimationController.hx",631,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_642_reverse,"flixel.animation.FlxAnimationController","reverse",0xab6edebe,"flixel.animation.FlxAnimationController.reverse","flixel/animation/FlxAnimationController.hx",642,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_653_getByName,"flixel.animation.FlxAnimationController","getByName",0x1940f994,"flixel.animation.FlxAnimationController.getByName","flixel/animation/FlxAnimationController.hx",653,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_661_randomFrame,"flixel.animation.FlxAnimationController","randomFrame",0x12c43ec6,"flixel.animation.FlxAnimationController.randomFrame","flixel/animation/FlxAnimationController.hx",661,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_672_fireCallback,"flixel.animation.FlxAnimationController","fireCallback",0x1523547f,"flixel.animation.FlxAnimationController.fireCallback","flixel/animation/FlxAnimationController.hx",672,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_683_fireFinishCallback,"flixel.animation.FlxAnimationController","fireFinishCallback",0x96b92372,"flixel.animation.FlxAnimationController.fireFinishCallback","flixel/animation/FlxAnimationController.hx",683,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_691_byNamesHelper,"flixel.animation.FlxAnimationController","byNamesHelper",0x4e6fbd5b,"flixel.animation.FlxAnimationController.byNamesHelper","flixel/animation/FlxAnimationController.hx",691,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_703_byStringIndicesHelper,"flixel.animation.FlxAnimationController","byStringIndicesHelper",0xccff0b69,"flixel.animation.FlxAnimationController.byStringIndicesHelper","flixel/animation/FlxAnimationController.hx",703,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_716_byIndicesHelper,"flixel.animation.FlxAnimationController","byIndicesHelper",0xe757113a,"flixel.animation.FlxAnimationController.byIndicesHelper","flixel/animation/FlxAnimationController.hx",716,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_725_byPrefixHelper,"flixel.animation.FlxAnimationController","byPrefixHelper",0x238152fb,"flixel.animation.FlxAnimationController.byPrefixHelper","flixel/animation/FlxAnimationController.hx",725,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_738_findByPrefix,"flixel.animation.FlxAnimationController","findByPrefix",0x32419106,"flixel.animation.FlxAnimationController.findByPrefix","flixel/animation/FlxAnimationController.hx",738,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_759_removeInvalidFrames,"flixel.animation.FlxAnimationController","removeInvalidFrames",0x1ada0ab5,"flixel.animation.FlxAnimationController.removeInvalidFrames","flixel/animation/FlxAnimationController.hx",759,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_773_set_frameIndex,"flixel.animation.FlxAnimationController","set_frameIndex",0xd769c646,"flixel.animation.FlxAnimationController.set_frameIndex","flixel/animation/FlxAnimationController.hx",773,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_787_get_frameName,"flixel.animation.FlxAnimationController","get_frameName",0x1674c78b,"flixel.animation.FlxAnimationController.get_frameName","flixel/animation/FlxAnimationController.hx",787,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_791_set_frameName,"flixel.animation.FlxAnimationController","set_frameName",0x5b7aa997,"flixel.animation.FlxAnimationController.set_frameName","flixel/animation/FlxAnimationController.hx",791,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_811_get_name,"flixel.animation.FlxAnimationController","get_name",0x9c9870b8,"flixel.animation.FlxAnimationController.get_name","flixel/animation/FlxAnimationController.hx",811,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_821_set_name,"flixel.animation.FlxAnimationController","set_name",0x4af5ca2c,"flixel.animation.FlxAnimationController.set_name","flixel/animation/FlxAnimationController.hx",821,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_833_getAnimationList,"flixel.animation.FlxAnimationController","getAnimationList",0xa21179f0,"flixel.animation.FlxAnimationController.getAnimationList","flixel/animation/FlxAnimationController.hx",833,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_851_getNameList,"flixel.animation.FlxAnimationController","getNameList",0x0bd9a29b,"flixel.animation.FlxAnimationController.getNameList","flixel/animation/FlxAnimationController.hx",851,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_868_exists,"flixel.animation.FlxAnimationController","exists",0xc88f1fc0,"flixel.animation.FlxAnimationController.exists","flixel/animation/FlxAnimationController.hx",868,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_878_rename,"flixel.animation.FlxAnimationController","rename",0x0dd62d62,"flixel.animation.FlxAnimationController.rename","flixel/animation/FlxAnimationController.hx",878,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_892_get_curAnim,"flixel.animation.FlxAnimationController","get_curAnim",0xd32cfb64,"flixel.animation.FlxAnimationController.get_curAnim","flixel/animation/FlxAnimationController.hx",892,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_896_set_curAnim,"flixel.animation.FlxAnimationController","set_curAnim",0xdd9a0270,"flixel.animation.FlxAnimationController.set_curAnim","flixel/animation/FlxAnimationController.hx",896,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_913_get_paused,"flixel.animation.FlxAnimationController","get_paused",0x1a2b745b,"flixel.animation.FlxAnimationController.get_paused","flixel/animation/FlxAnimationController.hx",913,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_923_set_paused,"flixel.animation.FlxAnimationController","set_paused",0x1da912cf,"flixel.animation.FlxAnimationController.set_paused","flixel/animation/FlxAnimationController.hx",923,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_939_get_finished,"flixel.animation.FlxAnimationController","get_finished",0x1eabcc5f,"flixel.animation.FlxAnimationController.get_finished","flixel/animation/FlxAnimationController.hx",939,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_949_set_finished,"flixel.animation.FlxAnimationController","set_finished",0x33a4efd3,"flixel.animation.FlxAnimationController.set_finished","flixel/animation/FlxAnimationController.hx",949,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_959_get_frames,"flixel.animation.FlxAnimationController","get_frames",0xd72ce353,"flixel.animation.FlxAnimationController.get_frames","flixel/animation/FlxAnimationController.hx",959,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_964_get_numFrames,"flixel.animation.FlxAnimationController","get_numFrames",0x3d7b90ff,"flixel.animation.FlxAnimationController.get_numFrames","flixel/animation/FlxAnimationController.hx",964,0xa6f01372)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed655cc53689dfd_975_getFrameIndex,"flixel.animation.FlxAnimationController","getFrameIndex",0x1c3dee77,"flixel.animation.FlxAnimationController.getFrameIndex","flixel/animation/FlxAnimationController.hx",975,0xa6f01372)
namespace flixel{
namespace animation{

void FlxAnimationController_obj::__construct( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_10_new)
HXLINE(  87)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  71)		this->timeScale = ((Float)1.0);
HXLINE(  20)		this->frameIndex = -1;
HXLINE(  93)		this->_sprite = sprite;
            	}

Dynamic FlxAnimationController_obj::__CreateEmpty() { return new FlxAnimationController_obj; }

void *FlxAnimationController_obj::_hx_vtable = 0;

Dynamic FlxAnimationController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnimationController_obj > _hx_result = new FlxAnimationController_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxAnimationController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33fb2b2e;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_animation_FlxAnimationController__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::animation::FlxAnimationController_obj::destroy,
};

void *FlxAnimationController_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_animation_FlxAnimationController__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxAnimationController_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_98_update)
HXDLIN(  98)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 100)			this->_curAnim->update((elapsed * (this->timeScale * ::flixel::FlxG_obj::animationTimeScale)));
            		}
            		else {
HXLINE( 102)			if (::hx::IsNotNull( this->_prerotated )) {
HXLINE( 104)				this->_prerotated->set_angle(this->_sprite->angle);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,update,(void))

 ::flixel::animation::FlxAnimationController FlxAnimationController_obj::copyFrom( ::flixel::animation::FlxAnimationController controller){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_109_copyFrom)
HXLINE( 110)		this->destroyAnimations();
HXLINE( 112)		{
HXLINE( 112)			 ::Dynamic anim = controller->_animations->iterator();
HXDLIN( 112)			while(( (bool)(anim->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 112)				 ::flixel::animation::FlxAnimation anim1 = ( ( ::flixel::animation::FlxAnimation)(anim->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 114)				this->add(anim1->name,anim1->frames,anim1->frameRate,anim1->looped,anim1->flipX,anim1->flipY);
            			}
            		}
HXLINE( 117)		if (::hx::IsNotNull( controller->_prerotated )) {
HXLINE( 119)			this->createPrerotated(null());
            		}
HXLINE( 122)		if (::hx::IsNotNull( controller->get_name() )) {
HXLINE( 124)			this->set_name(controller->get_name());
            		}
HXLINE( 127)		this->set_frameIndex(controller->frameIndex);
HXLINE( 129)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,copyFrom,return )

void FlxAnimationController_obj::createPrerotated( ::flixel::animation::FlxAnimationController Controller){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_133_createPrerotated)
HXLINE( 134)		this->destroyAnimations();
HXLINE( 135)		if (::hx::IsNull( Controller )) {
HXLINE( 135)			Controller = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 136)		this->_prerotated =  ::flixel::animation::FlxPrerotatedAnimation_obj::__alloc( HX_CTX ,Controller,Controller->_sprite->bakedRotationAngle);
HXLINE( 137)		this->_prerotated->set_angle(this->_sprite->angle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,createPrerotated,(void))

void FlxAnimationController_obj::destroyAnimations(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_141_destroyAnimations)
HXLINE( 142)		this->clearAnimations();
HXLINE( 143)		this->clearPrerotated();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroyAnimations,(void))

void FlxAnimationController_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_147_destroy)
HXLINE( 148)		this->destroyAnimations();
HXLINE( 149)		this->_animations = null();
HXLINE( 150)		this->callback = null();
HXLINE( 151)		this->_sprite = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroy,(void))

Float FlxAnimationController_obj::getFrameDuration(int index){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_157_getFrameDuration)
HXDLIN( 157)		return this->_sprite->frames->frames->__get(index).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->duration;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameDuration,return )

void FlxAnimationController_obj::clearPrerotated(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_161_clearPrerotated)
HXLINE( 162)		if (::hx::IsNotNull( this->_prerotated )) {
HXLINE( 164)			this->_prerotated->destroy();
            		}
HXLINE( 166)		this->_prerotated = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearPrerotated,(void))

void FlxAnimationController_obj::clearAnimations(){
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_170_clearAnimations)
HXLINE( 171)		if (::hx::IsNotNull( this->_animations )) {
HXLINE( 173)			 ::flixel::animation::FlxAnimation anim;
HXLINE( 174)			{
HXLINE( 174)				 ::Dynamic key = this->_animations->keys();
HXDLIN( 174)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 174)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 176)					anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(key1)) );
HXLINE( 177)					if (::hx::IsNotNull( anim )) {
HXLINE( 179)						anim->destroy();
            					}
            				}
            			}
            		}
HXLINE( 184)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 185)		this->_curAnim = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearAnimations,(void))

void FlxAnimationController_obj::add(::String name,::Array< int > frames,::hx::Null< Float >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		Float frameRate = __o_frameRate.Default(((Float)30.0));
            		bool looped = __o_looped.Default(true);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_199_add)
HXLINE( 200)		if ((this->_sprite->get_numFrames() == 0)) {
HXLINE( 202)			::flixel::FlxG_obj::log->advanced(((HX_("Could not create animation: \"",10,20,23,88) + name) + HX_("\", this sprite has no frames",30,ff,6f,fc)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 203)			return;
            		}
HXLINE( 207)		::Array< int > framesToAdd = frames;
HXLINE( 208)		bool hasInvalidFrames = false;
HXLINE( 209)		int i = framesToAdd->length;
HXLINE( 210)		while(true){
HXLINE( 210)			i = (i - 1);
HXDLIN( 210)			if (!(((i + 1) >= 0))) {
HXLINE( 210)				goto _hx_goto_11;
            			}
HXLINE( 212)			int frame = framesToAdd->__get(i);
HXLINE( 213)			if ((frame >= this->_sprite->get_numFrames())) {
HXLINE( 216)				hasInvalidFrames = true;
HXLINE( 220)				if (::hx::IsPointerEq( framesToAdd,frames )) {
HXLINE( 221)					framesToAdd = frames->copy();
            				}
HXLINE( 223)				framesToAdd->removeRange(i,1);
            			}
            		}
            		_hx_goto_11:;
HXLINE( 227)		if ((framesToAdd->length > 0)) {
HXLINE( 229)			 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),name,framesToAdd,frameRate,looped,flipX,flipY);
HXLINE( 230)			this->_animations->set(name,anim);
HXLINE( 232)			if (hasInvalidFrames) {
HXLINE( 233)				 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 233)				 ::Dynamic data = ((((HX_("Could not add frames above ",92,4e,8c,bb) + (this->_sprite->get_numFrames() - 1)) + HX_(" to animation: \"",dd,c7,5b,33)) + name) + HX_("\"",22,00,00,00));
HXDLIN( 233)				_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            		}
            		else {
HXLINE( 236)			::flixel::FlxG_obj::log->advanced(((HX_("Could not create animation: \"",10,20,23,88) + name) + HX_("\", no valid frames were given",2b,2b,22,05)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,add,(void))

void FlxAnimationController_obj::remove(::String Name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_245_remove)
HXLINE( 246)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(Name)) );
HXLINE( 247)		if (::hx::IsNotNull( anim )) {
HXLINE( 249)			this->_animations->remove(Name);
HXLINE( 250)			anim->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,remove,(void))

void FlxAnimationController_obj::append(::String name,::Array< int > frames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_263_append)
HXLINE( 264)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
HXLINE( 265)		if (::hx::IsNull( anim )) {
HXLINE( 268)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 269)			return;
            		}
HXLINE( 272)		bool hasInvalidFrames = false;
HXLINE( 275)		{
HXLINE( 275)			int _g = 0;
HXDLIN( 275)			while((_g < frames->length)){
HXLINE( 275)				int frame = frames->__get(_g);
HXDLIN( 275)				_g = (_g + 1);
HXLINE( 277)				if ((frame < this->_sprite->get_numFrames())) {
HXLINE( 278)					anim->frames->push(frame);
            				}
            				else {
HXLINE( 280)					hasInvalidFrames = true;
            				}
            			}
            		}
HXLINE( 283)		if (hasInvalidFrames) {
HXLINE( 284)			 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 284)			 ::Dynamic data = ((((HX_("Could not append frames above ",23,5e,f0,8a) + (this->_sprite->get_numFrames() - 1)) + HX_(" to animation: \"",dd,c7,5b,33)) + name) + HX_("\"",22,00,00,00));
HXDLIN( 284)			_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,append,(void))

void FlxAnimationController_obj::addByNames(::String Name,::Array< ::String > FrameNames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		Float FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_299_addByNames)
HXDLIN( 299)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 301)			::Array< int > indices = ::Array_obj< int >::__new();
HXLINE( 302)			this->byNamesHelper(indices,FrameNames);
HXLINE( 304)			if ((indices->length > 0)) {
HXLINE( 306)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,indices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 307)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByNames,(void))

void FlxAnimationController_obj::appendByNames(::String name,::Array< ::String > frameNames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_321_appendByNames)
HXLINE( 322)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
HXLINE( 323)		if (::hx::IsNull( anim )) {
HXLINE( 325)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 326)			return;
            		}
HXLINE( 329)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 331)			this->byNamesHelper(anim->frames,frameNames);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByNames,(void))

void FlxAnimationController_obj::addByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		Float FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_351_addByStringIndices)
HXDLIN( 351)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 353)			::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 355)			this->byStringIndicesHelper(frameIndices,Prefix,Indices,Postfix);
HXLINE( 357)			if ((frameIndices->length > 0)) {
HXLINE( 359)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 360)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByStringIndices,(void))

void FlxAnimationController_obj::appendByStringIndices(::String name,::String prefix,::Array< ::String > indices,::String suffix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_377_appendByStringIndices)
HXLINE( 378)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
HXLINE( 379)		if (::hx::IsNull( anim )) {
HXLINE( 381)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 382)			return;
            		}
HXLINE( 385)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 388)			this->byStringIndicesHelper(anim->frames,prefix,indices,suffix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByStringIndices,(void))

void FlxAnimationController_obj::addByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		Float FrameRate = __o_FrameRate.Default(30);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_407_addByIndices)
HXDLIN( 407)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 409)			::Array< int > frameIndices = ::Array_obj< int >::__new();
HXLINE( 411)			this->byIndicesHelper(frameIndices,Prefix,Indices,Postfix);
HXLINE( 413)			if ((frameIndices->length > 0)) {
HXLINE( 415)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);
HXLINE( 416)				this->_animations->set(Name,anim);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByIndices,(void))

void FlxAnimationController_obj::appendByIndices(::String name,::String prefix,::Array< int > indices,::String suffix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_434_appendByIndices)
HXLINE( 435)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
HXLINE( 436)		if (::hx::IsNull( anim )) {
HXLINE( 438)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 439)			return;
            		}
HXLINE( 442)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 445)			this->byIndicesHelper(anim->frames,prefix,indices,suffix);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByIndices,(void))

int FlxAnimationController_obj::findSpriteFrame(::String prefix,int index,::String postfix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_456_findSpriteFrame)
HXLINE( 457)		::Array< ::Dynamic> frames = this->_sprite->frames->frames;
HXLINE( 458)		{
HXLINE( 458)			int _g = 0;
HXDLIN( 458)			int _g1 = frames->length;
HXDLIN( 458)			while((_g < _g1)){
HXLINE( 458)				_g = (_g + 1);
HXDLIN( 458)				int i = (_g - 1);
HXLINE( 460)				 ::flixel::graphics::frames::FlxFrame frame = frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE( 461)				::String name = frame->name;
HXLINE( 462)				bool _hx_tmp;
HXDLIN( 462)				if (::StringTools_obj::startsWith(name,prefix)) {
HXLINE( 462)					_hx_tmp = ::StringTools_obj::endsWith(name,postfix);
            				}
            				else {
HXLINE( 462)					_hx_tmp = false;
            				}
HXDLIN( 462)				if (_hx_tmp) {
HXLINE( 464)					 ::Dynamic frameIndex = ::Std_obj::parseInt(name.substring(prefix.length,(name.length - postfix.length)));
HXLINE( 465)					if (::hx::IsEq( frameIndex,index )) {
HXLINE( 466)						return i;
            					}
            				}
            			}
            		}
HXLINE( 470)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findSpriteFrame,return )

void FlxAnimationController_obj::addByPrefix(::String name,::String prefix,::hx::Null< Float >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		Float frameRate = __o_frameRate.Default(((Float)30.0));
            		bool looped = __o_looped.Default(true);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5ed655cc53689dfd_486_addByPrefix)
HXDLIN( 486)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 488)			::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 489)			this->findByPrefix(animFrames,prefix,null());
HXLINE( 491)			if ((animFrames->length > 0)) {
HXLINE( 493)				::Array< int > frameIndices = ::Array_obj< int >::__new(0);
HXLINE( 494)				this->byPrefixHelper(frameIndices,animFrames,prefix);
HXLINE( 495)				 ::flixel::animation::FlxAnimation anim =  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),name,frameIndices,frameRate,looped,flipX,flipY);
HXLINE( 496)				this->_animations->set(name,anim);
            			}
            			else {
HXLINE( 499)				::flixel::FlxG_obj::log->advanced(((((HX_("Could not create animation: \"",10,20,23,88) + name) + HX_("\", no frames were found with the prefix \"",b1,e7,38,63)) + prefix) + HX_("\" ",be,1d,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByPrefix,(void))

void FlxAnimationController_obj::appendByPrefix(::String name,::String prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_514_appendByPrefix)
HXLINE( 515)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
HXLINE( 516)		if (::hx::IsNull( anim )) {
HXLINE( 518)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 519)			return;
            		}
HXLINE( 522)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 524)			::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE( 525)			this->findByPrefix(animFrames,prefix,null());
HXLINE( 527)			if ((animFrames->length > 0)) {
HXLINE( 530)				this->byPrefixHelper(anim->frames,animFrames,prefix);
            			}
            			else {
HXLINE( 533)				::flixel::FlxG_obj::log->advanced(((((HX_("Could not append to animation: \"",03,bc,5c,7d) + name) + HX_("\", no frames were found with the prefix: \"",2d,8c,a5,6e)) + prefix) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByPrefix,(void))

void FlxAnimationController_obj::play(::String animName,::hx::Null< bool >  __o_force,::hx::Null< bool >  __o_reversed,::hx::Null< int >  __o_frame){
            		bool force = __o_force.Default(false);
            		bool reversed = __o_reversed.Default(false);
            		int frame = __o_frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_548_play)
HXLINE( 549)		if (::hx::IsNull( animName )) {
HXLINE( 551)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 553)				this->_curAnim->stop();
            			}
HXLINE( 555)			this->_curAnim = null();
            		}
HXLINE( 558)		bool _hx_tmp;
HXDLIN( 558)		if (::hx::IsNotNull( animName )) {
HXLINE( 558)			_hx_tmp = ::hx::IsNull( this->_animations->get(animName) );
            		}
            		else {
HXLINE( 558)			_hx_tmp = true;
            		}
HXDLIN( 558)		if (_hx_tmp) {
HXLINE( 560)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + animName) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 561)			return;
            		}
HXLINE( 564)		bool oldFlipX = false;
HXLINE( 565)		bool oldFlipY = false;
HXLINE( 567)		bool _hx_tmp1;
HXDLIN( 567)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 567)			_hx_tmp1 = (animName != this->_curAnim->name);
            		}
            		else {
HXLINE( 567)			_hx_tmp1 = false;
            		}
HXDLIN( 567)		if (_hx_tmp1) {
HXLINE( 569)			oldFlipX = this->_curAnim->flipX;
HXLINE( 570)			oldFlipY = this->_curAnim->flipY;
HXLINE( 571)			this->_curAnim->stop();
            		}
HXLINE( 573)		this->_curAnim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(animName)) );
HXLINE( 574)		this->_curAnim->play(force,reversed,frame);
HXLINE( 576)		bool _hx_tmp2;
HXDLIN( 576)		if ((oldFlipX == this->_curAnim->flipX)) {
HXLINE( 576)			_hx_tmp2 = (oldFlipY != this->_curAnim->flipY);
            		}
            		else {
HXLINE( 576)			_hx_tmp2 = true;
            		}
HXDLIN( 576)		if (_hx_tmp2) {
HXLINE( 578)			this->_sprite->dirty = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,play,(void))

void FlxAnimationController_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_587_reset)
HXDLIN( 587)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 589)			this->_curAnim->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reset,(void))

void FlxAnimationController_obj::finish(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_598_finish)
HXDLIN( 598)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 600)			this->_curAnim->finish();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,finish,(void))

void FlxAnimationController_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_609_stop)
HXDLIN( 609)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 611)			this->_curAnim->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,stop,(void))

void FlxAnimationController_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_620_pause)
HXDLIN( 620)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 622)			this->_curAnim->pause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,pause,(void))

void FlxAnimationController_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_631_resume)
HXDLIN( 631)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 633)			this->_curAnim->paused = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,resume,(void))

void FlxAnimationController_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_642_reverse)
HXDLIN( 642)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 644)			this->_curAnim->reverse();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reverse,(void))

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::getByName(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_653_getByName)
HXDLIN( 653)		return ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getByName,return )

void FlxAnimationController_obj::randomFrame(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_661_randomFrame)
HXLINE( 662)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 664)			this->_curAnim->stop();
HXLINE( 665)			this->_curAnim = null();
            		}
HXLINE( 667)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN( 667)		this->set_frameIndex(_hx_tmp->_hx_int(0,(this->_sprite->get_numFrames() - 1),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,randomFrame,(void))

void FlxAnimationController_obj::fireCallback(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_672_fireCallback)
HXDLIN( 672)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 674)			::String name;
HXDLIN( 674)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 674)				name = this->_curAnim->name;
            			}
            			else {
HXLINE( 674)				name = null();
            			}
HXLINE( 675)			int number;
HXDLIN( 675)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 675)				number = this->_curAnim->curFrame;
            			}
            			else {
HXLINE( 675)				number = this->frameIndex;
            			}
HXLINE( 676)			this->callback(name,number,this->frameIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,fireCallback,(void))

void FlxAnimationController_obj::fireFinishCallback(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_683_fireFinishCallback)
HXDLIN( 683)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE( 685)			this->finishCallback(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,fireFinishCallback,(void))

void FlxAnimationController_obj::byNamesHelper(::Array< int > addTo,::Array< ::String > frameNames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_691_byNamesHelper)
HXDLIN( 691)		int _g = 0;
HXDLIN( 691)		while((_g < frameNames->length)){
HXDLIN( 691)			::String frameName = frameNames->__get(_g);
HXDLIN( 691)			_g = (_g + 1);
HXLINE( 693)			if (this->_sprite->frames->framesByName->exists(frameName)) {
HXLINE( 695)				 ::flixel::graphics::frames::FlxFrame frameToAdd = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesByName->get(frameName)) );
HXLINE( 696)				addTo->push(this->_sprite->frames->frames->indexOf(frameToAdd,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,byNamesHelper,(void))

void FlxAnimationController_obj::byStringIndicesHelper(::Array< int > addTo,::String prefix,::Array< ::String > indices,::String suffix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_703_byStringIndicesHelper)
HXDLIN( 703)		int _g = 0;
HXDLIN( 703)		while((_g < indices->length)){
HXDLIN( 703)			::String index = indices->__get(_g);
HXDLIN( 703)			_g = (_g + 1);
HXLINE( 705)			::String name = ((prefix + index) + suffix);
HXLINE( 706)			if (this->_sprite->frames->framesByName->exists(name)) {
HXLINE( 708)				 ::flixel::graphics::frames::FlxFrame frameToAdd = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesByName->get(name)) );
HXLINE( 709)				addTo->push(this->_sprite->frames->frames->indexOf(frameToAdd,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byStringIndicesHelper,(void))

void FlxAnimationController_obj::byIndicesHelper(::Array< int > addTo,::String prefix,::Array< int > indices,::String suffix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_716_byIndicesHelper)
HXDLIN( 716)		int _g = 0;
HXDLIN( 716)		while((_g < indices->length)){
HXDLIN( 716)			int index = indices->__get(_g);
HXDLIN( 716)			_g = (_g + 1);
HXLINE( 718)			int indexToAdd = this->findSpriteFrame(prefix,index,suffix);
HXLINE( 719)			if ((indexToAdd != -1)) {
HXLINE( 720)				addTo->push(indexToAdd);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byIndicesHelper,(void))

void FlxAnimationController_obj::byPrefixHelper(::Array< int > addTo,::Array< ::Dynamic> frames,::String prefix){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_725_byPrefixHelper)
HXLINE( 726)		::String name = frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name;
HXLINE( 727)		int postIndex = name.indexOf(HX_(".",2e,00,00,00),prefix.length);
HXLINE( 728)		int postFix;
HXDLIN( 728)		if ((postIndex == -1)) {
HXLINE( 728)			postFix = name.length;
            		}
            		else {
HXLINE( 728)			postFix = postIndex;
            		}
HXDLIN( 728)		::String postFix1 = name.substring(postFix,name.length);
HXLINE( 729)		::flixel::graphics::frames::FlxFrame_obj::sort(frames,prefix.length,postFix1.length);
HXLINE( 731)		{
HXLINE( 731)			int _g = 0;
HXDLIN( 731)			while((_g < frames->length)){
HXLINE( 731)				 ::flixel::graphics::frames::FlxFrame frame = frames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 731)				_g = (_g + 1);
HXLINE( 733)				addTo->push(this->_sprite->frames->frames->indexOf(frame,null()));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,byPrefixHelper,(void))

void FlxAnimationController_obj::findByPrefix(::Array< ::Dynamic> animFrames,::String prefix,::hx::Null< bool >  __o_logError){
            		bool logError = __o_logError.Default(true);
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_738_findByPrefix)
HXLINE( 739)		{
HXLINE( 739)			int _g = 0;
HXDLIN( 739)			::Array< ::Dynamic> _g1 = this->_sprite->frames->frames;
HXDLIN( 739)			while((_g < _g1->length)){
HXLINE( 739)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 739)				_g = (_g + 1);
HXLINE( 741)				bool _hx_tmp;
HXDLIN( 741)				if (::hx::IsNotNull( frame->name )) {
HXLINE( 741)					_hx_tmp = ::StringTools_obj::startsWith(frame->name,prefix);
            				}
            				else {
HXLINE( 741)					_hx_tmp = false;
            				}
HXDLIN( 741)				if (_hx_tmp) {
HXLINE( 743)					animFrames->push(frame);
            				}
            			}
            		}
HXLINE( 748)		::Array< ::Dynamic> invalidFrames = this->removeInvalidFrames(animFrames);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findByPrefix,(void))

::Array< ::Dynamic> FlxAnimationController_obj::removeInvalidFrames(::Array< ::Dynamic> frames){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_759_removeInvalidFrames)
HXLINE( 760)		::Array< ::Dynamic> invalid = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 761)		int i = frames->length;
HXLINE( 762)		while(true){
HXLINE( 762)			i = (i - 1);
HXDLIN( 762)			if (!(((i + 1) > 0))) {
HXLINE( 762)				goto _hx_goto_47;
            			}
HXLINE( 764)			 ::flixel::graphics::frames::FlxFrame frame = frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE( 765)			if (::hx::IsNull( frame->parent->shader )) {
HXLINE( 766)				invalid->unshift(frames->splice(i,1)->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
            			}
            		}
            		_hx_goto_47:;
HXLINE( 769)		return invalid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,removeInvalidFrames,return )

int FlxAnimationController_obj::set_frameIndex(int Frame){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_773_set_frameIndex)
HXLINE( 774)		bool _hx_tmp;
HXDLIN( 774)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 774)			_hx_tmp = (this->_sprite->get_numFrames() > 0);
            		}
            		else {
HXLINE( 774)			_hx_tmp = false;
            		}
HXDLIN( 774)		if (_hx_tmp) {
HXLINE( 776)			Frame = ::hx::Mod(Frame,this->_sprite->get_numFrames());
HXLINE( 777)			this->_sprite->set_frame(this->_sprite->frames->frames->__get(Frame).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE( 778)			this->frameIndex = Frame;
HXLINE( 779)			if (::hx::IsNotNull( this->callback )) {
HXLINE( 779)				::String name;
HXDLIN( 779)				if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 779)					name = this->_curAnim->name;
            				}
            				else {
HXLINE( 779)					name = null();
            				}
HXDLIN( 779)				int number;
HXDLIN( 779)				if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 779)					number = this->_curAnim->curFrame;
            				}
            				else {
HXLINE( 779)					number = this->frameIndex;
            				}
HXDLIN( 779)				this->callback(name,number,this->frameIndex);
            			}
            		}
HXLINE( 782)		return this->frameIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameIndex,return )

::String FlxAnimationController_obj::get_frameName(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_787_get_frameName)
HXDLIN( 787)		return this->_sprite->frame->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frameName,return )

::String FlxAnimationController_obj::set_frameName(::String Value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_791_set_frameName)
HXLINE( 792)		bool _hx_tmp;
HXDLIN( 792)		if (::hx::IsNotNull( this->_sprite->frames )) {
HXLINE( 792)			_hx_tmp = this->_sprite->frames->framesByName->exists(Value);
            		}
            		else {
HXLINE( 792)			_hx_tmp = false;
            		}
HXDLIN( 792)		if (_hx_tmp) {
HXLINE( 794)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 796)				this->_curAnim->stop();
HXLINE( 797)				this->_curAnim = null();
            			}
HXLINE( 800)			 ::flixel::graphics::frames::FlxFrame frame = ( ( ::flixel::graphics::frames::FlxFrame)(this->_sprite->frames->framesByName->get(Value)) );
HXLINE( 801)			if (::hx::IsNotNull( frame )) {
HXLINE( 803)				this->set_frameIndex(this->_sprite->frames->frames->indexOf(frame,null()));
            			}
            		}
HXLINE( 807)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameName,return )

::String FlxAnimationController_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_811_get_name)
HXLINE( 812)		::String animName = null();
HXLINE( 813)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 815)			animName = this->_curAnim->name;
            		}
HXLINE( 817)		return animName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_name,return )

::String FlxAnimationController_obj::set_name(::String AnimName){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_821_set_name)
HXLINE( 822)		this->play(AnimName,null(),null(),null());
HXLINE( 823)		return AnimName;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_name,return )

::Array< ::Dynamic> FlxAnimationController_obj::getAnimationList(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_833_getAnimationList)
HXLINE( 834)		::Array< ::Dynamic> animList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 836)		{
HXLINE( 836)			 ::Dynamic anims = this->_animations->iterator();
HXDLIN( 836)			while(( (bool)(anims->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 836)				 ::flixel::animation::FlxAnimation anims1 = ( ( ::flixel::animation::FlxAnimation)(anims->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 838)				animList->push(anims1);
            			}
            		}
HXLINE( 841)		return animList;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,getAnimationList,return )

::Array< ::String > FlxAnimationController_obj::getNameList(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_851_getNameList)
HXLINE( 852)		::Array< ::String > namesList = ::Array_obj< ::String >::__new(0);
HXLINE( 853)		{
HXLINE( 853)			 ::Dynamic names = this->_animations->keys();
HXDLIN( 853)			while(( (bool)(names->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 853)				::String names1 = ( (::String)(names->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 855)				namesList->push(names1);
            			}
            		}
HXLINE( 858)		return namesList;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,getNameList,return )

bool FlxAnimationController_obj::exists(::String name){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_868_exists)
HXDLIN( 868)		return this->_animations->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,exists,return )

void FlxAnimationController_obj::rename(::String oldName,::String newName){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_878_rename)
HXLINE( 879)		 ::flixel::animation::FlxAnimation anim = ( ( ::flixel::animation::FlxAnimation)(this->_animations->get(oldName)) );
HXLINE( 880)		if (::hx::IsNull( anim )) {
HXLINE( 882)			::flixel::FlxG_obj::log->advanced(((HX_("No animation called \"",ba,9e,0f,3e) + oldName) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 883)			return;
            		}
HXLINE( 885)		this->_animations->set(newName,anim);
HXLINE( 886)		anim->name = newName;
HXLINE( 887)		this->_animations->remove(oldName);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,rename,(void))

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::get_curAnim(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_892_get_curAnim)
HXDLIN( 892)		return this->_curAnim;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_curAnim,return )

 ::flixel::animation::FlxAnimation FlxAnimationController_obj::set_curAnim( ::flixel::animation::FlxAnimation anim){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_896_set_curAnim)
HXLINE( 897)		if (::hx::IsInstanceNotEq( anim,this->_curAnim )) {
HXLINE( 899)			if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 901)				this->_curAnim->stop();
            			}
HXLINE( 904)			if (::hx::IsNotNull( anim )) {
HXLINE( 906)				anim->play(null(),null(),null());
            			}
            		}
HXLINE( 909)		return (this->_curAnim = anim);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_curAnim,return )

bool FlxAnimationController_obj::get_paused(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_913_get_paused)
HXLINE( 914)		bool paused = false;
HXLINE( 915)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 917)			paused = this->_curAnim->paused;
            		}
HXLINE( 919)		return paused;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_paused,return )

bool FlxAnimationController_obj::set_paused(bool value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_923_set_paused)
HXLINE( 924)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 926)			if (value) {
HXLINE( 928)				this->_curAnim->pause();
            			}
            			else {
HXLINE( 932)				this->_curAnim->paused = false;
            			}
            		}
HXLINE( 935)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_paused,return )

bool FlxAnimationController_obj::get_finished(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_939_get_finished)
HXLINE( 940)		bool finished = true;
HXLINE( 941)		if (::hx::IsNotNull( this->_curAnim )) {
HXLINE( 943)			finished = this->_curAnim->finished;
            		}
HXLINE( 945)		return finished;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_finished,return )

bool FlxAnimationController_obj::set_finished(bool value){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_949_set_finished)
HXLINE( 950)		bool _hx_tmp;
HXDLIN( 950)		if (value) {
HXLINE( 950)			_hx_tmp = ::hx::IsNotNull( this->_curAnim );
            		}
            		else {
HXLINE( 950)			_hx_tmp = false;
            		}
HXDLIN( 950)		if (_hx_tmp) {
HXLINE( 952)			this->_curAnim->finish();
            		}
HXLINE( 954)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_finished,return )

int FlxAnimationController_obj::get_frames(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_959_get_frames)
HXDLIN( 959)		return this->_sprite->get_numFrames();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frames,return )

int FlxAnimationController_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_964_get_numFrames)
HXDLIN( 964)		return this->_sprite->get_numFrames();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_numFrames,return )

int FlxAnimationController_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACKFRAME(&_hx_pos_5ed655cc53689dfd_975_getFrameIndex)
HXDLIN( 975)		return this->_sprite->frames->frames->indexOf(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameIndex,return )


::hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__new( ::flixel::FlxSprite sprite) {
	::hx::ObjectPtr< FlxAnimationController_obj > __this = new FlxAnimationController_obj();
	__this->__construct(sprite);
	return __this;
}

::hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite sprite) {
	FlxAnimationController_obj *__this = (FlxAnimationController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAnimationController_obj), true, "flixel.animation.FlxAnimationController"));
	*(void **)__this = FlxAnimationController_obj::_hx_vtable;
	__this->__construct(sprite);
	return __this;
}

FlxAnimationController_obj::FlxAnimationController_obj()
{
}

void FlxAnimationController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimationController);
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(_prerotated,"_prerotated");
	HX_MARK_END_CLASS();
}

void FlxAnimationController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(_prerotated,"_prerotated");
}

::hx::Val FlxAnimationController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paused() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frames() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"finish") ) { return ::hx::Val( finish_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"rename") ) { return ::hx::Val( rename_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_curAnim() ); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return ::hx::Val( _sprite ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_finished() ); }
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return ::hx::Val( _curAnim ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frameName() ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return ::hx::Val( timeScale ); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return ::hx::Val( getByName_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return ::hx::Val( frameIndex ); }
		if (HX_FIELD_EQ(inName,"addByNames") ) { return ::hx::Val( addByNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return ::hx::Val( get_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return ::hx::Val( set_paused_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frames") ) { return ::hx::Val( get_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return ::hx::Val( _animations ); }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { return ::hx::Val( _prerotated ); }
		if (HX_FIELD_EQ(inName,"addByPrefix") ) { return ::hx::Val( addByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return ::hx::Val( randomFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNameList") ) { return ::hx::Val( getNameList_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return ::hx::Val( get_curAnim_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return ::hx::Val( set_curAnim_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addByIndices") ) { return ::hx::Val( addByIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return ::hx::Val( fireCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"findByPrefix") ) { return ::hx::Val( findByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return ::hx::Val( get_finished_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_finished") ) { return ::hx::Val( set_finished_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appendByNames") ) { return ::hx::Val( appendByNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"byNamesHelper") ) { return ::hx::Val( byNamesHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return ::hx::Val( get_frameName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return ::hx::Val( set_frameName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return ::hx::Val( getFrameIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		if (HX_FIELD_EQ(inName,"appendByPrefix") ) { return ::hx::Val( appendByPrefix_dyn() ); }
		if (HX_FIELD_EQ(inName,"byPrefixHelper") ) { return ::hx::Val( byPrefixHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameIndex") ) { return ::hx::Val( set_frameIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearPrerotated") ) { return ::hx::Val( clearPrerotated_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearAnimations") ) { return ::hx::Val( clearAnimations_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendByIndices") ) { return ::hx::Val( appendByIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"findSpriteFrame") ) { return ::hx::Val( findSpriteFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"byIndicesHelper") ) { return ::hx::Val( byIndicesHelper_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createPrerotated") ) { return ::hx::Val( createPrerotated_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrameDuration") ) { return ::hx::Val( getFrameDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnimationList") ) { return ::hx::Val( getAnimationList_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"destroyAnimations") ) { return ::hx::Val( destroyAnimations_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addByStringIndices") ) { return ::hx::Val( addByStringIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"fireFinishCallback") ) { return ::hx::Val( fireFinishCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeInvalidFrames") ) { return ::hx::Val( removeInvalidFrames_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"appendByStringIndices") ) { return ::hx::Val( appendByStringIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"byStringIndicesHelper") ) { return ::hx::Val( byStringIndicesHelper_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAnimationController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paused(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_curAnim(inValue.Cast<  ::flixel::animation::FlxAnimation >()) ); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_finished(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast<  ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameName(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameIndex(inValue.Cast< int >()) );frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { _prerotated=inValue.Cast<  ::flixel::animation::FlxPrerotatedAnimation >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curAnim",b1,f7,86,ab));
	outFields->push(HX_("frameIndex",a5,cf,3a,a1));
	outFields->push(HX_("frameName",18,31,80,36));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("timeScale",3d,a3,bf,2d));
	outFields->push(HX_("_sprite",a4,ed,0c,32));
	outFields->push(HX_("_curAnim",32,51,3f,e5));
	outFields->push(HX_("_animations",0e,02,a6,55));
	outFields->push(HX_("_prerotated",05,51,a3,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAnimationController_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxAnimationController_obj,frameIndex),HX_("frameIndex",a5,cf,3a,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAnimationController_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAnimationController_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsFloat,(int)offsetof(FlxAnimationController_obj,timeScale),HX_("timeScale",3d,a3,bf,2d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxAnimationController_obj,_sprite),HX_("_sprite",a4,ed,0c,32)},
	{::hx::fsObject /*  ::flixel::animation::FlxAnimation */ ,(int)offsetof(FlxAnimationController_obj,_curAnim),HX_("_curAnim",32,51,3f,e5)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxAnimationController_obj,_animations),HX_("_animations",0e,02,a6,55)},
	{::hx::fsObject /*  ::flixel::animation::FlxPrerotatedAnimation */ ,(int)offsetof(FlxAnimationController_obj,_prerotated),HX_("_prerotated",05,51,a3,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAnimationController_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAnimationController_obj_sMemberFields[] = {
	HX_("frameIndex",a5,cf,3a,a1),
	HX_("callback",c5,99,06,7f),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("timeScale",3d,a3,bf,2d),
	HX_("_sprite",a4,ed,0c,32),
	HX_("_curAnim",32,51,3f,e5),
	HX_("_animations",0e,02,a6,55),
	HX_("_prerotated",05,51,a3,64),
	HX_("update",09,86,05,87),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("createPrerotated",02,02,47,c7),
	HX_("destroyAnimations",89,22,77,d5),
	HX_("destroy",fa,2c,86,24),
	HX_("getFrameDuration",2b,62,8b,57),
	HX_("clearPrerotated",d3,4b,be,18),
	HX_("clearAnimations",dc,fc,c0,09),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("append",da,e1,d3,8f),
	HX_("addByNames",50,4a,a2,dd),
	HX_("appendByNames",b7,b3,38,af),
	HX_("addByStringIndices",de,f4,20,5c),
	HX_("appendByStringIndices",45,9d,e9,96),
	HX_("addByIndices",af,b3,3b,79),
	HX_("appendByIndices",d6,84,4c,ac),
	HX_("findSpriteFrame",2f,8a,2e,fe),
	HX_("addByPrefix",0a,56,9c,a1),
	HX_("appendByPrefix",c3,26,a2,33),
	HX_("play",f4,2d,5a,4a),
	HX_("reset",cf,49,c8,e6),
	HX_("finish",53,40,7f,86),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("reverse",22,39,fc,1a),
	HX_("getByName",f8,b4,a4,8a),
	HX_("randomFrame",2a,9b,18,71),
	HX_("fireCallback",9b,cf,9f,40),
	HX_("fireFinishCallback",8e,db,9c,e3),
	HX_("byNamesHelper",bf,fa,de,2f),
	HX_("byStringIndicesHelper",cd,4c,c0,21),
	HX_("byIndicesHelper",9e,6f,1b,71),
	HX_("byPrefixHelper",17,cd,67,83),
	HX_("findByPrefix",22,0c,be,5d),
	HX_("removeInvalidFrames",19,6b,37,15),
	HX_("set_frameIndex",62,40,50,37),
	HX_("get_frameName",ef,04,e4,f7),
	HX_("set_frameName",fb,e6,e9,3c),
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_name",48,87,17,77),
	HX_("getAnimationList",0c,b3,1f,a4),
	HX_("getNameList",ff,fe,2d,6a),
	HX_("exists",dc,1d,e0,bf),
	HX_("rename",7e,2b,27,05),
	HX_("get_curAnim",c8,57,81,31),
	HX_("set_curAnim",d4,5e,ee,3b),
	HX_("get_paused",77,b0,0b,e0),
	HX_("set_paused",eb,4e,89,e3),
	HX_("get_finished",7b,47,28,4a),
	HX_("set_finished",ef,6a,21,5f),
	HX_("get_frames",6f,1f,0d,9d),
	HX_("get_numFrames",63,ce,ea,1e),
	HX_("getFrameIndex",db,2b,ad,fd),
	::String(null()) };

::hx::Class FlxAnimationController_obj::__mClass;

void FlxAnimationController_obj::__register()
{
	FlxAnimationController_obj _hx_dummy;
	FlxAnimationController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.animation.FlxAnimationController",0a,0a,da,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAnimationController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnimationController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnimationController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnimationController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace animation
