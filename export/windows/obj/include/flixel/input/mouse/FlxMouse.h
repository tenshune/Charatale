#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#define INCLUDED_flixel_input_mouse_FlxMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseButton)
HX_DECLARE_CLASS3(flixel,_hx_system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES FlxMouse_obj : public  ::flixel::input::FlxPointer_obj
{
	public:
		typedef  ::flixel::input::FlxPointer_obj super;
		typedef FlxMouse_obj OBJ_;
		FlxMouse_obj();

	public:
		enum { _hx_ClassId = 0x5316fc32 };

		void __construct( ::openfl::display::Sprite cursorContainer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouse")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.mouse.FlxMouse"); }
		static ::hx::ObjectPtr< FlxMouse_obj > __new( ::openfl::display::Sprite cursorContainer);
		static ::hx::ObjectPtr< FlxMouse_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Sprite cursorContainer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMouse_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxMouse",73,20,3f,c9); }

		bool enabled;
		int wheel;
		 ::openfl::display::Sprite cursorContainer;
		 ::openfl::display::Bitmap cursor;
		bool visible;
		bool useSystemCursor;
		 ::flixel::input::mouse::FlxMouseButton _leftButton;
		 ::flixel::input::mouse::FlxMouseButton _middleButton;
		 ::flixel::input::mouse::FlxMouseButton _rightButton;
		 ::openfl::display::BitmapData _cursorBitmapData;
		bool _wheelUsed;
		bool _visibleWhenFocusLost;
		int _lastX;
		int _lastY;
		int _lastWheel;
		int _lastLeftButtonState;
		int _prevX;
		int _prevY;
		int _prevScreenX;
		int _prevScreenY;
		 ::openfl::display::Stage _stage;
		void load( ::Dynamic Graphic,::hx::Null< Float >  Scale,::hx::Null< int >  XOffset,::hx::Null< int >  YOffset);
		::Dynamic load_dyn();

		void unload();
		::Dynamic unload_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void onGameStart();
		::Dynamic onGameStart_dyn();

		void onMouseWheel( ::openfl::events::MouseEvent flashEvent);
		::Dynamic onMouseWheel_dyn();

		void onMouseLeave( ::openfl::events::Event _);
		::Dynamic onMouseLeave_dyn();

		bool get_justMoved();
		::Dynamic get_justMoved_dyn();

		int get_deltaX();
		::Dynamic get_deltaX_dyn();

		int get_deltaY();
		::Dynamic get_deltaY_dyn();

		int get_deltaScreenX();
		::Dynamic get_deltaScreenX_dyn();

		int get_deltaScreenY();
		::Dynamic get_deltaScreenY_dyn();

		bool get_pressed();
		::Dynamic get_pressed_dyn();

		bool get_justPressed();
		::Dynamic get_justPressed_dyn();

		bool get_released();
		::Dynamic get_released_dyn();

		bool get_justReleased();
		::Dynamic get_justReleased_dyn();

		int get_justPressedTimeInTicks();
		::Dynamic get_justPressedTimeInTicks_dyn();

		bool get_pressedRight();
		::Dynamic get_pressedRight_dyn();

		bool get_justPressedRight();
		::Dynamic get_justPressedRight_dyn();

		bool get_releasedRight();
		::Dynamic get_releasedRight_dyn();

		bool get_justReleasedRight();
		::Dynamic get_justReleasedRight_dyn();

		int get_justPressedTimeInTicksRight();
		::Dynamic get_justPressedTimeInTicksRight_dyn();

		bool get_pressedMiddle();
		::Dynamic get_pressedMiddle_dyn();

		bool get_justPressedMiddle();
		::Dynamic get_justPressedMiddle_dyn();

		bool get_releasedMiddle();
		::Dynamic get_releasedMiddle_dyn();

		bool get_justReleasedMiddle();
		::Dynamic get_justReleasedMiddle_dyn();

		int get_justPressedTimeInTicksMiddle();
		::Dynamic get_justPressedTimeInTicksMiddle_dyn();

		void showSystemCursor();
		::Dynamic showSystemCursor_dyn();

		void hideSystemCursor();
		::Dynamic hideSystemCursor_dyn();

		bool set_useSystemCursor(bool value);
		::Dynamic set_useSystemCursor_dyn();

		void showCursor();
		::Dynamic showCursor_dyn();

		void hideCursor();
		::Dynamic hideCursor_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		 ::flixel::_hx_system::replay::MouseRecord record();
		::Dynamic record_dyn();

		void playback( ::flixel::_hx_system::replay::MouseRecord record);
		::Dynamic playback_dyn();

		 ::openfl::display::Bitmap get__cursor();
		::Dynamic get__cursor_dyn();

		 ::openfl::display::Bitmap set__cursor( ::openfl::display::Bitmap value);
		::Dynamic set__cursor_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouse */ 
