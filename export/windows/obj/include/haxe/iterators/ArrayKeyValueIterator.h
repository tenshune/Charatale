#ifndef INCLUDED_haxe_iterators_ArrayKeyValueIterator
#define INCLUDED_haxe_iterators_ArrayKeyValueIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5868e9ee7f4b28b2_26_new)
HX_DECLARE_CLASS2(haxe,iterators,ArrayKeyValueIterator)

namespace haxe{
namespace iterators{


class HXCPP_CLASS_ATTRIBUTES ArrayKeyValueIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayKeyValueIterator_obj OBJ_;
		ArrayKeyValueIterator_obj();

	public:
		enum { _hx_ClassId = 0x28797002 };

		void __construct(::cpp::VirtualArray array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.iterators.ArrayKeyValueIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.iterators.ArrayKeyValueIterator"); }

		inline static ::hx::ObjectPtr< ArrayKeyValueIterator_obj > __new(::cpp::VirtualArray array) {
			::hx::ObjectPtr< ArrayKeyValueIterator_obj > __this = new ArrayKeyValueIterator_obj();
			__this->__construct(array);
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayKeyValueIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray array) {
			ArrayKeyValueIterator_obj *__this = (ArrayKeyValueIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayKeyValueIterator_obj), true, "haxe.iterators.ArrayKeyValueIterator"));
			*(void **)__this = ArrayKeyValueIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5868e9ee7f4b28b2_26_new)
HXLINE(  27)		( ( ::haxe::iterators::ArrayKeyValueIterator)(__this) )->current = 0;
HXLINE(  32)		( ( ::haxe::iterators::ArrayKeyValueIterator)(__this) )->array = array;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayKeyValueIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayKeyValueIterator",f9,c8,2e,b7); }

		int current;
		::cpp::VirtualArray array;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace haxe
} // end namespace iterators

#endif /* INCLUDED_haxe_iterators_ArrayKeyValueIterator */ 
