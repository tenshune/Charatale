#ifndef INCLUDED_openfl_display__internal_CanvasTilemap
#define INCLUDED_openfl_display__internal_CanvasTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,display,TileContainer)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasTilemap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasTilemap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasTilemap_obj OBJ_;
		CanvasTilemap_obj();

	public:
		enum { _hx_ClassId = 0x0f23ecac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasTilemap"); }

		inline static ::hx::ObjectPtr< CanvasTilemap_obj > __new() {
			::hx::ObjectPtr< CanvasTilemap_obj > __this = new CanvasTilemap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasTilemap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasTilemap_obj *__this = (CanvasTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasTilemap_obj), false, "openfl.display._internal.CanvasTilemap"));
			*(void **)__this = CanvasTilemap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasTilemap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasTilemap",16,de,d0,de); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::display::Tilemap tilemap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderTileContainer( ::openfl::display::TileContainer group, ::openfl::display::CanvasRenderer renderer, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool smooth,bool alphaEnabled,Float worldAlpha,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData, ::Dynamic source, ::openfl::geom::Rectangle rect);
		static ::Dynamic renderTileContainer_dyn();

		static void renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasTilemap */ 
