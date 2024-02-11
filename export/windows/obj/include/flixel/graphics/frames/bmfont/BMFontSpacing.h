#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontSpacing
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontSpacing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_319c3b7c9cf620d2_175_new)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontSpacing)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontSpacing_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontSpacing_obj OBJ_;
		BMFontSpacing_obj();

	public:
		enum { _hx_ClassId = 0x5bd538a2 };

		void __construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont.BMFontSpacing")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont.BMFontSpacing"); }

		inline static ::hx::ObjectPtr< BMFontSpacing_obj > __new(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y) {
			::hx::ObjectPtr< BMFontSpacing_obj > __this = new BMFontSpacing_obj();
			__this->__construct(__o_x,__o_y);
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontSpacing_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y) {
			BMFontSpacing_obj *__this = (BMFontSpacing_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontSpacing_obj), false, "flixel.graphics.frames.bmfont.BMFontSpacing"));
			*(void **)__this = BMFontSpacing_obj::_hx_vtable;
{
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_319c3b7c9cf620d2_175_new)
HXLINE( 178)		( ( ::flixel::graphics::frames::bmfont::BMFontSpacing)(__this) )->y = 0;
HXLINE( 177)		( ( ::flixel::graphics::frames::bmfont::BMFontSpacing)(__this) )->x = 0;
HXLINE( 182)		( ( ::flixel::graphics::frames::bmfont::BMFontSpacing)(__this) )->x = x;
HXLINE( 183)		( ( ::flixel::graphics::frames::bmfont::BMFontSpacing)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontSpacing_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontSpacing",69,d1,f2,4c); }

		static  ::flixel::graphics::frames::bmfont::BMFontSpacing fromString(::String data);
		static ::Dynamic fromString_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontSpacing fromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic fromBytes_dyn();

		int x;
		int y;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontSpacing */ 
