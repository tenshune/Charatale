#ifndef INCLUDED_TrophiesState
#define INCLUDED_TrophiesState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(TrophiesState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TrophiesState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef TrophiesState_obj OBJ_;
		TrophiesState_obj();

	public:
		enum { _hx_ClassId = 0x7882cd1f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TrophiesState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TrophiesState"); }
		static ::hx::ObjectPtr< TrophiesState_obj > __new();
		static ::hx::ObjectPtr< TrophiesState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrophiesState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrophiesState",c3,a7,6b,cd); }

		 ::flixel::FlxSprite title;
		 ::flixel::FlxSprite troph1;
		 ::flixel::FlxSprite troph2;
		 ::flixel::FlxSprite textBox;
		 ::flixel::text::FlxText text;
		::String textToAnimate;
		bool secret;
		int selected;
		 ::flixel::FlxSprite dark;
		::String lang;
		 ::flixel::util::FlxSave save;
		void create();

		void update(Float elapsed);

		void Back();
		::Dynamic Back_dyn();

		void switchA( ::flixel::tweens::FlxTween t);
		::Dynamic switchA_dyn();

};


#endif /* INCLUDED_TrophiesState */ 
