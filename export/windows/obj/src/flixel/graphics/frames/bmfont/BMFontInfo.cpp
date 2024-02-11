#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo
#include <flixel/graphics/frames/bmfont/BMFontInfo.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPadding
#include <flixel/graphics/frames/bmfont/BMFontPadding.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontSpacing
#include <flixel/graphics/frames/bmfont/BMFontSpacing.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#include <flixel/graphics/frames/bmfont/BMFontUtil.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c0e2637f231fc17_15_new,"flixel.graphics.frames.bmfont.BMFontInfo","new",0xde53e1b7,"flixel.graphics.frames.bmfont.BMFontInfo.new","flixel/graphics/frames/bmfont/BMFontInfo.hx",15,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0e2637f231fc17_34_fromXml,"flixel.graphics.frames.bmfont.BMFontInfo","fromXml",0x1dbf4764,"flixel.graphics.frames.bmfont.BMFontInfo.fromXml","flixel/graphics/frames/bmfont/BMFontInfo.hx",34,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0e2637f231fc17_70_fromText,"flixel.graphics.frames.bmfont.BMFontInfo","fromText",0xe6f44e80,"flixel.graphics.frames.bmfont.BMFontInfo.fromText","flixel/graphics/frames/bmfont/BMFontInfo.hx",70,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0e2637f231fc17_52_fromText,"flixel.graphics.frames.bmfont.BMFontInfo","fromText",0xe6f44e80,"flixel.graphics.frames.bmfont.BMFontInfo.fromText","flixel/graphics/frames/bmfont/BMFontInfo.hx",52,0x8997cf99)
static const int _hx_array_data_dccd3a45_5[] = {
	(int)-1,
};
static const bool _hx_array_data_dccd3a45_6[] = {
	0,
};
static const bool _hx_array_data_dccd3a45_7[] = {
	0,
};
static const bool _hx_array_data_dccd3a45_8[] = {
	0,
};
static const bool _hx_array_data_dccd3a45_9[] = {
	0,
};
static const int _hx_array_data_dccd3a45_10[] = {
	(int)100,
};
static const int _hx_array_data_dccd3a45_11[] = {
	(int)1,
};
static const int _hx_array_data_dccd3a45_12[] = {
	(int)0,
};
static const bool _hx_array_data_dccd3a45_13[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2c0e2637f231fc17_108_fromBytes,"flixel.graphics.frames.bmfont.BMFontInfo","fromBytes",0xdecf1f38,"flixel.graphics.frames.bmfont.BMFontInfo.fromBytes","flixel/graphics/frames/bmfont/BMFontInfo.hx",108,0x8997cf99)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontInfo_obj::__construct(::String face,int size,bool bold,bool italic,::String charset,bool unicode,int stretchH,bool smooth,int aa, ::flixel::graphics::frames::bmfont::BMFontPadding padding, ::flixel::graphics::frames::bmfont::BMFontSpacing spacing, ::Dynamic outline, ::Dynamic fixedHeight){
            	HX_GC_STACKFRAME(&_hx_pos_2c0e2637f231fc17_15_new)
HXLINE(  30)		this->fixedHeight = false;
HXLINE(  29)		this->outline = 0;
HXLINE(  28)		this->spacing =  ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::__alloc( HX_CTX ,0,0);
HXLINE(  27)		this->padding =  ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE(  15)		this->face = face;
HXDLIN(  15)		this->size = size;
HXDLIN(  15)		this->bold = bold;
HXDLIN(  15)		this->italic = italic;
HXDLIN(  15)		this->charset = charset;
HXDLIN(  15)		this->unicode = unicode;
HXDLIN(  15)		this->stretchH = stretchH;
HXDLIN(  15)		this->smooth = smooth;
HXDLIN(  15)		this->aa = aa;
HXDLIN(  15)		if (::hx::IsNotNull( padding )) {
HXDLIN(  15)			this->padding = padding;
            		}
HXDLIN(  15)		if (::hx::IsNotNull( spacing )) {
HXDLIN(  15)			this->spacing = spacing;
            		}
HXDLIN(  15)		if (::hx::IsNotNull( outline )) {
HXDLIN(  15)			this->outline = ( (int)(outline) );
            		}
HXDLIN(  15)		if (::hx::IsNotNull( fixedHeight )) {
HXDLIN(  15)			this->fixedHeight = ( (bool)(fixedHeight) );
            		}
            	}

Dynamic BMFontInfo_obj::__CreateEmpty() { return new BMFontInfo_obj; }

void *BMFontInfo_obj::_hx_vtable = 0;

Dynamic BMFontInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontInfo_obj > _hx_result = new BMFontInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _hx_result;
}

bool BMFontInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7662d153;
}

 ::flixel::graphics::frames::bmfont::BMFontInfo BMFontInfo_obj::fromXml( ::Xml infoNode){
            	HX_GC_STACKFRAME(&_hx_pos_2c0e2637f231fc17_34_fromXml)
HXLINE(  35)		::String _g = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("face",9d,b4,b5,43));
HXLINE(  36)		 ::Dynamic _g1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("size",c1,a0,53,4c)));
HXLINE(  37)		bool _g2 = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("bold",85,81,1b,41)) != HX_("0",30,00,00,00));
HXLINE(  38)		bool _g3 = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("italic",f0,2e,64,06)) != HX_("0",30,00,00,00));
HXLINE(  39)		bool _g4 = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("smooth",2e,08,6b,07)) != HX_("0",30,00,00,00));
HXLINE(  40)		::String _g5 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("charset",8c,a6,7a,cf));
HXLINE(  41)		bool _g6 = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("unicode",1d,91,68,b3)) != HX_("0",30,00,00,00));
HXLINE(  42)		 ::Dynamic _g7 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("stretchH",a3,06,83,92)));
HXLINE(  43)		 ::Dynamic _g8 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("aa",e0,54,00,00)));
HXLINE(  44)		::Array< ::String > values = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("padding",d1,59,7d,d0)).split(HX_(",",2c,00,00,00));
HXDLIN(  44)		 ::Dynamic _g9 = ::Std_obj::parseInt(values->__get(0));
HXDLIN(  44)		 ::Dynamic _g10 = ::Std_obj::parseInt(values->__get(1));
HXDLIN(  44)		 ::Dynamic _g11 = ::Std_obj::parseInt(values->__get(2));
HXDLIN(  44)		 ::flixel::graphics::frames::bmfont::BMFontPadding _g12 =  ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,_g9,_g10,_g11,::Std_obj::parseInt(values->__get(3)));
HXLINE(  45)		 ::flixel::graphics::frames::bmfont::BMFontSpacing _g13 = ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::fromString(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("spacing",83,33,bb,91)));
HXLINE(  46)		 ::Dynamic _g14;
HXDLIN(  46)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(infoNode,HX_("outline",82,17,be,e1))) {
HXLINE(  46)			_g14 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("outline",82,17,be,e1)));
            		}
            		else {
HXLINE(  46)			_g14 = 0;
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(infoNode,HX_("fixedHeight",7b,04,7d,1e))) {
HXLINE(  47)			_hx_tmp = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(infoNode,HX_("fixedHeight",7b,04,7d,1e)) != HX_("0",30,00,00,00));
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXLINE(  34)		return  ::flixel::graphics::frames::bmfont::BMFontInfo_obj::__alloc( HX_CTX ,_g,( (int)(_g1) ),_g2,_g3,_g5,_g6,( (int)(_g7) ),_g4,( (int)(_g8) ),_g12,_g13,_g14,_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontInfo_obj,fromXml,return )

 ::flixel::graphics::frames::bmfont::BMFontInfo BMFontInfo_obj::fromText(::String infoText){
            		HX_BEGIN_LOCAL_FUNC_S13(::hx::LocalFunc,_hx_Closure_0,::Array< int >,stretchH,::Array< bool >,unicode,::Array< ::Dynamic>,spacing,::Array< bool >,fixedHeight,::Array< ::String >,face,::Array< bool >,smooth,::Array< bool >,italic,::Array< int >,aa,::Array< ::Dynamic>,padding,::Array< ::String >,charset,::Array< int >,size,::Array< int >,outline,::Array< bool >,bold) HXARGC(2)
            		void _hx_run(::String key,::String value){
            			HX_GC_STACKFRAME(&_hx_pos_2c0e2637f231fc17_70_fromText)
HXLINE(  70)			::String _hx_switch_0 = key;
            			if (  (_hx_switch_0==HX_("aa",e0,54,00,00)) ){
HXLINE(  80)				aa[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  80)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("bold",85,81,1b,41)) ){
HXLINE(  74)				bold[0] = (value != HX_("0",30,00,00,00));
HXDLIN(  74)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("charset",8c,a6,7a,cf)) ){
HXLINE(  76)				charset[0] = value;
HXDLIN(  76)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("face",9d,b4,b5,43)) ){
HXLINE(  72)				face[0] = value;
HXDLIN(  72)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("fixedHeight",7b,04,7d,1e)) ){
HXLINE(  84)				fixedHeight[0] = (value != HX_("0",30,00,00,00));
HXDLIN(  84)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE(  75)				italic[0] = (value != HX_("0",30,00,00,00));
HXDLIN(  75)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("outline",82,17,be,e1)) ){
HXLINE(  83)				outline[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  83)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("padding",d1,59,7d,d0)) ){
HXLINE(  81)				::Array< ::Dynamic> padding1 = padding;
HXDLIN(  81)				::Array< ::String > values = value.split(HX_(",",2c,00,00,00));
HXDLIN(  81)				 ::Dynamic _g = ::Std_obj::parseInt(values->__get(0));
HXDLIN(  81)				 ::Dynamic _g1 = ::Std_obj::parseInt(values->__get(1));
HXDLIN(  81)				 ::Dynamic _g2 = ::Std_obj::parseInt(values->__get(2));
HXDLIN(  81)				padding1[0] =  ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,_g,_g1,_g2,::Std_obj::parseInt(values->__get(3)));
HXDLIN(  81)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("size",c1,a0,53,4c)) ){
HXLINE(  73)				size[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("smooth",2e,08,6b,07)) ){
HXLINE(  79)				smooth[0] = (value != HX_("0",30,00,00,00));
HXDLIN(  79)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("spacing",83,33,bb,91)) ){
HXLINE(  82)				spacing[0] = ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::fromString(value);
HXDLIN(  82)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("stretchH",a3,06,83,92)) ){
HXLINE(  78)				stretchH[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  78)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("unicode",1d,91,68,b3)) ){
HXLINE(  77)				unicode[0] = (value != HX_("0",30,00,00,00));
HXDLIN(  77)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_2c0e2637f231fc17_52_fromText)
HXLINE(  53)		::Array< ::String > face = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  54)		::Array< int > size = ::Array_obj< int >::fromData( _hx_array_data_dccd3a45_5,1);
HXLINE(  55)		::Array< bool > bold = ::Array_obj< bool >::fromData( _hx_array_data_dccd3a45_6,1);
HXLINE(  56)		::Array< bool > italic = ::Array_obj< bool >::fromData( _hx_array_data_dccd3a45_7,1);
HXLINE(  57)		::Array< bool > smooth = ::Array_obj< bool >::fromData( _hx_array_data_dccd3a45_8,1);
HXLINE(  58)		::Array< ::String > charset = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  59)		::Array< bool > unicode = ::Array_obj< bool >::fromData( _hx_array_data_dccd3a45_9,1);
HXLINE(  60)		::Array< int > stretchH = ::Array_obj< int >::fromData( _hx_array_data_dccd3a45_10,1);
HXLINE(  61)		::Array< int > aa = ::Array_obj< int >::fromData( _hx_array_data_dccd3a45_11,1);
HXLINE(  62)		::Array< ::Dynamic> padding = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,null(),null(),null(),null()));
HXLINE(  63)		::Array< ::Dynamic> spacing = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::__alloc( HX_CTX ,null(),null()));
HXLINE(  64)		::Array< int > outline = ::Array_obj< int >::fromData( _hx_array_data_dccd3a45_12,1);
HXLINE(  65)		::Array< bool > fixedHeight = ::Array_obj< bool >::fromData( _hx_array_data_dccd3a45_13,1);
HXLINE(  67)		::flixel::graphics::frames::bmfont::BMFontUtil_obj::forEachAttribute(infoText, ::Dynamic(new _hx_Closure_0(stretchH,unicode,spacing,fixedHeight,face,smooth,italic,aa,padding,charset,size,outline,bold)));
HXLINE(  89)		return  ::flixel::graphics::frames::bmfont::BMFontInfo_obj::__alloc( HX_CTX ,face->__get(0),size->__get(0),bold->__get(0),italic->__get(0),charset->__get(0),unicode->__get(0),stretchH->__get(0),smooth->__get(0),aa->__get(0),padding->__get(0).StaticCast<  ::flixel::graphics::frames::bmfont::BMFontPadding >(),spacing->__get(0).StaticCast<  ::flixel::graphics::frames::bmfont::BMFontSpacing >(),outline->__get(0),fixedHeight->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontInfo_obj,fromText,return )

 ::flixel::graphics::frames::bmfont::BMFontInfo BMFontInfo_obj::fromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_2c0e2637f231fc17_108_fromBytes)
HXLINE( 109)		int blockSize = bytes->readInt32();
HXLINE( 110)		int size = bytes->readInt16();
HXLINE( 111)		int bitField = bytes->readByte();
HXLINE( 112)		int charsetByte = bytes->readByte();
HXLINE( 121)		::String _g;
HXDLIN( 121)		if ((charsetByte > 0)) {
HXLINE( 121)			_g = ::String::fromCharCode(charsetByte);
            		}
            		else {
HXLINE( 121)			_g = HX_("",00,00,00,00);
            		}
HXLINE( 122)		int _g1 = bytes->readUInt16();
HXLINE( 123)		int _g2 = bytes->readByte();
HXLINE( 124)		 ::haxe::io::BytesInput bytes1 =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes->read(4),null(),null());
HXDLIN( 124)		int _g3 = bytes1->readByte();
HXDLIN( 124)		int _g4 = bytes1->readByte();
HXDLIN( 124)		int _g5 = bytes1->readByte();
HXDLIN( 124)		 ::flixel::graphics::frames::bmfont::BMFontPadding _g6 =  ::flixel::graphics::frames::bmfont::BMFontPadding_obj::__alloc( HX_CTX ,_g3,_g4,_g5,bytes1->readByte());
HXLINE( 125)		 ::haxe::io::BytesInput bytes2 =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes->read(2),null(),null());
HXDLIN( 125)		int _g7 = bytes2->readByte();
HXDLIN( 125)		 ::flixel::graphics::frames::bmfont::BMFontSpacing _g8 =  ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::__alloc( HX_CTX ,_g7,bytes2->readByte());
HXLINE( 126)		 ::Dynamic _g9 = bytes->readByte();
HXLINE( 113)		 ::flixel::graphics::frames::bmfont::BMFontInfo fontInfo =  ::flixel::graphics::frames::bmfont::BMFontInfo_obj::__alloc( HX_CTX ,bytes->readString(((blockSize - 14) - 1),null()),size,((bitField & 16) != 0),((bitField & 32) != 0),_g,((bitField & 64) != 0),_g1,((bitField & 128) != 0),_g2,_g6,_g8,_g9,((bitField & 8) != 0));
HXLINE( 129)		bytes->readByte();
HXLINE( 130)		return fontInfo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontInfo_obj,fromBytes,return )


::hx::ObjectPtr< BMFontInfo_obj > BMFontInfo_obj::__new(::String face,int size,bool bold,bool italic,::String charset,bool unicode,int stretchH,bool smooth,int aa, ::flixel::graphics::frames::bmfont::BMFontPadding padding, ::flixel::graphics::frames::bmfont::BMFontSpacing spacing, ::Dynamic outline, ::Dynamic fixedHeight) {
	::hx::ObjectPtr< BMFontInfo_obj > __this = new BMFontInfo_obj();
	__this->__construct(face,size,bold,italic,charset,unicode,stretchH,smooth,aa,padding,spacing,outline,fixedHeight);
	return __this;
}

::hx::ObjectPtr< BMFontInfo_obj > BMFontInfo_obj::__alloc(::hx::Ctx *_hx_ctx,::String face,int size,bool bold,bool italic,::String charset,bool unicode,int stretchH,bool smooth,int aa, ::flixel::graphics::frames::bmfont::BMFontPadding padding, ::flixel::graphics::frames::bmfont::BMFontSpacing spacing, ::Dynamic outline, ::Dynamic fixedHeight) {
	BMFontInfo_obj *__this = (BMFontInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontInfo_obj), true, "flixel.graphics.frames.bmfont.BMFontInfo"));
	*(void **)__this = BMFontInfo_obj::_hx_vtable;
	__this->__construct(face,size,bold,italic,charset,unicode,stretchH,smooth,aa,padding,spacing,outline,fixedHeight);
	return __this;
}

BMFontInfo_obj::BMFontInfo_obj()
{
}

void BMFontInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMFontInfo);
	HX_MARK_MEMBER_NAME(face,"face");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(charset,"charset");
	HX_MARK_MEMBER_NAME(unicode,"unicode");
	HX_MARK_MEMBER_NAME(stretchH,"stretchH");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(aa,"aa");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(fixedHeight,"fixedHeight");
	HX_MARK_END_CLASS();
}

void BMFontInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(face,"face");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(charset,"charset");
	HX_VISIT_MEMBER_NAME(unicode,"unicode");
	HX_VISIT_MEMBER_NAME(stretchH,"stretchH");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(aa,"aa");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(fixedHeight,"fixedHeight");
}

::hx::Val BMFontInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"aa") ) { return ::hx::Val( aa ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"face") ) { return ::hx::Val( face ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return ::hx::Val( italic ); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return ::hx::Val( smooth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charset") ) { return ::hx::Val( charset ); }
		if (HX_FIELD_EQ(inName,"unicode") ) { return ::hx::Val( unicode ); }
		if (HX_FIELD_EQ(inName,"padding") ) { return ::hx::Val( padding ); }
		if (HX_FIELD_EQ(inName,"spacing") ) { return ::hx::Val( spacing ); }
		if (HX_FIELD_EQ(inName,"outline") ) { return ::hx::Val( outline ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stretchH") ) { return ::hx::Val( stretchH ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixedHeight") ) { return ::hx::Val( fixedHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"aa") ) { aa=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"face") ) { face=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charset") ) { charset=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unicode") ) { unicode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontPadding >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontSpacing >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stretchH") ) { stretchH=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixedHeight") ) { fixedHeight=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("face",9d,b4,b5,43));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("charset",8c,a6,7a,cf));
	outFields->push(HX_("unicode",1d,91,68,b3));
	outFields->push(HX_("stretchH",a3,06,83,92));
	outFields->push(HX_("smooth",2e,08,6b,07));
	outFields->push(HX_("aa",e0,54,00,00));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("spacing",83,33,bb,91));
	outFields->push(HX_("outline",82,17,be,e1));
	outFields->push(HX_("fixedHeight",7b,04,7d,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(BMFontInfo_obj,face),HX_("face",9d,b4,b5,43)},
	{::hx::fsInt,(int)offsetof(BMFontInfo_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsBool,(int)offsetof(BMFontInfo_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsBool,(int)offsetof(BMFontInfo_obj,italic),HX_("italic",f0,2e,64,06)},
	{::hx::fsString,(int)offsetof(BMFontInfo_obj,charset),HX_("charset",8c,a6,7a,cf)},
	{::hx::fsBool,(int)offsetof(BMFontInfo_obj,unicode),HX_("unicode",1d,91,68,b3)},
	{::hx::fsInt,(int)offsetof(BMFontInfo_obj,stretchH),HX_("stretchH",a3,06,83,92)},
	{::hx::fsBool,(int)offsetof(BMFontInfo_obj,smooth),HX_("smooth",2e,08,6b,07)},
	{::hx::fsInt,(int)offsetof(BMFontInfo_obj,aa),HX_("aa",e0,54,00,00)},
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontPadding */ ,(int)offsetof(BMFontInfo_obj,padding),HX_("padding",d1,59,7d,d0)},
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontSpacing */ ,(int)offsetof(BMFontInfo_obj,spacing),HX_("spacing",83,33,bb,91)},
	{::hx::fsInt,(int)offsetof(BMFontInfo_obj,outline),HX_("outline",82,17,be,e1)},
	{::hx::fsBool,(int)offsetof(BMFontInfo_obj,fixedHeight),HX_("fixedHeight",7b,04,7d,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontInfo_obj_sMemberFields[] = {
	HX_("face",9d,b4,b5,43),
	HX_("size",c1,a0,53,4c),
	HX_("bold",85,81,1b,41),
	HX_("italic",f0,2e,64,06),
	HX_("charset",8c,a6,7a,cf),
	HX_("unicode",1d,91,68,b3),
	HX_("stretchH",a3,06,83,92),
	HX_("smooth",2e,08,6b,07),
	HX_("aa",e0,54,00,00),
	HX_("padding",d1,59,7d,d0),
	HX_("spacing",83,33,bb,91),
	HX_("outline",82,17,be,e1),
	HX_("fixedHeight",7b,04,7d,1e),
	::String(null()) };

::hx::Class BMFontInfo_obj::__mClass;

static ::String BMFontInfo_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("fromText",37,9b,c5,aa),
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void BMFontInfo_obj::__register()
{
	BMFontInfo_obj _hx_dummy;
	BMFontInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontInfo",45,3a,cd,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontInfo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
