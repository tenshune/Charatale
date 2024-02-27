#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_41_fromState,"flixel.util.typeLimit._NextState.NextState_Impl_","fromState",0x2433dccf,"flixel.util.typeLimit._NextState.NextState_Impl_.fromState","flixel/util/typeLimit/NextState.hx",41,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_47_fromMaker,"flixel.util.typeLimit._NextState.NextState_Impl_","fromMaker",0xa344dd82,"flixel.util.typeLimit._NextState.NextState_Impl_.fromMaker","flixel/util/typeLimit/NextState.hx",47,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_53_isInstance,"flixel.util.typeLimit._NextState.NextState_Impl_","isInstance",0x147dac17,"flixel.util.typeLimit._NextState.NextState_Impl_.isInstance","flixel/util/typeLimit/NextState.hx",53,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_59_isClass,"flixel.util.typeLimit._NextState.NextState_Impl_","isClass",0x288fe676,"flixel.util.typeLimit._NextState.NextState_Impl_.isClass","flixel/util/typeLimit/NextState.hx",59,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_64_createInstance,"flixel.util.typeLimit._NextState.NextState_Impl_","createInstance",0xe163b529,"flixel.util.typeLimit._NextState.NextState_Impl_.createInstance","flixel/util/typeLimit/NextState.hx",64,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_74_getConstructor,"flixel.util.typeLimit._NextState.NextState_Impl_","getConstructor",0x54ab967c,"flixel.util.typeLimit._NextState.NextState_Impl_.getConstructor","flixel/util/typeLimit/NextState.hx",74,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_78_getConstructor,"flixel.util.typeLimit._NextState.NextState_Impl_","getConstructor",0x54ab967c,"flixel.util.typeLimit._NextState.NextState_Impl_.getConstructor","flixel/util/typeLimit/NextState.hx",78,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_27baa0ad328f8c72_84_getConstructor,"flixel.util.typeLimit._NextState.NextState_Impl_","getConstructor",0x54ab967c,"flixel.util.typeLimit._NextState.NextState_Impl_.getConstructor","flixel/util/typeLimit/NextState.hx",84,0x086ddfa8)
namespace flixel{
namespace util{
namespace typeLimit{
namespace _NextState{

void NextState_Impl__obj::__construct() { }

Dynamic NextState_Impl__obj::__CreateEmpty() { return new NextState_Impl__obj; }

void *NextState_Impl__obj::_hx_vtable = 0;

Dynamic NextState_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NextState_Impl__obj > _hx_result = new NextState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NextState_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5003bfdc;
}

 ::Dynamic NextState_Impl__obj::fromState( ::flixel::FlxState state){
            	HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_41_fromState)
HXDLIN(  41)		return state;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextState_Impl__obj,fromState,return )

 ::Dynamic NextState_Impl__obj::fromMaker( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_47_fromMaker)
HXDLIN(  47)		return func;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextState_Impl__obj,fromMaker,return )

bool NextState_Impl__obj::isInstance( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_53_isInstance)
HXDLIN(  53)		return ::Std_obj::isOfType(this1,::hx::ClassOf< ::flixel::FlxState >());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextState_Impl__obj,isInstance,return )

bool NextState_Impl__obj::isClass( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_59_isClass)
HXDLIN(  59)		return ::Std_obj::isOfType(this1,::hx::ClassOf< ::hx::Class >());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextState_Impl__obj,isClass,return )

 ::flixel::FlxState NextState_Impl__obj::createInstance( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_64_createInstance)
HXDLIN(  64)		if (::Std_obj::isOfType(this1,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE(  65)			return ( ( ::flixel::FlxState)(this1) );
            		}
            		else {
HXLINE(  66)			if (::Std_obj::isOfType(this1,::hx::ClassOf< ::hx::Class >())) {
HXLINE(  67)				return ( ( ::flixel::FlxState)(::Type_obj::createInstance(this1,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE(  69)				return ( ( ::flixel::FlxState)(this1()) );
            			}
            		}
HXLINE(  64)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextState_Impl__obj,createInstance,return )

 ::Dynamic NextState_Impl__obj::getConstructor( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_74_getConstructor)
HXDLIN(  74)		if (::Std_obj::isOfType(this1,::hx::ClassOf< ::flixel::FlxState >())) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,this1) HXARGC(0)
            			 ::flixel::FlxState _hx_run(){
            				HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_78_getConstructor)
HXLINE(  78)				return ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(this1),::cpp::VirtualArray_obj::__new(0))) );
            			}
            			HX_END_LOCAL_FUNC0(return)

HXLINE(  76)			return  ::Dynamic(new _hx_Closure_0(this1));
            		}
            		else {
HXLINE(  81)			if (::Std_obj::isOfType(this1,::hx::ClassOf< ::hx::Class >())) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,this1) HXARGC(0)
            				 ::flixel::FlxState _hx_run(){
            					HX_STACKFRAME(&_hx_pos_27baa0ad328f8c72_84_getConstructor)
HXLINE(  84)					return ( ( ::flixel::FlxState)(::Type_obj::createInstance(this1,::cpp::VirtualArray_obj::__new(0))) );
            				}
            				HX_END_LOCAL_FUNC0(return)

HXLINE(  82)				return  ::Dynamic(new _hx_Closure_1(this1));
            			}
            			else {
HXLINE(  87)				return this1;
            			}
            		}
HXLINE(  74)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextState_Impl__obj,getConstructor,return )


NextState_Impl__obj::NextState_Impl__obj()
{
}

bool NextState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isClass") ) { outValue = isClass_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromState") ) { outValue = fromState_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromMaker") ) { outValue = fromMaker_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isInstance") ) { outValue = isInstance_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { outValue = createInstance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getConstructor") ) { outValue = getConstructor_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NextState_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NextState_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class NextState_Impl__obj::__mClass;

static ::String NextState_Impl__obj_sStaticFields[] = {
	HX_("fromState",47,60,94,38),
	HX_("fromMaker",fa,60,a5,b7),
	HX_("isInstance",9f,31,90,d4),
	HX_("isClass",ee,1b,de,e4),
	HX_("createInstance",b1,9e,1b,ac),
	HX_("getConstructor",04,80,63,1f),
	::String(null())
};

void NextState_Impl__obj::__register()
{
	NextState_Impl__obj _hx_dummy;
	NextState_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.typeLimit._NextState.NextState_Impl_",f6,62,74,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NextState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NextState_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NextState_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NextState_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NextState_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace typeLimit
} // end namespace _NextState
