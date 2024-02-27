#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister
#define INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,SamplerRegister)

namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES SamplerRegister_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SamplerRegister_obj OBJ_;
		SamplerRegister_obj();

	public:
		enum { _hx_ClassId = 0x37f8e5a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._internal._AGALConverter.SamplerRegister")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D._internal._AGALConverter.SamplerRegister"); }
		static ::hx::ObjectPtr< SamplerRegister_obj > __new();
		static ::hx::ObjectPtr< SamplerRegister_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SamplerRegister_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SamplerRegister",6b,77,ff,5c); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::display3D::_internal::_AGALConverter::SamplerRegister parse( cpp::Int64Struct v, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType);
		static ::Dynamic parse_dyn();

		int b;
		int d;
		int f;
		int m;
		int n;
		 ::openfl::display3D::_internal::_AGALConverter::ProgramType programType;
		int s;
		int t;
		int type;
		int w;
		::String toGLSL();
		::Dynamic toGLSL_dyn();

		 ::openfl::display::_internal::SamplerState toSamplerState();
		::Dynamic toSamplerState_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister */ 
