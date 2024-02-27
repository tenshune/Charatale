#ifndef INCLUDED_GamejoltLogin
#define INCLUDED_GamejoltLogin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(GamejoltLogin)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES GamejoltLogin_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef GamejoltLogin_obj OBJ_;
		GamejoltLogin_obj();

	public:
		enum { _hx_ClassId = 0x6421c6de };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GamejoltLogin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GamejoltLogin"); }
		static ::hx::ObjectPtr< GamejoltLogin_obj > __new();
		static ::hx::ObjectPtr< GamejoltLogin_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GamejoltLogin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GamejoltLogin",4a,81,6a,1b); }

		 ::flixel::FlxSprite userNamebox;
		 ::flixel::FlxSprite userNameboxF;
		 ::flixel::FlxSprite tokenbox;
		 ::flixel::FlxSprite tokenboxF;
		 ::flixel::text::FlxText game;
		 ::flixel::text::FlxText jolt;
		 ::flixel::text::FlxText username;
		 ::flixel::text::FlxText token;
		int selected;
		 ::flixel::ui::FlxButton auth;
		 ::flixel::text::FlxText authText;
		bool authenticated;
		 ::flixel::ui::FlxButton back;
		 ::flixel::text::FlxText backText;
		 ::flixel::ui::FlxButton authA;
		 ::flixel::text::FlxText authAText;
		 ::flixel::text::FlxText errorOnLogin;
		 ::flixel::text::FlxText successfully;
		 ::flixel::util::FlxSave save;
		::String user;
		::String tok;
		 ::flixel::FlxSprite dark;
		::String lang;
		void create();

		void Auth();
		::Dynamic Auth_dyn();

		void AuthAgain();
		::Dynamic AuthAgain_dyn();

		void Success(bool s);
		::Dynamic Success_dyn();

		void errorDis( ::flixel::util::FlxTimer tim);
		::Dynamic errorDis_dyn();

		void Back();
		::Dynamic Back_dyn();

		void switchA( ::flixel::tweens::FlxTween t);
		::Dynamic switchA_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_GamejoltLogin */ 
