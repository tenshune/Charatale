#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_BMFontXml_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/BMFontXml_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_16_get_xml,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","get_xml",0x3def0caa,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.get_xml","flixel/graphics/frames/bmfont/BMFontXml.hx",16,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_24_get_name,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","get_name",0xec96cc18,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.get_name","flixel/graphics/frames/bmfont/BMFontXml.hx",24,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_32_get_node,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","get_node",0xeca163cf,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.get_node","flixel/graphics/frames/bmfont/BMFontXml.hx",32,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_40_get_att,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","get_att",0x3ddd9ef4,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.get_att","flixel/graphics/frames/bmfont/BMFontXml.hx",40,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_48_get_elements,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","get_elements",0xf1a0fa84,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.get_elements","flixel/graphics/frames/bmfont/BMFontXml.hx",48,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_51__new,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","_new",0x82b641a5,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_._new","flixel/graphics/frames/bmfont/BMFontXml.hx",51,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_61_has,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","has",0x5ebf4796,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.has","flixel/graphics/frames/bmfont/BMFontXml.hx",61,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_71_hasNode,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","hasNode",0x2f6d00b8,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.hasNode","flixel/graphics/frames/bmfont/BMFontXml.hx",71,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_a73abfff7495eea7_77_nodes,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_","nodes",0x806e476d,"flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_.nodes","flixel/graphics/frames/bmfont/BMFontXml.hx",77,0x6e0c2cde)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFontXml{

void BMFontXml_Impl__obj::__construct() { }

Dynamic BMFontXml_Impl__obj::__CreateEmpty() { return new BMFontXml_Impl__obj; }

void *BMFontXml_Impl__obj::_hx_vtable = 0;

Dynamic BMFontXml_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontXml_Impl__obj > _hx_result = new BMFontXml_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BMFontXml_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x473d9d18;
}

 ::Xml BMFontXml_Impl__obj::get_xml( ::Xml this1){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_16_get_xml)
HXDLIN(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontXml_Impl__obj,get_xml,return )

::String BMFontXml_Impl__obj::get_name( ::Xml this1){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_24_get_name)
HXDLIN(  24)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN(  24)			return HX_("Document",3b,ab,c4,74);
            		}
            		else {
HXDLIN(  24)			if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN(  24)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            			}
HXDLIN(  24)			return this1->nodeName;
            		}
HXDLIN(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontXml_Impl__obj,get_name,return )

 ::Xml BMFontXml_Impl__obj::get_node( ::Xml this1){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_32_get_node)
HXDLIN(  32)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontXml_Impl__obj,get_node,return )

 ::Xml BMFontXml_Impl__obj::get_att( ::Xml this1){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_40_get_att)
HXDLIN(  40)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontXml_Impl__obj,get_att,return )

 ::Dynamic BMFontXml_Impl__obj::get_elements( ::Xml this1){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_48_get_elements)
HXDLIN(  48)		return this1->elements();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontXml_Impl__obj,get_elements,return )

 ::Xml BMFontXml_Impl__obj::_new( ::Xml xml){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_51__new)
HXLINE(  53)		bool _hx_tmp;
HXDLIN(  53)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  53)			_hx_tmp = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  53)			_hx_tmp = false;
            		}
HXDLIN(  53)		if (_hx_tmp) {
HXLINE(  54)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            		}
HXLINE(  51)		 ::Xml this1 = xml;
HXDLIN(  51)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontXml_Impl__obj,_new,return )

bool BMFontXml_Impl__obj::has( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_61_has)
HXLINE(  62)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE(  63)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Cannot access document attribute ",ca,30,fe,c0) + name)));
            		}
HXLINE(  65)		if ((this1->nodeType != ::Xml_obj::Document)) {
HXLINE(  65)			return this1->exists(name);
            		}
            		else {
HXLINE(  65)			return false;
            		}
HXDLIN(  65)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMFontXml_Impl__obj,has,return )

bool BMFontXml_Impl__obj::hasNode( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_71_hasNode)
HXDLIN(  71)		return ( (bool)(this1->elementsNamed(name)->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMFontXml_Impl__obj,hasNode,return )

::Array< ::Dynamic> BMFontXml_Impl__obj::nodes( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_a73abfff7495eea7_77_nodes)
HXDLIN(  77)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  78)		{
HXLINE(  78)			 ::Dynamic xml = this1->elementsNamed(name);
HXDLIN(  78)			while(( (bool)(xml->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  78)				 ::Xml xml1 = ( ( ::Xml)(xml->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  79)				bool _hx_tmp;
HXDLIN(  79)				if ((xml1->nodeType != ::Xml_obj::Document)) {
HXLINE(  79)					_hx_tmp = (xml1->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  79)					_hx_tmp = false;
            				}
HXDLIN(  79)				if (_hx_tmp) {
HXLINE(  79)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(xml1->nodeType))));
            				}
HXDLIN(  79)				 ::Xml this1 = xml1;
HXDLIN(  79)				_g->push(this1);
            			}
            		}
HXLINE(  77)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMFontXml_Impl__obj,nodes,return )


BMFontXml_Impl__obj::BMFontXml_Impl__obj()
{
}

bool BMFontXml_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { outValue = nodes_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_xml") ) { outValue = get_xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_att") ) { outValue = get_att_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasNode") ) { outValue = hasNode_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { outValue = get_name_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_node") ) { outValue = get_node_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_elements") ) { outValue = get_elements_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BMFontXml_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BMFontXml_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class BMFontXml_Impl__obj::__mClass;

static ::String BMFontXml_Impl__obj_sStaticFields[] = {
	HX_("get_xml",6e,36,d0,26),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_node",8b,c5,c4,c8),
	HX_("get_att",b8,c8,be,26),
	HX_("get_elements",40,ea,dd,38),
	HX_("_new",61,15,1f,3f),
	HX_("has",5a,3f,4f,00),
	HX_("hasNode",7c,2a,4e,18),
	HX_("nodes",31,b8,be,9f),
	::String(null())
};

void BMFontXml_Impl__obj::__register()
{
	BMFontXml_Impl__obj _hx_dummy;
	BMFontXml_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont._BMFontXml.BMFontXml_Impl_",aa,9a,94,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontXml_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontXml_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BMFontXml_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontXml_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontXml_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFontXml
