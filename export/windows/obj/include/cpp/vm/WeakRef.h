#ifndef INCLUDED_cpp_vm_WeakRef
#define INCLUDED_cpp_vm_WeakRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4f0fd8a7980ded5c_29_new)
HX_DECLARE_CLASS2(cpp,vm,WeakRef)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES WeakRef_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WeakRef_obj OBJ_;
		WeakRef_obj();

	public:
		enum { _hx_ClassId = 0x79de7951 };

		void __construct( ::Dynamic inObject,::hx::Null< bool >  __o_inHard);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.WeakRef")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"cpp.vm.WeakRef"); }

		inline static ::hx::ObjectPtr< WeakRef_obj > __new( ::Dynamic inObject,::hx::Null< bool >  __o_inHard) {
			::hx::ObjectPtr< WeakRef_obj > __this = new WeakRef_obj();
			__this->__construct(inObject,__o_inHard);
			return __this;
		}

		inline static ::hx::ObjectPtr< WeakRef_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic inObject,::hx::Null< bool >  __o_inHard) {
			WeakRef_obj *__this = (WeakRef_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WeakRef_obj), true, "cpp.vm.WeakRef"));
			*(void **)__this = WeakRef_obj::_hx_vtable;
{
            		bool inHard = __o_inHard.Default(false);
            	HX_STACKFRAME(&_hx_pos_4f0fd8a7980ded5c_29_new)
HXLINE(  30)		( ( ::cpp::vm::WeakRef)(__this) )->hardRef = inHard;
HXLINE(  31)		if (( ( ::cpp::vm::WeakRef)(__this) )->hardRef) {
HXLINE(  32)			( ( ::cpp::vm::WeakRef)(__this) )->ref = inObject;
            		}
            		else {
HXLINE(  34)			( ( ::cpp::vm::WeakRef)(__this) )->ref =  ::__hxcpp_weak_ref_create(inObject);
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WeakRef_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WeakRef",9b,77,ad,a4); }

		 ::Dynamic ref;
		bool hardRef;
		 ::Dynamic get();
		::Dynamic get_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_WeakRef */ 
