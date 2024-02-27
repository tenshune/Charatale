#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_gameJoltAPI_Users
#include <gameJoltAPI/Users.h>
#endif
#ifndef INCLUDED_gameJoltAPI_Utils
#include <gameJoltAPI/Utils.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_16cba177dde1cc62_11_get_lastRequestSuccess,"gameJoltAPI.Users","get_lastRequestSuccess",0xe81ddc8c,"gameJoltAPI.Users.get_lastRequestSuccess","gameJoltAPI/Users.hx",11,0x08ff15aa)
HX_LOCAL_STACK_FRAME(_hx_pos_16cba177dde1cc62_15_fetch,"gameJoltAPI.Users","fetch",0x3d770841,"gameJoltAPI.Users.fetch","gameJoltAPI/Users.hx",15,0x08ff15aa)
static const ::String _hx_array_data_7e8f0535_3[] = {
	HX_("game_id",48,01,79,89),HX_("user_id",8f,20,75,6f),HX_("username",16,86,eb,20),
};
static const ::String _hx_array_data_7e8f0535_4[] = {
	HX_("game_id",48,01,79,89),HX_("user_id",8f,20,75,6f),HX_("username",16,86,eb,20),
};
HX_LOCAL_STACK_FRAME(_hx_pos_16cba177dde1cc62_32_auth,"gameJoltAPI.Users","auth",0x11ae8941,"gameJoltAPI.Users.auth","gameJoltAPI/Users.hx",32,0x08ff15aa)
static const ::String _hx_array_data_7e8f0535_6[] = {
	HX_("game_id",48,01,79,89),HX_("username",16,86,eb,20),HX_("user_token",c5,a6,03,ca),
};
HX_LOCAL_STACK_FRAME(_hx_pos_16cba177dde1cc62_6_boot,"gameJoltAPI.Users","boot",0x12532e0b,"gameJoltAPI.Users.boot","gameJoltAPI/Users.hx",6,0x08ff15aa)
namespace gameJoltAPI{

void Users_obj::__construct() { }

Dynamic Users_obj::__CreateEmpty() { return new Users_obj; }

void *Users_obj::_hx_vtable = 0;

Dynamic Users_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Users_obj > _hx_result = new Users_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Users_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ed20b95;
}

::String Users_obj::className;

 ::Dynamic Users_obj::result;

bool Users_obj::get_lastRequestSuccess(){
            	HX_STACKFRAME(&_hx_pos_16cba177dde1cc62_11_get_lastRequestSuccess)
HXDLIN(  11)		if (::hx::IsNull( ::gameJoltAPI::Users_obj::result )) {
HXDLIN(  11)			return false;
            		}
            		else {
HXDLIN(  11)			return ::hx::IsEq( ::gameJoltAPI::Users_obj::result->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic),HX_("true",4e,a7,03,4d) );
            		}
HXDLIN(  11)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Users_obj,get_lastRequestSuccess,return )

void Users_obj::fetch(::Array< int > user_id,::String username, ::Dynamic onData, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_16cba177dde1cc62_15_fetch)
HXLINE(  16)		::String url;
HXLINE(  17)		bool _hx_tmp;
HXDLIN(  17)		if (::hx::IsNotNull( user_id )) {
HXLINE(  17)			_hx_tmp = (user_id->length > 1);
            		}
            		else {
HXLINE(  17)			_hx_tmp = false;
            		}
HXDLIN(  17)		if (_hx_tmp) {
HXLINE(  19)			::String arg = HX_("",00,00,00,00);
HXLINE(  20)			{
HXLINE(  20)				int _g = 0;
HXDLIN(  20)				while((_g < user_id->length)){
HXLINE(  20)					int k = user_id->__get(_g);
HXDLIN(  20)					_g = (_g + 1);
HXLINE(  21)					arg = (arg + (::Std_obj::string(k) + HX_(",",2c,00,00,00)));
            				}
            			}
HXLINE(  22)			arg = arg.substr(0,(arg.length - 1));
HXLINE(  23)			url = ::gameJoltAPI::Utils_obj::formCall(HX_("users/",67,5f,ef,41),::Array_obj< ::String >::fromData( _hx_array_data_7e8f0535_3,3),::Array_obj< ::String >::__new(3)->init(0,::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) )))->init(1,arg)->init(2,username),3,null());
            		}
            		else {
HXLINE(  27)			::String url1 = ::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) ));
HXDLIN(  27)			 ::Dynamic url2;
HXDLIN(  27)			if (::hx::IsNotNull( user_id )) {
HXLINE(  27)				url2 = user_id->__get(0);
            			}
            			else {
HXLINE(  27)				url2 = null();
            			}
HXLINE(  26)			url = ::gameJoltAPI::Utils_obj::formCall(HX_("users/",67,5f,ef,41),::Array_obj< ::String >::fromData( _hx_array_data_7e8f0535_4,3),::Array_obj< ::String >::__new(3)->init(0,url1)->init(1,::Std_obj::string(url2))->init(2,username),3,null());
            		}
HXLINE(  28)		::gameJoltAPI::Utils_obj::request(url,::gameJoltAPI::Users_obj::className,null(),onData,onError);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Users_obj,fetch,(void))

void Users_obj::auth(::String username,::String user_token, ::Dynamic onData, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_16cba177dde1cc62_32_auth)
HXLINE(  33)		::String url = ::gameJoltAPI::Utils_obj::formCall(HX_("users/auth/",00,07,47,99),::Array_obj< ::String >::fromData( _hx_array_data_7e8f0535_6,3),::Array_obj< ::String >::__new(3)->init(0,::Std_obj::string(( (int)(::gameJoltAPI::Utils_obj::get_game_id()) )))->init(1,username)->init(2,user_token),3,null());
HXLINE(  34)		::gameJoltAPI::Utils_obj::request(url,::gameJoltAPI::Users_obj::className,null(),onData,onError);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Users_obj,auth,(void))


Users_obj::Users_obj()
{
}

bool Users_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auth") ) { outValue = auth_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fetch") ) { outValue = fetch_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { outValue = ( result ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { outValue = ( className ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lastRequestSuccess") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_lastRequestSuccess() ); return true; } }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_lastRequestSuccess") ) { outValue = get_lastRequestSuccess_dyn(); return true; }
	}
	return false;
}

bool Users_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Users_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Users_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Users_obj::className,HX_("className",a3,92,3d,dc)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Users_obj::result,HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Users_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Users_obj::className,"className");
	HX_MARK_MEMBER_NAME(Users_obj::result,"result");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Users_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Users_obj::className,"className");
	HX_VISIT_MEMBER_NAME(Users_obj::result,"result");
};

#endif

::hx::Class Users_obj::__mClass;

static ::String Users_obj_sStaticFields[] = {
	HX_("className",a3,92,3d,dc),
	HX_("result",dd,68,84,08),
	HX_("get_lastRequestSuccess",73,c8,b1,92),
	HX_("fetch",3a,14,fa,fd),
	HX_("auth",68,df,76,40),
	::String(null())
};

void Users_obj::__register()
{
	Users_obj _hx_dummy;
	Users_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameJoltAPI.Users",35,05,8f,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Users_obj::__GetStatic;
	__mClass->mSetStaticField = &Users_obj::__SetStatic;
	__mClass->mMarkFunc = Users_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Users_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Users_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Users_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Users_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Users_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Users_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_16cba177dde1cc62_6_boot)
HXDLIN(   6)		className = HX_("gameJoltAPI.Users",35,05,8f,7e);
            	}
}

} // end namespace gameJoltAPI
