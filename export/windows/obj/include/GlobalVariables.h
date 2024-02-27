#ifndef INCLUDED_GlobalVariables
#define INCLUDED_GlobalVariables

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GlobalVariables)



class HXCPP_CLASS_ATTRIBUTES GlobalVariables_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlobalVariables_obj OBJ_;
		GlobalVariables_obj();

	public:
		enum { _hx_ClassId = 0x1ec7582c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="GlobalVariables")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"GlobalVariables"); }

		inline static ::hx::ObjectPtr< GlobalVariables_obj > __new() {
			::hx::ObjectPtr< GlobalVariables_obj > __this = new GlobalVariables_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GlobalVariables_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GlobalVariables_obj *__this = (GlobalVariables_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlobalVariables_obj), false, "GlobalVariables"));
			*(void **)__this = GlobalVariables_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlobalVariables_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlobalVariables",b4,d4,8d,f4); }

		static void __boot();
		static int gameID;
		static ::String gamePrivateKey;
		static Float dark;
		static bool newGame;
		static ::String bZone;
};


#endif /* INCLUDED_GlobalVariables */ 
