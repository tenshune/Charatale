#ifndef INCLUDED_lime_ui_FileDialog
#define INCLUDED_lime_ui_FileDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,_Event_Array_String__Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_utils_Resource_Void)
HX_DECLARE_CLASS2(lime,ui,FileDialog)
HX_DECLARE_CLASS2(lime,ui,FileDialogType)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FileDialog_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FileDialog_obj OBJ_;
		FileDialog_obj();

	public:
		enum { _hx_ClassId = 0x0c6b7285 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.ui.FileDialog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.ui.FileDialog"); }
		static ::hx::ObjectPtr< FileDialog_obj > __new();
		static ::hx::ObjectPtr< FileDialog_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileDialog_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileDialog",84,50,68,88); }

		 ::lime::app::_Event_Void_Void onCancel;
		 ::lime::app::_Event_lime_utils_Resource_Void onOpen;
		 ::lime::app::_Event_String_Void onSave;
		 ::lime::app::_Event_String_Void onSelect;
		 ::lime::app::_Event_Array_String__Void onSelectMultiple;
		bool browse( ::lime::ui::FileDialogType type,::String filter,::String defaultPath,::String title);
		::Dynamic browse_dyn();

		bool open(::String filter,::String defaultPath,::String title);
		::Dynamic open_dyn();

		bool save( ::haxe::io::Bytes data,::String filter,::String defaultPath,::String title,::String type);
		::Dynamic save_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_FileDialog */ 
