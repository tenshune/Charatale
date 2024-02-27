#ifndef INCLUDED_mapStates_theRuins_Zone1
#define INCLUDED_mapStates_theRuins_Zone1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(mapStates,theRuins,Zone1)

namespace mapStates{
namespace theRuins{


class HXCPP_CLASS_ATTRIBUTES Zone1_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef Zone1_obj OBJ_;
		Zone1_obj();

	public:
		enum { _hx_ClassId = 0x6db6d34d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="mapStates.theRuins.Zone1")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"mapStates.theRuins.Zone1"); }
		static ::hx::ObjectPtr< Zone1_obj > __new();
		static ::hx::ObjectPtr< Zone1_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Zone1_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Zone1",65,b4,c2,1b); }

		 ::flixel::FlxSprite zone;
		 ::flixel::FlxSprite chara;
		 ::flixel::FlxSprite charaCol;
		bool canMove;
		 ::flixel::FlxSprite col1;
		 ::flixel::FlxSprite col2;
		 ::flixel::FlxSprite col3;
		 ::flixel::FlxSprite col4;
		 ::flixel::FlxSprite col5;
		 ::flixel::FlxSprite col6;
		 ::flixel::FlxSprite col7;
		 ::flixel::FlxSprite col8;
		 ::flixel::FlxSprite col9;
		 ::flixel::FlxSprite col10;
		 ::flixel::FlxSprite col11;
		 ::flixel::FlxSprite col12;
		 ::flixel::FlxSprite col13;
		 ::flixel::FlxSprite col14;
		 ::flixel::FlxSprite tp;
		 ::flixel::FlxSprite dark;
		 ::flixel::util::FlxSave save;
		 ::flixel::FlxSprite portrait;
		 ::flixel::FlxSprite textBox;
		 ::flixel::text::FlxText text;
		::String textToAnimate;
		::String lang;
		void create();

		void shakeCmrAnim( ::flixel::tweens::FlxTween t);
		::Dynamic shakeCmrAnim_dyn();

		void anim1( ::flixel::util::FlxTimer t);
		::Dynamic anim1_dyn();

		void anim2( ::flixel::util::FlxTimer t);
		::Dynamic anim2_dyn();

		int dial;
		void textChange( ::flixel::tweens::FlxTween t);
		::Dynamic textChange_dyn();

		Float inter;
		void update(Float elapsed);

		void moveAgain( ::flixel::tweens::FlxTween t);
		::Dynamic moveAgain_dyn();

		 ::flixel::FlxSprite createAndAddFlxSprite(int x,int y,int width,int height, ::Dynamic color);
		::Dynamic createAndAddFlxSprite_dyn();

		void Zone2();
		::Dynamic Zone2_dyn();

		void switchA( ::flixel::tweens::FlxTween t);
		::Dynamic switchA_dyn();

};

} // end namespace mapStates
} // end namespace theRuins

#endif /* INCLUDED_mapStates_theRuins_Zone1 */ 
