#ifndef INCLUDED_flixel_tile_FlxTypedTilemap
#define INCLUDED_flixel_tile_FlxTypedTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapAutoTiling)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,tile,FlxTypedTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTypedTilemap_obj : public  ::flixel::tile::FlxBaseTilemap_obj
{
	public:
		typedef  ::flixel::tile::FlxBaseTilemap_obj super;
		typedef FlxTypedTilemap_obj OBJ_;
		FlxTypedTilemap_obj();

	public:
		enum { _hx_ClassId = 0x7fac4e48 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxTypedTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxTypedTilemap"); }
		static ::hx::ObjectPtr< FlxTypedTilemap_obj > __new();
		static ::hx::ObjectPtr< FlxTypedTilemap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedTilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedTilemap",56,e4,7f,d0); }

		static void __boot();
		static int defaultFramePadding;
		bool useScaleHack;
		 ::Dynamic framePadding;
		 ::flixel::math::FlxBasePoint scale;
		bool antialiasing;
		 ::flixel::math::FlxBasePoint offset;
		 ::flixel::graphics::frames::FlxFramesCollection frames;
		 ::flixel::graphics::FlxGraphic graphic;
		int color;
		Float alpha;
		 ::openfl::geom::ColorTransform colorTransform;
		 ::Dynamic blend;
		int tileWidth;
		int tileHeight;
		Float scaledTileWidth;
		Float scaledTileHeight;
		 ::flixel::graphics::tile::FlxGraphicsShader shader;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Rectangle _flashRect;
		::Array< ::Dynamic> _buffers;
		 ::openfl::display::BitmapData _debugTileNotSolid;
		 ::openfl::display::BitmapData _debugTilePartial;
		 ::openfl::display::BitmapData _debugTileSolid;
		 ::openfl::geom::Rectangle _debugRect;
		 ::openfl::geom::Point _helperPoint;
		 ::flixel::math::FlxMatrix _matrix;
		bool _checkBufferChanges;
		void destroy();

		 ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection value);
		::Dynamic set_frames_dyn();

		void onGameResized(int w,int h);
		::Dynamic onGameResized_dyn();

		void onCameraChanged( ::flixel::FlxCamera cam);
		::Dynamic onCameraChanged_dyn();

		void loadMapHelper( ::Dynamic tileGraphic,::hx::Null< int >  tileWidth,::hx::Null< int >  tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  startingIndex,::hx::Null< int >  drawIndex,::hx::Null< int >  collideIndex);

		void cacheGraphics(int tileWidth,int tileHeight, ::Dynamic tileGraphic);

		 ::flixel::graphics::frames::FlxTileFrames padTileFrames(int tileWidth,int tileHeight, ::flixel::graphics::FlxGraphic graphic,int padding);
		::Dynamic padTileFrames_dyn();

		void updateDebugTileBoundingBoxSolid();
		::Dynamic updateDebugTileBoundingBoxSolid_dyn();

		void updateDebugTileBoundingBoxNotSolid();
		::Dynamic updateDebugTileBoundingBoxNotSolid_dyn();

		void updateDebugTileBoundingBoxPartial();
		::Dynamic updateDebugTileBoundingBoxPartial_dyn();

		 ::openfl::display::BitmapData updateDebugTile( ::openfl::display::BitmapData tileBitmap,int color);
		::Dynamic updateDebugTile_dyn();

		void computeDimensions();

		void updateMap();

		void drawDebugOnCamera( ::flixel::FlxCamera camera);

		bool isOnScreen( ::flixel::FlxCamera camera);

		void draw();

		void refreshBuffers();
		::Dynamic refreshBuffers_dyn();

		void setDirty(::hx::Null< bool >  dirty);

		bool overlapsWithCallback( ::flixel::FlxObject object, ::Dynamic callback,::hx::Null< bool >  flipCallbackParams, ::flixel::math::FlxBasePoint position);

		int getTileIndexByCoords( ::flixel::math::FlxBasePoint coord);

		 ::flixel::math::FlxBasePoint getTileCoordsByIndex(int index,::hx::Null< bool >  midpoint);

		::Array< ::Dynamic> getTileCoords(int index,::hx::Null< bool >  midpoint);
		::Dynamic getTileCoords_dyn();

		void follow( ::flixel::FlxCamera camera,::hx::Null< int >  border,::hx::Null< bool >  updateWorld);
		::Dynamic follow_dyn();

		bool ray( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result);

		int checkColumn(int x,int startY,int endY);
		::Dynamic checkColumn_dyn();

		bool rayStep( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result,::hx::Null< Float >  resolution);

		 ::flixel::FlxSprite tileToSprite(int tileX,int tileY,::hx::Null< int >  newTile, ::Dynamic spriteFactory);
		::Dynamic tileToSprite_dyn();

		void updateBuffers();
		::Dynamic updateBuffers_dyn();

		void drawTilemap( ::flixel::tile::FlxTilemapBuffer buffer, ::flixel::FlxCamera camera);
		::Dynamic drawTilemap_dyn();

		 ::openfl::display::BitmapData makeDebugTile(int color);
		::Dynamic makeDebugTile_dyn();

		void drawDebugTile( ::openfl::display::BitmapData debugTile,int color);
		::Dynamic drawDebugTile_dyn();

		void onDrawDebugChanged();
		::Dynamic onDrawDebugChanged_dyn();

		void updateTile(int index);

		 ::flixel::tile::FlxTilemapBuffer createBuffer( ::flixel::FlxCamera camera);
		::Dynamic createBuffer_dyn();

		bool set_antialiasing(bool value);
		::Dynamic set_antialiasing_dyn();

		 ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic value);
		::Dynamic set_graphic_dyn();

		bool set_pixelPerfectRender(bool value);

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		void updateColorTransform();
		::Dynamic updateColorTransform_dyn();

		 ::Dynamic set_blend( ::Dynamic value);
		::Dynamic set_blend_dyn();

		void setScaleXYCallback( ::flixel::math::FlxBasePoint scale);
		::Dynamic setScaleXYCallback_dyn();

		void setScaleXCallback( ::flixel::math::FlxBasePoint scale);
		::Dynamic setScaleXCallback_dyn();

		void setScaleYCallback( ::flixel::math::FlxBasePoint scale);
		::Dynamic setScaleYCallback_dyn();

		 ::flixel::FlxSprite defaultTileToSprite( ::Dynamic tileProperties);
		::Dynamic defaultTileToSprite_dyn();

		int set_allowCollisions(int _tmp_value);

		Float get_scaledWidth();
		::Dynamic get_scaledWidth_dyn();

		Float get_scaledHeight();
		::Dynamic get_scaledHeight_dyn();

		 ::flixel::math::FlxRect getBounds( ::flixel::math::FlxRect bounds);

		int set_debugBoundingBoxColorSolid(int color);

		int set_debugBoundingBoxColorNotSolid(int color);

		int set_debugBoundingBoxColorPartial(int color);

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTypedTilemap */ 
