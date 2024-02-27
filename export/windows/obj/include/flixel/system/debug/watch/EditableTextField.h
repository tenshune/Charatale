#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#define INCLUDED_flixel_system_debug_watch_EditableTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS0(ValueType)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,EditableTextField)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES EditableTextField_obj : public  ::openfl::text::TextField_obj
{
	public:
		typedef  ::openfl::text::TextField_obj super;
		typedef EditableTextField_obj OBJ_;
		EditableTextField_obj();

	public:
		enum { _hx_ClassId = 0x408e87be };

		void __construct(bool allowEditing, ::openfl::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.EditableTextField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.EditableTextField"); }
		static ::hx::ObjectPtr< EditableTextField_obj > __new(bool allowEditing, ::openfl::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType);
		static ::hx::ObjectPtr< EditableTextField_obj > __alloc(::hx::Ctx *_hx_ctx,bool allowEditing, ::openfl::text::TextFormat defaultFormat, ::Dynamic submitValue, ::ValueType expectedType);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EditableTextField_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("EditableTextField",69,0b,08,7c); }

		bool isEditing;
		bool allowEditing;
		 ::Dynamic submitValue;
		Dynamic submitValue_dyn() { return submitValue;}
		 ::ValueType expectedType;
		 ::openfl::text::TextFormat defaultFormat;
		 ::openfl::text::TextFormat editFormat;
		void destroy();
		::Dynamic destroy_dyn();

		void onMouseUp( ::openfl::events::MouseEvent _);
		::Dynamic onMouseUp_dyn();

		void onKeyUp( ::openfl::events::KeyboardEvent e);
		::Dynamic onKeyUp_dyn();

		void onKeyDown( ::openfl::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		void cycleValue(Float modifier,int selection);
		::Dynamic cycleValue_dyn();

		void selectEnd();
		::Dynamic selectEnd_dyn();

		void cycleNumericValue(Float modifier);
		::Dynamic cycleNumericValue_dyn();

		void cycleEnumValue(::hx::Class e,int modifier);
		::Dynamic cycleEnumValue_dyn();

		void onFocusLost( ::openfl::events::FocusEvent _);
		::Dynamic onFocusLost_dyn();

		void submit();
		::Dynamic submit_dyn();

		void setIsEditing(bool isEditing);
		::Dynamic setIsEditing_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_EditableTextField */ 
