#ifndef INCLUDED_flixel_system_debug_console_Console
#define INCLUDED_flixel_system_debug_console_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,console,ConsoleHistory)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES Console_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Console_obj OBJ_;
		Console_obj();

	public:
		enum { _hx_ClassId = 0x1794d644 };

		void __construct( ::flixel::_hx_system::debug::completion::CompletionList completionList);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.Console")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.console.Console"); }
		static ::hx::ObjectPtr< Console_obj > __new( ::flixel::_hx_system::debug::completion::CompletionList completionList);
		static ::hx::ObjectPtr< Console_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Console",37,13,27,e6); }

		static void __boot();
		static ::String DEFAULT_TEXT;
		 ::haxe::ds::StringMap registeredObjects;
		 ::haxe::ds::StringMap registeredFunctions;
		 ::haxe::ds::StringMap registeredHelp;
		::Array< ::Dynamic> objectStack;
		 ::openfl::text::TextField input;
		bool inputMouseDown;
		bool stageMouseDown;
		 ::flixel::_hx_system::debug::console::ConsoleHistory history;
		 ::flixel::_hx_system::debug::completion::CompletionList completionList;
		void createInputTextField();
		::Dynamic createInputTextField_dyn();

		void registerEventListeners();
		::Dynamic registerEventListeners_dyn();

		void update();

		void onFocus( ::openfl::events::FocusEvent _);
		::Dynamic onFocus_dyn();

		void onFocusLost( ::openfl::events::FocusEvent _);
		::Dynamic onFocusLost_dyn();

		void onKeyDown( ::openfl::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		void setText(::String text);
		::Dynamic setText_dyn();

		void processCommand();
		::Dynamic processCommand_dyn();

		void reposition(Float x,Float y);

		void registerFunction(::String alias, ::Dynamic func,::String helpText);
		::Dynamic registerFunction_dyn();

		void registerObject(::String alias, ::Dynamic object);
		::Dynamic registerObject_dyn();

		void removeByAlias(::String alias);
		::Dynamic removeByAlias_dyn();

		void removeObject( ::Dynamic object);
		::Dynamic removeObject_dyn();

		void removeFunction( ::Dynamic func);
		::Dynamic removeFunction_dyn();

		void registerClass(::hx::Class c);
		::Dynamic registerClass_dyn();

		void removeClass(::hx::Class c);
		::Dynamic removeClass_dyn();

		void registerEnum(::hx::Class e);
		::Dynamic registerEnum_dyn();

		void removeEnum(::hx::Class e);
		::Dynamic removeEnum_dyn();

		void destroy();

		void updateSize();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_Console */ 
