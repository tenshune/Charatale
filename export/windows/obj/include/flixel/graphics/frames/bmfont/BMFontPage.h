#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPage
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_beb330bf8a27fae6_22_new)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontPage)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontPage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontPage_obj OBJ_;
		BMFontPage_obj();

	public:
		enum { _hx_ClassId = 0x7af97334 };

		void __construct(int id,::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.bmfont.BMFontPage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.bmfont.BMFontPage"); }

		inline static ::hx::ObjectPtr< BMFontPage_obj > __new(int id,::String file) {
			::hx::ObjectPtr< BMFontPage_obj > __this = new BMFontPage_obj();
			__this->__construct(id,file);
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontPage_obj > __alloc(::hx::Ctx *_hx_ctx,int id,::String file) {
			BMFontPage_obj *__this = (BMFontPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontPage_obj), true, "flixel.graphics.frames.bmfont.BMFontPage"));
			*(void **)__this = BMFontPage_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_beb330bf8a27fae6_22_new)
HXLINE(  23)		( ( ::flixel::graphics::frames::bmfont::BMFontPage)(__this) )->id = id;
HXLINE(  24)		( ( ::flixel::graphics::frames::bmfont::BMFontPage)(__this) )->file = file;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontPage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontPage",a9,30,51,ac); }

		static  ::flixel::graphics::frames::bmfont::BMFontPage fromXml( ::Xml pageNode);
		static ::Dynamic fromXml_dyn();

		static ::Array< ::Dynamic> listFromXml( ::Xml pagesNode);
		static ::Dynamic listFromXml_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontPage fromText(::String pageText);
		static ::Dynamic fromText_dyn();

		static ::Array< ::Dynamic> listFromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic listFromBytes_dyn();

		int id;
		::String file;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontPage */ 
