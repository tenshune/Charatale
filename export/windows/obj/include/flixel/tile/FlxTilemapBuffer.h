#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#define INCLUDED_flixel_tile_FlxTilemapBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,tile,FlxTypedTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTilemapBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTilemapBuffer_obj OBJ_;
		FlxTilemapBuffer_obj();

	public:
		enum { _hx_ClassId = 0x68352dca };

		void __construct(int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTilemapBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxTilemapBuffer"); }
		static ::hx::ObjectPtr< FlxTilemapBuffer_obj > __new(int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY);
		static ::hx::ObjectPtr< FlxTilemapBuffer_obj > __alloc(::hx::Ctx *_hx_ctx,int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTilemapBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTilemapBuffer",1c,80,e9,5b); }

		Float x;
		Float y;
		Float width;
		Float height;
		bool dirty;
		int rows;
		int columns;
		 ::Dynamic pixelPerfectRender;
		 ::openfl::display::BitmapData pixels;
		 ::Dynamic blend;
		bool antialiasing;
		 ::openfl::geom::Rectangle _flashRect;
		 ::flixel::math::FlxMatrix _matrix;
		Float _prevTilemapX;
		Float _prevTilemapY;
		Float _prevTilemapScaleX;
		Float _prevTilemapScaleY;
		Float _prevTilemapScrollX;
		Float _prevTilemapScrollY;
		Float _prevCameraScrollX;
		Float _prevCameraScrollY;
		Float _prevCameraScaleX;
		Float _prevCameraScaleY;
		int _prevCameraWidth;
		int _prevCameraHeight;
		void resize(int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  scaleX,::hx::Null< Float >  scaleY);
		::Dynamic resize_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void fill(::hx::Null< int >  color);
		::Dynamic fill_dyn();

		void draw( ::flixel::FlxCamera camera, ::openfl::geom::Point flashPoint,::hx::Null< Float >  scaleX,::hx::Null< Float >  scaleY);
		::Dynamic draw_dyn();

		void colorTransform( ::openfl::geom::ColorTransform transform);
		::Dynamic colorTransform_dyn();

		void updateColumns(int tileWidth,int widthInTiles,::hx::Null< Float >  scaleX, ::flixel::FlxCamera camera);
		::Dynamic updateColumns_dyn();

		void updateRows(int tileHeight,int heightInTiles,::hx::Null< Float >  scaleY, ::flixel::FlxCamera camera);
		::Dynamic updateRows_dyn();

		bool isPixelPerfectRender( ::flixel::FlxCamera camera);
		::Dynamic isPixelPerfectRender_dyn();

		bool isDirty( ::flixel::tile::FlxTypedTilemap tilemap, ::flixel::FlxCamera camera);
		::Dynamic isDirty_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemapBuffer */ 
