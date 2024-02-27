#include <hxcpp.h>

#ifndef INCLUDED_GlobalVariables
#include <GlobalVariables.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d682671d7f427092_4_boot,"GlobalVariables","boot",0xca98d22c,"GlobalVariables.boot","GlobalVariables.hx",4,0x39ec568a)
HX_LOCAL_STACK_FRAME(_hx_pos_d682671d7f427092_5_boot,"GlobalVariables","boot",0xca98d22c,"GlobalVariables.boot","GlobalVariables.hx",5,0x39ec568a)
HX_LOCAL_STACK_FRAME(_hx_pos_d682671d7f427092_6_boot,"GlobalVariables","boot",0xca98d22c,"GlobalVariables.boot","GlobalVariables.hx",6,0x39ec568a)
HX_LOCAL_STACK_FRAME(_hx_pos_d682671d7f427092_7_boot,"GlobalVariables","boot",0xca98d22c,"GlobalVariables.boot","GlobalVariables.hx",7,0x39ec568a)
HX_LOCAL_STACK_FRAME(_hx_pos_d682671d7f427092_8_boot,"GlobalVariables","boot",0xca98d22c,"GlobalVariables.boot","GlobalVariables.hx",8,0x39ec568a)

void GlobalVariables_obj::__construct() { }

Dynamic GlobalVariables_obj::__CreateEmpty() { return new GlobalVariables_obj; }

void *GlobalVariables_obj::_hx_vtable = 0;

Dynamic GlobalVariables_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlobalVariables_obj > _hx_result = new GlobalVariables_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlobalVariables_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ec7582c;
}

int GlobalVariables_obj::gameID;

::String GlobalVariables_obj::gamePrivateKey;

Float GlobalVariables_obj::dark;

bool GlobalVariables_obj::newGame;

::String GlobalVariables_obj::bZone;


GlobalVariables_obj::GlobalVariables_obj()
{
}

bool GlobalVariables_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dark") ) { outValue = ( dark ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bZone") ) { outValue = ( bZone ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gameID") ) { outValue = ( gameID ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { outValue = ( newGame ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamePrivateKey") ) { outValue = ( gamePrivateKey ); return true; }
	}
	return false;
}

bool GlobalVariables_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dark") ) { dark=ioValue.Cast< Float >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bZone") ) { bZone=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gameID") ) { gameID=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { newGame=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamePrivateKey") ) { gamePrivateKey=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GlobalVariables_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GlobalVariables_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GlobalVariables_obj::gameID,HX_("gameID",4d,94,f9,50)},
	{::hx::fsString,(void *) &GlobalVariables_obj::gamePrivateKey,HX_("gamePrivateKey",ee,f2,5e,15)},
	{::hx::fsFloat,(void *) &GlobalVariables_obj::dark,HX_("dark",76,54,63,42)},
	{::hx::fsBool,(void *) &GlobalVariables_obj::newGame,HX_("newGame",72,a0,2b,f4)},
	{::hx::fsString,(void *) &GlobalVariables_obj::bZone,HX_("bZone",ae,a7,16,a9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GlobalVariables_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlobalVariables_obj::gameID,"gameID");
	HX_MARK_MEMBER_NAME(GlobalVariables_obj::gamePrivateKey,"gamePrivateKey");
	HX_MARK_MEMBER_NAME(GlobalVariables_obj::dark,"dark");
	HX_MARK_MEMBER_NAME(GlobalVariables_obj::newGame,"newGame");
	HX_MARK_MEMBER_NAME(GlobalVariables_obj::bZone,"bZone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlobalVariables_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlobalVariables_obj::gameID,"gameID");
	HX_VISIT_MEMBER_NAME(GlobalVariables_obj::gamePrivateKey,"gamePrivateKey");
	HX_VISIT_MEMBER_NAME(GlobalVariables_obj::dark,"dark");
	HX_VISIT_MEMBER_NAME(GlobalVariables_obj::newGame,"newGame");
	HX_VISIT_MEMBER_NAME(GlobalVariables_obj::bZone,"bZone");
};

#endif

::hx::Class GlobalVariables_obj::__mClass;

static ::String GlobalVariables_obj_sStaticFields[] = {
	HX_("gameID",4d,94,f9,50),
	HX_("gamePrivateKey",ee,f2,5e,15),
	HX_("dark",76,54,63,42),
	HX_("newGame",72,a0,2b,f4),
	HX_("bZone",ae,a7,16,a9),
	::String(null())
};

void GlobalVariables_obj::__register()
{
	GlobalVariables_obj _hx_dummy;
	GlobalVariables_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GlobalVariables",b4,d4,8d,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlobalVariables_obj::__GetStatic;
	__mClass->mSetStaticField = &GlobalVariables_obj::__SetStatic;
	__mClass->mMarkFunc = GlobalVariables_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GlobalVariables_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GlobalVariables_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlobalVariables_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlobalVariables_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlobalVariables_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlobalVariables_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d682671d7f427092_4_boot)
HXDLIN(   4)		gameID = 876216;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d682671d7f427092_5_boot)
HXDLIN(   5)		gamePrivateKey = HX_("23695b0c39998bfcc7b705caccf8fc07",d3,49,33,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d682671d7f427092_6_boot)
HXDLIN(   6)		dark = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d682671d7f427092_7_boot)
HXDLIN(   7)		newGame = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d682671d7f427092_8_boot)
HXDLIN(   8)		bZone = HX_("",00,00,00,00);
            	}
}

