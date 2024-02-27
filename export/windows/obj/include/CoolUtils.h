#ifndef INCLUDED_CoolUtils
#define INCLUDED_CoolUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CoolUtils)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES CoolUtils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CoolUtils_obj OBJ_;
		CoolUtils_obj();

	public:
		enum { _hx_ClassId = 0x39b6fbc8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="CoolUtils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"CoolUtils"); }

		inline static ::hx::ObjectPtr< CoolUtils_obj > __new() {
			::hx::ObjectPtr< CoolUtils_obj > __this = new CoolUtils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CoolUtils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CoolUtils_obj *__this = (CoolUtils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CoolUtils_obj), false, "CoolUtils"));
			*(void **)__this = CoolUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CoolUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CoolUtils",88,86,73,76); }

		static void __boot();
		static bool overlapText( ::flixel::text::FlxText objectToOverlap);
		static ::Dynamic overlapText_dyn();

		static bool overlapSprite( ::flixel::FlxSprite objectToOverlap, ::Dynamic scaleX, ::Dynamic scaleY);
		static ::Dynamic overlapSprite_dyn();

		static int currentIndex;
		static Float timer;
		static void animInit();
		static ::Dynamic animInit_dyn();

		static void textAnimation( ::flixel::text::FlxText text,::String textToAnimate,Float elapsed,::String sound, ::Dynamic interval);
		static ::Dynamic textAnimation_dyn();

		static void collide( ::flixel::FlxSprite obj1, ::flixel::FlxSprite obj2, ::Dynamic trigger, ::Dynamic callBack);
		static ::Dynamic collide_dyn();

};


#endif /* INCLUDED_CoolUtils */ 
