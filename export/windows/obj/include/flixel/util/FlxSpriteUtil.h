#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#define INCLUDED_flixel_util_FlxSpriteUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,effects,FlxFlicker)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxSpriteUtil)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxSpriteUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSpriteUtil_obj OBJ_;
		FlxSpriteUtil_obj();

	public:
		enum { _hx_ClassId = 0x0a1ec5f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxSpriteUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxSpriteUtil"); }

		inline static ::hx::ObjectPtr< FlxSpriteUtil_obj > __new() {
			::hx::ObjectPtr< FlxSpriteUtil_obj > __this = new FlxSpriteUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxSpriteUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxSpriteUtil_obj *__this = (FlxSpriteUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSpriteUtil_obj), false, "flixel.util.FlxSpriteUtil"));
			*(void **)__this = FlxSpriteUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSpriteUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSpriteUtil",99,21,94,21); }

		static void __boot();
		static  ::openfl::display::Sprite flashGfxSprite;
		static  ::openfl::display::Graphics flashGfx;
		static  ::flixel::FlxSprite alphaMask( ::flixel::FlxSprite output, ::Dynamic source, ::Dynamic mask);
		static ::Dynamic alphaMask_dyn();

		static  ::flixel::FlxSprite alphaMaskFlxSprite( ::flixel::FlxSprite sprite, ::flixel::FlxSprite mask, ::flixel::FlxSprite output);
		static ::Dynamic alphaMaskFlxSprite_dyn();

		static  ::flixel::FlxSprite screenWrap( ::flixel::FlxSprite sprite,::hx::Null< bool >  Left,::hx::Null< bool >  Right,::hx::Null< bool >  Top,::hx::Null< bool >  Bottom);
		static ::Dynamic screenWrap_dyn();

		static  ::flixel::FlxSprite bound( ::flixel::FlxSprite sprite,::hx::Null< Float >  MinX,::hx::Null< Float >  MaxX,::hx::Null< Float >  MinY,::hx::Null< Float >  MaxY);
		static ::Dynamic bound_dyn();

		static  ::flixel::FlxSprite cameraWrap( ::flixel::FlxSprite sprite, ::flixel::FlxCamera camera,::hx::Null< int >  edges);
		static ::Dynamic cameraWrap_dyn();

		static  ::flixel::FlxSprite cameraBound( ::flixel::FlxSprite sprite, ::flixel::FlxCamera camera,::hx::Null< int >  edges);
		static ::Dynamic cameraBound_dyn();

		static void space(::Array< ::Dynamic> objects,Float startX,Float startY, ::Dynamic horizontalSpacing, ::Dynamic verticalSpacing,::hx::Null< bool >  spaceFromBounds, ::Dynamic position);
		static ::Dynamic space_dyn();

		static  ::flixel::FlxSprite drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawLine_dyn();

		static  ::flixel::FlxSprite drawCurve( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Float ControlX,Float ControlY,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawCurve_dyn();

		static  ::flixel::FlxSprite drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawRect_dyn();

		static  ::flixel::FlxSprite drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawRoundRect_dyn();

		static  ::flixel::FlxSprite drawRoundRectComplex( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float TopLeftRadius,Float TopRightRadius,Float BottomLeftRadius,Float BottomRightRadius,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawRoundRectComplex_dyn();

		static  ::flixel::FlxSprite drawCircle( ::flixel::FlxSprite sprite,::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< Float >  Radius,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawCircle_dyn();

		static  ::flixel::FlxSprite drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawEllipse_dyn();

		static  ::flixel::FlxSprite drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawTriangle_dyn();

		static  ::flixel::FlxSprite drawPolygon( ::flixel::FlxSprite sprite,::Array< ::Dynamic> Vertices,::hx::Null< int >  FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle);
		static ::Dynamic drawPolygon_dyn();

		static void beginDraw(int FillColor, ::Dynamic lineStyle);
		static ::Dynamic beginDraw_dyn();

		static  ::flixel::FlxSprite endDraw( ::flixel::FlxSprite sprite, ::Dynamic drawStyle);
		static ::Dynamic endDraw_dyn();

		static  ::flixel::FlxSprite updateSpriteGraphic( ::flixel::FlxSprite sprite, ::Dynamic drawStyle);
		static ::Dynamic updateSpriteGraphic_dyn();

		static void setLineStyle( ::Dynamic lineStyle);
		static ::Dynamic setLineStyle_dyn();

		static  ::Dynamic getDefaultLineStyle( ::Dynamic lineStyle);
		static ::Dynamic getDefaultLineStyle_dyn();

		static  ::flixel::FlxSprite fill( ::flixel::FlxSprite sprite,int FillColor);
		static ::Dynamic fill_dyn();

		static  ::flixel::effects::FlxFlicker flicker( ::flixel::FlxObject Object,::hx::Null< Float >  Duration,::hx::Null< Float >  Interval,::hx::Null< bool >  EndVisibility,::hx::Null< bool >  ForceRestart, ::Dynamic CompletionCallback, ::Dynamic ProgressCallback);
		static ::Dynamic flicker_dyn();

		static bool isFlickering( ::flixel::FlxObject Object);
		static ::Dynamic isFlickering_dyn();

		static  ::flixel::FlxObject stopFlickering( ::flixel::FlxObject Object);
		static ::Dynamic stopFlickering_dyn();

		static  ::flixel::FlxSprite fadeIn( ::flixel::FlxSprite sprite,::hx::Null< Float >  Duration, ::Dynamic ResetAlpha, ::Dynamic OnComplete);
		static ::Dynamic fadeIn_dyn();

		static  ::flixel::FlxSprite fadeOut( ::flixel::FlxSprite sprite,::hx::Null< Float >  Duration, ::Dynamic OnComplete);
		static ::Dynamic fadeOut_dyn();

		static void alphaTween( ::flixel::FlxSprite sprite,Float f);
		static ::Dynamic alphaTween_dyn();

		static void setTint( ::flixel::FlxSprite sprite,int tint);
		static ::Dynamic setTint_dyn();

		static  ::flixel::FlxSprite flashTint( ::flixel::FlxSprite sprite,::hx::Null< int >  tint,::hx::Null< Float >  duration, ::Dynamic func, ::Dynamic onComplete);
		static ::Dynamic flashTint_dyn();

		static void setBrightness( ::flixel::FlxSprite sprite,Float brightness);
		static ::Dynamic setBrightness_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSpriteUtil */ 
