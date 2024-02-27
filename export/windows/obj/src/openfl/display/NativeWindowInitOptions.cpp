#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindow
#include <openfl/display/NativeWindow.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindowInitOptions
#include <openfl/display/NativeWindowInitOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9abfb447380e406a_19_new,"openfl.display.NativeWindowInitOptions","new",0xf20974cf,"openfl.display.NativeWindowInitOptions.new","openfl/display/NativeWindowInitOptions.hx",19,0xb3137d03)
namespace openfl{
namespace display{

void NativeWindowInitOptions_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9abfb447380e406a_19_new)
HXLINE( 166)		this->type = 1;
HXLINE( 145)		this->transparent = false;
HXLINE( 125)		this->systemChrome = 2;
HXLINE( 108)		this->resizable = true;
HXLINE(  90)		this->renderMode = null();
HXLINE(  81)		this->owner = null();
HXLINE(  71)		this->minimizable = true;
HXLINE(  55)		this->maximizable = true;
            	}

Dynamic NativeWindowInitOptions_obj::__CreateEmpty() { return new NativeWindowInitOptions_obj; }

void *NativeWindowInitOptions_obj::_hx_vtable = 0;

Dynamic NativeWindowInitOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindowInitOptions_obj > _hx_result = new NativeWindowInitOptions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeWindowInitOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3b14bc35;
}


::hx::ObjectPtr< NativeWindowInitOptions_obj > NativeWindowInitOptions_obj::__new() {
	::hx::ObjectPtr< NativeWindowInitOptions_obj > __this = new NativeWindowInitOptions_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NativeWindowInitOptions_obj > NativeWindowInitOptions_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NativeWindowInitOptions_obj *__this = (NativeWindowInitOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindowInitOptions_obj), true, "openfl.display.NativeWindowInitOptions"));
	*(void **)__this = NativeWindowInitOptions_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NativeWindowInitOptions_obj::NativeWindowInitOptions_obj()
{
}

void NativeWindowInitOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindowInitOptions);
	HX_MARK_MEMBER_NAME(maximizable,"maximizable");
	HX_MARK_MEMBER_NAME(minimizable,"minimizable");
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(renderMode,"renderMode");
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	HX_MARK_MEMBER_NAME(systemChrome,"systemChrome");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_hx___window,"__window");
	HX_MARK_END_CLASS();
}

void NativeWindowInitOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maximizable,"maximizable");
	HX_VISIT_MEMBER_NAME(minimizable,"minimizable");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(renderMode,"renderMode");
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	HX_VISIT_MEMBER_NAME(systemChrome,"systemChrome");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_hx___window,"__window");
}

::hx::Val NativeWindowInitOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return ::hx::Val( owner ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__window") ) { return ::hx::Val( _hx___window ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { return ::hx::Val( resizable ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMode") ) { return ::hx::Val( renderMode ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maximizable") ) { return ::hx::Val( maximizable ); }
		if (HX_FIELD_EQ(inName,"minimizable") ) { return ::hx::Val( minimizable ); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return ::hx::Val( transparent ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"systemChrome") ) { return ::hx::Val( systemChrome ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeWindowInitOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast<  ::openfl::display::NativeWindow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__window") ) { _hx___window=inValue.Cast<  ::openfl::display::Window >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMode") ) { renderMode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maximizable") ) { maximizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minimizable") ) { minimizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"systemChrome") ) { systemChrome=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindowInitOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maximizable",93,c3,2c,41));
	outFields->push(HX_("minimizable",81,68,12,06));
	outFields->push(HX_("owner",33,98,76,38));
	outFields->push(HX_("renderMode",d9,cd,6a,e5));
	outFields->push(HX_("resizable",6b,37,50,a9));
	outFields->push(HX_("systemChrome",c9,61,c5,a5));
	outFields->push(HX_("transparent",52,2b,ba,22));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("__window",10,ff,bb,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeWindowInitOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(NativeWindowInitOptions_obj,maximizable),HX_("maximizable",93,c3,2c,41)},
	{::hx::fsBool,(int)offsetof(NativeWindowInitOptions_obj,minimizable),HX_("minimizable",81,68,12,06)},
	{::hx::fsObject /*  ::openfl::display::NativeWindow */ ,(int)offsetof(NativeWindowInitOptions_obj,owner),HX_("owner",33,98,76,38)},
	{::hx::fsString,(int)offsetof(NativeWindowInitOptions_obj,renderMode),HX_("renderMode",d9,cd,6a,e5)},
	{::hx::fsBool,(int)offsetof(NativeWindowInitOptions_obj,resizable),HX_("resizable",6b,37,50,a9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindowInitOptions_obj,systemChrome),HX_("systemChrome",c9,61,c5,a5)},
	{::hx::fsBool,(int)offsetof(NativeWindowInitOptions_obj,transparent),HX_("transparent",52,2b,ba,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindowInitOptions_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::openfl::display::Window */ ,(int)offsetof(NativeWindowInitOptions_obj,_hx___window),HX_("__window",10,ff,bb,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NativeWindowInitOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeWindowInitOptions_obj_sMemberFields[] = {
	HX_("maximizable",93,c3,2c,41),
	HX_("minimizable",81,68,12,06),
	HX_("owner",33,98,76,38),
	HX_("renderMode",d9,cd,6a,e5),
	HX_("resizable",6b,37,50,a9),
	HX_("systemChrome",c9,61,c5,a5),
	HX_("transparent",52,2b,ba,22),
	HX_("type",ba,f2,08,4d),
	HX_("__window",10,ff,bb,fa),
	::String(null()) };

::hx::Class NativeWindowInitOptions_obj::__mClass;

void NativeWindowInitOptions_obj::__register()
{
	NativeWindowInitOptions_obj _hx_dummy;
	NativeWindowInitOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.NativeWindowInitOptions",5d,61,45,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeWindowInitOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindowInitOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindowInitOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindowInitOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
