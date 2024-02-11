#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPage
#include <flixel/graphics/frames/bmfont/BMFontPage.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#include <flixel/graphics/frames/bmfont/BMFontUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_beb330bf8a27fae6_22_new,"flixel.graphics.frames.bmfont.BMFontPage","new",0xf6778818,"flixel.graphics.frames.bmfont.BMFontPage.new","flixel/graphics/frames/bmfont/BMFontPage.hx",22,0x06d4d058)
HX_LOCAL_STACK_FRAME(_hx_pos_beb330bf8a27fae6_29_fromXml,"flixel.graphics.frames.bmfont.BMFontPage","fromXml",0xe18c3245,"flixel.graphics.frames.bmfont.BMFontPage.fromXml","flixel/graphics/frames/bmfont/BMFontPage.hx",29,0x06d4d058)
HX_LOCAL_STACK_FRAME(_hx_pos_beb330bf8a27fae6_37_listFromXml,"flixel.graphics.frames.bmfont.BMFontPage","listFromXml",0x8fbbe187,"flixel.graphics.frames.bmfont.BMFontPage.listFromXml","flixel/graphics/frames/bmfont/BMFontPage.hx",37,0x06d4d058)
HX_LOCAL_STACK_FRAME(_hx_pos_beb330bf8a27fae6_49_fromText,"flixel.graphics.frames.bmfont.BMFontPage","fromText",0x7674e87f,"flixel.graphics.frames.bmfont.BMFontPage.fromText","flixel/graphics/frames/bmfont/BMFontPage.hx",49,0x06d4d058)
HX_LOCAL_STACK_FRAME(_hx_pos_beb330bf8a27fae6_43_fromText,"flixel.graphics.frames.bmfont.BMFontPage","fromText",0x7674e87f,"flixel.graphics.frames.bmfont.BMFontPage.fromText","flixel/graphics/frames/bmfont/BMFontPage.hx",43,0x06d4d058)
static const int _hx_array_data_e163dc26_7[] = {
	(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_beb330bf8a27fae6_61_listFromBytes,"flixel.graphics.frames.bmfont.BMFontPage","listFromBytes",0x3cc0c81b,"flixel.graphics.frames.bmfont.BMFontPage.listFromBytes","flixel/graphics/frames/bmfont/BMFontPage.hx",61,0x06d4d058)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontPage_obj::__construct(int id,::String file){
            	HX_STACKFRAME(&_hx_pos_beb330bf8a27fae6_22_new)
HXLINE(  23)		this->id = id;
HXLINE(  24)		this->file = file;
            	}

Dynamic BMFontPage_obj::__CreateEmpty() { return new BMFontPage_obj; }

void *BMFontPage_obj::_hx_vtable = 0;

Dynamic BMFontPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontPage_obj > _hx_result = new BMFontPage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BMFontPage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7af97334;
}

 ::flixel::graphics::frames::bmfont::BMFontPage BMFontPage_obj::fromXml( ::Xml pageNode){
            	HX_GC_STACKFRAME(&_hx_pos_beb330bf8a27fae6_29_fromXml)
HXLINE(  31)		 ::Dynamic _g = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(pageNode,HX_("id",db,5b,00,00)));
HXLINE(  30)		return  ::flixel::graphics::frames::bmfont::BMFontPage_obj::__alloc( HX_CTX ,( (int)(_g) ),::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(pageNode,HX_("file",7c,ce,bb,43)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontPage_obj,fromXml,return )

::Array< ::Dynamic> BMFontPage_obj::listFromXml( ::Xml pagesNode){
            	HX_STACKFRAME(&_hx_pos_beb330bf8a27fae6_37_listFromXml)
HXLINE(  38)		::Array< ::Dynamic> pages = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(pagesNode,HX_("page",4f,da,51,4a));
HXLINE(  39)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  39)		{
HXLINE(  39)			int _g1 = 0;
HXDLIN(  39)			while((_g1 < pages->length)){
HXLINE(  39)				 ::Xml page = pages->__get(_g1).StaticCast<  ::Xml >();
HXDLIN(  39)				_g1 = (_g1 + 1);
HXDLIN(  39)				_g->push(::flixel::graphics::frames::bmfont::BMFontPage_obj::fromXml(page));
            			}
            		}
HXDLIN(  39)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontPage_obj,listFromXml,return )

 ::flixel::graphics::frames::bmfont::BMFontPage BMFontPage_obj::fromText(::String pageText){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< int >,id,::Array< ::String >,file) HXARGC(2)
            		void _hx_run(::String key,::String value){
            			HX_STACKFRAME(&_hx_pos_beb330bf8a27fae6_49_fromText)
HXLINE(  49)			::String _hx_switch_0 = key;
            			if (  (_hx_switch_0==HX_("file",7c,ce,bb,43)) ){
HXLINE(  52)				file[0] = value;
HXDLIN(  52)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("id",db,5b,00,00)) ){
HXLINE(  51)				id[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  51)				goto _hx_goto_4;
            			}
            			/* default */{
HXLINE(  53)				::flixel::FlxG_obj::log->advanced((((HX_("Unexpected font char attribute: ",7a,69,14,e4) + key) + HX_("=",3d,00,00,00)) + value),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            			_hx_goto_4:;
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_beb330bf8a27fae6_43_fromText)
HXLINE(  44)		::Array< int > id = ::Array_obj< int >::fromData( _hx_array_data_e163dc26_7,1);
HXLINE(  45)		::Array< ::String > file = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  46)		::flixel::graphics::frames::bmfont::BMFontUtil_obj::forEachAttribute(pageText, ::Dynamic(new _hx_Closure_0(id,file)));
HXLINE(  57)		return  ::flixel::graphics::frames::bmfont::BMFontPage_obj::__alloc( HX_CTX ,id->__get(0),file->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontPage_obj,fromText,return )

::Array< ::Dynamic> BMFontPage_obj::listFromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_beb330bf8a27fae6_61_listFromBytes)
HXLINE(  62)		int blockSize = bytes->readInt32();
HXLINE(  63)		::Array< ::Dynamic> pages = ::Array_obj< ::Dynamic>::__new();
HXLINE(  65)		int i = 0;
HXLINE(  66)		while((blockSize > 0)){
HXLINE(  68)			 ::haxe::io::BytesBuffer bytesBuf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  69)			int curByte = bytes->readByte();
HXLINE(  70)			while((curByte != 0)){
HXLINE(  72)				bytesBuf->b->push(curByte);
HXLINE(  73)				curByte = bytes->readByte();
            			}
HXLINE(  75)			::String pageName = bytesBuf->getBytes()->toString();
HXLINE(  76)			pages->push( ::flixel::graphics::frames::bmfont::BMFontPage_obj::__alloc( HX_CTX ,i,pageName));
HXLINE(  77)			blockSize = (blockSize - (pageName.length + 1));
HXLINE(  78)			i = (i + 1);
            		}
HXLINE(  81)		return pages;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontPage_obj,listFromBytes,return )


BMFontPage_obj::BMFontPage_obj()
{
}

void BMFontPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMFontPage);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_END_CLASS();
}

void BMFontPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(file,"file");
}

::hx::Val BMFontPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontPage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listFromXml") ) { outValue = listFromXml_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFromBytes") ) { outValue = listFromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontPage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("file",7c,ce,bb,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontPage_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BMFontPage_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(BMFontPage_obj,file),HX_("file",7c,ce,bb,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontPage_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontPage_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("file",7c,ce,bb,43),
	::String(null()) };

::hx::Class BMFontPage_obj::__mClass;

static ::String BMFontPage_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("listFromXml",cf,b1,05,0f),
	HX_("fromText",37,9b,c5,aa),
	HX_("listFromBytes",63,3a,55,7e),
	::String(null())
};

void BMFontPage_obj::__register()
{
	BMFontPage_obj _hx_dummy;
	BMFontPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontPage",26,dc,63,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontPage_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontPage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
