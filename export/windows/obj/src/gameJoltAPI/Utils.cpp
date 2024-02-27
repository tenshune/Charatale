#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_gameJoltAPI_Utils
#include <gameJoltAPI/Utils.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_17_get_game_id,"gameJoltAPI.Utils","get_game_id",0x3744488f,"gameJoltAPI.Utils.get_game_id","gameJoltAPI/Utils.hx",17,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_22_set_game_id,"gameJoltAPI.Utils","set_game_id",0x41b14f9b,"gameJoltAPI.Utils.set_game_id","gameJoltAPI/Utils.hx",22,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_34_get_gamePrivKey,"gameJoltAPI.Utils","get_gamePrivKey",0xb202db65,"gameJoltAPI.Utils.get_gamePrivKey","gameJoltAPI/Utils.hx",34,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_39_set_gamePrivKey,"gameJoltAPI.Utils","set_gamePrivKey",0xadce5871,"gameJoltAPI.Utils.set_gamePrivKey","gameJoltAPI/Utils.hx",39,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_63_sign,"gameJoltAPI.Utils","sign",0xdbc5a30d,"gameJoltAPI.Utils.sign","gameJoltAPI/Utils.hx",63,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_68_formCall,"gameJoltAPI.Utils","formCall",0x801352d2,"gameJoltAPI.Utils.formCall","gameJoltAPI/Utils.hx",68,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_78_addParameter,"gameJoltAPI.Utils","addParameter",0xf6fdba18,"gameJoltAPI.Utils.addParameter","gameJoltAPI/Utils.hx",78,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_88_request,"gameJoltAPI.Utils","request",0xd7a66e7f,"gameJoltAPI.Utils.request","gameJoltAPI/Utils.hx",88,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_96_request,"gameJoltAPI.Utils","request",0xd7a66e7f,"gameJoltAPI.Utils.request","gameJoltAPI/Utils.hx",96,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_94_request,"gameJoltAPI.Utils","request",0xd7a66e7f,"gameJoltAPI.Utils.request","gameJoltAPI/Utils.hx",94,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_13_boot,"gameJoltAPI.Utils","boot",0xd08d9702,"gameJoltAPI.Utils.boot","gameJoltAPI/Utils.hx",13,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_30_boot,"gameJoltAPI.Utils","boot",0xd08d9702,"gameJoltAPI.Utils.boot","gameJoltAPI/Utils.hx",30,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_55_boot,"gameJoltAPI.Utils","boot",0xd08d9702,"gameJoltAPI.Utils.boot","gameJoltAPI/Utils.hx",55,0x579a82e1)
HX_LOCAL_STACK_FRAME(_hx_pos_e84bf7baeb7c005a_58_boot,"gameJoltAPI.Utils","boot",0xd08d9702,"gameJoltAPI.Utils.boot","gameJoltAPI/Utils.hx",58,0x579a82e1)
namespace gameJoltAPI{

void Utils_obj::__construct() { }

Dynamic Utils_obj::__CreateEmpty() { return new Utils_obj; }

void *Utils_obj::_hx_vtable = 0;

Dynamic Utils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Utils_obj > _hx_result = new Utils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f7e45fe;
}

bool Utils_obj::has_game_id;

int Utils_obj::game_id;

 ::Dynamic Utils_obj::get_game_id(){
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_17_get_game_id)
HXDLIN(  17)		if (::gameJoltAPI::Utils_obj::has_game_id) {
HXDLIN(  17)			return ::gameJoltAPI::Utils_obj::game_id;
            		}
            		else {
HXLINE(  19)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("GameJolt API : No game ID provided",cc,46,c3,3e)));
            		}
HXLINE(  17)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,get_game_id,return )

int Utils_obj::set_game_id(int v){
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_22_set_game_id)
HXLINE(  23)		::gameJoltAPI::Utils_obj::has_game_id = true;
HXLINE(  24)		return (::gameJoltAPI::Utils_obj::game_id = v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,set_game_id,return )

bool Utils_obj::has_gamePrivKey;

::String Utils_obj::gamePrivKey;

::String Utils_obj::get_gamePrivKey(){
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_34_get_gamePrivKey)
HXDLIN(  34)		if (::gameJoltAPI::Utils_obj::has_gamePrivKey) {
HXDLIN(  34)			return ::gameJoltAPI::Utils_obj::gamePrivKey;
            		}
            		else {
HXLINE(  36)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("GameJolt API : No game private key provided",bd,37,f0,ab)));
            		}
HXLINE(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,get_gamePrivKey,return )

::String Utils_obj::set_gamePrivKey(::String v){
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_39_set_gamePrivKey)
HXLINE(  40)		::gameJoltAPI::Utils_obj::has_gamePrivKey = true;
HXLINE(  41)		return (::gameJoltAPI::Utils_obj::gamePrivKey = v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,set_gamePrivKey,return )

int Utils_obj::user_id;

::String Utils_obj::user_token;

::String Utils_obj::username;

bool Utils_obj::batching;

::String Utils_obj::batchString;

 ::sys::Http Utils_obj::r;

::String Utils_obj::BASE_URL;

::String Utils_obj::sign(::String call){
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_63_sign)
HXDLIN(  63)		return ((call + HX_("&signature=",eb,e1,c6,c9)) + ::haxe::crypto::Md5_obj::encode((call + ::gameJoltAPI::Utils_obj::get_gamePrivKey())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,sign,return )

::String Utils_obj::formCall(::String base,::Array< ::String > keys,::Array< ::String > values,int index,::hx::Null< bool >  __o_addSig){
            		bool addSig = __o_addSig.Default(true);
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_68_formCall)
HXLINE(  69)		::String url;
HXDLIN(  69)		if (::gameJoltAPI::Utils_obj::batching) {
HXLINE(  69)			url = HX_("/",2f,00,00,00);
            		}
            		else {
HXLINE(  69)			url = ::gameJoltAPI::Utils_obj::BASE_URL;
            		}
HXDLIN(  69)		::String url1 = (url + base);
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			int _g1 = index;
HXDLIN(  70)			while((_g < _g1)){
HXLINE(  70)				_g = (_g + 1);
HXDLIN(  70)				int k = (_g - 1);
HXLINE(  71)				url1 = ::gameJoltAPI::Utils_obj::addParameter(url1,keys->__get(k),values->__get(k));
            			}
            		}
HXLINE(  72)		if (!(::gameJoltAPI::Utils_obj::batching)) {
HXLINE(  72)			url1 = ::gameJoltAPI::Utils_obj::addParameter(url1,HX_("format",37,8f,8e,fd),HX_("json",28,42,68,46));
            		}
HXLINE(  73)		if (addSig) {
HXLINE(  73)			return ::gameJoltAPI::Utils_obj::sign(url1);
            		}
            		else {
HXLINE(  73)			return url1;
            		}
HXDLIN(  73)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Utils_obj,formCall,return )

::String Utils_obj::addParameter(::String call,::String param,::String value){
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_78_addParameter)
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		if ((value != HX_("null",87,9e,0e,49))) {
HXLINE(  79)			_hx_tmp = ::hx::IsNotNull( value );
            		}
            		else {
HXLINE(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  80)			::String call1;
HXDLIN(  80)			if ((call.indexOf(HX_("?",3f,00,00,00),null()) == -1)) {
HXLINE(  80)				call1 = HX_("?",3f,00,00,00);
            			}
            			else {
HXLINE(  80)				call1 = HX_("&",26,00,00,00);
            			}
HXDLIN(  80)			call = (call + (((call1 + param) + HX_("=",3d,00,00,00)) + value));
            		}
HXLINE(  81)		return call;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,addParameter,return )

void Utils_obj::request(::String url,::String caller, ::Dynamic __o_post, ::Dynamic onData, ::Dynamic onError){
            		 ::Dynamic post = __o_post;
            		if (::hx::IsNull(__o_post)) post = false;
            	HX_GC_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_88_request)
HXDLIN(  88)		if (::gameJoltAPI::Utils_obj::batching) {
HXLINE(  89)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::gameJoltAPI::Utils >();
HXDLIN(  89)			::String _hx_tmp1 = ::gameJoltAPI::Utils_obj::batchString;
HXDLIN(  89)			::gameJoltAPI::Utils_obj::batchString = (_hx_tmp1 + (HX_("&requests[]=",31,60,3b,bd) + ::StringTools_obj::urlEncode(url)));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,onData,::hx::Class,c) HXARGC(1)
            			void _hx_run(::String data){
            				HX_GC_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_96_request)
HXLINE(  97)				 ::Dynamic obj =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
HXLINE(  98)				if (::hx::IsEq(  ::Dynamic(obj->__Field(HX_("response",81,ae,0c,a2),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic),HX_("true",4e,a7,03,4d) )) {
HXLINE(  99)					::Reflect_obj::setField(c,HX_("result",dd,68,84,08), ::Dynamic(obj->__Field(HX_("response",81,ae,0c,a2),::hx::paccDynamic)));
            				}
HXLINE( 100)				if (::hx::IsNotNull( onData )) {
HXLINE( 101)					onData(::hx::IsEq(  ::Dynamic(obj->__Field(HX_("response",81,ae,0c,a2),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic),HX_("true",4e,a7,03,4d) ));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  92)			::gameJoltAPI::Utils_obj::r =  ::sys::Http_obj::__alloc( HX_CTX ,url);
HXLINE(  93)			::hx::Class c = ::Type_obj::resolveClass(caller);
HXLINE(  94)			 ::Dynamic _hx_tmp;
HXDLIN(  94)			if (::hx::IsNull( onError )) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run(::String m){
            					HX_GC_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_94_request)
HXLINE(  94)					::haxe::Log_obj::trace((HX_("Error : ",1e,f8,c3,b8) + m),::hx::SourceInfo(HX_("source/gameJoltAPI/Utils.hx",d5,43,5c,82),94,HX_("gameJoltAPI.Utils",9e,3f,3b,7f),HX_("request",4f,df,84,44)));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  94)				_hx_tmp =  ::Dynamic(new _hx_Closure_0());
            			}
            			else {
HXLINE(  94)				_hx_tmp = onError;
            			}
HXDLIN(  94)			::gameJoltAPI::Utils_obj::r->onError = _hx_tmp;
HXLINE(  95)			::gameJoltAPI::Utils_obj::r->onData =  ::Dynamic(new _hx_Closure_1(onData,c));
HXLINE( 103)			::gameJoltAPI::Utils_obj::r->request(post);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Utils_obj,request,(void))


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { outValue = ( r ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"game_id") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_game_id() : game_id ); return true; }
		if (HX_FIELD_EQ(inName,"user_id") ) { outValue = ( user_id ); return true; }
		if (HX_FIELD_EQ(inName,"request") ) { outValue = request_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"username") ) { outValue = ( username ); return true; }
		if (HX_FIELD_EQ(inName,"batching") ) { outValue = ( batching ); return true; }
		if (HX_FIELD_EQ(inName,"BASE_URL") ) { outValue = ( BASE_URL ); return true; }
		if (HX_FIELD_EQ(inName,"formCall") ) { outValue = formCall_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"user_token") ) { outValue = ( user_token ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"has_game_id") ) { outValue = ( has_game_id ); return true; }
		if (HX_FIELD_EQ(inName,"get_game_id") ) { outValue = get_game_id_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_game_id") ) { outValue = set_game_id_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gamePrivKey") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_gamePrivKey() : gamePrivKey ); return true; }
		if (HX_FIELD_EQ(inName,"batchString") ) { outValue = ( batchString ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addParameter") ) { outValue = addParameter_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"has_gamePrivKey") ) { outValue = ( has_gamePrivKey ); return true; }
		if (HX_FIELD_EQ(inName,"get_gamePrivKey") ) { outValue = get_gamePrivKey_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_gamePrivKey") ) { outValue = set_gamePrivKey_dyn(); return true; }
	}
	return false;
}

bool Utils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=ioValue.Cast<  ::sys::Http >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"game_id") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_game_id(ioValue.Cast< int >()) ); else game_id=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"user_id") ) { user_id=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"username") ) { username=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"batching") ) { batching=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"BASE_URL") ) { BASE_URL=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"user_token") ) { user_token=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"has_game_id") ) { has_game_id=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"gamePrivKey") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_gamePrivKey(ioValue.Cast< ::String >()) ); else gamePrivKey=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"batchString") ) { batchString=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"has_gamePrivKey") ) { has_gamePrivKey=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Utils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Utils_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Utils_obj::has_game_id,HX_("has_game_id",23,84,36,bc)},
	{::hx::fsInt,(void *) &Utils_obj::game_id,HX_("game_id",48,01,79,89)},
	{::hx::fsBool,(void *) &Utils_obj::has_gamePrivKey,HX_("has_gamePrivKey",f9,70,7c,73)},
	{::hx::fsString,(void *) &Utils_obj::gamePrivKey,HX_("gamePrivKey",9e,e4,14,6e)},
	{::hx::fsInt,(void *) &Utils_obj::user_id,HX_("user_id",8f,20,75,6f)},
	{::hx::fsString,(void *) &Utils_obj::user_token,HX_("user_token",c5,a6,03,ca)},
	{::hx::fsString,(void *) &Utils_obj::username,HX_("username",16,86,eb,20)},
	{::hx::fsBool,(void *) &Utils_obj::batching,HX_("batching",68,35,11,4e)},
	{::hx::fsString,(void *) &Utils_obj::batchString,HX_("batchString",2b,0c,bf,0f)},
	{::hx::fsObject /*  ::sys::Http */ ,(void *) &Utils_obj::r,HX_("r",72,00,00,00)},
	{::hx::fsString,(void *) &Utils_obj::BASE_URL,HX_("BASE_URL",e1,98,45,77)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Utils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::has_game_id,"has_game_id");
	HX_MARK_MEMBER_NAME(Utils_obj::game_id,"game_id");
	HX_MARK_MEMBER_NAME(Utils_obj::has_gamePrivKey,"has_gamePrivKey");
	HX_MARK_MEMBER_NAME(Utils_obj::gamePrivKey,"gamePrivKey");
	HX_MARK_MEMBER_NAME(Utils_obj::user_id,"user_id");
	HX_MARK_MEMBER_NAME(Utils_obj::user_token,"user_token");
	HX_MARK_MEMBER_NAME(Utils_obj::username,"username");
	HX_MARK_MEMBER_NAME(Utils_obj::batching,"batching");
	HX_MARK_MEMBER_NAME(Utils_obj::batchString,"batchString");
	HX_MARK_MEMBER_NAME(Utils_obj::r,"r");
	HX_MARK_MEMBER_NAME(Utils_obj::BASE_URL,"BASE_URL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::has_game_id,"has_game_id");
	HX_VISIT_MEMBER_NAME(Utils_obj::game_id,"game_id");
	HX_VISIT_MEMBER_NAME(Utils_obj::has_gamePrivKey,"has_gamePrivKey");
	HX_VISIT_MEMBER_NAME(Utils_obj::gamePrivKey,"gamePrivKey");
	HX_VISIT_MEMBER_NAME(Utils_obj::user_id,"user_id");
	HX_VISIT_MEMBER_NAME(Utils_obj::user_token,"user_token");
	HX_VISIT_MEMBER_NAME(Utils_obj::username,"username");
	HX_VISIT_MEMBER_NAME(Utils_obj::batching,"batching");
	HX_VISIT_MEMBER_NAME(Utils_obj::batchString,"batchString");
	HX_VISIT_MEMBER_NAME(Utils_obj::r,"r");
	HX_VISIT_MEMBER_NAME(Utils_obj::BASE_URL,"BASE_URL");
};

#endif

::hx::Class Utils_obj::__mClass;

static ::String Utils_obj_sStaticFields[] = {
	HX_("has_game_id",23,84,36,bc),
	HX_("game_id",48,01,79,89),
	HX_("get_game_id",5f,61,73,0f),
	HX_("set_game_id",6b,68,e0,19),
	HX_("has_gamePrivKey",f9,70,7c,73),
	HX_("gamePrivKey",9e,e4,14,6e),
	HX_("get_gamePrivKey",35,9c,f6,2e),
	HX_("set_gamePrivKey",41,19,c2,2a),
	HX_("user_id",8f,20,75,6f),
	HX_("user_token",c5,a6,03,ca),
	HX_("username",16,86,eb,20),
	HX_("batching",68,35,11,4e),
	HX_("batchString",2b,0c,bf,0f),
	HX_("r",72,00,00,00),
	HX_("BASE_URL",e1,98,45,77),
	HX_("sign",3d,90,53,4c),
	HX_("formCall",02,98,d7,55),
	HX_("addParameter",48,57,04,48),
	HX_("request",4f,df,84,44),
	::String(null())
};

void Utils_obj::__register()
{
	Utils_obj _hx_dummy;
	Utils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameJoltAPI.Utils",9e,3f,3b,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &Utils_obj::__SetStatic;
	__mClass->mMarkFunc = Utils_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Utils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Utils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Utils_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_13_boot)
HXDLIN(  13)		has_game_id = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_30_boot)
HXDLIN(  30)		has_gamePrivKey = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_55_boot)
HXDLIN(  55)		batching = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e84bf7baeb7c005a_58_boot)
HXDLIN(  58)		BASE_URL = HX_("http://api.gamejolt.com/api/game/v1_1/",51,fc,3f,c0);
            	}
}

} // end namespace gameJoltAPI
