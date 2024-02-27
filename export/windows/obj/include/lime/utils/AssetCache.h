#ifndef INCLUDED_lime_utils_AssetCache
#define INCLUDED_lime_utils_AssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,utils,AssetCache)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AssetCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetCache_obj OBJ_;
		AssetCache_obj();

	public:
		enum { _hx_ClassId = 0x218de06a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.AssetCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.AssetCache"); }
		static ::hx::ObjectPtr< AssetCache_obj > __new();
		static ::hx::ObjectPtr< AssetCache_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetCache",52,9e,a3,e4); }

		 ::haxe::ds::StringMap audio;
		bool enabled;
		 ::haxe::ds::StringMap image;
		 ::haxe::ds::StringMap font;
		int version;
		bool exists(::String id,::String type);
		::Dynamic exists_dyn();

		void set(::String id,::String type, ::Dynamic asset);
		::Dynamic set_dyn();

		void clear(::String prefix);
		::Dynamic clear_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_AssetCache */ 
