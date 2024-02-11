#ifndef INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_
#define INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxDirectionFlags,FlxDirectionFlags_Impl_)

namespace flixel{
namespace util{
namespace _FlxDirectionFlags{


class HXCPP_CLASS_ATTRIBUTES FlxDirectionFlags_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxDirectionFlags_Impl__obj OBJ_;
		FlxDirectionFlags_Impl__obj();

	public:
		enum { _hx_ClassId = 0x13f9d119 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_"); }

		inline static ::hx::ObjectPtr< FlxDirectionFlags_Impl__obj > __new() {
			::hx::ObjectPtr< FlxDirectionFlags_Impl__obj > __this = new FlxDirectionFlags_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxDirectionFlags_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxDirectionFlags_Impl__obj *__this = (FlxDirectionFlags_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDirectionFlags_Impl__obj), false, "flixel.util._FlxDirectionFlags.FlxDirectionFlags_Impl_"));
			*(void **)__this = FlxDirectionFlags_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxDirectionFlags_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxDirectionFlags_Impl_",9a,c4,2e,70); }

		static void __boot();
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int NONE;
		static int CEILING;
		static int FLOOR;
		static int WALL;
		static int ANY;
		static Float get_degrees(int this1);
		static ::Dynamic get_degrees_dyn();

		static Float get_radians(int this1);
		static ::Dynamic get_radians_dyn();

		static bool has(int this1,int dir);
		static ::Dynamic has_dyn();

		static bool hasAny(int this1,int dir);
		static ::Dynamic hasAny_dyn();

		static int with(int this1,int dir);
		static ::Dynamic with_dyn();

		static int without(int this1,int dir);
		static ::Dynamic without_dyn();

		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

		static int fromBools(bool left,bool right,bool up,bool down);
		static ::Dynamic fromBools_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxDirectionFlags

#endif /* INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_ */ 
