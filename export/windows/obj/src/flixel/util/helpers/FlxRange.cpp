#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_05e7652c5709bfbb_8_new,"flixel.util.helpers.FlxRange","new",0x6d2b50a0,"flixel.util.helpers.FlxRange.new","flixel/util/helpers/FlxRange.hx",8,0x9ab2f00f)
HX_LOCAL_STACK_FRAME(_hx_pos_05e7652c5709bfbb_45_set,"flixel.util.helpers.FlxRange","set",0x6d2f1be2,"flixel.util.helpers.FlxRange.set","flixel/util/helpers/FlxRange.hx",45,0x9ab2f00f)
HX_LOCAL_STACK_FRAME(_hx_pos_05e7652c5709bfbb_60_equals,"flixel.util.helpers.FlxRange","equals",0x791915ff,"flixel.util.helpers.FlxRange.equals","flixel/util/helpers/FlxRange.hx",60,0x9ab2f00f)
HX_LOCAL_STACK_FRAME(_hx_pos_05e7652c5709bfbb_68_toString,"flixel.util.helpers.FlxRange","toString",0x253e686c,"flixel.util.helpers.FlxRange.toString","flixel/util/helpers/FlxRange.hx",68,0x9ab2f00f)
namespace flixel{
namespace util{
namespace helpers{

void FlxRange_obj::__construct( ::Dynamic start, ::Dynamic end){
            	HX_STACKFRAME(&_hx_pos_05e7652c5709bfbb_8_new)
HXLINE(  23)		this->active = true;
HXLINE(  33)		this->start = start;
HXLINE(  34)		 ::Dynamic _hx_tmp;
HXDLIN(  34)		if (::hx::IsNull( end )) {
HXLINE(  34)			_hx_tmp = start;
            		}
            		else {
HXLINE(  34)			_hx_tmp = end;
            		}
HXDLIN(  34)		this->end = _hx_tmp;
            	}

Dynamic FlxRange_obj::__CreateEmpty() { return new FlxRange_obj; }

void *FlxRange_obj::_hx_vtable = 0;

Dynamic FlxRange_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxRange_obj > _hx_result = new FlxRange_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxRange_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1bedaec6;
}

 ::flixel::util::helpers::FlxRange FlxRange_obj::set( ::Dynamic start, ::Dynamic end){
            	HX_STACKFRAME(&_hx_pos_05e7652c5709bfbb_45_set)
HXLINE(  46)		this->start = start;
HXLINE(  47)		 ::Dynamic _hx_tmp;
HXDLIN(  47)		if (::hx::IsNull( end )) {
HXLINE(  47)			_hx_tmp = start;
            		}
            		else {
HXLINE(  47)			_hx_tmp = end;
            		}
HXDLIN(  47)		this->end = _hx_tmp;
HXLINE(  49)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRange_obj,set,return )

bool FlxRange_obj::equals( ::flixel::util::helpers::FlxRange OtherFlxRange){
            	HX_STACKFRAME(&_hx_pos_05e7652c5709bfbb_60_equals)
HXDLIN(  60)		if (::hx::IsEq( this->start,OtherFlxRange->start )) {
HXDLIN(  60)			return ::hx::IsEq( this->end,OtherFlxRange->end );
            		}
            		else {
HXDLIN(  60)			return false;
            		}
HXDLIN(  60)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRange_obj,equals,return )

::String FlxRange_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_05e7652c5709bfbb_68_toString)
HXDLIN(  68)		 ::Dynamic value = this->start;
HXDLIN(  68)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  68)		_this->label = HX_("start",62,74,0b,84);
HXDLIN(  68)		_this->value = value;
HXDLIN(  68)		 ::Dynamic value1 = this->end;
HXDLIN(  68)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  68)		_this1->label = HX_("end",db,03,4d,00);
HXDLIN(  68)		_this1->value = value1;
HXDLIN(  68)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRange_obj,toString,return )


::hx::ObjectPtr< FlxRange_obj > FlxRange_obj::__new( ::Dynamic start, ::Dynamic end) {
	::hx::ObjectPtr< FlxRange_obj > __this = new FlxRange_obj();
	__this->__construct(start,end);
	return __this;
}

::hx::ObjectPtr< FlxRange_obj > FlxRange_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic start, ::Dynamic end) {
	FlxRange_obj *__this = (FlxRange_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxRange_obj), true, "flixel.util.helpers.FlxRange"));
	*(void **)__this = FlxRange_obj::_hx_vtable;
	__this->__construct(start,end);
	return __this;
}

FlxRange_obj::FlxRange_obj()
{
}

void FlxRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRange);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

::hx::Val FlxRange_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxRange_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("active",c6,41,46,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxRange_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxRange_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxRange_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsBool,(int)offsetof(FlxRange_obj,active),HX_("active",c6,41,46,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxRange_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxRange_obj_sMemberFields[] = {
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	HX_("active",c6,41,46,16),
	HX_("set",a2,9b,57,00),
	HX_("equals",3f,ee,f2,bf),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FlxRange_obj::__mClass;

void FlxRange_obj::__register()
{
	FlxRange_obj _hx_dummy;
	FlxRange_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.helpers.FlxRange",ae,c0,56,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxRange_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxRange_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRange_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRange_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
