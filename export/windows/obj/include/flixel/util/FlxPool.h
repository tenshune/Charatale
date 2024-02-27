#ifndef INCLUDED_flixel_util_FlxPool
#define INCLUDED_flixel_util_FlxPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxPool_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPool_obj OBJ_;
		FlxPool_obj();

	public:
		enum { _hx_ClassId = 0x032e26f0 };

		void __construct( ::Dynamic constructor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.FlxPool"); }
		static ::hx::ObjectPtr< FlxPool_obj > __new( ::Dynamic constructor);
		static ::hx::ObjectPtr< FlxPool_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic constructor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPool_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxPool",4e,ba,b4,da); }

		::cpp::VirtualArray _pool;
		 ::Dynamic _constructor;
		Dynamic _constructor_dyn() { return _constructor;}
		int _count;
		 ::Dynamic get();
		::Dynamic get_dyn();

		void put( ::Dynamic obj);
		::Dynamic put_dyn();

		void putUnsafe( ::Dynamic obj);
		::Dynamic putUnsafe_dyn();

		void preAllocate(int numObjects);
		::Dynamic preAllocate_dyn();

		::cpp::VirtualArray clear();
		::Dynamic clear_dyn();

		int get_length();
		::Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool */ 
