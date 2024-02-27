#ifndef INCLUDED_flixel_system_debug_completion_CompletionListEntry
#define INCLUDED_flixel_system_debug_completion_CompletionListEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionListEntry)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES CompletionListEntry_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef CompletionListEntry_obj OBJ_;
		CompletionListEntry_obj();

	public:
		enum { _hx_ClassId = 0x649ff578 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionListEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.completion.CompletionListEntry"); }
		static ::hx::ObjectPtr< CompletionListEntry_obj > __new();
		static ::hx::ObjectPtr< CompletionListEntry_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompletionListEntry_obj();

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
		::String __ToString() const { return HX_("CompletionListEntry",58,80,f3,16); }

		static void __boot();
		static int WIDTH;
		static int HEIGHT;
		static int COLOR_NORMAL;
		static int COLOR_HIGHLIGHT;
		static int GUTTER;
		static  ::openfl::display::BitmapData normalBitmapData;
		static  ::openfl::display::BitmapData highlightBitmapData;
		bool selected;
		 ::openfl::display::Bitmap background;
		 ::openfl::text::TextField label;
		void initBitmapDatas();
		::Dynamic initBitmapDatas_dyn();

		void setItem(::String item);
		::Dynamic setItem_dyn();

		bool set_selected(bool selected);
		::Dynamic set_selected_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionListEntry */ 
