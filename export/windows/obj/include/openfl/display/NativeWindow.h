#ifndef INCLUDED_openfl_display_NativeWindow
#define INCLUDED_openfl_display_NativeWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,NativeWindow)
HX_DECLARE_CLASS2(openfl,display,NativeWindowInitOptions)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Window)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES NativeWindow_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef NativeWindow_obj OBJ_;
		NativeWindow_obj();

	public:
		enum { _hx_ClassId = 0x7ed78f1d };

		void __construct( ::openfl::display::NativeWindowInitOptions initOptions);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.NativeWindow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.NativeWindow"); }
		static ::hx::ObjectPtr< NativeWindow_obj > __new( ::openfl::display::NativeWindowInitOptions initOptions);
		static ::hx::ObjectPtr< NativeWindow_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::NativeWindowInitOptions initOptions);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindow_obj();

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
		::String __ToString() const { return HX_("NativeWindow",07,e9,b5,cf); }

		static void __boot();
		static ::String ERROR_CLOSED;
		static bool get_isSupported();
		static ::Dynamic get_isSupported_dyn();

		static bool get_supportsMenu();
		static ::Dynamic get_supportsMenu_dyn();

		static bool get_supportsTransparency();
		static ::Dynamic get_supportsTransparency_dyn();

		 ::openfl::display::NativeWindowInitOptions _hx___initOptions;
		 ::openfl::display::Window _hx___window;
		bool _hx___closed;
		int _hx___previousX;
		int _hx___previousY;
		int _hx___previousWidth;
		int _hx___previousHeight;
		 ::Dynamic _hx___previousDisplayState;
		bool _hx___active;
		 ::openfl::_Vector::ObjectVector _hx___ownedWindows;
		 ::openfl::display::Stage get_stage();
		::Dynamic get_stage_dyn();

		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float value);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float value);
		::Dynamic set_y_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_height(Float value);
		::Dynamic set_height_dyn();

		 ::openfl::geom::Rectangle get_bounds();
		::Dynamic get_bounds_dyn();

		 ::openfl::geom::Rectangle set_bounds( ::openfl::geom::Rectangle value);
		::Dynamic set_bounds_dyn();

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String value);
		::Dynamic set_title_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		 ::Dynamic get_systemChrome();
		::Dynamic get_systemChrome_dyn();

		 ::Dynamic get_displayState();
		::Dynamic get_displayState_dyn();

		bool get_active();
		::Dynamic get_active_dyn();

		bool get_closed();
		::Dynamic get_closed_dyn();

		bool get_maximizable();
		::Dynamic get_maximizable_dyn();

		bool get_minimizable();
		::Dynamic get_minimizable_dyn();

		 ::openfl::display::NativeWindow get_owner();
		::Dynamic get_owner_dyn();

		::String get_renderMode();
		::Dynamic get_renderMode_dyn();

		bool get_resizable();
		::Dynamic get_resizable_dyn();

		bool get_transparent();
		::Dynamic get_transparent_dyn();

		 ::openfl::geom::Point get_minSize();
		::Dynamic get_minSize_dyn();

		 ::openfl::geom::Point set_minSize( ::openfl::geom::Point value);
		::Dynamic set_minSize_dyn();

		 ::openfl::geom::Point get_maxSize();
		::Dynamic get_maxSize_dyn();

		 ::openfl::geom::Point set_maxSize( ::openfl::geom::Point value);
		::Dynamic set_maxSize_dyn();

		void activate();
		::Dynamic activate_dyn();

		void close();
		::Dynamic close_dyn();

		void minimize();
		::Dynamic minimize_dyn();

		void maximize();
		::Dynamic maximize_dyn();

		void restore();
		::Dynamic restore_dyn();

		 ::openfl::_Vector::ObjectVector listOwnedWindows();
		::Dynamic listOwnedWindows_dyn();

		void window_onFocusIn();
		::Dynamic window_onFocusIn_dyn();

		void window_onFocusOut();
		::Dynamic window_onFocusOut_dyn();

		void window_onMove(Float x,Float y);
		::Dynamic window_onMove_dyn();

		void window_onResize(Float width,Float height);
		::Dynamic window_onResize_dyn();

		void window_onMinimize();
		::Dynamic window_onMinimize_dyn();

		void window_onMaximize();
		::Dynamic window_onMaximize_dyn();

		void window_onRestore();
		::Dynamic window_onRestore_dyn();

		void window_onClose();
		::Dynamic window_onClose_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_NativeWindow */ 
