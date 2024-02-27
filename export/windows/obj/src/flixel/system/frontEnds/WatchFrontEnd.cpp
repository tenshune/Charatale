#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_25766fbc3da200fe_13_new,"flixel.system.frontEnds.WatchFrontEnd","new",0xbd21d019,"flixel.system.frontEnds.WatchFrontEnd.new","flixel/system/frontEnds/WatchFrontEnd.hx",13,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_26_add,"flixel.system.frontEnds.WatchFrontEnd","add",0xbd17f1da,"flixel.system.frontEnds.WatchFrontEnd.add","flixel/system/frontEnds/WatchFrontEnd.hx",26,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_39_remove,"flixel.system.frontEnds.WatchFrontEnd","remove",0x8d8c762b,"flixel.system.frontEnds.WatchFrontEnd.remove","flixel/system/frontEnds/WatchFrontEnd.hx",39,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_54_addQuick,"flixel.system.frontEnds.WatchFrontEnd","addQuick",0x8c660eb3,"flixel.system.frontEnds.WatchFrontEnd.addQuick","flixel/system/frontEnds/WatchFrontEnd.hx",54,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_66_removeQuick,"flixel.system.frontEnds.WatchFrontEnd","removeQuick",0x15fb44c2,"flixel.system.frontEnds.WatchFrontEnd.removeQuick","flixel/system/frontEnds/WatchFrontEnd.hx",66,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_79_addExpression,"flixel.system.frontEnds.WatchFrontEnd","addExpression",0xe5869c12,"flixel.system.frontEnds.WatchFrontEnd.addExpression","flixel/system/frontEnds/WatchFrontEnd.hx",79,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_98_removeExpression,"flixel.system.frontEnds.WatchFrontEnd","removeExpression",0xc4a80fa3,"flixel.system.frontEnds.WatchFrontEnd.removeExpression","flixel/system/frontEnds/WatchFrontEnd.hx",98,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_105_addFunction,"flixel.system.frontEnds.WatchFrontEnd","addFunction",0xff88c312,"flixel.system.frontEnds.WatchFrontEnd.addFunction","flixel/system/frontEnds/WatchFrontEnd.hx",105,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_112_removeFunction,"flixel.system.frontEnds.WatchFrontEnd","removeFunction",0x9c838063,"flixel.system.frontEnds.WatchFrontEnd.removeFunction","flixel/system/frontEnds/WatchFrontEnd.hx",112,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_123_addMouse,"flixel.system.frontEnds.WatchFrontEnd","addMouse",0x3add9deb,"flixel.system.frontEnds.WatchFrontEnd.addMouse","flixel/system/frontEnds/WatchFrontEnd.hx",123,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_133_removeMouse,"flixel.system.frontEnds.WatchFrontEnd","removeMouse",0xc472d3fa,"flixel.system.frontEnds.WatchFrontEnd.removeMouse","flixel/system/frontEnds/WatchFrontEnd.hx",133,0xd7ade198)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void WatchFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_13_new)
            	}

Dynamic WatchFrontEnd_obj::__CreateEmpty() { return new WatchFrontEnd_obj; }

void *WatchFrontEnd_obj::_hx_vtable = 0;

Dynamic WatchFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WatchFrontEnd_obj > _hx_result = new WatchFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WatchFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40eb558f;
}

void WatchFrontEnd_obj::add( ::Dynamic object,::String field,::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_26_add)
HXDLIN(  26)		::flixel::FlxG_obj::game->debugger->watch->add(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(object,field));
            	}


HX_DEFINE_DYNAMIC_FUNC3(WatchFrontEnd_obj,add,(void))

void WatchFrontEnd_obj::remove( ::Dynamic object,::String field){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_39_remove)
HXDLIN(  39)		::flixel::FlxG_obj::game->debugger->watch->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(object,field));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,remove,(void))

void WatchFrontEnd_obj::addQuick(::String displayName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_54_addQuick)
HXDLIN(  54)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  54)		_hx_tmp->add(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addQuick,(void))

void WatchFrontEnd_obj::removeQuick(::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_66_removeQuick)
HXDLIN(  66)		::flixel::FlxG_obj::game->debugger->watch->remove(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeQuick,(void))

void WatchFrontEnd_obj::addExpression(::String expression,::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_79_addExpression)
HXLINE(  81)		 ::hscript::Expr parsedExpr = null();
HXLINE(  83)		parsedExpr = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::parseCommand(expression);
HXLINE(  85)		::String _hx_tmp;
HXDLIN(  85)		if (::hx::IsNull( displayName )) {
HXLINE(  85)			_hx_tmp = expression;
            		}
            		else {
HXLINE(  85)			_hx_tmp = displayName;
            		}
HXDLIN(  85)		::flixel::FlxG_obj::game->debugger->watch->add(_hx_tmp,::flixel::_hx_system::debug::watch::WatchEntryData_obj::EXPRESSION(expression,parsedExpr));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addExpression,(void))

void WatchFrontEnd_obj::removeExpression(::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_98_removeExpression)
HXDLIN(  98)		::flixel::FlxG_obj::game->debugger->watch->remove(displayName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeExpression,(void))

void WatchFrontEnd_obj::addFunction(::String displayName, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_105_addFunction)
HXDLIN( 105)		::flixel::FlxG_obj::game->debugger->watch->add(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::FUNCTION(func));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addFunction,(void))

void WatchFrontEnd_obj::removeFunction(::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_112_removeFunction)
HXDLIN( 112)		::flixel::FlxG_obj::game->debugger->watch->remove(displayName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeFunction,(void))

void WatchFrontEnd_obj::addMouse(){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_123_addMouse)
HXDLIN( 123)		::flixel::FlxG_obj::game->debugger->watch->add(HX_("Mouse Position",44,8e,3a,9d),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxG >()) ),HX_("mouse",25,16,65,0c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,addMouse,(void))

void WatchFrontEnd_obj::removeMouse(){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_133_removeMouse)
HXDLIN( 133)		::flixel::FlxG_obj::game->debugger->watch->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxG >()) ),HX_("mouse",25,16,65,0c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,removeMouse,(void))


::hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__new() {
	::hx::ObjectPtr< WatchFrontEnd_obj > __this = new WatchFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WatchFrontEnd_obj *__this = (WatchFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WatchFrontEnd_obj), false, "flixel.system.frontEnds.WatchFrontEnd"));
	*(void **)__this = WatchFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WatchFrontEnd_obj::WatchFrontEnd_obj()
{
}

::hx::Val WatchFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addQuick") ) { return ::hx::Val( addQuick_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMouse") ) { return ::hx::Val( addMouse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeQuick") ) { return ::hx::Val( removeQuick_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFunction") ) { return ::hx::Val( addFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeMouse") ) { return ::hx::Val( removeMouse_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExpression") ) { return ::hx::Val( addExpression_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeFunction") ) { return ::hx::Val( removeFunction_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeExpression") ) { return ::hx::Val( removeExpression_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WatchFrontEnd_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WatchFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String WatchFrontEnd_obj_sMemberFields[] = {
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("addQuick",0c,ad,4a,d7),
	HX_("removeQuick",09,64,21,5c),
	HX_("addExpression",19,5b,e8,98),
	HX_("removeExpression",fc,2e,48,e8),
	HX_("addFunction",59,e2,ae,45),
	HX_("removeFunction",7c,e7,a8,de),
	HX_("addMouse",44,3c,c2,85),
	HX_("removeMouse",41,f3,98,0a),
	::String(null()) };

::hx::Class WatchFrontEnd_obj::__mClass;

void WatchFrontEnd_obj::__register()
{
	WatchFrontEnd_obj _hx_dummy;
	WatchFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.WatchFrontEnd",a7,cf,e7,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WatchFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WatchFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatchFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatchFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
