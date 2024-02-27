#ifndef INCLUDED_flixel_system_FlxSplash
#define INCLUDED_flixel_system_FlxSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSplash)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxSplash_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef FlxSplash_obj OBJ_;
		FlxSplash_obj();

	public:
		enum { _hx_ClassId = 0x607fd7e6 };

		void __construct( ::Dynamic nextState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxSplash")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.FlxSplash"); }
		static ::hx::ObjectPtr< FlxSplash_obj > __new( ::Dynamic nextState);
		static ::hx::ObjectPtr< FlxSplash_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic nextState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSplash_obj();

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
		::String __ToString() const { return HX_("FlxSplash",59,7b,87,41); }

		static void __boot();
		static bool muted;
		 ::openfl::display::Sprite _sprite;
		 ::openfl::display::Graphics _gfx;
		 ::openfl::text::TextField _text;
		::Array< Float > _times;
		::Array< int > _colors;
		::Array< ::Dynamic> _functions;
		int _curPart;
		int _cachedBgColor;
		bool _cachedTimestep;
		bool _cachedAutoPause;
		 ::Dynamic nextState;
		void create();

		void destroy();

		void complete();
		::Dynamic complete_dyn();

		void onResize(int Width,int Height);

		void timerCallback( ::flixel::util::FlxTimer Timer);
		::Dynamic timerCallback_dyn();

		void drawGreen();
		::Dynamic drawGreen_dyn();

		void drawYellow();
		::Dynamic drawYellow_dyn();

		void drawRed();
		::Dynamic drawRed_dyn();

		void drawBlue();
		::Dynamic drawBlue_dyn();

		void drawLightBlue();
		::Dynamic drawLightBlue_dyn();

		virtual void startOutro( ::Dynamic onOutroComplete);

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxSplash */ 
