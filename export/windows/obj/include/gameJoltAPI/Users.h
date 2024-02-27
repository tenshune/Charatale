#ifndef INCLUDED_gameJoltAPI_Users
#define INCLUDED_gameJoltAPI_Users

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(gameJoltAPI,Users)

namespace gameJoltAPI{


class HXCPP_CLASS_ATTRIBUTES Users_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Users_obj OBJ_;
		Users_obj();

	public:
		enum { _hx_ClassId = 0x4ed20b95 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="gameJoltAPI.Users")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"gameJoltAPI.Users"); }

		inline static ::hx::ObjectPtr< Users_obj > __new() {
			::hx::ObjectPtr< Users_obj > __this = new Users_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Users_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Users_obj *__this = (Users_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Users_obj), false, "gameJoltAPI.Users"));
			*(void **)__this = Users_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Users_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Users",a8,df,5f,3d); }

		static void __boot();
		static ::String className;
		static  ::Dynamic result;
		static bool get_lastRequestSuccess();
		static ::Dynamic get_lastRequestSuccess_dyn();

		static void fetch(::Array< int > user_id,::String username, ::Dynamic onData, ::Dynamic onError);
		static ::Dynamic fetch_dyn();

		static void auth(::String username,::String user_token, ::Dynamic onData, ::Dynamic onError);
		static ::Dynamic auth_dyn();

};

} // end namespace gameJoltAPI

#endif /* INCLUDED_gameJoltAPI_Users */ 
