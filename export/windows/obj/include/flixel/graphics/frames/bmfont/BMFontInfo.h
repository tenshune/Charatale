#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontInfo)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontPadding)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontSpacing)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontInfo_obj OBJ_;
		BMFontInfo_obj();

	public:
		enum { _hx_ClassId = 0x7662d153 };

		void __construct(::String face,int size,bool bold,bool italic,::String charset,bool unicode,int stretchH,bool smooth,int aa, ::flixel::graphics::frames::bmfont::BMFontPadding padding, ::flixel::graphics::frames::bmfont::BMFontSpacing spacing, ::Dynamic outline, ::Dynamic fixedHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.bmfont.BMFontInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.bmfont.BMFontInfo"); }
		static ::hx::ObjectPtr< BMFontInfo_obj > __new(::String face,int size,bool bold,bool italic,::String charset,bool unicode,int stretchH,bool smooth,int aa, ::flixel::graphics::frames::bmfont::BMFontPadding padding, ::flixel::graphics::frames::bmfont::BMFontSpacing spacing, ::Dynamic outline, ::Dynamic fixedHeight);
		static ::hx::ObjectPtr< BMFontInfo_obj > __alloc(::hx::Ctx *_hx_ctx,::String face,int size,bool bold,bool italic,::String charset,bool unicode,int stretchH,bool smooth,int aa, ::flixel::graphics::frames::bmfont::BMFontPadding padding, ::flixel::graphics::frames::bmfont::BMFontSpacing spacing, ::Dynamic outline, ::Dynamic fixedHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontInfo",c8,8e,ba,a7); }

		static  ::flixel::graphics::frames::bmfont::BMFontInfo fromXml( ::Xml infoNode);
		static ::Dynamic fromXml_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontInfo fromText(::String infoText);
		static ::Dynamic fromText_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontInfo fromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic fromBytes_dyn();

		::String face;
		int size;
		bool bold;
		bool italic;
		::String charset;
		bool unicode;
		int stretchH;
		bool smooth;
		int aa;
		 ::flixel::graphics::frames::bmfont::BMFontPadding padding;
		 ::flixel::graphics::frames::bmfont::BMFontSpacing spacing;
		int outline;
		bool fixedHeight;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo */ 
