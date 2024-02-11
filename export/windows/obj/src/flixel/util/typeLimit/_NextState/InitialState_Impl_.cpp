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
#ifndef INCLUDED_flixel_util_typeLimit__NextState_InitialState_Impl_
#include <flixel/util/typeLimit/_NextState/InitialState_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_62eec1d0c4ff3cdd_124_fromType,"flixel.util.typeLimit._NextState.InitialState_Impl_","fromType",0xb9788a3d,"flixel.util.typeLimit._NextState.InitialState_Impl_.fromType","flixel/util/typeLimit/NextState.hx",124,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_62eec1d0c4ff3cdd_130_fromMaker,"flixel.util.typeLimit._NextState.InitialState_Impl_","fromMaker",0x785171e1,"flixel.util.typeLimit._NextState.InitialState_Impl_.fromMaker","flixel/util/typeLimit/NextState.hx",130,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_62eec1d0c4ff3cdd_136_toNextState,"flixel.util.typeLimit._NextState.InitialState_Impl_","toNextState",0xe2b55bca,"flixel.util.typeLimit._NextState.InitialState_Impl_.toNextState","flixel/util/typeLimit/NextState.hx",136,0x086ddfa8)
HX_LOCAL_STACK_FRAME(_hx_pos_62eec1d0c4ff3cdd_140_toNextState,"flixel.util.typeLimit._NextState.InitialState_Impl_","toNextState",0xe2b55bca,"flixel.util.typeLimit._NextState.InitialState_Impl_.toNextState","flixel/util/typeLimit/NextState.hx",140,0x086ddfa8)
namespace flixel{
namespace util{
namespace typeLimit{
namespace _NextState{

void InitialState_Impl__obj::__construct() { }

Dynamic InitialState_Impl__obj::__CreateEmpty() { return new InitialState_Impl__obj; }

void *InitialState_Impl__obj::_hx_vtable = 0;

Dynamic InitialState_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InitialState_Impl__obj > _hx_result = new InitialState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InitialState_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c8802c3;
}

 ::Dynamic InitialState_Impl__obj::fromType(::hx::Class state){
            	HX_STACKFRAME(&_hx_pos_62eec1d0c4ff3cdd_124_fromType)
HXDLIN( 124)		return ( ( ::Dynamic)(state) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InitialState_Impl__obj,fromType,return )

 ::Dynamic InitialState_Impl__obj::fromMaker( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_62eec1d0c4ff3cdd_130_fromMaker)
HXDLIN( 130)		return func;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InitialState_Impl__obj,fromMaker,return )

 ::Dynamic InitialState_Impl__obj::toNextState( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_62eec1d0c4ff3cdd_136_toNextState)
HXDLIN( 136)		if (::Std_obj::isOfType(this1,::hx::ClassOf< ::hx::Class >())) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,this1) HXARGC(0)
            			 ::flixel::FlxState _hx_run(){
            				HX_STACKFRAME(&_hx_pos_62eec1d0c4ff3cdd_140_toNextState)
HXLINE( 140)				return ( ( ::flixel::FlxState)(::Type_obj::createInstance(this1,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			HX_END_LOCAL_FUNC0(return)

HXLINE( 138)			return ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromMaker( ::Dynamic(new _hx_Closure_0(this1)));
            		}
            		else {
HXLINE( 144)			return this1;
            		}
HXLINE( 136)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InitialState_Impl__obj,toNextState,return )


InitialState_Impl__obj::InitialState_Impl__obj()
{
}

bool InitialState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromType") ) { outValue = fromType_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromMaker") ) { outValue = fromMaker_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toNextState") ) { outValue = toNextState_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InitialState_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *InitialState_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class InitialState_Impl__obj::__mClass;

static ::String InitialState_Impl__obj_sStaticFields[] = {
	HX_("fromType",44,c1,d4,aa),
	HX_("fromMaker",fa,60,a5,b7),
	HX_("toNextState",23,03,36,92),
	::String(null())
};

void InitialState_Impl__obj::__register()
{
	InitialState_Impl__obj _hx_dummy;
	InitialState_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.typeLimit._NextState.InitialState_Impl_",95,9a,11,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InitialState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InitialState_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InitialState_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InitialState_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InitialState_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace typeLimit
} // end namespace _NextState
