#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_gameJoltAPI_Trophies
#include <gameJoltAPI/Trophies.h>
#endif
#ifndef INCLUDED_gameJoltAPI_Utils
#include <gameJoltAPI/Utils.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ab51381e8022efc4_11_get_lastRequestSuccess,"gameJoltAPI.Trophies","get_lastRequestSuccess",0x2d511b40,"gameJoltAPI.Trophies.get_lastRequestSuccess","gameJoltAPI/Trophies.hx",11,0x4c5e46fc)
HX_LOCAL_STACK_FRAME(_hx_pos_ab51381e8022efc4_15_fetch,"gameJoltAPI.Trophies","fetch",0x65e3c40d,"gameJoltAPI.Trophies.fetch","gameJoltAPI/Trophies.hx",15,0x4c5e46fc)
static const ::String _hx_array_data_a4f1a001_3[] = {
	HX_("game_id",48,01,79,89),HX_("username",16,86,eb,20),HX_("user_token",c5,a6,03,ca),HX_("achieved",f3,08,37,0e),HX_("trophy_id",0a,e5,90,0f),
};
static const ::String _hx_array_data_a4f1a001_4[] = {
	HX_("game_id",48,01,79,89),HX_("username",16,86,eb,20),HX_("user_token",c5,a6,03,ca),HX_("achieved",f3,08,37,0e),HX_("trophy_id",0a,e5,90,0f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ab51381e8022efc4_33_addAchieved,"gameJoltAPI.Trophies","addAchieved",0x6e9b1047,"gameJoltAPI.Trophies.addAchieved","gameJoltAPI/Trophies.hx",33,0x4c5e46fc)
static const ::String _hx_array_data_a4f1a001_6[] = {
	HX_("game_id",48,01,79,89),HX_("username",16,86,eb,20),HX_("user_token",c5,a6,03,ca),HX_("trophy_id",0a,e5,90,0f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ab51381e8022efc4_40_remAchieved,"gameJoltAPI.Trophies","remAchieved",0x28275880,"gameJoltAPI.Trophies.remAchieved","gameJoltAPI/Trophies.hx",40,0x4c5e46fc)
static const ::String _hx_array_data_a4f1a001_8[] = {
	HX_("game_id",48,01,79,89),HX_("username",16,86,eb,20),HX_("user_token",c5,a6,03,ca),HX_("trophy_id",0a,e5,90,0f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ab51381e8022efc4_6_boot,"gameJoltAPI.Trophies","boot",0x0f0fefbf,"gameJoltAPI.Trophies.boot","gameJoltAPI/Trophies.hx",6,0x4c5e46fc)
namespace gameJoltAPI{

void Trophies_obj::__construct() { }

Dynamic Trophies_obj::__CreateEmpty() { return new Trophies_obj; }

void *Trophies_obj::_hx_vtable = 0;

Dynamic Trophies_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Trophies_obj > _hx_result = new Trophies_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Trophies_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f834985;
}

::String Trophies_obj::className;

 ::Dynamic Trophies_obj::result;

bool Trophies_obj::get_lastRequestSuccess(){
            	HX_STACKFRAME(&_hx_pos_ab51381e8022efc4_11_get_lastRequestSuccess)
HXDLIN(  11)		if (::hx::IsNull( ::gameJoltAPI::Trophies_obj::result )) {
HXDLIN(  11)			return false;
            		}
            		else {
HXDLIN(  11)			return ::hx::IsEq( ::gameJoltAPI::Trophies_obj::result->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic),HX_("true",4e,a7,03,4d) );
            		}
HXDLIN(  11)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Trophies_obj,get_lastRequestSuccess,return )

void Trophies_obj::fetch(::String username,::String user_token, ::Dynamic achieved,::Array< int > trophy_id, ::Dynamic onData, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_ab51381e8022efc4_15_fetch)
HXLINE(  16)		::String url;
HXLINE(  17)		bool _hx_tmp;
HXDLIN(  17)		if (::hx::IsNotNull( trophy_id )) {
HXLINE(  17)			_hx_tmp = (trophy_id->length > 1);
            		}
            		else {
HXLINE(  17)			_hx_tmp = false;
            		}
HXDLIN(  17)		if (_hx_tmp) {
HXLINE(  19)			::String arg = HX_("",00,00,00,00);
HXLINE(  20)			{
HXLINE(  20)				int _g = 0;
HXDLIN(  20)				while((_g < trophy_id->length)){
HXLINE(  20)					int k = trophy_id->__get(_g);
HXDLIN(  20)					_g = (_g + 1);
HXLINE(  21)					arg = (arg + (::Std_obj::string(k) + HX_(",",2c,00,00,00)));
            				}
            			}
HXLINE(  22)			arg = arg.substr(0,(arg.length - 1));
HXLINE(  24)			::String url1 = ::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) ));
HXDLIN(  24)			::String url2;
HXDLIN(  24)			if (( (bool)(achieved) )) {
HXLINE(  24)				url2 = HX_("true",4e,a7,03,4d);
            			}
            			else {
HXLINE(  24)				url2 = HX_("false",a3,35,4f,fb);
            			}
HXLINE(  23)			url = ::gameJoltAPI::Utils_obj::formCall(HX_("trophies/",21,11,02,05),::Array_obj< ::String >::fromData( _hx_array_data_a4f1a001_3,5),::Array_obj< ::String >::__new(5)->init(0,url1)->init(1,username)->init(2,user_token)->init(3,url2)->init(4,arg),5,null());
            		}
            		else {
HXLINE(  28)			::String url1 = ::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) ));
HXDLIN(  28)			::String url2;
HXDLIN(  28)			if (( (bool)(achieved) )) {
HXLINE(  28)				url2 = HX_("true",4e,a7,03,4d);
            			}
            			else {
HXLINE(  28)				url2 = HX_("false",a3,35,4f,fb);
            			}
HXDLIN(  28)			::String url3;
HXDLIN(  28)			if (::hx::IsNotNull( trophy_id )) {
HXLINE(  28)				url3 = ::Std_obj::string(trophy_id->__get(0));
            			}
            			else {
HXLINE(  28)				url3 = null();
            			}
HXLINE(  27)			url = ::gameJoltAPI::Utils_obj::formCall(HX_("trophies/",21,11,02,05),::Array_obj< ::String >::fromData( _hx_array_data_a4f1a001_4,5),::Array_obj< ::String >::__new(5)->init(0,url1)->init(1,username)->init(2,user_token)->init(3,url2)->init(4,url3),5,null());
            		}
HXLINE(  29)		::gameJoltAPI::Utils_obj::request(url,::gameJoltAPI::Trophies_obj::className,null(),onData,onError);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Trophies_obj,fetch,(void))

void Trophies_obj::addAchieved(::String username,::String user_token,int trophy_id, ::Dynamic onData, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_ab51381e8022efc4_33_addAchieved)
HXLINE(  35)		::String url = ::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) ));
HXLINE(  34)		::String url1 = ::gameJoltAPI::Utils_obj::formCall(HX_("trophies/add-achieved/",af,31,3f,bf),::Array_obj< ::String >::fromData( _hx_array_data_a4f1a001_6,4),::Array_obj< ::String >::__new(4)->init(0,url)->init(1,username)->init(2,user_token)->init(3,::Std_obj::string(trophy_id)),4,null());
HXLINE(  36)		::gameJoltAPI::Utils_obj::request(url1,::gameJoltAPI::Trophies_obj::className,null(),onData,onError);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Trophies_obj,addAchieved,(void))

void Trophies_obj::remAchieved(::String username,::String user_token,int trophy_id, ::Dynamic onData, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_ab51381e8022efc4_40_remAchieved)
HXLINE(  42)		::String url = ::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) ));
HXLINE(  41)		::String url1 = ::gameJoltAPI::Utils_obj::formCall(HX_("trophies/remove-achieved/",74,1a,62,ad),::Array_obj< ::String >::fromData( _hx_array_data_a4f1a001_8,4),::Array_obj< ::String >::__new(4)->init(0,url)->init(1,username)->init(2,user_token)->init(3,::Std_obj::string(trophy_id)),4,null());
HXLINE(  43)		::gameJoltAPI::Utils_obj::request(url1,::gameJoltAPI::Trophies_obj::className,null(),onData,onError);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Trophies_obj,remAchieved,(void))


Trophies_obj::Trophies_obj()
{
}

bool Trophies_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fetch") ) { outValue = fetch_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { outValue = ( result ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { outValue = ( className ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addAchieved") ) { outValue = addAchieved_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remAchieved") ) { outValue = remAchieved_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lastRequestSuccess") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_lastRequestSuccess() ); return true; } }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_lastRequestSuccess") ) { outValue = get_lastRequestSuccess_dyn(); return true; }
	}
	return false;
}

bool Trophies_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Trophies_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Trophies_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Trophies_obj::className,HX_("className",a3,92,3d,dc)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Trophies_obj::result,HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Trophies_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Trophies_obj::className,"className");
	HX_MARK_MEMBER_NAME(Trophies_obj::result,"result");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Trophies_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Trophies_obj::className,"className");
	HX_VISIT_MEMBER_NAME(Trophies_obj::result,"result");
};

#endif

::hx::Class Trophies_obj::__mClass;

static ::String Trophies_obj_sStaticFields[] = {
	HX_("className",a3,92,3d,dc),
	HX_("result",dd,68,84,08),
	HX_("get_lastRequestSuccess",73,c8,b1,92),
	HX_("fetch",3a,14,fa,fd),
	HX_("addAchieved",34,40,93,3f),
	HX_("remAchieved",6d,88,1f,f9),
	::String(null())
};

void Trophies_obj::__register()
{
	Trophies_obj _hx_dummy;
	Trophies_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameJoltAPI.Trophies",01,a0,f1,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Trophies_obj::__GetStatic;
	__mClass->mSetStaticField = &Trophies_obj::__SetStatic;
	__mClass->mMarkFunc = Trophies_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Trophies_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Trophies_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Trophies_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Trophies_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Trophies_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Trophies_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ab51381e8022efc4_6_boot)
HXDLIN(   6)		className = HX_("gameJoltAPI.Trophies",01,a0,f1,a4);
            	}
}

} // end namespace gameJoltAPI
