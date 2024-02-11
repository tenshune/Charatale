#ifndef INCLUDED_flixel_math_FlxBasePoint
#define INCLUDED_flixel_math_FlxBasePoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,FlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxBasePoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBasePoint_obj OBJ_;
		FlxBasePoint_obj();

	public:
		enum { _hx_ClassId = 0x04527695 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxBasePoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxBasePoint"); }
		static ::hx::ObjectPtr< FlxBasePoint_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static ::hx::ObjectPtr< FlxBasePoint_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBasePoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxBasePoint",cd,a7,5c,f3); }

		static void __boot();
		static  ::flixel::util::FlxPool pool;
		static  ::flixel::math::FlxBasePoint get(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic get_dyn();

		static  ::flixel::math::FlxBasePoint weak(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic weak_dyn();

		Float x;
		Float y;
		bool _weak;
		bool _inPool;
		virtual  ::flixel::math::FlxBasePoint set(::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic set_dyn();

		virtual void put();
		::Dynamic put_dyn();

		void putWeak();
		::Dynamic putWeak_dyn();

		bool equals( ::flixel::math::FlxBasePoint point);
		::Dynamic equals_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual Float set_x(Float Value);
		::Dynamic set_x_dyn();

		virtual Float set_y(Float Value);
		::Dynamic set_y_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxBasePoint */ 
