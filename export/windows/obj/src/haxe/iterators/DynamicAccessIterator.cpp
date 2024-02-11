#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_iterators_DynamicAccessIterator
#include <haxe/iterators/DynamicAccessIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_562eed6eeeaa56da_33_new,"haxe.iterators.DynamicAccessIterator","new",0x44a637b2,"haxe.iterators.DynamicAccessIterator.new","C:\\HaxeToolkit\\haxe\\std/haxe/iterators/DynamicAccessIterator.hx",33,0x0f63a287)
HX_LOCAL_STACK_FRAME(_hx_pos_562eed6eeeaa56da_43_hasNext,"haxe.iterators.DynamicAccessIterator","hasNext",0x6a341dbf,"haxe.iterators.DynamicAccessIterator.hasNext","C:\\HaxeToolkit\\haxe\\std/haxe/iterators/DynamicAccessIterator.hx",43,0x0f63a287)
HX_LOCAL_STACK_FRAME(_hx_pos_562eed6eeeaa56da_50_next,"haxe.iterators.DynamicAccessIterator","next",0xccca8561,"haxe.iterators.DynamicAccessIterator.next","C:\\HaxeToolkit\\haxe\\std/haxe/iterators/DynamicAccessIterator.hx",50,0x0f63a287)
namespace haxe{
namespace iterators{

void DynamicAccessIterator_obj::__construct( ::Dynamic access){
            	HX_STACKFRAME(&_hx_pos_562eed6eeeaa56da_33_new)
HXLINE(  34)		this->access = access;
HXLINE(  35)		this->keys = ::Reflect_obj::fields(access);
HXLINE(  36)		this->index = 0;
            	}

Dynamic DynamicAccessIterator_obj::__CreateEmpty() { return new DynamicAccessIterator_obj; }

void *DynamicAccessIterator_obj::_hx_vtable = 0;

Dynamic DynamicAccessIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DynamicAccessIterator_obj > _hx_result = new DynamicAccessIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DynamicAccessIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x175a41b2;
}

bool DynamicAccessIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_562eed6eeeaa56da_43_hasNext)
HXDLIN(  43)		return (this->index < this->keys->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DynamicAccessIterator_obj,hasNext,return )

 ::Dynamic DynamicAccessIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_562eed6eeeaa56da_50_next)
HXDLIN(  50)		return ::Reflect_obj::field(this->access,this->keys->__get(this->index++));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DynamicAccessIterator_obj,next,return )


::hx::ObjectPtr< DynamicAccessIterator_obj > DynamicAccessIterator_obj::__new( ::Dynamic access) {
	::hx::ObjectPtr< DynamicAccessIterator_obj > __this = new DynamicAccessIterator_obj();
	__this->__construct(access);
	return __this;
}

::hx::ObjectPtr< DynamicAccessIterator_obj > DynamicAccessIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic access) {
	DynamicAccessIterator_obj *__this = (DynamicAccessIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DynamicAccessIterator_obj), true, "haxe.iterators.DynamicAccessIterator"));
	*(void **)__this = DynamicAccessIterator_obj::_hx_vtable;
	__this->__construct(access);
	return __this;
}

DynamicAccessIterator_obj::DynamicAccessIterator_obj()
{
}

void DynamicAccessIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicAccessIterator);
	HX_MARK_MEMBER_NAME(access,"access");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void DynamicAccessIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(access,"access");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(index,"index");
}

::hx::Val DynamicAccessIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"access") ) { return ::hx::Val( access ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DynamicAccessIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"access") ) { access=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DynamicAccessIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("access",a4,95,06,0b));
	outFields->push(HX_("keys",f4,e1,06,47));
	outFields->push(HX_("index",12,9b,14,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DynamicAccessIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DynamicAccessIterator_obj,access),HX_("access",a4,95,06,0b)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DynamicAccessIterator_obj,keys),HX_("keys",f4,e1,06,47)},
	{::hx::fsInt,(int)offsetof(DynamicAccessIterator_obj,index),HX_("index",12,9b,14,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DynamicAccessIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String DynamicAccessIterator_obj_sMemberFields[] = {
	HX_("access",a4,95,06,0b),
	HX_("keys",f4,e1,06,47),
	HX_("index",12,9b,14,be),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class DynamicAccessIterator_obj::__mClass;

void DynamicAccessIterator_obj::__register()
{
	DynamicAccessIterator_obj _hx_dummy;
	DynamicAccessIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.iterators.DynamicAccessIterator",c0,36,a8,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DynamicAccessIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DynamicAccessIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DynamicAccessIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DynamicAccessIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace iterators
