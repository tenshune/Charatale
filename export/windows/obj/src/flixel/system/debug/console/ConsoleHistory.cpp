#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_3_new,"flixel.system.debug.console.ConsoleHistory","new",0x9c00ff8e,"flixel.system.debug.console.ConsoleHistory.new","flixel/system/debug/console/ConsoleHistory.hx",3,0xc796b240)
HX_LOCAL_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_39_getPreviousCommand,"flixel.system.debug.console.ConsoleHistory","getPreviousCommand",0x3aa09670,"flixel.system.debug.console.ConsoleHistory.getPreviousCommand","flixel/system/debug/console/ConsoleHistory.hx",39,0xc796b240)
HX_LOCAL_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_46_getNextCommand,"flixel.system.debug.console.ConsoleHistory","getNextCommand",0x2e4e1f34,"flixel.system.debug.console.ConsoleHistory.getNextCommand","flixel/system/debug/console/ConsoleHistory.hx",46,0xc796b240)
HX_LOCAL_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_53_addCommand,"flixel.system.debug.console.ConsoleHistory","addCommand",0x56eecfbc,"flixel.system.debug.console.ConsoleHistory.addCommand","flixel/system/debug/console/ConsoleHistory.hx",53,0xc796b240)
HX_LOCAL_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_72_clear,"flixel.system.debug.console.ConsoleHistory","clear",0x0d15483b,"flixel.system.debug.console.ConsoleHistory.clear","flixel/system/debug/console/ConsoleHistory.hx",72,0xc796b240)
HX_LOCAL_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_82_get_isEmpty,"flixel.system.debug.console.ConsoleHistory","get_isEmpty",0x5caf4b88,"flixel.system.debug.console.ConsoleHistory.get_isEmpty","flixel/system/debug/console/ConsoleHistory.hx",82,0xc796b240)
HX_LOCAL_STACK_FRAME(_hx_pos_e5812cbc80e0d3b8_5_boot,"flixel.system.debug.console.ConsoleHistory","boot",0xdcf79d44,"flixel.system.debug.console.ConsoleHistory.boot","flixel/system/debug/console/ConsoleHistory.hx",5,0xc796b240)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleHistory_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_3_new)
HXLINE(  11)		this->index = 0;
HXLINE(  16)		 ::flixel::util::FlxSaveStatus _g = ::flixel::FlxG_obj::save->status;
HXDLIN(  16)		bool _hx_tmp;
HXDLIN(  16)		if ((_g->_hx_getIndex() == 1)) {
HXLINE(  16)			::String _g1 = _g->_hx_getString(0);
HXDLIN(  16)			::String _g2 = _g->_hx_getString(1);
HXDLIN(  16)			_hx_tmp = true;
            		}
            		else {
HXLINE(  16)			_hx_tmp = false;
            		}
HXDLIN(  16)		if (_hx_tmp) {
HXLINE(  18)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("history",54,35,47,64),::hx::paccDynamic) )) {
HXLINE(  20)				this->commands = ( (::Array< ::String >)(::flixel::FlxG_obj::save->data->__Field(HX_("history",54,35,47,64),::hx::paccDynamic)) );
HXLINE(  21)				this->index = this->commands->length;
            			}
            			else {
HXLINE(  25)				this->commands = ::Array_obj< ::String >::__new(0);
HXLINE(  26)				::flixel::FlxG_obj::save->data->__SetField(HX_("history",54,35,47,64),this->commands,::hx::paccDynamic);
            			}
            		}
            		else {
HXLINE(  31)			this->commands = ::Array_obj< ::String >::__new(0);
            		}
            	}

Dynamic ConsoleHistory_obj::__CreateEmpty() { return new ConsoleHistory_obj; }

void *ConsoleHistory_obj::_hx_vtable = 0;

Dynamic ConsoleHistory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleHistory_obj > _hx_result = new ConsoleHistory_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConsoleHistory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4be67f0c;
}

::String ConsoleHistory_obj::getPreviousCommand(){
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_39_getPreviousCommand)
HXLINE(  40)		if ((this->index > 0)) {
HXLINE(  41)			this->index--;
            		}
HXLINE(  42)		return this->commands->__get(this->index);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,getPreviousCommand,return )

::String ConsoleHistory_obj::getNextCommand(){
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_46_getNextCommand)
HXLINE(  47)		if ((this->index < this->commands->length)) {
HXLINE(  48)			this->index++;
            		}
HXLINE(  49)		if (::hx::IsNotNull( this->commands->__get(this->index) )) {
HXLINE(  49)			return this->commands->__get(this->index);
            		}
            		else {
HXLINE(  49)			return HX_("",00,00,00,00);
            		}
HXDLIN(  49)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,getNextCommand,return )

void ConsoleHistory_obj::addCommand(::String command){
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_53_addCommand)
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if (!(this->get_isEmpty())) {
HXLINE(  55)			_hx_tmp = (this->getPreviousCommand() != command);
            		}
            		else {
HXLINE(  55)			_hx_tmp = true;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  57)			this->commands->push(command);
HXLINE(  60)			 ::flixel::util::FlxSaveStatus _g = ::flixel::FlxG_obj::save->status;
HXDLIN(  60)			bool _hx_tmp;
HXDLIN(  60)			if ((_g->_hx_getIndex() == 1)) {
HXLINE(  60)				::String _g1 = _g->_hx_getString(0);
HXDLIN(  60)				::String _g2 = _g->_hx_getString(1);
HXDLIN(  60)				_hx_tmp = true;
            			}
            			else {
HXLINE(  60)				_hx_tmp = false;
            			}
HXDLIN(  60)			if (_hx_tmp) {
HXLINE(  61)				::flixel::FlxG_obj::save->flush(null());
            			}
HXLINE(  64)			if ((this->commands->length > 50)) {
HXLINE(  65)				this->commands->shift();
            			}
            		}
HXLINE(  68)		this->index = this->commands->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleHistory_obj,addCommand,(void))

void ConsoleHistory_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_72_clear)
HXLINE(  73)		this->commands->removeRange(0,this->commands->length);
HXLINE(  76)		::flixel::FlxG_obj::save->flush(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,clear,(void))

bool ConsoleHistory_obj::get_isEmpty(){
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_82_get_isEmpty)
HXDLIN(  82)		return (this->commands->length == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,get_isEmpty,return )

int ConsoleHistory_obj::MAX_LENGTH;


::hx::ObjectPtr< ConsoleHistory_obj > ConsoleHistory_obj::__new() {
	::hx::ObjectPtr< ConsoleHistory_obj > __this = new ConsoleHistory_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConsoleHistory_obj > ConsoleHistory_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConsoleHistory_obj *__this = (ConsoleHistory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleHistory_obj), true, "flixel.system.debug.console.ConsoleHistory"));
	*(void **)__this = ConsoleHistory_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConsoleHistory_obj::ConsoleHistory_obj()
{
}

void ConsoleHistory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleHistory);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void ConsoleHistory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(index,"index");
}

::hx::Val ConsoleHistory_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isEmpty() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return ::hx::Val( commands ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addCommand") ) { return ::hx::Val( addCommand_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return ::hx::Val( get_isEmpty_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getNextCommand") ) { return ::hx::Val( getNextCommand_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPreviousCommand") ) { return ::hx::Val( getPreviousCommand_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ConsoleHistory_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleHistory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("commands",c8,b0,55,be));
	outFields->push(HX_("isEmpty",43,de,5f,0c));
	outFields->push(HX_("index",12,9b,14,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConsoleHistory_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ConsoleHistory_obj,commands),HX_("commands",c8,b0,55,be)},
	{::hx::fsInt,(int)offsetof(ConsoleHistory_obj,index),HX_("index",12,9b,14,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ConsoleHistory_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ConsoleHistory_obj::MAX_LENGTH,HX_("MAX_LENGTH",81,44,0a,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ConsoleHistory_obj_sMemberFields[] = {
	HX_("commands",c8,b0,55,be),
	HX_("index",12,9b,14,be),
	HX_("getPreviousCommand",de,81,79,09),
	HX_("getNextCommand",a2,3b,55,df),
	HX_("addCommand",2a,9d,f7,e8),
	HX_("clear",8d,71,5b,48),
	HX_("get_isEmpty",5a,3e,5a,92),
	::String(null()) };

static void ConsoleHistory_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleHistory_obj::MAX_LENGTH,"MAX_LENGTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleHistory_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleHistory_obj::MAX_LENGTH,"MAX_LENGTH");
};

#endif

::hx::Class ConsoleHistory_obj::__mClass;

static ::String ConsoleHistory_obj_sStaticFields[] = {
	HX_("MAX_LENGTH",81,44,0a,cf),
	::String(null())
};

void ConsoleHistory_obj::__register()
{
	ConsoleHistory_obj _hx_dummy;
	ConsoleHistory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console.ConsoleHistory",9c,e0,d2,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConsoleHistory_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConsoleHistory_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConsoleHistory_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleHistory_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleHistory_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleHistory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleHistory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConsoleHistory_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e5812cbc80e0d3b8_5_boot)
HXDLIN(   5)		MAX_LENGTH = 50;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
