#ifndef INCLUDED_flixel_system__FlxAssets_FlxAngelCodeAsset_Impl_
#define INCLUDED_flixel_system__FlxAssets_FlxAngelCodeAsset_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFont)
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxAssets,FlxAngelCodeAsset_Impl_)

namespace flixel{
namespace _hx_system{
namespace _FlxAssets{


class HXCPP_CLASS_ATTRIBUTES FlxAngelCodeAsset_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAngelCodeAsset_Impl__obj OBJ_;
		FlxAngelCodeAsset_Impl__obj();

	public:
		enum { _hx_ClassId = 0x534d6f0f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system._FlxAssets.FlxAngelCodeAsset_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system._FlxAssets.FlxAngelCodeAsset_Impl_"); }

		inline static ::hx::ObjectPtr< FlxAngelCodeAsset_Impl__obj > __new() {
			::hx::ObjectPtr< FlxAngelCodeAsset_Impl__obj > __this = new FlxAngelCodeAsset_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxAngelCodeAsset_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxAngelCodeAsset_Impl__obj *__this = (FlxAngelCodeAsset_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAngelCodeAsset_Impl__obj), false, "flixel.system._FlxAssets.FlxAngelCodeAsset_Impl_"));
			*(void **)__this = FlxAngelCodeAsset_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAngelCodeAsset_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAngelCodeAsset_Impl_",14,af,69,93); }

		static  ::flixel::graphics::frames::bmfont::BMFont parse( ::Dynamic this1);
		static ::Dynamic parse_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets

#endif /* INCLUDED_flixel_system__FlxAssets_FlxAngelCodeAsset_Impl_ */ 
