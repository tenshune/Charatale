#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPadding
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontPadding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_389f2ddd7620ccce_135_new)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontPadding)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontPadding_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontPadding_obj OBJ_;
		BMFontPadding_obj();

	public:
		enum { _hx_ClassId = 0x52029e0c };

		void __construct(::hx::Null< int >  __o_up,::hx::Null< int >  __o_right,::hx::Null< int >  __o_down,::hx::Null< int >  __o_left);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont.BMFontPadding")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont.BMFontPadding"); }

		inline static ::hx::ObjectPtr< BMFontPadding_obj > __new(::hx::Null< int >  __o_up,::hx::Null< int >  __o_right,::hx::Null< int >  __o_down,::hx::Null< int >  __o_left) {
			::hx::ObjectPtr< BMFontPadding_obj > __this = new BMFontPadding_obj();
			__this->__construct(__o_up,__o_right,__o_down,__o_left);
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontPadding_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_up,::hx::Null< int >  __o_right,::hx::Null< int >  __o_down,::hx::Null< int >  __o_left) {
			BMFontPadding_obj *__this = (BMFontPadding_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontPadding_obj), false, "flixel.graphics.frames.bmfont.BMFontPadding"));
			*(void **)__this = BMFontPadding_obj::_hx_vtable;
{
            		int up = __o_up.Default(0);
            		int right = __o_right.Default(0);
            		int down = __o_down.Default(0);
            		int left = __o_left.Default(0);
            	HX_STACKFRAME(&_hx_pos_389f2ddd7620ccce_135_new)
HXLINE( 140)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->left = 0;
HXLINE( 139)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->down = 0;
HXLINE( 138)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->right = 0;
HXLINE( 137)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->up = 0;
HXLINE( 144)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->up = up;
HXLINE( 145)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->right = right;
HXLINE( 146)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->down = down;
HXLINE( 147)		( ( ::flixel::graphics::frames::bmfont::BMFontPadding)(__this) )->left = left;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontPadding_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontPadding",b7,f7,b4,8b); }

		static  ::flixel::graphics::frames::bmfont::BMFontPadding fromString(::String data);
		static ::Dynamic fromString_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontPadding fromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic fromBytes_dyn();

		int up;
		int right;
		int down;
		int left;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontPadding */ 
