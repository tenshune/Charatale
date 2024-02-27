#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422
#define INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7884905029fdefd8_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_rgb_422)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_rgb_422_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef APPLE_rgb_422_obj OBJ_;
		APPLE_rgb_422_obj();

	public:
		enum { _hx_ClassId = 0x7052c56f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_rgb_422")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_rgb_422"); }

		inline static ::hx::ObjectPtr< APPLE_rgb_422_obj > __new() {
			::hx::ObjectPtr< APPLE_rgb_422_obj > __this = new APPLE_rgb_422_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< APPLE_rgb_422_obj > __alloc(::hx::Ctx *_hx_ctx) {
			APPLE_rgb_422_obj *__this = (APPLE_rgb_422_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_rgb_422_obj), false, "lime.graphics.opengl.ext.APPLE_rgb_422"));
			*(void **)__this = APPLE_rgb_422_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7884905029fdefd8_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::APPLE_rgb_422)(__this) )->UNSIGNED_SHORT_8_8_REV_APPLE = 34235;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::APPLE_rgb_422)(__this) )->UNSIGNED_SHORT_8_8_APPLE = 34234;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::APPLE_rgb_422)(__this) )->RGB_422_APPLE = 35359;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~APPLE_rgb_422_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("APPLE_rgb_422",3d,ac,a1,11); }

		int RGB_422_APPLE;
		int UNSIGNED_SHORT_8_8_APPLE;
		int UNSIGNED_SHORT_8_8_REV_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422 */ 
