#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__FontType_FontType_Impl_
#include <openfl/text/_FontType/FontType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_55d16bca45175189_72_fromString,"openfl.text._FontType.FontType_Impl_","fromString",0x1af62497,"openfl.text._FontType.FontType_Impl_.fromString","openfl/text/FontType.hx",72,0xc9ae6f12)
HX_LOCAL_STACK_FRAME(_hx_pos_55d16bca45175189_83_toString,"openfl.text._FontType.FontType_Impl_","toString",0xa3a06068,"openfl.text._FontType.FontType_Impl_.toString","openfl/text/FontType.hx",83,0xc9ae6f12)
HX_LOCAL_STACK_FRAME(_hx_pos_55d16bca45175189_29_boot,"openfl.text._FontType.FontType_Impl_","boot",0xc26385ee,"openfl.text._FontType.FontType_Impl_.boot","openfl/text/FontType.hx",29,0xc9ae6f12)
HX_LOCAL_STACK_FRAME(_hx_pos_55d16bca45175189_48_boot,"openfl.text._FontType.FontType_Impl_","boot",0xc26385ee,"openfl.text._FontType.FontType_Impl_.boot","openfl/text/FontType.hx",48,0xc9ae6f12)
HX_LOCAL_STACK_FRAME(_hx_pos_55d16bca45175189_68_boot,"openfl.text._FontType.FontType_Impl_","boot",0xc26385ee,"openfl.text._FontType.FontType_Impl_.boot","openfl/text/FontType.hx",68,0xc9ae6f12)
namespace openfl{
namespace text{
namespace _FontType{

void FontType_Impl__obj::__construct() { }

Dynamic FontType_Impl__obj::__CreateEmpty() { return new FontType_Impl__obj; }

void *FontType_Impl__obj::_hx_vtable = 0;

Dynamic FontType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontType_Impl__obj > _hx_result = new FontType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3e1957d0;
}

 ::Dynamic FontType_Impl__obj::DEVICE;

 ::Dynamic FontType_Impl__obj::EMBEDDED;

 ::Dynamic FontType_Impl__obj::EMBEDDED_CFF;

 ::Dynamic FontType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_55d16bca45175189_72_fromString)
HXDLIN(  72)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("device",96,dc,77,71)) ){
HXLINE(  74)			return 0;
HXDLIN(  74)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("embedded",8a,19,62,de)) ){
HXLINE(  75)			return 1;
HXDLIN(  75)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("embeddedCFF",f9,0c,9e,ac)) ){
HXLINE(  76)			return 2;
HXDLIN(  76)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  77)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  72)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontType_Impl__obj,fromString,return )

::String FontType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_55d16bca45175189_83_toString)
HXDLIN(  83)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  85)			return HX_("device",96,dc,77,71);
HXDLIN(  85)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  86)			return HX_("embedded",8a,19,62,de);
HXDLIN(  86)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  87)			return HX_("embeddedCFF",f9,0c,9e,ac);
HXDLIN(  87)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  88)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  83)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontType_Impl__obj,toString,return )


FontType_Impl__obj::FontType_Impl__obj()
{
}

bool FontType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *FontType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FontType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FontType_Impl__obj::DEVICE,HX_("DEVICE",96,88,fa,23)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FontType_Impl__obj::EMBEDDED,HX_("EMBEDDED",8a,a9,e7,37)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FontType_Impl__obj::EMBEDDED_CFF,HX_("EMBEDDED_CFF",ce,8f,ba,23)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FontType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::DEVICE,"DEVICE");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::EMBEDDED,"EMBEDDED");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::DEVICE,"DEVICE");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::EMBEDDED,"EMBEDDED");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#endif

::hx::Class FontType_Impl__obj::__mClass;

static ::String FontType_Impl__obj_sStaticFields[] = {
	HX_("DEVICE",96,88,fa,23),
	HX_("EMBEDDED",8a,a9,e7,37),
	HX_("EMBEDDED_CFF",ce,8f,ba,23),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FontType_Impl__obj::__register()
{
	FontType_Impl__obj _hx_dummy;
	FontType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._FontType.FontType_Impl_",32,b8,83,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FontType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FontType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_55d16bca45175189_29_boot)
HXDLIN(  29)		DEVICE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_55d16bca45175189_48_boot)
HXDLIN(  48)		EMBEDDED = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_55d16bca45175189_68_boot)
HXDLIN(  68)		EMBEDDED_CFF = 2;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _FontType
