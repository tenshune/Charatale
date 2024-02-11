#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFont
#include <flixel/graphics/frames/bmfont/BMFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontChar
#include <flixel/graphics/frames/bmfont/BMFontChar.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon
#include <flixel/graphics/frames/bmfont/BMFontCommon.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo
#include <flixel/graphics/frames/bmfont/BMFontInfo.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning
#include <flixel/graphics/frames/bmfont/BMFontKerning.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPage
#include <flixel/graphics/frames/bmfont/BMFontPage.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType
#include <flixel/graphics/frames/bmfont/_BMFont/BMFontFileType.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a007ae567d5ade1_18_new,"flixel.graphics.frames.bmfont.BMFont","new",0xcaf476a9,"flixel.graphics.frames.bmfont.BMFont.new","flixel/graphics/frames/bmfont/BMFont.hx",18,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_36_fromXml,"flixel.graphics.frames.bmfont.BMFont","fromXml",0x7f323d56,"flixel.graphics.frames.bmfont.BMFont.fromXml","flixel/graphics/frames/bmfont/BMFont.hx",36,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_53_fromText,"flixel.graphics.frames.bmfont.BMFont","fromText",0xca188c4e,"flixel.graphics.frames.bmfont.BMFont.fromText","flixel/graphics/frames/bmfont/BMFont.hx",53,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_87_fromBytes,"flixel.graphics.frames.bmfont.BMFont","fromBytes",0xbb60f5aa,"flixel.graphics.frames.bmfont.BMFont.fromBytes","flixel/graphics/frames/bmfont/BMFont.hx",87,0x28ad9ee7)
static const int _hx_array_data_e79fee37_9[] = {
	(int)66,(int)77,(int)70,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_126_parse,"flixel.graphics.frames.bmfont.BMFont","parse",0xee231abc,"flixel.graphics.frames.bmfont.BMFont.parse","flixel/graphics/frames/bmfont/BMFont.hx",126,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_140_guessType,"flixel.graphics.frames.bmfont.BMFont","guessType",0x1e68983a,"flixel.graphics.frames.bmfont.BMFont.guessType","flixel/graphics/frames/bmfont/BMFont.hx",140,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_184_safeParseXML,"flixel.graphics.frames.bmfont.BMFont","safeParseXML",0xe4b4f268,"flixel.graphics.frames.bmfont.BMFont.safeParseXML","flixel/graphics/frames/bmfont/BMFont.hx",184,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_196_detectFromText,"flixel.graphics.frames.bmfont.BMFont","detectFromText",0x83d6b511,"flixel.graphics.frames.bmfont.BMFont.detectFromText","flixel/graphics/frames/bmfont/BMFont.hx",196,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_206_isValidBytes,"flixel.graphics.frames.bmfont.BMFont","isValidBytes",0xde4d62f0,"flixel.graphics.frames.bmfont.BMFont.isValidBytes","flixel/graphics/frames/bmfont/BMFont.hx",206,0x28ad9ee7)
static const int _hx_array_data_e79fee37_16[] = {
	(int)66,(int)77,(int)70,
};
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFont_obj::__construct( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_18_new)
HXLINE(  24)		this->kerning = null();
HXLINE(  28)		this->info = info;
HXLINE(  29)		this->common = common;
HXLINE(  30)		this->pages = pages;
HXLINE(  31)		this->chars = chars;
HXLINE(  32)		this->kerning = kerning;
            	}

Dynamic BMFont_obj::__CreateEmpty() { return new BMFont_obj; }

void *BMFont_obj::_hx_vtable = 0;

Dynamic BMFont_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFont_obj > _hx_result = new BMFont_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool BMFont_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bdb70e1;
}

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromXml( ::Xml xml){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_36_fromXml)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  37)			_hx_tmp = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  37)			_hx_tmp = false;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            		}
HXDLIN(  37)		 ::Xml this1 = xml;
HXDLIN(  37)		 ::Xml xmlAccess = this1;
HXLINE(  38)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromXml(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xmlAccess,HX_("info",6e,38,bb,45)));
HXLINE(  39)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromXml(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xmlAccess,HX_("common",2b,75,2e,c7)));
HXLINE(  40)		::Array< ::Dynamic> pages = ::flixel::graphics::frames::bmfont::BMFontPage_obj::listFromXml(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xmlAccess,HX_("pages",44,2b,4d,bd)));
HXLINE(  41)		::Array< ::Dynamic> chars = ::flixel::graphics::frames::bmfont::BMFontChar_obj::listFromXml(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xmlAccess,HX_("chars",dd,9c,b3,45)));
HXLINE(  42)		::Array< ::Dynamic> kerning = null();
HXLINE(  44)		if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(xmlAccess,HX_("kernings",27,b8,8b,80))) {
HXLINE(  46)			kerning = ::flixel::graphics::frames::bmfont::BMFontKerning_obj::listFromXml(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(xmlAccess,HX_("kernings",27,b8,8b,80)));
            		}
HXLINE(  49)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,kerning);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromXml,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_53_fromText)
HXLINE(  54)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = null();
HXLINE(  55)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = null();
HXLINE(  56)		::Array< ::Dynamic> pages = ::Array_obj< ::Dynamic>::__new();
HXLINE(  57)		::Array< ::Dynamic> chars = ::Array_obj< ::Dynamic>::__new();
HXLINE(  58)		::Array< ::Dynamic> kernings = ::Array_obj< ::Dynamic>::__new();
HXLINE(  63)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  63)		{
HXLINE(  63)			int _g1 = 0;
HXDLIN(  63)			::Array< ::String > _g2 = ::StringTools_obj::replace(text,HX_("\r\n",5d,0b,00,00),HX_("\n",0a,00,00,00)).split(HX_("\n",0a,00,00,00));
HXDLIN(  63)			while((_g1 < _g2->length)){
HXLINE(  63)				::String v = _g2->__get(_g1);
HXDLIN(  63)				_g1 = (_g1 + 1);
HXDLIN(  63)				if ((v.length > 0)) {
HXLINE(  63)					_g->push(v);
            				}
            			}
            		}
HXDLIN(  63)		::Array< ::String > lines = _g;
HXLINE(  64)		{
HXLINE(  64)			int _g3 = 0;
HXDLIN(  64)			while((_g3 < lines->length)){
HXLINE(  64)				::String line = lines->__get(_g3);
HXDLIN(  64)				_g3 = (_g3 + 1);
HXLINE(  66)				::String blockType = line.substring(0,line.indexOf(HX_(" ",20,00,00,00),null()));
HXLINE(  67)				::String blockAttrs = line.substring((line.indexOf(HX_(" ",20,00,00,00),null()) + 1),null());
HXLINE(  68)				::String _hx_switch_0 = blockType;
            				if (  (_hx_switch_0==HX_("char",d6,5e,bf,41)) ){
HXLINE(  74)					chars->push(::flixel::graphics::frames::bmfont::BMFontChar_obj::fromText(blockAttrs));
HXDLIN(  74)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("common",2b,75,2e,c7)) ){
HXLINE(  71)					common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromText(blockAttrs);
HXDLIN(  71)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("info",6e,38,bb,45)) ){
HXLINE(  70)					info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromText(blockAttrs);
HXDLIN(  70)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("kerning",cc,ba,37,b0)) ){
HXLINE(  76)					kernings->push(::flixel::graphics::frames::bmfont::BMFontKerning_obj::fromText(blockAttrs));
HXDLIN(  76)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("page",4f,da,51,4a)) ){
HXLINE(  72)					pages->push(::flixel::graphics::frames::bmfont::BMFontPage_obj::fromText(blockAttrs));
HXDLIN(  72)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
            			}
            		}
HXLINE(  80)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  80)		if ((kernings->length > 0)) {
HXLINE(  80)			_hx_tmp = kernings;
            		}
            		else {
HXLINE(  80)			_hx_tmp = null();
            		}
HXDLIN(  80)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromText,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_87_fromBytes)
HXLINE(  88)		 ::haxe::io::BytesInput bytes1 =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE(  89)		::Array< int > expectedBytes = ::Array_obj< int >::fromData( _hx_array_data_e79fee37_9,3);
HXLINE(  90)		{
HXLINE(  90)			int _g = 0;
HXDLIN(  90)			while((_g < expectedBytes->length)){
HXLINE(  90)				int b = expectedBytes->__get(_g);
HXDLIN(  90)				_g = (_g + 1);
HXLINE(  92)				int testByte = bytes1->readByte();
HXLINE(  93)				if ((testByte != b)) {
HXLINE(  94)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Invalid binary .fnt file. Found ",18,03,19,53) + testByte) + HX_(", expected ",b4,e5,81,19)) + b)));
            				}
            			}
            		}
HXLINE(  96)		int version = bytes1->readByte();
HXLINE(  97)		if ((version < 3)) {
HXLINE(  99)			::flixel::FlxG_obj::log->advanced(HX_("The BMFont parser is made to work on files with version 3. Using earlier versions can cause issues!",db,84,bd,6a),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
HXLINE( 102)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = null();
HXLINE( 103)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = null();
HXLINE( 104)		::Array< ::Dynamic> pages = null();
HXLINE( 105)		::Array< ::Dynamic> chars = null();
HXLINE( 106)		::Array< ::Dynamic> kerning = null();
HXLINE( 109)		while((bytes1->pos < bytes1->totlen)){
HXLINE( 111)			int blockId = bytes1->readByte();
HXLINE( 112)			switch((int)(blockId)){
            				case (int)1: {
HXLINE( 114)					info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromBytes(bytes1);
            				}
            				break;
            				case (int)2: {
HXLINE( 115)					common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromBytes(bytes1);
            				}
            				break;
            				case (int)3: {
HXLINE( 116)					pages = ::flixel::graphics::frames::bmfont::BMFontPage_obj::listFromBytes(bytes1);
            				}
            				break;
            				case (int)4: {
HXLINE( 117)					chars = ::flixel::graphics::frames::bmfont::BMFontChar_obj::listFromBytes(bytes1);
            				}
            				break;
            				case (int)5: {
HXLINE( 118)					kerning = ::flixel::graphics::frames::bmfont::BMFontKerning_obj::listFromBytes(bytes1);
            				}
            				break;
            			}
            		}
HXLINE( 121)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,kerning);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromBytes,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::parse( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_126_parse)
HXDLIN( 126)		 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType _g = ::flixel::graphics::frames::bmfont::BMFont_obj::guessType(data);
HXDLIN( 126)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 128)				::String text = _g->_hx_getString(0);
HXDLIN( 128)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromText(text);
            			}
            			break;
            			case (int)1: {
HXLINE( 129)				 ::Xml xml = _g->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 129)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromXml(xml);
            			}
            			break;
            			case (int)2: {
HXLINE( 130)				 ::haxe::io::Bytes bytes = _g->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 130)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromBytes(bytes);
            			}
            			break;
            		}
HXLINE( 126)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,parse,return )

 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFont_obj::guessType( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_140_guessType)
HXLINE( 141)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::Xml >())) {
HXLINE( 143)			return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::XML(::hx::TCast<  ::Xml >::cast(data)->firstElement());
            		}
HXLINE( 146)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::haxe::io::Bytes >())) {
HXLINE( 148)			 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(data) );
HXLINE( 149)			if (::flixel::graphics::frames::bmfont::BMFont_obj::isValidBytes(bytes)) {
HXLINE( 150)				return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::BINARY(bytes);
            			}
HXLINE( 152)			return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(bytes->toString());
            		}
HXLINE( 155)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::String >())) {
HXLINE( 157)			::String dataStr = ( (::String)(data) );
HXLINE( 158)			if (::openfl::utils::Assets_obj::exists(dataStr,null())) {
HXLINE( 161)				 ::openfl::utils::ByteArrayData bytes = ::openfl::utils::Assets_obj::getBytes(dataStr);
HXLINE( 162)				if (::hx::IsNull( bytes )) {
HXLINE( 163)					return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(::openfl::utils::Assets_obj::getText(dataStr));
            				}
HXLINE( 165)				if (::flixel::graphics::frames::bmfont::BMFont_obj::isValidBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes))) {
HXLINE( 166)					return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::BINARY(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes));
            				}
HXLINE( 168)				return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(bytes->toString());
            			}
            			else {
HXLINE( 173)				return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(dataStr);
            			}
            		}
HXLINE( 177)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid FlxAngelCodeAsset: ",51,07,1f,ee) + ::Std_obj::string(data))));
HXDLIN( 177)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,guessType,return )

 ::Xml BMFont_obj::safeParseXML(::String str){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_184_safeParseXML)
HXDLIN( 184)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 186)			 ::Xml xml = ::Xml_obj::parse(str);
HXLINE( 187)			return xml;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 189)				{
HXLINE( 189)					null();
            				}
HXLINE( 191)				return null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 184)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,safeParseXML,return )

 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFont_obj::detectFromText(::String text){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_196_detectFromText)
HXLINE( 197)		 ::Xml xml = ::flixel::graphics::frames::bmfont::BMFont_obj::safeParseXML(text);
HXLINE( 198)		bool _hx_tmp;
HXDLIN( 198)		if (::hx::IsNotNull( xml )) {
HXLINE( 198)			_hx_tmp = ::hx::IsNotNull( xml->firstElement() );
            		}
            		else {
HXLINE( 198)			_hx_tmp = false;
            		}
HXDLIN( 198)		if (_hx_tmp) {
HXLINE( 200)			return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::XML(xml->firstElement());
            		}
HXLINE( 202)		return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::TEXT(text);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,detectFromText,return )

bool BMFont_obj::isValidBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_206_isValidBytes)
HXLINE( 207)		::Array< int > expected = ::Array_obj< int >::fromData( _hx_array_data_e79fee37_16,3);
HXLINE( 208)		{
HXLINE( 208)			int _g = 0;
HXDLIN( 208)			int _g1 = expected->length;
HXDLIN( 208)			while((_g < _g1)){
HXLINE( 208)				_g = (_g + 1);
HXDLIN( 208)				int i = (_g - 1);
HXLINE( 210)				if ((bytes->b->__get(i) != expected->__get(i))) {
HXLINE( 211)					return false;
            				}
            			}
            		}
HXLINE( 214)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,isValidBytes,return )


::hx::ObjectPtr< BMFont_obj > BMFont_obj::__new( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning) {
	::hx::ObjectPtr< BMFont_obj > __this = new BMFont_obj();
	__this->__construct(info,common,pages,chars,kerning);
	return __this;
}

::hx::ObjectPtr< BMFont_obj > BMFont_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning) {
	BMFont_obj *__this = (BMFont_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFont_obj), true, "flixel.graphics.frames.bmfont.BMFont"));
	*(void **)__this = BMFont_obj::_hx_vtable;
	__this->__construct(info,common,pages,chars,kerning);
	return __this;
}

BMFont_obj::BMFont_obj()
{
}

void BMFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMFont);
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(common,"common");
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_END_CLASS();
}

void BMFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(common,"common");
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
}

::hx::Val BMFont_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return ::hx::Val( pages ); }
		if (HX_FIELD_EQ(inName,"chars") ) { return ::hx::Val( chars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"common") ) { return ::hx::Val( common ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return ::hx::Val( kerning ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"guessType") ) { outValue = guessType_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"safeParseXML") ) { outValue = safeParseXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidBytes") ) { outValue = isValidBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"detectFromText") ) { outValue = detectFromText_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFont_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontInfo >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"common") ) { common=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontCommon >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("common",2b,75,2e,c7));
	outFields->push(HX_("pages",44,2b,4d,bd));
	outFields->push(HX_("chars",dd,9c,b3,45));
	outFields->push(HX_("kerning",cc,ba,37,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFont_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontInfo */ ,(int)offsetof(BMFont_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontCommon */ ,(int)offsetof(BMFont_obj,common),HX_("common",2b,75,2e,c7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,pages),HX_("pages",44,2b,4d,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,chars),HX_("chars",dd,9c,b3,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,kerning),HX_("kerning",cc,ba,37,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFont_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFont_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("common",2b,75,2e,c7),
	HX_("pages",44,2b,4d,bd),
	HX_("chars",dd,9c,b3,45),
	HX_("kerning",cc,ba,37,b0),
	::String(null()) };

::hx::Class BMFont_obj::__mClass;

static ::String BMFont_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("fromText",37,9b,c5,aa),
	HX_("fromBytes",a1,f2,20,72),
	HX_("parse",33,90,55,bd),
	HX_("guessType",31,95,28,d5),
	HX_("safeParseXML",d1,29,5e,e4),
	HX_("detectFromText",ba,58,cb,a9),
	HX_("isValidBytes",59,9a,f6,dd),
	::String(null())
};

void BMFont_obj::__register()
{
	BMFont_obj _hx_dummy;
	BMFont_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFont",37,ee,9f,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFont_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFont_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFont_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFont_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFont_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFont_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
