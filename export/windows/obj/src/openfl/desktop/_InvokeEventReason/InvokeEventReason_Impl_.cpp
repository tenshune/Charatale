#include <hxcpp.h>

#ifndef INCLUDED_openfl_desktop__InvokeEventReason_InvokeEventReason_Impl_
#include <openfl/desktop/_InvokeEventReason/InvokeEventReason_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd335d1cb9d80cb1_41_fromString,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_","fromString",0x39afb27a,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_.fromString","openfl/desktop/InvokeEventReason.hx",41,0x945a352a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd335d1cb9d80cb1_53_toString,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_","toString",0x8c319f8b,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_.toString","openfl/desktop/InvokeEventReason.hx",53,0x945a352a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd335d1cb9d80cb1_19_boot,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_","boot",0xb437b791,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_.boot","openfl/desktop/InvokeEventReason.hx",19,0x945a352a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd335d1cb9d80cb1_25_boot,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_","boot",0xb437b791,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_.boot","openfl/desktop/InvokeEventReason.hx",25,0x945a352a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd335d1cb9d80cb1_31_boot,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_","boot",0xb437b791,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_.boot","openfl/desktop/InvokeEventReason.hx",31,0x945a352a)
HX_LOCAL_STACK_FRAME(_hx_pos_fd335d1cb9d80cb1_37_boot,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_","boot",0xb437b791,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_.boot","openfl/desktop/InvokeEventReason.hx",37,0x945a352a)
namespace openfl{
namespace desktop{
namespace _InvokeEventReason{

void InvokeEventReason_Impl__obj::__construct() { }

Dynamic InvokeEventReason_Impl__obj::__CreateEmpty() { return new InvokeEventReason_Impl__obj; }

void *InvokeEventReason_Impl__obj::_hx_vtable = 0;

Dynamic InvokeEventReason_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InvokeEventReason_Impl__obj > _hx_result = new InvokeEventReason_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InvokeEventReason_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6343b917;
}

 ::Dynamic InvokeEventReason_Impl__obj::LOGIN;

 ::Dynamic InvokeEventReason_Impl__obj::NOTIFICATION;

 ::Dynamic InvokeEventReason_Impl__obj::OPEN_URL;

 ::Dynamic InvokeEventReason_Impl__obj::STANDARD;

 ::Dynamic InvokeEventReason_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_fd335d1cb9d80cb1_41_fromString)
HXDLIN(  41)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("login",69,d9,f3,78)) ){
HXLINE(  43)			return 0;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("notification",eb,f6,0a,5c)) ){
HXLINE(  44)			return 1;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("openURL",c5,bd,35,40)) ){
HXLINE(  45)			return 2;
HXDLIN(  45)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standard",3d,37,78,ea)) ){
HXLINE(  46)			return 3;
HXDLIN(  46)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  47)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InvokeEventReason_Impl__obj,fromString,return )

::String InvokeEventReason_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_fd335d1cb9d80cb1_53_toString)
HXDLIN(  53)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  55)			return HX_("login",69,d9,f3,78);
HXDLIN(  55)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  56)			return HX_("notification",eb,f6,0a,5c);
HXDLIN(  56)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  57)			return HX_("openURL",c5,bd,35,40);
HXDLIN(  57)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  58)			return HX_("standard",3d,37,78,ea);
HXDLIN(  58)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  59)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InvokeEventReason_Impl__obj,toString,return )


InvokeEventReason_Impl__obj::InvokeEventReason_Impl__obj()
{
}

bool InvokeEventReason_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InvokeEventReason_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo InvokeEventReason_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &InvokeEventReason_Impl__obj::LOGIN,HX_("LOGIN",49,11,e2,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &InvokeEventReason_Impl__obj::NOTIFICATION,HX_("NOTIFICATION",eb,4e,59,fa)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &InvokeEventReason_Impl__obj::OPEN_URL,HX_("OPEN_URL",1a,85,33,64)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &InvokeEventReason_Impl__obj::STANDARD,HX_("STANDARD",3d,c7,fd,43)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void InvokeEventReason_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvokeEventReason_Impl__obj::LOGIN,"LOGIN");
	HX_MARK_MEMBER_NAME(InvokeEventReason_Impl__obj::NOTIFICATION,"NOTIFICATION");
	HX_MARK_MEMBER_NAME(InvokeEventReason_Impl__obj::OPEN_URL,"OPEN_URL");
	HX_MARK_MEMBER_NAME(InvokeEventReason_Impl__obj::STANDARD,"STANDARD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InvokeEventReason_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvokeEventReason_Impl__obj::LOGIN,"LOGIN");
	HX_VISIT_MEMBER_NAME(InvokeEventReason_Impl__obj::NOTIFICATION,"NOTIFICATION");
	HX_VISIT_MEMBER_NAME(InvokeEventReason_Impl__obj::OPEN_URL,"OPEN_URL");
	HX_VISIT_MEMBER_NAME(InvokeEventReason_Impl__obj::STANDARD,"STANDARD");
};

#endif

::hx::Class InvokeEventReason_Impl__obj::__mClass;

static ::String InvokeEventReason_Impl__obj_sStaticFields[] = {
	HX_("LOGIN",49,11,e2,f6),
	HX_("NOTIFICATION",eb,4e,59,fa),
	HX_("OPEN_URL",1a,85,33,64),
	HX_("STANDARD",3d,c7,fd,43),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void InvokeEventReason_Impl__obj::__register()
{
	InvokeEventReason_Impl__obj _hx_dummy;
	InvokeEventReason_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_",6f,e9,c2,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InvokeEventReason_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InvokeEventReason_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InvokeEventReason_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InvokeEventReason_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InvokeEventReason_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvokeEventReason_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvokeEventReason_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InvokeEventReason_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fd335d1cb9d80cb1_19_boot)
HXDLIN(  19)		LOGIN = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd335d1cb9d80cb1_25_boot)
HXDLIN(  25)		NOTIFICATION = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd335d1cb9d80cb1_31_boot)
HXDLIN(  31)		OPEN_URL = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd335d1cb9d80cb1_37_boot)
HXDLIN(  37)		STANDARD = 3;
            	}
}

} // end namespace openfl
} // end namespace desktop
} // end namespace _InvokeEventReason
