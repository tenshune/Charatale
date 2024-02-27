#ifndef INCLUDED_ChooseName
#define INCLUDED_ChooseName

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(ChooseName)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ChooseName_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef ChooseName_obj OBJ_;
		ChooseName_obj();

	public:
		enum { _hx_ClassId = 0x485cd7a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ChooseName")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ChooseName"); }
		static ::hx::ObjectPtr< ChooseName_obj > __new();
		static ::hx::ObjectPtr< ChooseName_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChooseName_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChooseName",e2,b4,99,30); }

		 ::flixel::text::FlxText nameit;
		::Array< ::Dynamic> letters;
		int xPos;
		int yPos;
		::Array< ::Dynamic> lettersM;
		int yPos2;
		int selected;
		int sel;
		 ::flixel::text::FlxText name;
		::String nameStr;
		 ::flixel::text::FlxText quit;
		 ::flixel::text::FlxText backspace;
		 ::flixel::text::FlxText done;
		bool nameDone;
		 ::flixel::FlxSprite dark;
		 ::flixel::text::FlxText warning;
		 ::flixel::text::FlxText sure;
		 ::flixel::text::FlxText secret;
		bool canSelect;
		 ::flixel::text::FlxText no;
		 ::flixel::text::FlxText yes;
		 ::flixel::text::FlxText back;
		 ::flixel::util::FlxSave save;
		::String lang;
		void create();

		Float shakeIntensity;
		void update(Float elapsed);

		void Back();
		::Dynamic Back_dyn();

		void switchA( ::flixel::tweens::FlxTween t);
		::Dynamic switchA_dyn();

		void conGame();
		::Dynamic conGame_dyn();

		void switchB( ::flixel::tweens::FlxTween t);
		::Dynamic switchB_dyn();

		void doneNaming();
		::Dynamic doneNaming_dyn();

		void notDone();
		::Dynamic notDone_dyn();

};


#endif /* INCLUDED_ChooseName */ 
