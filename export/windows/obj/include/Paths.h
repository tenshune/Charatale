#ifndef INCLUDED_Paths
#define INCLUDED_Paths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Paths)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Paths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Paths_obj OBJ_;
		Paths_obj();

	public:
		enum { _hx_ClassId = 0x44c8e46a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Paths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Paths"); }

		inline static ::hx::ObjectPtr< Paths_obj > __new() {
			::hx::ObjectPtr< Paths_obj > __this = new Paths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Paths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Paths_obj *__this = (Paths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Paths_obj), false, "Paths"));
			*(void **)__this = Paths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Paths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Paths",0e,7b,84,50); }

		static  ::flixel::graphics::frames::FlxAtlasFrames getSparrowAtlas(::String bitmap);
		static ::Dynamic getSparrowAtlas_dyn();

		static ::String image(::String name);
		static ::Dynamic image_dyn();

		static ::String portImage(::String name,::String _hx_char);
		static ::Dynamic portImage_dyn();

		static ::String mapImg(::String name,::String map);
		static ::Dynamic mapImg_dyn();

		static ::String trophieImg(::String name);
		static ::Dynamic trophieImg_dyn();

		static ::String font(::String name);
		static ::Dynamic font_dyn();

		static ::String fontO(::String name);
		static ::Dynamic fontO_dyn();

		static ::String lang(::String lang,::String name);
		static ::Dynamic lang_dyn();

		static ::String langImg(::String lang,::String name);
		static ::Dynamic langImg_dyn();

		static ::String sound(::String soundName);
		static ::Dynamic sound_dyn();

};


#endif /* INCLUDED_Paths */ 
