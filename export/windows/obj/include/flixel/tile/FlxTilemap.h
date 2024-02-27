#ifndef INCLUDED_flixel_tile_FlxTilemap
#define INCLUDED_flixel_tile_FlxTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tile_FlxTypedTilemap
#include <flixel/tile/FlxTypedTilemap.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTypedTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTilemap_obj : public  ::flixel::tile::FlxTypedTilemap_obj
{
	public:
		typedef  ::flixel::tile::FlxTypedTilemap_obj super;
		typedef FlxTilemap_obj OBJ_;
		FlxTilemap_obj();

	public:
		enum { _hx_ClassId = 0x1dc5d3c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxTilemap"); }
		static ::hx::ObjectPtr< FlxTilemap_obj > __new();
		static ::hx::ObjectPtr< FlxTilemap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTilemap",fc,a9,ba,74); }

		static int get_defaultFramePadding();
		static ::Dynamic get_defaultFramePadding_dyn();

		static int set_defaultFramePadding(int value);
		static ::Dynamic set_defaultFramePadding_dyn();

		void initTileObjects();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemap */ 
