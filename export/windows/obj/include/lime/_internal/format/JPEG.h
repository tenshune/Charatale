#ifndef INCLUDED_lime__internal_format_JPEG
#define INCLUDED_lime__internal_format_JPEG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,JPEG)
HX_DECLARE_CLASS2(lime,graphics,Image)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES JPEG_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JPEG_obj OBJ_;
		JPEG_obj();

	public:
		enum { _hx_ClassId = 0x7fb037b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.JPEG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.format.JPEG"); }

		inline static ::hx::ObjectPtr< JPEG_obj > __new() {
			::hx::ObjectPtr< JPEG_obj > __this = new JPEG_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JPEG_obj > __alloc(::hx::Ctx *_hx_ctx) {
			JPEG_obj *__this = (JPEG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JPEG_obj), false, "lime._internal.format.JPEG"));
			*(void **)__this = JPEG_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JPEG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JPEG",a8,ba,26,31); }

		static  ::lime::graphics::Image decodeBytes( ::haxe::io::Bytes bytes,::hx::Null< bool >  decodeData);
		static ::Dynamic decodeBytes_dyn();

		static  ::lime::graphics::Image decodeFile(::String path,::hx::Null< bool >  decodeData);
		static ::Dynamic decodeFile_dyn();

		static  ::haxe::io::Bytes encode( ::lime::graphics::Image image,int quality);
		static ::Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_JPEG */ 
