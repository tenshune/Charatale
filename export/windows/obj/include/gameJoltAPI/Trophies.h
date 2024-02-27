#ifndef INCLUDED_gameJoltAPI_Trophies
#define INCLUDED_gameJoltAPI_Trophies

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(gameJoltAPI,Trophies)

namespace gameJoltAPI{


class HXCPP_CLASS_ATTRIBUTES Trophies_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Trophies_obj OBJ_;
		Trophies_obj();

	public:
		enum { _hx_ClassId = 0x0f834985 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="gameJoltAPI.Trophies")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"gameJoltAPI.Trophies"); }

		inline static ::hx::ObjectPtr< Trophies_obj > __new() {
			::hx::ObjectPtr< Trophies_obj > __this = new Trophies_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Trophies_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Trophies_obj *__this = (Trophies_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Trophies_obj), false, "gameJoltAPI.Trophies"));
			*(void **)__this = Trophies_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Trophies_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Trophies",6e,8f,a8,6c); }

		static void __boot();
		static ::String className;
		static  ::Dynamic result;
		static bool get_lastRequestSuccess();
		static ::Dynamic get_lastRequestSuccess_dyn();

		static void fetch(::String username,::String user_token, ::Dynamic achieved,::Array< int > trophy_id, ::Dynamic onData, ::Dynamic onError);
		static ::Dynamic fetch_dyn();

		static void addAchieved(::String username,::String user_token,int trophy_id, ::Dynamic onData, ::Dynamic onError);
		static ::Dynamic addAchieved_dyn();

		static void remAchieved(::String username,::String user_token,int trophy_id, ::Dynamic onData, ::Dynamic onError);
		static ::Dynamic remAchieved_dyn();

};

} // end namespace gameJoltAPI

#endif /* INCLUDED_gameJoltAPI_Trophies */ 
