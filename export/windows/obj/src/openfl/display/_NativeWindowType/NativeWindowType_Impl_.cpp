#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__NativeWindowType_NativeWindowType_Impl_
#include <openfl/display/_NativeWindowType/NativeWindowType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_42_fromInt,"openfl.display._NativeWindowType.NativeWindowType_Impl_","fromInt",0x2473f230,"openfl.display._NativeWindowType.NativeWindowType_Impl_.fromInt","openfl/display/NativeWindowType.hx",42,0x6f707c31)
HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_47_fromString,"openfl.display._NativeWindowType.NativeWindowType_Impl_","fromString",0x6dc04230,"openfl.display._NativeWindowType.NativeWindowType_Impl_.fromString","openfl/display/NativeWindowType.hx",47,0x6f707c31)
HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_58_toInt,"openfl.display._NativeWindowType.NativeWindowType_Impl_","toInt",0xdd8809ff,"openfl.display._NativeWindowType.NativeWindowType_Impl_.toInt","openfl/display/NativeWindowType.hx",58,0x6f707c31)
HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_63_toString,"openfl.display._NativeWindowType.NativeWindowType_Impl_","toString",0x55e7b5c1,"openfl.display._NativeWindowType.NativeWindowType_Impl_.toString","openfl/display/NativeWindowType.hx",63,0x6f707c31)
HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_26_boot,"openfl.display._NativeWindowType.NativeWindowType_Impl_","boot",0x8eecfac7,"openfl.display._NativeWindowType.NativeWindowType_Impl_.boot","openfl/display/NativeWindowType.hx",26,0x6f707c31)
HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_32_boot,"openfl.display._NativeWindowType.NativeWindowType_Impl_","boot",0x8eecfac7,"openfl.display._NativeWindowType.NativeWindowType_Impl_.boot","openfl/display/NativeWindowType.hx",32,0x6f707c31)
HX_LOCAL_STACK_FRAME(_hx_pos_eb95fcde744329ba_38_boot,"openfl.display._NativeWindowType.NativeWindowType_Impl_","boot",0x8eecfac7,"openfl.display._NativeWindowType.NativeWindowType_Impl_.boot","openfl/display/NativeWindowType.hx",38,0x6f707c31)
namespace openfl{
namespace display{
namespace _NativeWindowType{

void NativeWindowType_Impl__obj::__construct() { }

Dynamic NativeWindowType_Impl__obj::__CreateEmpty() { return new NativeWindowType_Impl__obj; }

void *NativeWindowType_Impl__obj::_hx_vtable = 0;

Dynamic NativeWindowType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindowType_Impl__obj > _hx_result = new NativeWindowType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeWindowType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x660e2f57;
}

 ::Dynamic NativeWindowType_Impl__obj::LIGHTWEIGHT;

 ::Dynamic NativeWindowType_Impl__obj::NORMAL;

 ::Dynamic NativeWindowType_Impl__obj::UTILITY;

 ::Dynamic NativeWindowType_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_42_fromInt)
HXDLIN(  42)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowType_Impl__obj,fromInt,return )

 ::Dynamic NativeWindowType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_47_fromString)
HXDLIN(  47)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("lightweight",ce,46,60,31)) ){
HXLINE(  49)			return 0;
HXDLIN(  49)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  50)			return 1;
HXDLIN(  50)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("utility",6c,27,7b,1f)) ){
HXLINE(  51)			return 2;
HXDLIN(  51)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  52)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  47)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowType_Impl__obj,fromString,return )

 ::Dynamic NativeWindowType_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_58_toInt)
HXDLIN(  58)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowType_Impl__obj,toInt,return )

::String NativeWindowType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_63_toString)
HXDLIN(  63)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  65)			return HX_("lightweight",ce,46,60,31);
HXDLIN(  65)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  66)			return HX_("normal",27,72,69,30);
HXDLIN(  66)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  67)			return HX_("utility",6c,27,7b,1f);
HXDLIN(  67)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  68)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  63)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowType_Impl__obj,toString,return )


NativeWindowType_Impl__obj::NativeWindowType_Impl__obj()
{
}

bool NativeWindowType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NativeWindowType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NativeWindowType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowType_Impl__obj::LIGHTWEIGHT,HX_("LIGHTWEIGHT",ae,52,9c,07)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowType_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowType_Impl__obj::UTILITY,HX_("UTILITY",4c,fb,4e,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void NativeWindowType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindowType_Impl__obj::LIGHTWEIGHT,"LIGHTWEIGHT");
	HX_MARK_MEMBER_NAME(NativeWindowType_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(NativeWindowType_Impl__obj::UTILITY,"UTILITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindowType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindowType_Impl__obj::LIGHTWEIGHT,"LIGHTWEIGHT");
	HX_VISIT_MEMBER_NAME(NativeWindowType_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(NativeWindowType_Impl__obj::UTILITY,"UTILITY");
};

#endif

::hx::Class NativeWindowType_Impl__obj::__mClass;

static ::String NativeWindowType_Impl__obj_sStaticFields[] = {
	HX_("LIGHTWEIGHT",ae,52,9c,07),
	HX_("NORMAL",27,1e,ec,e2),
	HX_("UTILITY",4c,fb,4e,9f),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void NativeWindowType_Impl__obj::__register()
{
	NativeWindowType_Impl__obj _hx_dummy;
	NativeWindowType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._NativeWindowType.NativeWindowType_Impl_",f9,71,40,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeWindowType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeWindowType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeWindowType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindowType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindowType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindowType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindowType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeWindowType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_26_boot)
HXDLIN(  26)		LIGHTWEIGHT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_32_boot)
HXDLIN(  32)		NORMAL = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb95fcde744329ba_38_boot)
HXDLIN(  38)		UTILITY = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _NativeWindowType
