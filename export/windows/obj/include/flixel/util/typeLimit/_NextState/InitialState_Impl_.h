#ifndef INCLUDED_flixel_util_typeLimit__NextState_InitialState_Impl_
#define INCLUDED_flixel_util_typeLimit__NextState_InitialState_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,util,typeLimit,_NextState,InitialState_Impl_)

namespace flixel{
namespace util{
namespace typeLimit{
namespace _NextState{


class HXCPP_CLASS_ATTRIBUTES InitialState_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InitialState_Impl__obj OBJ_;
		InitialState_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0c8802c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.typeLimit._NextState.InitialState_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.typeLimit._NextState.InitialState_Impl_"); }

		inline static ::hx::ObjectPtr< InitialState_Impl__obj > __new() {
			::hx::ObjectPtr< InitialState_Impl__obj > __this = new InitialState_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< InitialState_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			InitialState_Impl__obj *__this = (InitialState_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InitialState_Impl__obj), false, "flixel.util.typeLimit._NextState.InitialState_Impl_"));
			*(void **)__this = InitialState_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InitialState_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InitialState_Impl_",6d,47,82,32); }

		static  ::Dynamic fromType(::hx::Class state);
		static ::Dynamic fromType_dyn();

		static  ::Dynamic fromMaker( ::Dynamic func);
		static ::Dynamic fromMaker_dyn();

		static  ::Dynamic toNextState( ::Dynamic this1);
		static ::Dynamic toNextState_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace typeLimit
} // end namespace _NextState

#endif /* INCLUDED_flixel_util_typeLimit__NextState_InitialState_Impl_ */ 
