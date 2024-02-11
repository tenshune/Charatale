#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f0fd8a7980ded5c_29_new,"cpp.vm.WeakRef","new",0x9ce60541,"cpp.vm.WeakRef.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",29,0x92259bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_4f0fd8a7980ded5c_37_get,"cpp.vm.WeakRef","get",0x9ce0b577,"cpp.vm.WeakRef.get","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",37,0x92259bf6)
namespace cpp{
namespace vm{

void WeakRef_obj::__construct( ::Dynamic inObject,::hx::Null< bool >  __o_inHard){
            		bool inHard = __o_inHard.Default(false);
            	HX_STACKFRAME(&_hx_pos_4f0fd8a7980ded5c_29_new)
HXLINE(  30)		this->hardRef = inHard;
HXLINE(  31)		if (this->hardRef) {
HXLINE(  32)			this->ref = inObject;
            		}
            		else {
HXLINE(  34)			this->ref =  ::__hxcpp_weak_ref_create(inObject);
            		}
            	}

Dynamic WeakRef_obj::__CreateEmpty() { return new WeakRef_obj; }

void *WeakRef_obj::_hx_vtable = 0;

Dynamic WeakRef_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeakRef_obj > _hx_result = new WeakRef_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WeakRef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79de7951;
}

 ::Dynamic WeakRef_obj::get(){
            	HX_STACKFRAME(&_hx_pos_4f0fd8a7980ded5c_37_get)
HXLINE(  38)		if (this->hardRef) {
HXLINE(  39)			return this->ref;
            		}
HXLINE(  41)		return  ::__hxcpp_weak_ref_get(this->ref);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,get,return )


WeakRef_obj::WeakRef_obj()
{
}

void WeakRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakRef);
	HX_MARK_MEMBER_NAME(ref,"ref");
	HX_MARK_MEMBER_NAME(hardRef,"hardRef");
	HX_MARK_END_CLASS();
}

void WeakRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ref,"ref");
	HX_VISIT_MEMBER_NAME(hardRef,"hardRef");
}

::hx::Val WeakRef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { return ::hx::Val( ref ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { return ::hx::Val( hardRef ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WeakRef_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { ref=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { hardRef=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ref",53,d9,56,00));
	outFields->push(HX_("hardRef",28,47,5c,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeakRef_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(WeakRef_obj,ref),HX_("ref",53,d9,56,00)},
	{::hx::fsBool,(int)offsetof(WeakRef_obj,hardRef),HX_("hardRef",28,47,5c,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WeakRef_obj_sStaticStorageInfo = 0;
#endif

static ::String WeakRef_obj_sMemberFields[] = {
	HX_("ref",53,d9,56,00),
	HX_("hardRef",28,47,5c,93),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class WeakRef_obj::__mClass;

void WeakRef_obj::__register()
{
	WeakRef_obj _hx_dummy;
	WeakRef_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cpp.vm.WeakRef",cf,50,d0,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeakRef_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeakRef_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeakRef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeakRef_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
