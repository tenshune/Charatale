#ifndef INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_
#define INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,net,_SharedObjectFlushStatus,SharedObjectFlushStatus_Impl_)

namespace openfl{
namespace net{
namespace _SharedObjectFlushStatus{


class HXCPP_CLASS_ATTRIBUTES SharedObjectFlushStatus_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SharedObjectFlushStatus_Impl__obj OBJ_;
		SharedObjectFlushStatus_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5923b2f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_"); }

		inline static ::hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > __new() {
			::hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > __this = new SharedObjectFlushStatus_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			SharedObjectFlushStatus_Impl__obj *__this = (SharedObjectFlushStatus_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SharedObjectFlushStatus_Impl__obj), false, "openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_"));
			*(void **)__this = SharedObjectFlushStatus_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SharedObjectFlushStatus_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SharedObjectFlushStatus_Impl_",32,e2,b7,74); }

		static void __boot();
		static  ::Dynamic FLUSHED;
		static  ::Dynamic PENDING;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace net
} // end namespace _SharedObjectFlushStatus

#endif /* INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_ */ 
