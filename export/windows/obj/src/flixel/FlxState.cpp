#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b8de2909b3ba780_18_new,"flixel.FlxState","new",0x7e613e23,"flixel.FlxState.new","flixel/FlxState.hx",18,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_106_create,"flixel.FlxState","create",0x1148b519,"flixel.FlxState.create","flixel/FlxState.hx",106,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_109_draw,"flixel.FlxState","draw",0x1022c8e1,"flixel.FlxState.draw","flixel/FlxState.hx",109,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_118_openSubState,"flixel.FlxState","openSubState",0x3d5ea838,"flixel.FlxState.openSubState","flixel/FlxState.hx",118,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_128_closeSubState,"flixel.FlxState","closeSubState",0x519577cc,"flixel.FlxState.closeSubState","flixel/FlxState.hx",128,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_135_resetSubState,"flixel.FlxState","resetSubState",0x772d18e3,"flixel.FlxState.resetSubState","flixel/FlxState.hx",135,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_176_destroy,"flixel.FlxState","destroy",0x2171383d,"flixel.FlxState.destroy","flixel/FlxState.hx",176,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_173_destroy,"flixel.FlxState","destroy",0x2171383d,"flixel.FlxState.destroy","flixel/FlxState.hx",173,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_198_switchTo,"flixel.FlxState","switchTo",0x5e95c7ec,"flixel.FlxState.switchTo","flixel/FlxState.hx",198,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_212_startOutro,"flixel.FlxState","startOutro",0x6cd6bca6,"flixel.FlxState.startOutro","flixel/FlxState.hx",212,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_219_onFocusLost,"flixel.FlxState","onFocusLost",0x8c2b4d80,"flixel.FlxState.onFocusLost","flixel/FlxState.hx",219,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_225_onFocus,"flixel.FlxState","onFocus",0x97b2097c,"flixel.FlxState.onFocus","flixel/FlxState.hx",225,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_233_onResize,"flixel.FlxState","onResize",0x38e71fd0,"flixel.FlxState.onResize","flixel/FlxState.hx",233,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_237_tryUpdate,"flixel.FlxState","tryUpdate",0xc75023a7,"flixel.FlxState.tryUpdate","flixel/FlxState.hx",237,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_255_get_bgColor,"flixel.FlxState","get_bgColor",0xc8234a38,"flixel.FlxState.get_bgColor","flixel/FlxState.hx",255,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_261_set_bgColor,"flixel.FlxState","set_bgColor",0xd2905144,"flixel.FlxState.set_bgColor","flixel/FlxState.hx",261,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_266_get_subStateOpened,"flixel.FlxState","get_subStateOpened",0x2fcc7460,"flixel.FlxState.get_subStateOpened","flixel/FlxState.hx",266,0xdf96844c)
HX_LOCAL_STACK_FRAME(_hx_pos_1b8de2909b3ba780_275_get_subStateClosed,"flixel.FlxState","get_subStateClosed",0x1c89bb63,"flixel.FlxState.get_subStateClosed","flixel/FlxState.hx",275,0xdf96844c)
namespace flixel{

void FlxState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_18_new)
HXLINE(  72)		this->_requestSubStateReset = false;
HXLINE(  43)		this->destroySubStates = true;
HXLINE(  37)		this->persistentDraw = true;
HXLINE(  26)		this->persistentUpdate = false;
HXLINE(  97)		super::__construct(0);
            	}

Dynamic FlxState_obj::__CreateEmpty() { return new FlxState_obj; }

void *FlxState_obj::_hx_vtable = 0;

Dynamic FlxState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxState_obj > _hx_result = new FlxState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_106_create)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

void FlxState_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_109_draw)
HXLINE( 110)		bool _hx_tmp;
HXDLIN( 110)		if (!(this->persistentDraw)) {
HXLINE( 110)			_hx_tmp = ::hx::IsNull( this->subState );
            		}
            		else {
HXLINE( 110)			_hx_tmp = true;
            		}
HXDLIN( 110)		if (_hx_tmp) {
HXLINE( 111)			this->super::draw();
            		}
HXLINE( 113)		if (::hx::IsNotNull( this->subState )) {
HXLINE( 114)			this->subState->draw();
            		}
            	}


void FlxState_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_118_openSubState)
HXLINE( 119)		this->_requestSubStateReset = true;
HXLINE( 120)		this->_requestedSubState = SubState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,openSubState,(void))

void FlxState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_128_closeSubState)
HXDLIN( 128)		this->_requestSubStateReset = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,closeSubState,(void))

void FlxState_obj::resetSubState(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_135_resetSubState)
HXLINE( 137)		if (::hx::IsNotNull( this->subState )) {
HXLINE( 139)			if (::hx::IsNotNull( this->subState->closeCallback )) {
HXLINE( 140)				this->subState->closeCallback();
            			}
HXLINE( 141)			if (::hx::IsNotNull( this->_subStateClosed )) {
HXLINE( 142)				this->_subStateClosed->dispatch(this->subState);
            			}
HXLINE( 144)			if (this->destroySubStates) {
HXLINE( 145)				this->subState->destroy();
            			}
            		}
HXLINE( 149)		this->subState = this->_requestedSubState;
HXLINE( 150)		this->_requestedSubState = null();
HXLINE( 152)		if (::hx::IsNotNull( this->subState )) {
HXLINE( 155)			if (!(this->persistentUpdate)) {
HXLINE( 156)				::flixel::FlxG_obj::inputs->onStateSwitch();
            			}
HXLINE( 158)			this->subState->_parentState = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 160)			if (!(this->subState->_created)) {
HXLINE( 162)				this->subState->_created = true;
HXLINE( 163)				this->subState->create();
            			}
HXLINE( 165)			if (::hx::IsNotNull( this->subState->openCallback )) {
HXLINE( 166)				this->subState->openCallback();
            			}
HXLINE( 167)			if (::hx::IsNotNull( this->_subStateOpened )) {
HXLINE( 168)				this->_subStateOpened->dispatch(this->subState);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,resetSubState,(void))

void FlxState_obj::destroy(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::FlxState _hx_run(){
            			HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_176_destroy)
HXLINE( 176)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Attempting to resetState while the current state is destroyed",9b,d7,fc,3b)));
HXDLIN( 176)			return null();
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_173_destroy)
HXLINE( 174)		this->_constructor = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromMaker( ::Dynamic(new _hx_Closure_0()));
HXLINE( 178)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_subStateOpened);
HXLINE( 179)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_subStateClosed);
HXLINE( 181)		if (::hx::IsNotNull( this->subState )) {
HXLINE( 183)			this->subState->destroy();
HXLINE( 184)			this->subState = null();
            		}
HXLINE( 186)		this->super::destroy();
            	}


bool FlxState_obj::switchTo( ::flixel::FlxState nextState){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_198_switchTo)
HXDLIN( 198)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,switchTo,return )

void FlxState_obj::startOutro( ::Dynamic onOutroComplete){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_212_startOutro)
HXDLIN( 212)		onOutroComplete();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,startOutro,(void))

void FlxState_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_219_onFocusLost)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

void FlxState_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_225_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

void FlxState_obj::onResize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_233_onResize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

void FlxState_obj::tryUpdate(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_237_tryUpdate)
HXLINE( 238)		bool _hx_tmp;
HXDLIN( 238)		if (!(this->persistentUpdate)) {
HXLINE( 238)			_hx_tmp = ::hx::IsNull( this->subState );
            		}
            		else {
HXLINE( 238)			_hx_tmp = true;
            		}
HXDLIN( 238)		if (_hx_tmp) {
HXLINE( 239)			this->update(elapsed);
            		}
HXLINE( 241)		if (this->_requestSubStateReset) {
HXLINE( 243)			this->_requestSubStateReset = false;
HXLINE( 244)			this->resetSubState();
            		}
HXLINE( 246)		if (::hx::IsNotNull( this->subState )) {
HXLINE( 248)			this->subState->tryUpdate(elapsed);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,tryUpdate,(void))

int FlxState_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_255_get_bgColor)
HXDLIN( 255)		return ::flixel::FlxG_obj::cameras->get_bgColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

int FlxState_obj::set_bgColor(int Value){
            	HX_STACKFRAME(&_hx_pos_1b8de2909b3ba780_261_set_bgColor)
HXDLIN( 261)		return ::flixel::FlxG_obj::cameras->set_bgColor(Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxState_obj::get_subStateOpened(){
            	HX_GC_STACKFRAME(&_hx_pos_1b8de2909b3ba780_266_get_subStateOpened)
HXLINE( 267)		if (::hx::IsNull( this->_subStateOpened )) {
HXLINE( 268)			this->_subStateOpened =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 270)		return this->_subStateOpened;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_subStateOpened,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxState_obj::get_subStateClosed(){
            	HX_GC_STACKFRAME(&_hx_pos_1b8de2909b3ba780_275_get_subStateClosed)
HXLINE( 276)		if (::hx::IsNull( this->_subStateClosed )) {
HXLINE( 277)			this->_subStateClosed =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 279)		return this->_subStateClosed;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_subStateClosed,return )


::hx::ObjectPtr< FlxState_obj > FlxState_obj::__new() {
	::hx::ObjectPtr< FlxState_obj > __this = new FlxState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxState_obj > FlxState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxState_obj *__this = (FlxState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxState_obj), true, "flixel.FlxState"));
	*(void **)__this = FlxState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_MARK_MEMBER_NAME(_constructor,"_constructor");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_MARK_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	HX_MARK_MEMBER_NAME(_subStateOpened,"_subStateOpened");
	HX_MARK_MEMBER_NAME(_subStateClosed,"_subStateClosed");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_VISIT_MEMBER_NAME(_constructor,"_constructor");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_VISIT_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	HX_VISIT_MEMBER_NAME(_subStateOpened,"_subStateOpened");
	HX_VISIT_MEMBER_NAME(_subStateClosed,"_subStateClosed");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bgColor() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { return ::hx::Val( subState ); }
		if (HX_FIELD_EQ(inName,"switchTo") ) { return ::hx::Val( switchTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return ::hx::Val( tryUpdate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startOutro") ) { return ::hx::Val( startOutro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return ::hx::Val( get_bgColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return ::hx::Val( set_bgColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_constructor") ) { return ::hx::Val( _constructor ); }
		if (HX_FIELD_EQ(inName,"openSubState") ) { return ::hx::Val( openSubState_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSubState") ) { return ::hx::Val( resetSubState_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return ::hx::Val( persistentDraw ); }
		if (HX_FIELD_EQ(inName,"subStateOpened") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subStateOpened() ); }
		if (HX_FIELD_EQ(inName,"subStateClosed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subStateClosed() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_subStateOpened") ) { return ::hx::Val( _subStateOpened ); }
		if (HX_FIELD_EQ(inName,"_subStateClosed") ) { return ::hx::Val( _subStateClosed ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return ::hx::Val( persistentUpdate ); }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { return ::hx::Val( destroySubStates ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { return ::hx::Val( _requestedSubState ); }
		if (HX_FIELD_EQ(inName,"get_subStateOpened") ) { return ::hx::Val( get_subStateOpened_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_subStateClosed") ) { return ::hx::Val( get_subStateClosed_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { return ::hx::Val( _requestSubStateReset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bgColor(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast<  ::flixel::FlxSubState >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_constructor") ) { _constructor=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_subStateOpened") ) { _subStateOpened=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_subStateClosed") ) { _subStateClosed=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { destroySubStates=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { _requestedSubState=inValue.Cast<  ::flixel::FlxSubState >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { _requestSubStateReset=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("persistentUpdate",c0,3b,6b,50));
	outFields->push(HX_("persistentDraw",fb,35,c6,c2));
	outFields->push(HX_("destroySubStates",88,5a,28,5e));
	outFields->push(HX_("bgColor",5e,81,83,f7));
	outFields->push(HX_("_constructor",fb,da,ce,fd));
	outFields->push(HX_("subState",71,cc,2a,f9));
	outFields->push(HX_("_requestedSubState",c0,34,35,ff));
	outFields->push(HX_("_requestSubStateReset",ae,08,1f,03));
	outFields->push(HX_("subStateOpened",fa,0d,6e,00));
	outFields->push(HX_("subStateClosed",fd,54,2b,ed));
	outFields->push(HX_("_subStateOpened",99,56,ce,49));
	outFields->push(HX_("_subStateClosed",9c,9d,8b,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxState_obj,persistentUpdate),HX_("persistentUpdate",c0,3b,6b,50)},
	{::hx::fsBool,(int)offsetof(FlxState_obj,persistentDraw),HX_("persistentDraw",fb,35,c6,c2)},
	{::hx::fsBool,(int)offsetof(FlxState_obj,destroySubStates),HX_("destroySubStates",88,5a,28,5e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxState_obj,_constructor),HX_("_constructor",fb,da,ce,fd)},
	{::hx::fsObject /*  ::flixel::FlxSubState */ ,(int)offsetof(FlxState_obj,subState),HX_("subState",71,cc,2a,f9)},
	{::hx::fsObject /*  ::flixel::FlxSubState */ ,(int)offsetof(FlxState_obj,_requestedSubState),HX_("_requestedSubState",c0,34,35,ff)},
	{::hx::fsBool,(int)offsetof(FlxState_obj,_requestSubStateReset),HX_("_requestSubStateReset",ae,08,1f,03)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxState_obj,_subStateOpened),HX_("_subStateOpened",99,56,ce,49)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxState_obj,_subStateClosed),HX_("_subStateClosed",9c,9d,8b,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxState_obj_sMemberFields[] = {
	HX_("persistentUpdate",c0,3b,6b,50),
	HX_("persistentDraw",fb,35,c6,c2),
	HX_("destroySubStates",88,5a,28,5e),
	HX_("_constructor",fb,da,ce,fd),
	HX_("subState",71,cc,2a,f9),
	HX_("_requestedSubState",c0,34,35,ff),
	HX_("_requestSubStateReset",ae,08,1f,03),
	HX_("_subStateOpened",99,56,ce,49),
	HX_("_subStateClosed",9c,9d,8b,36),
	HX_("create",fc,66,0f,7c),
	HX_("draw",04,2c,70,42),
	HX_("openSubState",5b,66,48,37),
	HX_("closeSubState",49,18,32,04),
	HX_("resetSubState",60,b9,c9,29),
	HX_("destroy",fa,2c,86,24),
	HX_("switchTo",8f,f8,d6,0d),
	HX_("startOutro",09,9c,3f,53),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onResize",73,50,28,e8),
	HX_("tryUpdate",a4,81,19,71),
	HX_("get_bgColor",75,e1,7d,7d),
	HX_("set_bgColor",81,e8,ea,87),
	HX_("get_subStateOpened",c3,ee,07,9c),
	HX_("get_subStateClosed",c6,35,c5,88),
	::String(null()) };

::hx::Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	FlxState_obj _hx_dummy;
	FlxState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxState",b1,f0,80,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
