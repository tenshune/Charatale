#ifndef INCLUDED_player_Movement
#define INCLUDED_player_Movement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(player,Movement)

namespace player{


class HXCPP_CLASS_ATTRIBUTES Movement_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Movement_obj OBJ_;
		Movement_obj();

	public:
		enum { _hx_ClassId = 0x19cf3570 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="player.Movement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"player.Movement"); }

		inline static ::hx::ObjectPtr< Movement_obj > __new() {
			::hx::ObjectPtr< Movement_obj > __this = new Movement_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Movement_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Movement_obj *__this = (Movement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Movement_obj), false, "player.Movement"));
			*(void **)__this = Movement_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Movement_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Movement",4f,41,e9,d9); }

		static void keyboardMove( ::flixel::FlxSprite playerChar, ::Dynamic anims, ::Dynamic move);
		static ::Dynamic keyboardMove_dyn();

		static void gamePadMove( ::flixel::FlxSprite playerChar);
		static ::Dynamic gamePadMove_dyn();

		static void updateGamepadInput( ::flixel::input::gamepad::FlxGamepad gamepad, ::flixel::FlxSprite playerChar);
		static ::Dynamic updateGamepadInput_dyn();

};

} // end namespace player

#endif /* INCLUDED_player_Movement */ 
