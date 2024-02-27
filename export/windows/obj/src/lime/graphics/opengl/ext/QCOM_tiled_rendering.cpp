#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_tiled_rendering
#include <lime/graphics/opengl/ext/QCOM_tiled_rendering.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b8ec67eacdc1e11_4_new,"lime.graphics.opengl.ext.QCOM_tiled_rendering","new",0x9cd72288,"lime.graphics.opengl.ext.QCOM_tiled_rendering.new","lime/graphics/opengl/ext/QCOM_tiled_rendering.hx",4,0x0643f186)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_tiled_rendering_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3b8ec67eacdc1e11_4_new)
HXLINE(  37)		this->MULTISAMPLE_BUFFER_BIT7_QCOM = (int)-2147483648;
HXLINE(  36)		this->MULTISAMPLE_BUFFER_BIT6_QCOM = (int)1073741824;
HXLINE(  35)		this->MULTISAMPLE_BUFFER_BIT5_QCOM = 536870912;
HXLINE(  34)		this->MULTISAMPLE_BUFFER_BIT4_QCOM = 268435456;
HXLINE(  33)		this->MULTISAMPLE_BUFFER_BIT3_QCOM = 134217728;
HXLINE(  32)		this->MULTISAMPLE_BUFFER_BIT2_QCOM = 67108864;
HXLINE(  31)		this->MULTISAMPLE_BUFFER_BIT1_QCOM = 33554432;
HXLINE(  30)		this->MULTISAMPLE_BUFFER_BIT0_QCOM = 16777216;
HXLINE(  29)		this->STENCIL_BUFFER_BIT7_QCOM = 8388608;
HXLINE(  28)		this->STENCIL_BUFFER_BIT6_QCOM = 4194304;
HXLINE(  27)		this->STENCIL_BUFFER_BIT5_QCOM = 2097152;
HXLINE(  26)		this->STENCIL_BUFFER_BIT4_QCOM = 1048576;
HXLINE(  25)		this->STENCIL_BUFFER_BIT3_QCOM = 524288;
HXLINE(  24)		this->STENCIL_BUFFER_BIT2_QCOM = 262144;
HXLINE(  23)		this->STENCIL_BUFFER_BIT1_QCOM = 131072;
HXLINE(  22)		this->STENCIL_BUFFER_BIT0_QCOM = 65536;
HXLINE(  21)		this->DEPTH_BUFFER_BIT7_QCOM = 32768;
HXLINE(  20)		this->DEPTH_BUFFER_BIT6_QCOM = 16384;
HXLINE(  19)		this->DEPTH_BUFFER_BIT5_QCOM = 8192;
HXLINE(  18)		this->DEPTH_BUFFER_BIT4_QCOM = 4096;
HXLINE(  17)		this->DEPTH_BUFFER_BIT3_QCOM = 2048;
HXLINE(  16)		this->DEPTH_BUFFER_BIT2_QCOM = 1024;
HXLINE(  15)		this->DEPTH_BUFFER_BIT1_QCOM = 512;
HXLINE(  14)		this->DEPTH_BUFFER_BIT0_QCOM = 256;
HXLINE(  13)		this->COLOR_BUFFER_BIT7_QCOM = 128;
HXLINE(  12)		this->COLOR_BUFFER_BIT6_QCOM = 64;
HXLINE(  11)		this->COLOR_BUFFER_BIT5_QCOM = 32;
HXLINE(  10)		this->COLOR_BUFFER_BIT4_QCOM = 16;
HXLINE(   9)		this->COLOR_BUFFER_BIT3_QCOM = 8;
HXLINE(   8)		this->COLOR_BUFFER_BIT2_QCOM = 4;
HXLINE(   7)		this->COLOR_BUFFER_BIT1_QCOM = 2;
HXLINE(   6)		this->COLOR_BUFFER_BIT0_QCOM = 1;
            	}

Dynamic QCOM_tiled_rendering_obj::__CreateEmpty() { return new QCOM_tiled_rendering_obj; }

void *QCOM_tiled_rendering_obj::_hx_vtable = 0;

Dynamic QCOM_tiled_rendering_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QCOM_tiled_rendering_obj > _hx_result = new QCOM_tiled_rendering_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_tiled_rendering_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x767f9de6;
}


QCOM_tiled_rendering_obj::QCOM_tiled_rendering_obj()
{
}

::hx::Val QCOM_tiled_rendering_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT0_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT0_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT1_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT1_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT2_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT2_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT3_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT3_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT4_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT4_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT5_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT5_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT6_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT6_QCOM ); }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT7_QCOM") ) { return ::hx::Val( COLOR_BUFFER_BIT7_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT0_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT0_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT1_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT1_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT2_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT2_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT3_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT3_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT4_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT4_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT5_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT5_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT6_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT6_QCOM ); }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT7_QCOM") ) { return ::hx::Val( DEPTH_BUFFER_BIT7_QCOM ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT0_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT0_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT1_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT1_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT2_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT2_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT3_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT3_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT4_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT4_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT5_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT5_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT6_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT6_QCOM ); }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT7_QCOM") ) { return ::hx::Val( STENCIL_BUFFER_BIT7_QCOM ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT0_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT0_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT1_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT1_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT2_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT2_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT3_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT3_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT4_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT4_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT5_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT5_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT6_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT6_QCOM ); }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT7_QCOM") ) { return ::hx::Val( MULTISAMPLE_BUFFER_BIT7_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QCOM_tiled_rendering_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT0_QCOM") ) { COLOR_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT1_QCOM") ) { COLOR_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT2_QCOM") ) { COLOR_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT3_QCOM") ) { COLOR_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT4_QCOM") ) { COLOR_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT5_QCOM") ) { COLOR_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT6_QCOM") ) { COLOR_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT7_QCOM") ) { COLOR_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT0_QCOM") ) { DEPTH_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT1_QCOM") ) { DEPTH_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT2_QCOM") ) { DEPTH_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT3_QCOM") ) { DEPTH_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT4_QCOM") ) { DEPTH_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT5_QCOM") ) { DEPTH_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT6_QCOM") ) { DEPTH_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT7_QCOM") ) { DEPTH_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT0_QCOM") ) { STENCIL_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT1_QCOM") ) { STENCIL_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT2_QCOM") ) { STENCIL_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT3_QCOM") ) { STENCIL_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT4_QCOM") ) { STENCIL_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT5_QCOM") ) { STENCIL_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT6_QCOM") ) { STENCIL_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT7_QCOM") ) { STENCIL_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT0_QCOM") ) { MULTISAMPLE_BUFFER_BIT0_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT1_QCOM") ) { MULTISAMPLE_BUFFER_BIT1_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT2_QCOM") ) { MULTISAMPLE_BUFFER_BIT2_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT3_QCOM") ) { MULTISAMPLE_BUFFER_BIT3_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT4_QCOM") ) { MULTISAMPLE_BUFFER_BIT4_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT5_QCOM") ) { MULTISAMPLE_BUFFER_BIT5_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT6_QCOM") ) { MULTISAMPLE_BUFFER_BIT6_QCOM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MULTISAMPLE_BUFFER_BIT7_QCOM") ) { MULTISAMPLE_BUFFER_BIT7_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_tiled_rendering_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("COLOR_BUFFER_BIT0_QCOM",09,35,db,91));
	outFields->push(HX_("COLOR_BUFFER_BIT1_QCOM",68,91,36,f8));
	outFields->push(HX_("COLOR_BUFFER_BIT2_QCOM",c7,ed,91,5e));
	outFields->push(HX_("COLOR_BUFFER_BIT3_QCOM",26,4a,ed,c4));
	outFields->push(HX_("COLOR_BUFFER_BIT4_QCOM",85,a6,48,2b));
	outFields->push(HX_("COLOR_BUFFER_BIT5_QCOM",e4,02,a4,91));
	outFields->push(HX_("COLOR_BUFFER_BIT6_QCOM",43,5f,ff,f7));
	outFields->push(HX_("COLOR_BUFFER_BIT7_QCOM",a2,bb,5a,5e));
	outFields->push(HX_("DEPTH_BUFFER_BIT0_QCOM",69,21,64,e0));
	outFields->push(HX_("DEPTH_BUFFER_BIT1_QCOM",c8,7d,bf,46));
	outFields->push(HX_("DEPTH_BUFFER_BIT2_QCOM",27,da,1a,ad));
	outFields->push(HX_("DEPTH_BUFFER_BIT3_QCOM",86,36,76,13));
	outFields->push(HX_("DEPTH_BUFFER_BIT4_QCOM",e5,92,d1,79));
	outFields->push(HX_("DEPTH_BUFFER_BIT5_QCOM",44,ef,2c,e0));
	outFields->push(HX_("DEPTH_BUFFER_BIT6_QCOM",a3,4b,88,46));
	outFields->push(HX_("DEPTH_BUFFER_BIT7_QCOM",02,a8,e3,ac));
	outFields->push(HX_("STENCIL_BUFFER_BIT0_QCOM",50,10,03,ab));
	outFields->push(HX_("STENCIL_BUFFER_BIT1_QCOM",af,6c,5e,11));
	outFields->push(HX_("STENCIL_BUFFER_BIT2_QCOM",0e,c9,b9,77));
	outFields->push(HX_("STENCIL_BUFFER_BIT3_QCOM",6d,25,15,de));
	outFields->push(HX_("STENCIL_BUFFER_BIT4_QCOM",cc,81,70,44));
	outFields->push(HX_("STENCIL_BUFFER_BIT5_QCOM",2b,de,cb,aa));
	outFields->push(HX_("STENCIL_BUFFER_BIT6_QCOM",8a,3a,27,11));
	outFields->push(HX_("STENCIL_BUFFER_BIT7_QCOM",e9,96,82,77));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT0_QCOM",09,87,d5,ae));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT1_QCOM",68,e3,30,15));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT2_QCOM",c7,3f,8c,7b));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT3_QCOM",26,9c,e7,e1));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT4_QCOM",85,f8,42,48));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT5_QCOM",e4,54,9e,ae));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT6_QCOM",43,b1,f9,14));
	outFields->push(HX_("MULTISAMPLE_BUFFER_BIT7_QCOM",a2,0d,55,7b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QCOM_tiled_rendering_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT0_QCOM),HX_("COLOR_BUFFER_BIT0_QCOM",09,35,db,91)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT1_QCOM),HX_("COLOR_BUFFER_BIT1_QCOM",68,91,36,f8)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT2_QCOM),HX_("COLOR_BUFFER_BIT2_QCOM",c7,ed,91,5e)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT3_QCOM),HX_("COLOR_BUFFER_BIT3_QCOM",26,4a,ed,c4)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT4_QCOM),HX_("COLOR_BUFFER_BIT4_QCOM",85,a6,48,2b)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT5_QCOM),HX_("COLOR_BUFFER_BIT5_QCOM",e4,02,a4,91)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT6_QCOM),HX_("COLOR_BUFFER_BIT6_QCOM",43,5f,ff,f7)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,COLOR_BUFFER_BIT7_QCOM),HX_("COLOR_BUFFER_BIT7_QCOM",a2,bb,5a,5e)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT0_QCOM),HX_("DEPTH_BUFFER_BIT0_QCOM",69,21,64,e0)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT1_QCOM),HX_("DEPTH_BUFFER_BIT1_QCOM",c8,7d,bf,46)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT2_QCOM),HX_("DEPTH_BUFFER_BIT2_QCOM",27,da,1a,ad)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT3_QCOM),HX_("DEPTH_BUFFER_BIT3_QCOM",86,36,76,13)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT4_QCOM),HX_("DEPTH_BUFFER_BIT4_QCOM",e5,92,d1,79)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT5_QCOM),HX_("DEPTH_BUFFER_BIT5_QCOM",44,ef,2c,e0)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT6_QCOM),HX_("DEPTH_BUFFER_BIT6_QCOM",a3,4b,88,46)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,DEPTH_BUFFER_BIT7_QCOM),HX_("DEPTH_BUFFER_BIT7_QCOM",02,a8,e3,ac)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT0_QCOM),HX_("STENCIL_BUFFER_BIT0_QCOM",50,10,03,ab)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT1_QCOM),HX_("STENCIL_BUFFER_BIT1_QCOM",af,6c,5e,11)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT2_QCOM),HX_("STENCIL_BUFFER_BIT2_QCOM",0e,c9,b9,77)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT3_QCOM),HX_("STENCIL_BUFFER_BIT3_QCOM",6d,25,15,de)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT4_QCOM),HX_("STENCIL_BUFFER_BIT4_QCOM",cc,81,70,44)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT5_QCOM),HX_("STENCIL_BUFFER_BIT5_QCOM",2b,de,cb,aa)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT6_QCOM),HX_("STENCIL_BUFFER_BIT6_QCOM",8a,3a,27,11)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,STENCIL_BUFFER_BIT7_QCOM),HX_("STENCIL_BUFFER_BIT7_QCOM",e9,96,82,77)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT0_QCOM),HX_("MULTISAMPLE_BUFFER_BIT0_QCOM",09,87,d5,ae)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT1_QCOM),HX_("MULTISAMPLE_BUFFER_BIT1_QCOM",68,e3,30,15)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT2_QCOM),HX_("MULTISAMPLE_BUFFER_BIT2_QCOM",c7,3f,8c,7b)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT3_QCOM),HX_("MULTISAMPLE_BUFFER_BIT3_QCOM",26,9c,e7,e1)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT4_QCOM),HX_("MULTISAMPLE_BUFFER_BIT4_QCOM",85,f8,42,48)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT5_QCOM),HX_("MULTISAMPLE_BUFFER_BIT5_QCOM",e4,54,9e,ae)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT6_QCOM),HX_("MULTISAMPLE_BUFFER_BIT6_QCOM",43,b1,f9,14)},
	{::hx::fsInt,(int)offsetof(QCOM_tiled_rendering_obj,MULTISAMPLE_BUFFER_BIT7_QCOM),HX_("MULTISAMPLE_BUFFER_BIT7_QCOM",a2,0d,55,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QCOM_tiled_rendering_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_tiled_rendering_obj_sMemberFields[] = {
	HX_("COLOR_BUFFER_BIT0_QCOM",09,35,db,91),
	HX_("COLOR_BUFFER_BIT1_QCOM",68,91,36,f8),
	HX_("COLOR_BUFFER_BIT2_QCOM",c7,ed,91,5e),
	HX_("COLOR_BUFFER_BIT3_QCOM",26,4a,ed,c4),
	HX_("COLOR_BUFFER_BIT4_QCOM",85,a6,48,2b),
	HX_("COLOR_BUFFER_BIT5_QCOM",e4,02,a4,91),
	HX_("COLOR_BUFFER_BIT6_QCOM",43,5f,ff,f7),
	HX_("COLOR_BUFFER_BIT7_QCOM",a2,bb,5a,5e),
	HX_("DEPTH_BUFFER_BIT0_QCOM",69,21,64,e0),
	HX_("DEPTH_BUFFER_BIT1_QCOM",c8,7d,bf,46),
	HX_("DEPTH_BUFFER_BIT2_QCOM",27,da,1a,ad),
	HX_("DEPTH_BUFFER_BIT3_QCOM",86,36,76,13),
	HX_("DEPTH_BUFFER_BIT4_QCOM",e5,92,d1,79),
	HX_("DEPTH_BUFFER_BIT5_QCOM",44,ef,2c,e0),
	HX_("DEPTH_BUFFER_BIT6_QCOM",a3,4b,88,46),
	HX_("DEPTH_BUFFER_BIT7_QCOM",02,a8,e3,ac),
	HX_("STENCIL_BUFFER_BIT0_QCOM",50,10,03,ab),
	HX_("STENCIL_BUFFER_BIT1_QCOM",af,6c,5e,11),
	HX_("STENCIL_BUFFER_BIT2_QCOM",0e,c9,b9,77),
	HX_("STENCIL_BUFFER_BIT3_QCOM",6d,25,15,de),
	HX_("STENCIL_BUFFER_BIT4_QCOM",cc,81,70,44),
	HX_("STENCIL_BUFFER_BIT5_QCOM",2b,de,cb,aa),
	HX_("STENCIL_BUFFER_BIT6_QCOM",8a,3a,27,11),
	HX_("STENCIL_BUFFER_BIT7_QCOM",e9,96,82,77),
	HX_("MULTISAMPLE_BUFFER_BIT0_QCOM",09,87,d5,ae),
	HX_("MULTISAMPLE_BUFFER_BIT1_QCOM",68,e3,30,15),
	HX_("MULTISAMPLE_BUFFER_BIT2_QCOM",c7,3f,8c,7b),
	HX_("MULTISAMPLE_BUFFER_BIT3_QCOM",26,9c,e7,e1),
	HX_("MULTISAMPLE_BUFFER_BIT4_QCOM",85,f8,42,48),
	HX_("MULTISAMPLE_BUFFER_BIT5_QCOM",e4,54,9e,ae),
	HX_("MULTISAMPLE_BUFFER_BIT6_QCOM",43,b1,f9,14),
	HX_("MULTISAMPLE_BUFFER_BIT7_QCOM",a2,0d,55,7b),
	::String(null()) };

::hx::Class QCOM_tiled_rendering_obj::__mClass;

void QCOM_tiled_rendering_obj::__register()
{
	QCOM_tiled_rendering_obj _hx_dummy;
	QCOM_tiled_rendering_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.QCOM_tiled_rendering",96,7e,69,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QCOM_tiled_rendering_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QCOM_tiled_rendering_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_tiled_rendering_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_tiled_rendering_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
