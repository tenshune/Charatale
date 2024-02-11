#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ShakeTween
#include <flixel/tweens/misc/ShakeTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b949e09b4c4d130d_175_new,"flixel.tweens.FlxTween","new",0xa442439f,"flixel.tweens.FlxTween.new","flixel/tweens/FlxTween.hx",175,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_561_resolveTweenOptions,"flixel.tweens.FlxTween","resolveTweenOptions",0x40bbd67e,"flixel.tweens.FlxTween.resolveTweenOptions","flixel/tweens/FlxTween.hx",561,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_572_destroy,"flixel.tweens.FlxTween","destroy",0xb268abb9,"flixel.tweens.FlxTween.destroy","flixel/tweens/FlxTween.hx",572,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_588_then,"flixel.tweens.FlxTween","then",0x19b266be,"flixel.tweens.FlxTween.then","flixel/tweens/FlxTween.hx",588,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_596_wait,"flixel.tweens.FlxTween","wait",0x1ba8be56,"flixel.tweens.FlxTween.wait","flixel/tweens/FlxTween.hx",596,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_600_addChainedTween,"flixel.tweens.FlxTween","addChainedTween",0xc68ec82b,"flixel.tweens.FlxTween.addChainedTween","flixel/tweens/FlxTween.hx",600,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_612_update,"flixel.tweens.FlxTween","update",0xb905642a,"flixel.tweens.FlxTween.update","flixel/tweens/FlxTween.hx",612,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_650_start,"flixel.tweens.FlxTween","start",0xd6ec7561,"flixel.tweens.FlxTween.start","flixel/tweens/FlxTween.hx",650,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_672_cancel,"flixel.tweens.FlxTween","cancel",0xea33cb9b,"flixel.tweens.FlxTween.cancel","flixel/tweens/FlxTween.hx",672,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_690_cancelChain,"flixel.tweens.FlxTween","cancelChain",0x815e4766,"flixel.tweens.FlxTween.cancelChain","flixel/tweens/FlxTween.hx",690,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_703_finish,"flixel.tweens.FlxTween","finish",0xb87f1e74,"flixel.tweens.FlxTween.finish","flixel/tweens/FlxTween.hx",703,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_749_onEnd,"flixel.tweens.FlxTween","onEnd",0x854598fb,"flixel.tweens.FlxTween.onEnd","flixel/tweens/FlxTween.hx",749,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_755_setVarsOnEnd,"flixel.tweens.FlxTween","setVarsOnEnd",0x855d798f,"flixel.tweens.FlxTween.setVarsOnEnd","flixel/tweens/FlxTween.hx",755,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_762_processTweenChain,"flixel.tweens.FlxTween","processTweenChain",0xe0e06164,"flixel.tweens.FlxTween.processTweenChain","flixel/tweens/FlxTween.hx",762,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_774_doNextTween,"flixel.tweens.FlxTween","doNextTween",0xb736cdac,"flixel.tweens.FlxTween.doNextTween","flixel/tweens/FlxTween.hx",774,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_785_setChain,"flixel.tweens.FlxTween","setChain",0xec346660,"flixel.tweens.FlxTween.setChain","flixel/tweens/FlxTween.hx",785,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_801_restart,"flixel.tweens.FlxTween","restart",0xf888468e,"flixel.tweens.FlxTween.restart","flixel/tweens/FlxTween.hx",801,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_821_isTweenOf,"flixel.tweens.FlxTween","isTweenOf",0x854e0a17,"flixel.tweens.FlxTween.isTweenOf","flixel/tweens/FlxTween.hx",821,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_831_setDelays,"flixel.tweens.FlxTween","setDelays",0x750c1d51,"flixel.tweens.FlxTween.setDelays","flixel/tweens/FlxTween.hx",831,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_838_set_startDelay,"flixel.tweens.FlxTween","set_startDelay",0xdc7f879f,"flixel.tweens.FlxTween.set_startDelay","flixel/tweens/FlxTween.hx",838,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_848_set_loopDelay,"flixel.tweens.FlxTween","set_loopDelay",0xc5954461,"flixel.tweens.FlxTween.set_loopDelay","flixel/tweens/FlxTween.hx",848,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_860_get_percent,"flixel.tweens.FlxTween","get_percent",0x9c57551b,"flixel.tweens.FlxTween.get_percent","flixel/tweens/FlxTween.hx",860,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_865_set_percent,"flixel.tweens.FlxTween","set_percent",0xa6c45c27,"flixel.tweens.FlxTween.set_percent","flixel/tweens/FlxTween.hx",865,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_869_set_type,"flixel.tweens.FlxTween","set_type",0x136d7018,"flixel.tweens.FlxTween.set_type","flixel/tweens/FlxTween.hx",869,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_884_set_active,"flixel.tweens.FlxTween","set_active",0x9ccb52a4,"flixel.tweens.FlxTween.set_active","flixel/tweens/FlxTween.hx",884,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_228_tween,"flixel.tweens.FlxTween","tween",0x6c51ab6a,"flixel.tweens.FlxTween.tween","flixel/tweens/FlxTween.hx",228,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_253_num,"flixel.tweens.FlxTween","num",0xa4425185,"flixel.tweens.FlxTween.num","flixel/tweens/FlxTween.hx",253,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_273_shake,"flixel.tweens.FlxTween","shake",0xcefddfc5,"flixel.tweens.FlxTween.shake","flixel/tweens/FlxTween.hx",273,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_292_angle,"flixel.tweens.FlxTween","angle",0x75c344d2,"flixel.tweens.FlxTween.angle","flixel/tweens/FlxTween.hx",292,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_311_color,"flixel.tweens.FlxTween","color",0x9d3d7262,"flixel.tweens.FlxTween.color","flixel/tweens/FlxTween.hx",311,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_334_linearMotion,"flixel.tweens.FlxTween","linearMotion",0xd656f2dc,"flixel.tweens.FlxTween.linearMotion","flixel/tweens/FlxTween.hx",334,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_359_quadMotion,"flixel.tweens.FlxTween","quadMotion",0xc62584fe,"flixel.tweens.FlxTween.quadMotion","flixel/tweens/FlxTween.hx",359,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_385_cubicMotion,"flixel.tweens.FlxTween","cubicMotion",0xa068755f,"flixel.tweens.FlxTween.cubicMotion","flixel/tweens/FlxTween.hx",385,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_410_circularMotion,"flixel.tweens.FlxTween","circularMotion",0x65e89916,"flixel.tweens.FlxTween.circularMotion","flixel/tweens/FlxTween.hx",410,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_430_linearPath,"flixel.tweens.FlxTween","linearPath",0xd40abccb,"flixel.tweens.FlxTween.linearPath","flixel/tweens/FlxTween.hx",430,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_450_quadPath,"flixel.tweens.FlxTween","quadPath",0x6abb226d,"flixel.tweens.FlxTween.quadPath","flixel/tweens/FlxTween.hx",450,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_467_cancelTweensOf,"flixel.tweens.FlxTween","cancelTweensOf",0xe73a0d9a,"flixel.tweens.FlxTween.cancelTweensOf","flixel/tweens/FlxTween.hx",467,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_493_completeTweensOf,"flixel.tweens.FlxTween","completeTweensOf",0xa842c219,"flixel.tweens.FlxTween.completeTweensOf","flixel/tweens/FlxTween.hx",493,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_181_boot,"flixel.tweens.FlxTween","boot",0x0dd1e813,"flixel.tweens.FlxTween.boot","flixel/tweens/FlxTween.hx",181,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_187_boot,"flixel.tweens.FlxTween","boot",0x0dd1e813,"flixel.tweens.FlxTween.boot","flixel/tweens/FlxTween.hx",187,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_193_boot,"flixel.tweens.FlxTween","boot",0x0dd1e813,"flixel.tweens.FlxTween.boot","flixel/tweens/FlxTween.hx",193,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_199_boot,"flixel.tweens.FlxTween","boot",0x0dd1e813,"flixel.tweens.FlxTween.boot","flixel/tweens/FlxTween.hx",199,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_b949e09b4c4d130d_205_boot,"flixel.tweens.FlxTween","boot",0x0dd1e813,"flixel.tweens.FlxTween.boot","flixel/tweens/FlxTween.hx",205,0x5d58d691)
namespace flixel{
namespace tweens{

void FlxTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_175_new)
HXLINE( 540)		this->_waitingForRestart = false;
HXLINE( 539)		this->_running = false;
HXLINE( 538)		this->_delayToUse = ((Float)0);
HXLINE( 537)		this->_secondsSinceStart = ((Float)0);
HXLINE( 535)		this->loopDelay = ((Float)0);
HXLINE( 530)		this->startDelay = ((Float)0);
HXLINE( 525)		this->executions = 0;
HXLINE( 518)		this->scale = ((Float)0);
HXLINE( 503)		this->duration = ((Float)0);
HXLINE( 502)		this->active = false;
HXLINE( 549)		Options = this->resolveTweenOptions(Options);
HXLINE( 551)		this->set_type(( (int)(Options->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) ));
HXLINE( 552)		this->onStart = Options->__Field(HX_("onStart",c3,12,49,1a),::hx::paccDynamic);
HXLINE( 553)		this->onUpdate = Options->__Field(HX_("onUpdate",88,7c,b2,66),::hx::paccDynamic);
HXLINE( 554)		this->onComplete = Options->__Field(HX_("onComplete",f8,d4,7e,5d),::hx::paccDynamic);
HXLINE( 555)		this->ease = Options->__Field(HX_("ease",ee,8b,0c,43),::hx::paccDynamic);
HXLINE( 556)		this->setDelays(Options->__Field(HX_("startDelay",c1,af,3d,f3),::hx::paccDynamic),Options->__Field(HX_("loopDelay",7f,f6,d2,04),::hx::paccDynamic));
HXLINE( 557)		 ::flixel::tweens::FlxTweenManager _hx_tmp;
HXDLIN( 557)		if (::hx::IsNotNull( manager )) {
HXLINE( 557)			_hx_tmp = manager;
            		}
            		else {
HXLINE( 557)			_hx_tmp = ::flixel::tweens::FlxTween_obj::globalManager;
            		}
HXDLIN( 557)		this->manager = _hx_tmp;
            	}

Dynamic FlxTween_obj::__CreateEmpty() { return new FlxTween_obj; }

void *FlxTween_obj::_hx_vtable = 0;

Dynamic FlxTween_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTween_obj > _hx_result = new FlxTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxTween_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_tweens_FlxTween__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::tweens::FlxTween_obj::destroy,
};

void *FlxTween_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_tweens_FlxTween__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic FlxTween_obj::resolveTweenOptions( ::Dynamic Options){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_561_resolveTweenOptions)
HXLINE( 562)		if (::hx::IsNull( Options )) {
HXLINE( 563)			Options =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("type",ba,f2,08,4d),8));
            		}
HXLINE( 565)		if (::hx::IsNull( Options->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic) )) {
HXLINE( 566)			Options->__SetField(HX_("type",ba,f2,08,4d),8,::hx::paccDynamic);
            		}
HXLINE( 568)		return Options;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,resolveTweenOptions,return )

void FlxTween_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_572_destroy)
HXLINE( 573)		this->onStart = null();
HXLINE( 574)		this->onUpdate = null();
HXLINE( 575)		this->onComplete = null();
HXLINE( 576)		this->ease = null();
HXLINE( 577)		this->manager = null();
HXLINE( 578)		this->_chainedTweens = null();
HXLINE( 579)		this->_nextTweenInChain = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

 ::flixel::tweens::FlxTween FlxTween_obj::then( ::flixel::tweens::FlxTween tween){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_588_then)
HXDLIN( 588)		return this->addChainedTween(tween);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,then,return )

 ::flixel::tweens::FlxTween FlxTween_obj::wait(Float delay){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_596_wait)
HXDLIN( 596)		return this->addChainedTween(::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(0) ),delay,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,wait,return )

 ::flixel::tweens::FlxTween FlxTween_obj::addChainedTween( ::flixel::tweens::FlxTween tween){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_600_addChainedTween)
HXLINE( 601)		tween->setVarsOnEnd();
HXLINE( 602)		tween->manager->remove(tween,false);
HXLINE( 604)		if (::hx::IsNull( this->_chainedTweens )) {
HXLINE( 605)			this->_chainedTweens = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 607)		this->_chainedTweens->push(tween);
HXLINE( 608)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,addChainedTween,return )

void FlxTween_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_612_update)
HXLINE( 613)		 ::flixel::tweens::FlxTween _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 613)		_hx_tmp->_secondsSinceStart = (_hx_tmp->_secondsSinceStart + elapsed);
HXLINE( 614)		Float delay;
HXDLIN( 614)		if ((this->executions > 0)) {
HXLINE( 614)			delay = this->loopDelay;
            		}
            		else {
HXLINE( 614)			delay = this->startDelay;
            		}
HXLINE( 615)		if ((this->_secondsSinceStart < delay)) {
HXLINE( 617)			return;
            		}
HXLINE( 619)		this->scale = (::Math_obj::max((this->_secondsSinceStart - delay),( (Float)(0) )) / this->duration);
HXLINE( 620)		if (::hx::IsNotNull( this->ease )) {
HXLINE( 622)			this->scale = ( (Float)(this->ease(this->scale)) );
            		}
HXLINE( 624)		if (this->backward) {
HXLINE( 626)			this->scale = (( (Float)(1) ) - this->scale);
            		}
HXLINE( 628)		bool _hx_tmp1;
HXDLIN( 628)		if ((this->_secondsSinceStart > delay)) {
HXLINE( 628)			_hx_tmp1 = !(this->_running);
            		}
            		else {
HXLINE( 628)			_hx_tmp1 = false;
            		}
HXDLIN( 628)		if (_hx_tmp1) {
HXLINE( 630)			this->_running = true;
HXLINE( 631)			if (::hx::IsNotNull( this->onStart )) {
HXLINE( 632)				this->onStart(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 634)		if ((this->_secondsSinceStart >= (this->duration + delay))) {
HXLINE( 636)			Float _hx_tmp;
HXDLIN( 636)			if (this->backward) {
HXLINE( 636)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 636)				_hx_tmp = ( (Float)(1) );
            			}
HXDLIN( 636)			this->scale = _hx_tmp;
HXLINE( 637)			this->finished = true;
            		}
            		else {
HXLINE( 641)			if (::hx::IsNotNull( this->onUpdate )) {
HXLINE( 642)				this->onUpdate(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,update,(void))

 ::flixel::tweens::FlxTween FlxTween_obj::start(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_650_start)
HXLINE( 651)		this->_waitingForRestart = false;
HXLINE( 652)		this->_secondsSinceStart = ( (Float)(0) );
HXLINE( 653)		Float _hx_tmp;
HXDLIN( 653)		if ((this->executions > 0)) {
HXLINE( 653)			_hx_tmp = this->loopDelay;
            		}
            		else {
HXLINE( 653)			_hx_tmp = this->startDelay;
            		}
HXDLIN( 653)		this->_delayToUse = _hx_tmp;
HXLINE( 654)		if ((this->duration == 0)) {
HXLINE( 656)			this->set_active(false);
HXLINE( 657)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 659)		this->set_active(true);
HXLINE( 660)		this->_running = false;
HXLINE( 661)		this->finished = false;
HXLINE( 662)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

void FlxTween_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_672_cancel)
HXLINE( 673)		this->onEnd();
HXLINE( 675)		if (::hx::IsNotNull( this->manager )) {
HXLINE( 676)			this->manager->remove(::hx::ObjectPtr<OBJ_>(this),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

void FlxTween_obj::cancelChain(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_690_cancelChain)
HXLINE( 692)		if (::hx::IsNotNull( this->_nextTweenInChain )) {
HXLINE( 693)			this->_nextTweenInChain->cancelChain();
            		}
HXLINE( 696)		if (::hx::IsNotNull( this->_chainedTweens )) {
HXLINE( 697)			this->_chainedTweens = null();
            		}
HXLINE( 699)		this->cancel();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancelChain,(void))

void FlxTween_obj::finish(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_703_finish)
HXLINE( 704)		this->executions++;
HXLINE( 706)		if (::hx::IsNotNull( this->onComplete )) {
HXLINE( 707)			this->onComplete(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 709)		int type = (this->type & ~(16));
HXLINE( 711)		bool _hx_tmp;
HXDLIN( 711)		if ((type != 1)) {
HXLINE( 711)			_hx_tmp = (type == 8);
            		}
            		else {
HXLINE( 711)			_hx_tmp = true;
            		}
HXDLIN( 711)		if (_hx_tmp) {
HXLINE( 713)			this->onEnd();
HXLINE( 714)			this->_secondsSinceStart = (this->duration + this->startDelay);
HXLINE( 716)			bool _hx_tmp;
HXDLIN( 716)			if ((type == 8)) {
HXLINE( 716)				_hx_tmp = ::hx::IsNotNull( this->manager );
            			}
            			else {
HXLINE( 716)				_hx_tmp = false;
            			}
HXDLIN( 716)			if (_hx_tmp) {
HXLINE( 718)				this->manager->remove(::hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
HXLINE( 722)		bool _hx_tmp1;
HXDLIN( 722)		if ((type != 2)) {
HXLINE( 722)			_hx_tmp1 = (type == 4);
            		}
            		else {
HXLINE( 722)			_hx_tmp1 = true;
            		}
HXDLIN( 722)		if (_hx_tmp1) {
HXLINE( 724)			this->_secondsSinceStart = (::hx::Mod((this->_secondsSinceStart - this->_delayToUse),this->duration) + this->_delayToUse);
HXLINE( 725)			this->scale = (::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),( (Float)(0) )) / this->duration);
HXLINE( 727)			bool _hx_tmp;
HXDLIN( 727)			bool _hx_tmp1;
HXDLIN( 727)			if (::hx::IsNotNull( this->ease )) {
HXLINE( 727)				_hx_tmp1 = (this->scale > 0);
            			}
            			else {
HXLINE( 727)				_hx_tmp1 = false;
            			}
HXDLIN( 727)			if (_hx_tmp1) {
HXLINE( 727)				_hx_tmp = (this->scale < 1);
            			}
            			else {
HXLINE( 727)				_hx_tmp = false;
            			}
HXDLIN( 727)			if (_hx_tmp) {
HXLINE( 729)				this->scale = ( (Float)(this->ease(this->scale)) );
            			}
HXLINE( 732)			if ((type == 4)) {
HXLINE( 734)				this->backward = !(this->backward);
HXLINE( 735)				if (this->backward) {
HXLINE( 737)					this->scale = (( (Float)(1) ) - this->scale);
            				}
            			}
HXLINE( 741)			this->restart();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

void FlxTween_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_749_onEnd)
HXLINE( 750)		this->setVarsOnEnd();
HXLINE( 751)		this->processTweenChain();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,onEnd,(void))

void FlxTween_obj::setVarsOnEnd(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_755_setVarsOnEnd)
HXLINE( 756)		this->set_active(false);
HXLINE( 757)		this->_running = false;
HXLINE( 758)		this->finished = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,setVarsOnEnd,(void))

void FlxTween_obj::processTweenChain(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_762_processTweenChain)
HXLINE( 763)		bool _hx_tmp;
HXDLIN( 763)		if (::hx::IsNotNull( this->_chainedTweens )) {
HXLINE( 763)			_hx_tmp = (this->_chainedTweens->length <= 0);
            		}
            		else {
HXLINE( 763)			_hx_tmp = true;
            		}
HXDLIN( 763)		if (_hx_tmp) {
HXLINE( 764)			return;
            		}
HXLINE( 767)		this->_nextTweenInChain = this->_chainedTweens->shift().StaticCast<  ::flixel::tweens::FlxTween >();
HXLINE( 769)		this->doNextTween(this->_nextTweenInChain);
HXLINE( 770)		this->_chainedTweens = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,processTweenChain,(void))

void FlxTween_obj::doNextTween( ::flixel::tweens::FlxTween tween){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_774_doNextTween)
HXLINE( 775)		if (!(tween->active)) {
HXLINE( 777)			tween->start();
HXLINE( 778)			this->manager->add_flixel_tweens_FlxTween(tween,null());
            		}
HXLINE( 781)		tween->setChain(this->_chainedTweens);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,doNextTween,(void))

void FlxTween_obj::setChain(::Array< ::Dynamic> previousChain){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_785_setChain)
HXLINE( 786)		if (::hx::IsNull( previousChain )) {
HXLINE( 787)			return;
            		}
HXLINE( 789)		if (::hx::IsNull( this->_chainedTweens )) {
HXLINE( 790)			this->_chainedTweens = previousChain;
            		}
            		else {
HXLINE( 792)			this->_chainedTweens = this->_chainedTweens->concat(previousChain);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,setChain,(void))

void FlxTween_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_801_restart)
HXDLIN( 801)		if (this->active) {
HXLINE( 803)			this->start();
            		}
            		else {
HXLINE( 807)			this->_waitingForRestart = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,restart,(void))

bool FlxTween_obj::isTweenOf( ::Dynamic Object,::String Field){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_821_isTweenOf)
HXDLIN( 821)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,isTweenOf,return )

 ::flixel::tweens::FlxTween FlxTween_obj::setDelays( ::Dynamic StartDelay, ::Dynamic LoopDelay){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_831_setDelays)
HXLINE( 832)		Float _hx_tmp;
HXDLIN( 832)		if (::hx::IsNotNull( StartDelay )) {
HXLINE( 832)			_hx_tmp = ( (Float)(StartDelay) );
            		}
            		else {
HXLINE( 832)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN( 832)		this->set_startDelay(_hx_tmp);
HXLINE( 833)		 ::Dynamic _hx_tmp1;
HXDLIN( 833)		if (::hx::IsNotNull( LoopDelay )) {
HXLINE( 833)			_hx_tmp1 = LoopDelay;
            		}
            		else {
HXLINE( 833)			_hx_tmp1 = 0;
            		}
HXDLIN( 833)		this->set_loopDelay(_hx_tmp1);
HXLINE( 834)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,setDelays,return )

Float FlxTween_obj::set_startDelay(Float value){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_838_set_startDelay)
HXLINE( 839)		Float dly = ::Math_obj::abs(value);
HXLINE( 840)		if ((this->executions == 0)) {
HXLINE( 842)			this->_delayToUse = dly;
            		}
HXLINE( 844)		return (this->startDelay = dly);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_startDelay,return )

Float FlxTween_obj::set_loopDelay( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_848_set_loopDelay)
HXLINE( 849)		Float dly = ::Math_obj::abs(( (Float)(value) ));
HXLINE( 850)		if ((this->executions > 0)) {
HXLINE( 852)			this->_secondsSinceStart = ((this->duration * (::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),( (Float)(0) )) / this->duration)) + ::Math_obj::max((dly - this->loopDelay),( (Float)(0) )));
HXLINE( 853)			this->_delayToUse = dly;
            		}
HXLINE( 855)		return (this->loopDelay = dly);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_loopDelay,return )

Float FlxTween_obj::get_percent(){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_860_get_percent)
HXDLIN( 860)		return (::Math_obj::max((this->_secondsSinceStart - this->_delayToUse),( (Float)(0) )) / this->duration);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Float FlxTween_obj::set_percent(Float value){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_865_set_percent)
HXDLIN( 865)		return (this->_secondsSinceStart = ((this->duration * value) + this->_delayToUse));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

int FlxTween_obj::set_type(int value){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_869_set_type)
HXLINE( 870)		if ((value == 0)) {
HXLINE( 872)			value = 8;
            		}
            		else {
HXLINE( 874)			if ((value == 16)) {
HXLINE( 876)				value = (1 | 16);
            			}
            		}
HXLINE( 879)		this->backward = ((value & 16) > 0);
HXLINE( 880)		return (this->type = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_type,return )

bool FlxTween_obj::set_active(bool active){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_884_set_active)
HXLINE( 885)		this->active = active;
HXLINE( 887)		if (this->_waitingForRestart) {
HXLINE( 888)			this->restart();
            		}
HXLINE( 890)		return active;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_active,return )

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;

 ::flixel::tweens::FlxTweenManager FlxTween_obj::globalManager;

 ::flixel::tweens::misc::VarTween FlxTween_obj::tween( ::Dynamic Object, ::Dynamic Values,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_228_tween)
HXDLIN( 228)		return ::flixel::tweens::FlxTween_obj::globalManager->tween(Object,Values,Duration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,tween,return )

 ::flixel::tweens::misc::NumTween FlxTween_obj::num(Float FromValue,Float ToValue,::hx::Null< Float >  __o_Duration, ::Dynamic Options, ::Dynamic TweenFunction){
            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_253_num)
HXDLIN( 253)		return ::flixel::tweens::FlxTween_obj::globalManager->num(FromValue,ToValue,Duration,Options,TweenFunction);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,num,return )

 ::flixel::tweens::misc::ShakeTween FlxTween_obj::shake( ::flixel::FlxSprite Sprite,::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic Axes, ::Dynamic Options){
            		Float Intensity = __o_Intensity.Default(((Float)0.05));
            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_273_shake)
HXDLIN( 273)		return ::flixel::tweens::FlxTween_obj::globalManager->shake(Sprite,Intensity,Duration,Axes,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,shake,return )

 ::flixel::tweens::misc::AngleTween FlxTween_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_292_angle)
HXDLIN( 292)		return ::flixel::tweens::FlxTween_obj::globalManager->angle(Sprite,FromAngle,ToAngle,Duration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,angle,return )

 ::flixel::tweens::misc::ColorTween FlxTween_obj::color( ::flixel::FlxSprite Sprite,::hx::Null< Float >  __o_Duration,int FromColor,int ToColor, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_311_color)
HXDLIN( 311)		return ::flixel::tweens::FlxTween_obj::globalManager->color(Sprite,Duration,FromColor,ToColor,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,color,return )

 ::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_334_linearMotion)
HXDLIN( 334)		return ::flixel::tweens::FlxTween_obj::globalManager->linearMotion(Object,FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_359_quadMotion)
HXDLIN( 359)		return ::flixel::tweens::FlxTween_obj::globalManager->quadMotion(Object,FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_385_cubicMotion)
HXDLIN( 385)		return ::flixel::tweens::FlxTween_obj::globalManager->cubicMotion(Object,FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

 ::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_410_circularMotion)
HXDLIN( 410)		return ::flixel::tweens::FlxTween_obj::globalManager->circularMotion(Object,CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

 ::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_430_linearPath)
HXDLIN( 430)		return ::flixel::tweens::FlxTween_obj::globalManager->linearPath(Object,Points,DurationOrSpeed,UseDuration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

 ::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_450_quadPath)
HXDLIN( 450)		return ::flixel::tweens::FlxTween_obj::globalManager->quadPath(Object,Points,DurationOrSpeed,UseDuration,Options);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )

void FlxTween_obj::cancelTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_467_cancelTweensOf)
HXDLIN( 467)		::flixel::tweens::FlxTween_obj::globalManager->cancelTweensOf(Object,FieldPaths);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,cancelTweensOf,(void))

void FlxTween_obj::completeTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths){
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_493_completeTweensOf)
HXDLIN( 493)		::flixel::tweens::FlxTween_obj::globalManager->completeTweensOf(Object,FieldPaths);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,completeTweensOf,(void))


::hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< FlxTween_obj > __this = new FlxTween_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	FlxTween_obj *__this = (FlxTween_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTween_obj), true, "flixel.tweens.FlxTween"));
	*(void **)__this = FlxTween_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(backward,"backward");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(startDelay,"startDelay");
	HX_MARK_MEMBER_NAME(loopDelay,"loopDelay");
	HX_MARK_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_MARK_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_MARK_MEMBER_NAME(_running,"_running");
	HX_MARK_MEMBER_NAME(_waitingForRestart,"_waitingForRestart");
	HX_MARK_MEMBER_NAME(_chainedTweens,"_chainedTweens");
	HX_MARK_MEMBER_NAME(_nextTweenInChain,"_nextTweenInChain");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(onStart,"onStart");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(backward,"backward");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(startDelay,"startDelay");
	HX_VISIT_MEMBER_NAME(loopDelay,"loopDelay");
	HX_VISIT_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_VISIT_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_VISIT_MEMBER_NAME(_running,"_running");
	HX_VISIT_MEMBER_NAME(_waitingForRestart,"_waitingForRestart");
	HX_VISIT_MEMBER_NAME(_chainedTweens,"_chainedTweens");
	HX_VISIT_MEMBER_NAME(_nextTweenInChain,"_nextTweenInChain");
}

::hx::Val FlxTween_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"then") ) { return ::hx::Val( then_dyn() ); }
		if (HX_FIELD_EQ(inName,"wait") ) { return ::hx::Val( wait_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"finish") ) { return ::hx::Val( finish_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		if (HX_FIELD_EQ(inName,"onStart") ) { return ::hx::Val( onStart ); }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percent() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate ); }
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"backward") ) { return ::hx::Val( backward ); }
		if (HX_FIELD_EQ(inName,"_running") ) { return ::hx::Val( _running ); }
		if (HX_FIELD_EQ(inName,"setChain") ) { return ::hx::Val( setChain_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return ::hx::Val( set_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { return ::hx::Val( loopDelay ); }
		if (HX_FIELD_EQ(inName,"isTweenOf") ) { return ::hx::Val( isTweenOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDelays") ) { return ::hx::Val( setDelays_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"executions") ) { return ::hx::Val( executions ); }
		if (HX_FIELD_EQ(inName,"startDelay") ) { return ::hx::Val( startDelay ); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return ::hx::Val( set_active_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { return ::hx::Val( _delayToUse ); }
		if (HX_FIELD_EQ(inName,"cancelChain") ) { return ::hx::Val( cancelChain_dyn() ); }
		if (HX_FIELD_EQ(inName,"doNextTween") ) { return ::hx::Val( doNextTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return ::hx::Val( get_percent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return ::hx::Val( set_percent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setVarsOnEnd") ) { return ::hx::Val( setVarsOnEnd_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_loopDelay") ) { return ::hx::Val( set_loopDelay_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_chainedTweens") ) { return ::hx::Val( _chainedTweens ); }
		if (HX_FIELD_EQ(inName,"set_startDelay") ) { return ::hx::Val( set_startDelay_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addChainedTween") ) { return ::hx::Val( addChainedTween_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nextTweenInChain") ) { return ::hx::Val( _nextTweenInChain ); }
		if (HX_FIELD_EQ(inName,"processTweenChain") ) { return ::hx::Val( processTweenChain_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { return ::hx::Val( _secondsSinceStart ); }
		if (HX_FIELD_EQ(inName,"_waitingForRestart") ) { return ::hx::Val( _waitingForRestart ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resolveTweenOptions") ) { return ::hx::Val( resolveTweenOptions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTween_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { outValue = num_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shake") ) { outValue = shake_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angle") ) { outValue = angle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"color") ) { outValue = color_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PERSIST") ) { outValue = ( PERSIST ); return true; }
		if (HX_FIELD_EQ(inName,"LOOPING") ) { outValue = ( LOOPING ); return true; }
		if (HX_FIELD_EQ(inName,"ONESHOT") ) { outValue = ( ONESHOT ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PINGPONG") ) { outValue = ( PINGPONG ); return true; }
		if (HX_FIELD_EQ(inName,"BACKWARD") ) { outValue = ( BACKWARD ); return true; }
		if (HX_FIELD_EQ(inName,"quadPath") ) { outValue = quadPath_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { outValue = quadMotion_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"linearPath") ) { outValue = linearPath_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { outValue = cubicMotion_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { outValue = linearMotion_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { outValue = ( globalManager ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { outValue = circularMotion_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cancelTweensOf") ) { outValue = cancelTweensOf_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"completeTweensOf") ) { outValue = completeTweensOf_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTween_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_type(inValue.Cast< int >()) );type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_active(inValue.Cast< bool >()) );active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::flixel::tweens::FlxTweenManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percent(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backward") ) { backward=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_running") ) { _running=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_loopDelay(inValue.Cast< Float >()) );loopDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_startDelay(inValue.Cast< Float >()) );startDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { _delayToUse=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_chainedTweens") ) { _chainedTweens=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nextTweenInChain") ) { _nextTweenInChain=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { _secondsSinceStart=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitingForRestart") ) { _waitingForRestart=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"PERSIST") ) { PERSIST=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ONESHOT") ) { ONESHOT=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PINGPONG") ) { PINGPONG=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BACKWARD") ) { BACKWARD=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { globalManager=ioValue.Cast<  ::flixel::tweens::FlxTweenManager >(); return true; }
	}
	return false;
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("percent",c5,aa,da,78));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("backward",e3,db,18,27));
	outFields->push(HX_("executions",db,f9,36,3c));
	outFields->push(HX_("startDelay",c1,af,3d,f3));
	outFields->push(HX_("loopDelay",7f,f6,d2,04));
	outFields->push(HX_("_secondsSinceStart",68,4a,61,cd));
	outFields->push(HX_("_delayToUse",28,28,40,14));
	outFields->push(HX_("_running",80,c7,21,25));
	outFields->push(HX_("_waitingForRestart",74,f0,92,ee));
	outFields->push(HX_("_chainedTweens",a9,3f,16,71));
	outFields->push(HX_("_nextTweenInChain",a3,bb,2c,a7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTween_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tweens::FlxTweenManager */ ,(int)offsetof(FlxTween_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsBool,(int)offsetof(FlxTween_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsFloat,(int)offsetof(FlxTween_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTween_obj,ease),HX_("ease",ee,8b,0c,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTween_obj,onStart),HX_("onStart",c3,12,49,1a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTween_obj,onUpdate),HX_("onUpdate",88,7c,b2,66)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTween_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsInt,(int)offsetof(FlxTween_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsBool,(int)offsetof(FlxTween_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsFloat,(int)offsetof(FlxTween_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsBool,(int)offsetof(FlxTween_obj,backward),HX_("backward",e3,db,18,27)},
	{::hx::fsInt,(int)offsetof(FlxTween_obj,executions),HX_("executions",db,f9,36,3c)},
	{::hx::fsFloat,(int)offsetof(FlxTween_obj,startDelay),HX_("startDelay",c1,af,3d,f3)},
	{::hx::fsFloat,(int)offsetof(FlxTween_obj,loopDelay),HX_("loopDelay",7f,f6,d2,04)},
	{::hx::fsFloat,(int)offsetof(FlxTween_obj,_secondsSinceStart),HX_("_secondsSinceStart",68,4a,61,cd)},
	{::hx::fsFloat,(int)offsetof(FlxTween_obj,_delayToUse),HX_("_delayToUse",28,28,40,14)},
	{::hx::fsBool,(int)offsetof(FlxTween_obj,_running),HX_("_running",80,c7,21,25)},
	{::hx::fsBool,(int)offsetof(FlxTween_obj,_waitingForRestart),HX_("_waitingForRestart",74,f0,92,ee)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTween_obj,_chainedTweens),HX_("_chainedTweens",a9,3f,16,71)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(FlxTween_obj,_nextTweenInChain),HX_("_nextTweenInChain",a3,bb,2c,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxTween_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxTween_obj::PERSIST,HX_("PERSIST",f4,f5,44,03)},
	{::hx::fsInt,(void *) &FlxTween_obj::LOOPING,HX_("LOOPING",de,50,51,a0)},
	{::hx::fsInt,(void *) &FlxTween_obj::PINGPONG,HX_("PINGPONG",6a,23,c9,01)},
	{::hx::fsInt,(void *) &FlxTween_obj::ONESHOT,HX_("ONESHOT",40,6e,af,f6)},
	{::hx::fsInt,(void *) &FlxTween_obj::BACKWARD,HX_("BACKWARD",e3,6b,9e,80)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTweenManager */ ,(void *) &FlxTween_obj::globalManager,HX_("globalManager",4a,cb,fa,39)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTween_obj_sMemberFields[] = {
	HX_("manager",6d,92,c1,13),
	HX_("active",c6,41,46,16),
	HX_("duration",54,0f,8e,14),
	HX_("ease",ee,8b,0c,43),
	HX_("onStart",c3,12,49,1a),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("type",ba,f2,08,4d),
	HX_("finished",72,93,0e,95),
	HX_("scale",8a,ce,ce,78),
	HX_("backward",e3,db,18,27),
	HX_("executions",db,f9,36,3c),
	HX_("startDelay",c1,af,3d,f3),
	HX_("loopDelay",7f,f6,d2,04),
	HX_("_secondsSinceStart",68,4a,61,cd),
	HX_("_delayToUse",28,28,40,14),
	HX_("_running",80,c7,21,25),
	HX_("_waitingForRestart",74,f0,92,ee),
	HX_("_chainedTweens",a9,3f,16,71),
	HX_("_nextTweenInChain",a3,bb,2c,a7),
	HX_("resolveTweenOptions",3f,b5,76,9f),
	HX_("destroy",fa,2c,86,24),
	HX_("then",dd,02,fc,4c),
	HX_("wait",75,5a,f2,4e),
	HX_("addChainedTween",6c,f2,e0,52),
	HX_("update",09,86,05,87),
	HX_("start",62,74,0b,84),
	HX_("cancel",7a,ed,33,b8),
	HX_("cancelChain",27,fd,db,e3),
	HX_("finish",53,40,7f,86),
	HX_("onEnd",fc,97,64,32),
	HX_("setVarsOnEnd",ae,cc,de,50),
	HX_("processTweenChain",e5,5d,c2,c5),
	HX_("doNextTween",6d,83,b4,19),
	HX_("setChain",ff,fd,e7,53),
	HX_("restart",cf,c7,a5,6a),
	HX_("isTweenOf",98,1d,bf,da),
	HX_("setDelays",d2,30,7d,ca),
	HX_("set_startDelay",7e,20,53,89),
	HX_("set_loopDelay",62,ac,3c,0b),
	HX_("get_percent",dc,0a,d5,fe),
	HX_("set_percent",e8,11,42,09),
	HX_("set_type",b7,07,21,7b),
	HX_("set_active",03,50,4b,0a),
	::String(null()) };

static void FlxTween_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxTween_obj::globalManager,"globalManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTween_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::globalManager,"globalManager");
};

#endif

::hx::Class FlxTween_obj::__mClass;

static ::String FlxTween_obj_sStaticFields[] = {
	HX_("PERSIST",f4,f5,44,03),
	HX_("LOOPING",de,50,51,a0),
	HX_("PINGPONG",6a,23,c9,01),
	HX_("ONESHOT",40,6e,af,f6),
	HX_("BACKWARD",e3,6b,9e,80),
	HX_("globalManager",4a,cb,fa,39),
	HX_("tween",6b,aa,70,19),
	HX_("num",46,de,53,00),
	HX_("shake",c6,de,1c,7c),
	HX_("angle",d3,43,e2,22),
	HX_("color",63,71,5c,4a),
	HX_("linearMotion",fb,45,d8,a1),
	HX_("quadMotion",5d,82,a5,33),
	HX_("cubicMotion",20,2b,e6,02),
	HX_("circularMotion",f5,31,bc,12),
	HX_("linearPath",2a,ba,8a,41),
	HX_("quadPath",0c,ba,6e,d2),
	HX_("cancelTweensOf",79,a6,0d,94),
	HX_("completeTweensOf",b8,90,d5,e3),
	::String(null())
};

void FlxTween_obj::__register()
{
	FlxTween_obj _hx_dummy;
	FlxTween_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.FlxTween",2d,88,9a,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTween_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTween_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTween_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTween_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTween_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTween_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTween_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTween_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTween_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_181_boot)
HXDLIN( 181)		PERSIST = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_187_boot)
HXDLIN( 187)		LOOPING = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_193_boot)
HXDLIN( 193)		PINGPONG = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_199_boot)
HXDLIN( 199)		ONESHOT = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b949e09b4c4d130d_205_boot)
HXDLIN( 205)		BACKWARD = 16;
            	}
}

} // end namespace flixel
} // end namespace tweens
