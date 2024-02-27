#ifndef INCLUDED_gameJoltAPI_Utils
#define INCLUDED_gameJoltAPI_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(gameJoltAPI,Utils)
HX_DECLARE_CLASS2(haxe,http,HttpBase)
HX_DECLARE_CLASS1(sys,Http)

namespace gameJoltAPI{


class HXCPP_CLASS_ATTRIBUTES Utils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();

	public:
		enum { _hx_ClassId = 0x4f7e45fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="gameJoltAPI.Utils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"gameJoltAPI.Utils"); }

		inline static ::hx::ObjectPtr< Utils_obj > __new() {
			::hx::ObjectPtr< Utils_obj > __this = new Utils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Utils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Utils_obj *__this = (Utils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Utils_obj), false, "gameJoltAPI.Utils"));
			*(void **)__this = Utils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Utils",11,1a,0c,3e); }

		static void __boot();
		static bool has_game_id;
		static int game_id;
		static  ::Dynamic get_game_id();
		static ::Dynamic get_game_id_dyn();

		static int set_game_id(int v);
		static ::Dynamic set_game_id_dyn();

		static bool has_gamePrivKey;
		static ::String gamePrivKey;
		static ::String get_gamePrivKey();
		static ::Dynamic get_gamePrivKey_dyn();

		static ::String set_gamePrivKey(::String v);
		static ::Dynamic set_gamePrivKey_dyn();

		static int user_id;
		static ::String user_token;
		static ::String username;
		static bool batching;
		static ::String batchString;
		static  ::sys::Http r;
		static ::String BASE_URL;
		static ::String sign(::String call);
		static ::Dynamic sign_dyn();

		static ::String formCall(::String base,::Array< ::String > keys,::Array< ::String > values,int index,::hx::Null< bool >  addSig);
		static ::Dynamic formCall_dyn();

		static ::String addParameter(::String call,::String param,::String value);
		static ::Dynamic addParameter_dyn();

		static void request(::String url,::String caller, ::Dynamic post, ::Dynamic onData, ::Dynamic onError);
		static ::Dynamic request_dyn();

};

} // end namespace gameJoltAPI

#endif /* INCLUDED_gameJoltAPI_Utils */ 
