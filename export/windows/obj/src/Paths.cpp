#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_8_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",8,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_12_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",12,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_17_portImage,"Paths","portImage",0x61a05aba,"Paths.portImage","Paths.hx",17,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_22_mapImg,"Paths","mapImg",0x1772bc27,"Paths.mapImg","Paths.hx",22,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_27_trophieImg,"Paths","trophieImg",0x4cc3ecde,"Paths.trophieImg","Paths.hx",27,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_31_font,"Paths","font",0x8f8bbf2f,"Paths.font","Paths.hx",31,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_36_fontO,"Paths","fontO",0x0abb8a40,"Paths.fontO","Paths.hx",36,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_40_lang,"Paths","lang",0x9378674e,"Paths.lang","Paths.hx",40,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_45_langImg,"Paths","langImg",0x30486155,"Paths.langImg","Paths.hx",45,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_49_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",49,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String bitmap){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_8_getSparrowAtlas)
HXDLIN(   8)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(((HX_("assets/images/",ab,47,cb,9f) + bitmap) + HX_(".png",3b,2d,bd,1e)),((HX_("assets/images/",ab,47,cb,9f) + bitmap) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getSparrowAtlas,return )

::String Paths_obj::image(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_12_image)
HXDLIN(  12)		return ((HX_("assets/images/",ab,47,cb,9f) + name) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,image,return )

::String Paths_obj::portImage(::String name,::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_17_portImage)
HXDLIN(  17)		return ((((HX_("assets/images/portraits/",e2,7d,9a,cb) + _hx_char) + HX_("/",2f,00,00,00)) + name) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,portImage,return )

::String Paths_obj::mapImg(::String name,::String map){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_22_mapImg)
HXDLIN(  22)		return ((((HX_("assets/images/maps/",6d,5a,1a,f9) + map) + HX_("/",2f,00,00,00)) + name) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,mapImg,return )

::String Paths_obj::trophieImg(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_27_trophieImg)
HXDLIN(  27)		return ((HX_("assets/images/trophies/",16,fc,d3,ac) + name) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,trophieImg,return )

::String Paths_obj::font(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_31_font)
HXDLIN(  31)		return ((HX_("assets/fonts/",37,ff,a5,9c) + name) + HX_(".ttf",78,3b,c0,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

::String Paths_obj::fontO(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_36_fontO)
HXDLIN(  36)		return ((HX_("assets/fonts/",37,ff,a5,9c) + name) + HX_(".otf",33,70,bc,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,fontO,return )

::String Paths_obj::lang(::String lang,::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_40_lang)
HXDLIN(  40)		return ((((HX_("assets/langs/",16,2d,24,f3) + lang.toLowerCase()) + HX_("/",2f,00,00,00)) + name) + HX_(".txt",02,3f,c0,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lang,return )

::String Paths_obj::langImg(::String lang,::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_45_langImg)
HXDLIN(  45)		return ((((HX_("assets/langs/",16,2d,24,f3) + lang) + HX_("/",2f,00,00,00)) + name) + HX_(".png",3b,2d,bd,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,langImg,return )

::String Paths_obj::sound(::String soundName){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_49_sound)
HXDLIN(  49)		return ((HX_("assets/sounds/",1f,fa,fb,94) + soundName) + HX_(".wav",be,71,c2,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,sound,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lang") ) { outValue = lang_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fontO") ) { outValue = fontO_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mapImg") ) { outValue = mapImg_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"langImg") ) { outValue = langImg_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"portImage") ) { outValue = portImage_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"trophieImg") ) { outValue = trophieImg_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Paths_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("image",5b,1f,69,bd),
	HX_("portImage",1a,b8,08,4d),
	HX_("mapImg",c7,42,04,b9),
	HX_("trophieImg",7e,43,ad,5c),
	HX_("font",cf,5d,c0,43),
	HX_("fontO",a0,b7,91,04),
	HX_("lang",ee,05,ad,47),
	HX_("langImg",b5,a6,0c,ee),
	HX_("sound",cf,8c,cc,80),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

