#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#include <openfl/text/_internal/ShapeCache.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet
#include <openfl/text/_internal/_TextEngine/DefaultFontSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81873a2f4b2980c0_113_new,"openfl.text._internal.TextEngine","new",0xa9ba7af6,"openfl.text._internal.TextEngine.new","openfl/text/_internal/TextEngine.hx",113,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_179_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",179,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_173_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",173,0xb85e1839)
static const ::String _hx_array_data_7e808804_3[] = {
	HX_("",00,00,00,00),
};
static const bool _hx_array_data_7e808804_4[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_268_getBounds,"openfl.text._internal.TextEngine","getBounds",0x3ac9cec1,"openfl.text._internal.TextEngine.getBounds","openfl/text/_internal/TextEngine.hx",268,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_556_getLine,"openfl.text._internal.TextEngine","getLine",0xeb547540,"openfl.text._internal.TextEngine.getLine","openfl/text/_internal/TextEngine.hx",556,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_573_getLineBreaks,"openfl.text._internal.TextEngine","getLineBreaks",0x21405c34,"openfl.text._internal.TextEngine.getLineBreaks","openfl/text/_internal/TextEngine.hx",573,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_593_getLineBreakIndex,"openfl.text._internal.TextEngine","getLineBreakIndex",0xa9a1db33,"openfl.text._internal.TextEngine.getLineBreakIndex","openfl/text/_internal/TextEngine.hx",593,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_603_getLineMeasurements,"openfl.text._internal.TextEngine","getLineMeasurements",0x50395657,"openfl.text._internal.TextEngine.getLineMeasurements","openfl/text/_internal/TextEngine.hx",603,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_762_getLayoutGroups,"openfl.text._internal.TextEngine","getLayoutGroups",0x36de2bea,"openfl.text._internal.TextEngine.getLayoutGroups","openfl/text/_internal/TextEngine.hx",762,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1695_restrictText,"openfl.text._internal.TextEngine","restrictText",0x4d5464b3,"openfl.text._internal.TextEngine.restrictText","openfl/text/_internal/TextEngine.hx",1695,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1716_setTextAlignment,"openfl.text._internal.TextEngine","setTextAlignment",0x7bf8ff1e,"openfl.text._internal.TextEngine.setTextAlignment","openfl/text/_internal/TextEngine.hx",1716,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1823_trimText,"openfl.text._internal.TextEngine","trimText",0x8f1ce459,"openfl.text._internal.TextEngine.trimText","openfl/text/_internal/TextEngine.hx",1823,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1838_update,"openfl.text._internal.TextEngine","update",0x02cb1d33,"openfl.text._internal.TextEngine.update","openfl/text/_internal/TextEngine.hx",1838,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1871_get_bottomScrollV,"openfl.text._internal.TextEngine","get_bottomScrollV",0x0563c86b,"openfl.text._internal.TextEngine.get_bottomScrollV","openfl/text/_internal/TextEngine.hx",1871,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1918_get_maxScrollV,"openfl.text._internal.TextEngine","get_maxScrollV",0x5a4206d8,"openfl.text._internal.TextEngine.get_maxScrollV","openfl/text/_internal/TextEngine.hx",1918,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1959_set_restrict,"openfl.text._internal.TextEngine","set_restrict",0xd4c7f563,"openfl.text._internal.TextEngine.set_restrict","openfl/text/_internal/TextEngine.hx",1959,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1980_get_scrollV,"openfl.text._internal.TextEngine","get_scrollV",0x1f66c456,"openfl.text._internal.TextEngine.get_scrollV","openfl/text/_internal/TextEngine.hx",1980,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1992_set_scrollV,"openfl.text._internal.TextEngine","set_scrollV",0x29d3cb62,"openfl.text._internal.TextEngine.set_scrollV","openfl/text/_internal/TextEngine.hx",1992,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_2001_set_text,"openfl.text._internal.TextEngine","set_text",0xa4cb1754,"openfl.text._internal.TextEngine.set_text","openfl/text/_internal/TextEngine.hx",2001,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_206_findFont,"openfl.text._internal.TextEngine","findFont",0xc00da052,"openfl.text._internal.TextEngine.findFont","openfl/text/_internal/TextEngine.hx",206,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_243_findFontVariant,"openfl.text._internal.TextEngine","findFontVariant",0x8f425653,"openfl.text._internal.TextEngine.findFontVariant","openfl/text/_internal/TextEngine.hx",243,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_300_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",300,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_309_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",309,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_429_getFormatHeight,"openfl.text._internal.TextEngine","getFormatHeight",0x3ed257ca,"openfl.text._internal.TextEngine.getFormatHeight","openfl/text/_internal/TextEngine.hx",429,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_469_getFont,"openfl.text._internal.TextEngine","getFont",0xe761bb1b,"openfl.text._internal.TextEngine.getFont","openfl/text/_internal/TextEngine.hx",469,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_527_getFontInstance,"openfl.text._internal.TextEngine","getFontInstance",0x7b1da9d0,"openfl.text._internal.TextEngine.getFontInstance","openfl/text/_internal/TextEngine.hx",527,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_38_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",38,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_40_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",40,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_41_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",41,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_42_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",42,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_43_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",43,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_44_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",44,0xb85e1839)
namespace openfl{
namespace text{
namespace _internal{

void TextEngine_obj::__construct( ::openfl::text::TextField textField){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_113_new)
HXLINE( 115)		this->_hx___shapeCache =  ::openfl::text::_internal::ShapeCache_obj::__alloc( HX_CTX );
HXLINE( 117)		this->textField = textField;
HXLINE( 119)		this->width = ( (Float)(100) );
HXLINE( 120)		this->height = ( (Float)(100) );
HXLINE( 121)		this->set_text(HX_("",00,00,00,00));
HXLINE( 123)		this->bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 124)		this->textBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 126)		this->type = 0;
HXLINE( 127)		this->autoSize = 2;
HXLINE( 128)		this->embedFonts = false;
HXLINE( 129)		this->selectable = true;
HXLINE( 130)		this->borderColor = 0;
HXLINE( 131)		this->border = false;
HXLINE( 132)		this->backgroundColor = 16777215;
HXLINE( 133)		this->background = false;
HXLINE( 134)		this->gridFitType = 1;
HXLINE( 135)		this->maxChars = 0;
HXLINE( 136)		this->multiline = false;
HXLINE( 137)		this->numLines = 1;
HXLINE( 138)		this->sharpness = ( (Float)(0) );
HXLINE( 139)		this->scrollH = 0;
HXLINE( 140)		this->set_scrollV(1);
HXLINE( 141)		this->wordWrap = false;
HXLINE( 143)		int length = null();
HXDLIN( 143)		bool fixed = null();
HXDLIN( 143)		::Array< Float > array = null();
HXDLIN( 143)		this->lineAscents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 144)		int length1 = null();
HXDLIN( 144)		bool fixed1 = null();
HXDLIN( 144)		::Array< int > array1 = null();
HXDLIN( 144)		this->lineBreaks =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE( 145)		int length2 = null();
HXDLIN( 145)		bool fixed2 = null();
HXDLIN( 145)		::Array< Float > array2 = null();
HXDLIN( 145)		this->lineDescents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE( 146)		int length3 = null();
HXDLIN( 146)		bool fixed3 = null();
HXDLIN( 146)		::Array< Float > array3 = null();
HXDLIN( 146)		this->lineLeadings =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE( 147)		int length4 = null();
HXDLIN( 147)		bool fixed4 = null();
HXDLIN( 147)		::Array< Float > array4 = null();
HXDLIN( 147)		this->lineHeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length4,fixed4,array4,true);
HXLINE( 148)		int length5 = null();
HXDLIN( 148)		bool fixed5 = null();
HXDLIN( 148)		::Array< Float > array5 = null();
HXDLIN( 148)		this->lineWidths =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length5,fixed5,array5,true);
HXLINE( 149)		int length6 = null();
HXDLIN( 149)		bool fixed6 = null();
HXDLIN( 149)		::Array< ::Dynamic> array6 = null();
HXDLIN( 149)		this->layoutGroups =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length6,fixed6,array6,true);
HXLINE( 150)		int length7 = null();
HXDLIN( 150)		bool fixed7 = null();
HXDLIN( 150)		::Array< ::Dynamic> array7 = null();
HXDLIN( 150)		this->textFormatRanges =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length7,fixed7,array7,true);
            	}

Dynamic TextEngine_obj::__CreateEmpty() { return new TextEngine_obj; }

void *TextEngine_obj::_hx_vtable = 0;

Dynamic TextEngine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEngine_obj > _hx_result = new TextEngine_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextEngine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dd5980a;
}

 ::EReg TextEngine_obj::createRestrictRegexp(::String restrict){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,declined,::Array< bool >,accepting) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_179_createRestrictRegexp)
HXLINE( 180)			if (accepting->__get(0)) {
HXLINE( 182)				accepting[0] = !(accepting->__get(0));
HXLINE( 183)				return ereg->matched(1);
            			}
HXLINE( 185)			::Array< ::String > declined1 = declined;
HXDLIN( 185)			int accepted = 0;
HXDLIN( 185)			::String declined2 = declined1->__get(accepted);
HXDLIN( 185)			declined1[accepted] = (declined2 + ereg->matched(1));
HXLINE( 186)			accepting[0] = !(accepting->__get(0));
HXLINE( 187)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_173_createRestrictRegexp)
HXLINE( 174)		 ::EReg declinedRange =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^([^\\^]+)",d0,bc,3c,14),HX_("gu",2e,5a,00,00));
HXLINE( 175)		::Array< ::String > declined = ::Array_obj< ::String >::fromData( _hx_array_data_7e808804_3,1);
HXLINE( 177)		::Array< bool > accepting = ::Array_obj< bool >::fromData( _hx_array_data_7e808804_4,1);
HXLINE( 178)		::String accepted = declinedRange->map(restrict, ::Dynamic(new _hx_Closure_0(declined,accepting)));
HXLINE( 190)		::Array< ::String > testRegexpParts = ::Array_obj< ::String >::__new(0);
HXLINE( 192)		if ((accepted.length > 0)) {
HXLINE( 194)			testRegexpParts->push(((HX_("[^",a3,4f,00,00) + accepted) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 197)		if ((declined->__get(0).length > 0)) {
HXLINE( 199)			testRegexpParts->push(((HX_("[",5b,00,00,00) + declined->__get(0)) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 202)		return  ::EReg_obj::__alloc( HX_CTX ,((HX_("(",28,00,00,00) + testRegexpParts->join(HX_("|",7c,00,00,00))) + HX_(")",29,00,00,00)),HX_("g",67,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,createRestrictRegexp,return )

void TextEngine_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_268_getBounds)
HXLINE( 269)		int padding;
HXDLIN( 269)		if (this->border) {
HXLINE( 269)			padding = 1;
            		}
            		else {
HXLINE( 269)			padding = 0;
            		}
HXLINE( 271)		this->bounds->width = (this->width + padding);
HXLINE( 272)		this->bounds->height = (this->height + padding);
HXLINE( 274)		Float x = this->width;
HXDLIN( 274)		Float y = this->height;
HXLINE( 276)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 277)		{
HXLINE( 277)			int _g = 0;
HXDLIN( 277)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 277)			while((_g < _g1)){
HXLINE( 277)				_g = (_g + 1);
HXDLIN( 277)				int i = (_g - 1);
HXLINE( 279)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 280)				bool _hx_tmp;
HXDLIN( 280)				bool _hx_tmp1;
HXDLIN( 280)				if ((i == lastIndex)) {
HXLINE( 280)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 280)					_hx_tmp1 = false;
            				}
HXDLIN( 280)				if (_hx_tmp1) {
HXLINE( 280)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 280)					_hx_tmp = false;
            				}
HXDLIN( 280)				if (_hx_tmp) {
HXLINE( 283)					continue;
            				}
HXLINE( 285)				if ((group->offsetX < x)) {
HXLINE( 285)					x = group->offsetX;
            				}
HXLINE( 286)				if ((group->offsetY < y)) {
HXLINE( 286)					y = group->offsetY;
            				}
            			}
            		}
HXLINE( 289)		if ((x >= this->width)) {
HXLINE( 289)			x = ( (Float)(2) );
            		}
HXLINE( 290)		if ((y >= this->height)) {
HXLINE( 290)			y = ( (Float)(2) );
            		}
HXLINE( 296)		this->textBounds->setTo(::Math_obj::max((x - ( (Float)(2) )),( (Float)(0) )),::Math_obj::max((y - ( (Float)(2) )),( (Float)(0) )),::Math_obj::min((this->textWidth + 4),(this->bounds->width + 4)),::Math_obj::min((this->textHeight + 4),(this->bounds->height + 4)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine(int index){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_556_getLine)
HXLINE( 557)		bool _hx_tmp;
HXDLIN( 557)		if ((index >= 0)) {
HXLINE( 557)			_hx_tmp = (index > (this->lineBreaks->get_length() + 1));
            		}
            		else {
HXLINE( 557)			_hx_tmp = true;
            		}
HXDLIN( 557)		if (_hx_tmp) {
HXLINE( 559)			return null();
            		}
HXLINE( 562)		if ((this->lineBreaks->get_length() == 0)) {
HXLINE( 564)			return this->text;
            		}
            		else {
HXLINE( 568)			::String _hx_tmp = this->text;
HXDLIN( 568)			int _hx_tmp1;
HXDLIN( 568)			if ((index > 0)) {
HXLINE( 568)				_hx_tmp1 = this->lineBreaks->get((index - 1));
            			}
            			else {
HXLINE( 568)				_hx_tmp1 = 0;
            			}
HXDLIN( 568)			return _hx_tmp.substring(_hx_tmp1,this->lineBreaks->get(index));
            		}
HXLINE( 562)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

void TextEngine_obj::getLineBreaks(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_573_getLineBreaks)
HXLINE( 574)		this->lineBreaks->set_length(0);
HXLINE( 576)		int index = -1;
HXLINE( 578)		int cr = -1;
HXDLIN( 578)		int lf = -1;
HXLINE( 579)		while((index < this->text.length)){
HXLINE( 581)			lf = this->text.indexOf(HX_("\n",0a,00,00,00),(index + 1));
HXLINE( 582)			cr = this->text.indexOf(HX_("\r",0d,00,00,00),(index + 1));
HXLINE( 584)			if ((cr == -1)) {
HXLINE( 584)				index = lf;
            			}
            			else {
HXLINE( 584)				if ((lf == -1)) {
HXLINE( 584)					index = cr;
            				}
            				else {
HXLINE( 584)					if ((cr < lf)) {
HXLINE( 584)						index = cr;
            					}
            					else {
HXLINE( 584)						index = lf;
            					}
            				}
            			}
HXLINE( 586)			if ((index > -1)) {
HXLINE( 586)				this->lineBreaks->push(index);
            			}
            			else {
HXLINE( 588)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineBreaks,(void))

int TextEngine_obj::getLineBreakIndex(::hx::Null< int >  __o_startIndex){
            		int startIndex = __o_startIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_593_getLineBreakIndex)
HXLINE( 594)		{
HXLINE( 594)			 ::Dynamic lineBreak = this->lineBreaks->iterator();
HXDLIN( 594)			while(( (bool)(lineBreak->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 594)				int lineBreak1 = ( (int)(lineBreak->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 596)				if ((lineBreak1 >= startIndex)) {
HXLINE( 596)					return lineBreak1;
            				}
            			}
            		}
HXLINE( 599)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

void TextEngine_obj::getLineMeasurements(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_603_getLineMeasurements)
HXLINE( 604)		this->lineAscents->set_length(0);
HXLINE( 605)		this->lineDescents->set_length(0);
HXLINE( 606)		this->lineLeadings->set_length(0);
HXLINE( 607)		this->lineHeights->set_length(0);
HXLINE( 608)		this->lineWidths->set_length(0);
HXLINE( 610)		Float currentLineAscent = ((Float)0.0);
HXLINE( 611)		Float currentLineDescent = ((Float)0.0);
HXLINE( 612)		 ::Dynamic currentLineLeading = null();
HXLINE( 613)		Float currentLineHeight = ((Float)0.0);
HXLINE( 614)		Float currentLineWidth = ((Float)0.0);
HXLINE( 615)		Float currentTextHeight = ((Float)0.0);
HXLINE( 617)		this->textWidth = ( (Float)(0) );
HXLINE( 618)		this->textHeight = ( (Float)(0) );
HXLINE( 619)		this->numLines = 1;
HXLINE( 620)		this->maxScrollH = 0;
HXLINE( 622)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 623)		{
HXLINE( 623)			int _g = 0;
HXDLIN( 623)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 623)			while((_g < _g1)){
HXLINE( 623)				_g = (_g + 1);
HXDLIN( 623)				int i = (_g - 1);
HXLINE( 625)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 627)				bool _hx_tmp;
HXDLIN( 627)				bool _hx_tmp1;
HXDLIN( 627)				if ((i == lastIndex)) {
HXLINE( 627)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 627)					_hx_tmp1 = false;
            				}
HXDLIN( 627)				if (_hx_tmp1) {
HXLINE( 627)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 627)					_hx_tmp = false;
            				}
HXDLIN( 627)				if (_hx_tmp) {
HXLINE( 630)					continue;
            				}
HXLINE( 633)				while((group->lineIndex > (this->numLines - 1))){
HXLINE( 635)					this->lineAscents->push(currentLineAscent);
HXLINE( 636)					this->lineDescents->push(currentLineDescent);
HXLINE( 637)					{
HXLINE( 637)						Float _hx_tmp;
HXDLIN( 637)						if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 637)							_hx_tmp = ( (Float)(currentLineLeading) );
            						}
            						else {
HXLINE( 637)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 637)						this->lineLeadings->push(_hx_tmp);
            					}
HXLINE( 638)					this->lineHeights->push(currentLineHeight);
HXLINE( 639)					this->lineWidths->push(currentLineWidth);
HXLINE( 641)					currentLineAscent = ( (Float)(0) );
HXLINE( 642)					currentLineDescent = ( (Float)(0) );
HXLINE( 643)					currentLineLeading = null();
HXLINE( 644)					currentLineHeight = ( (Float)(0) );
HXLINE( 645)					currentLineWidth = ( (Float)(0) );
HXLINE( 647)					this->numLines++;
            				}
HXLINE( 650)				currentLineAscent = ::Math_obj::max(currentLineAscent,group->ascent);
HXLINE( 651)				currentLineDescent = ::Math_obj::max(currentLineDescent,group->descent);
HXLINE( 653)				if (::hx::IsNull( currentLineLeading )) {
HXLINE( 655)					currentLineLeading = group->leading;
            				}
            				else {
HXLINE( 659)					currentLineLeading = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(currentLineLeading) ),( (Float)(group->leading) )));
            				}
HXLINE( 662)				currentLineHeight = ::Math_obj::max(currentLineHeight,group->height);
HXLINE( 663)				currentLineWidth = ((group->offsetX - ( (Float)(2) )) + group->width);
HXLINE( 665)				if ((currentLineWidth > this->textWidth)) {
HXLINE( 667)					this->textWidth = currentLineWidth;
            				}
HXLINE( 670)				currentTextHeight = ( (Float)(::Math_obj::ceil((((group->offsetY - ( (Float)(2) )) + group->ascent) + group->descent))) );
HXLINE( 672)				if ((currentTextHeight > this->textHeight)) {
HXLINE( 674)					this->textHeight = currentTextHeight;
            				}
            			}
            		}
HXLINE( 678)		bool _hx_tmp;
HXDLIN( 678)		bool _hx_tmp1;
HXDLIN( 678)		if ((this->textHeight == 0)) {
HXLINE( 678)			_hx_tmp1 = ::hx::IsNotNull( this->textField );
            		}
            		else {
HXLINE( 678)			_hx_tmp1 = false;
            		}
HXDLIN( 678)		if (_hx_tmp1) {
HXLINE( 678)			_hx_tmp = ::hx::IsEq( this->type,1 );
            		}
            		else {
HXLINE( 678)			_hx_tmp = false;
            		}
HXDLIN( 678)		if (_hx_tmp) {
HXLINE( 680)			 ::openfl::text::TextFormat currentFormat = this->textField->_hx___textFormat;
HXLINE( 681)			Float ascent;
HXDLIN( 681)			Float descent;
HXLINE( 683)			 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXLINE( 685)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE( 687)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXLINE( 688)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE( 690)				bool _hx_tmp;
HXDLIN( 690)				if (::hx::IsNotNull( font )) {
HXLINE( 690)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE( 690)					_hx_tmp = false;
            				}
HXDLIN( 690)				if (_hx_tmp) {
HXLINE( 693)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXLINE( 694)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE( 702)					ascent = ( (Float)(currentFormat->size) );
HXLINE( 703)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXLINE( 681)			 ::Dynamic leading = currentFormat->leading;
HXDLIN( 681)			int heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXLINE( 710)			currentLineAscent = ascent;
HXLINE( 711)			currentLineDescent = descent;
HXLINE( 712)			currentLineLeading = leading;
HXLINE( 714)			currentTextHeight = ( (Float)(::Math_obj::ceil((ascent + descent))) );
HXLINE( 715)			this->textHeight = currentTextHeight;
            		}
HXLINE( 718)		this->lineAscents->push(currentLineAscent);
HXLINE( 719)		this->lineDescents->push(currentLineDescent);
HXLINE( 720)		{
HXLINE( 720)			Float _hx_tmp2;
HXDLIN( 720)			if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 720)				_hx_tmp2 = ( (Float)(currentLineLeading) );
            			}
            			else {
HXLINE( 720)				_hx_tmp2 = ( (Float)(0) );
            			}
HXDLIN( 720)			this->lineLeadings->push(_hx_tmp2);
            		}
HXLINE( 721)		this->lineHeights->push(currentLineHeight);
HXLINE( 722)		this->lineWidths->push(currentLineWidth);
HXLINE( 724)		if ((this->numLines == 1)) {
HXLINE( 726)			if (::hx::IsGreater( currentLineLeading,0 )) {
HXLINE( 728)				 ::openfl::text::_internal::TextEngine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 728)				_hx_tmp->textHeight = (_hx_tmp->textHeight + currentLineLeading);
            			}
            		}
HXLINE( 732)		if (::hx::IsNotEq( this->autoSize,2 )) {
HXLINE( 734)			 ::Dynamic _hx_switch_0 = this->autoSize;
            			if (  (_hx_switch_0==0) ||  (_hx_switch_0==1) ||  (_hx_switch_0==3) ){
HXLINE( 737)				if (!(this->wordWrap)) {
HXLINE( 739)					this->width = (this->textWidth + 4);
            				}
HXLINE( 742)				this->height = (this->textHeight + 4);
HXLINE( 743)				this->bottomScrollV = this->numLines;
HXLINE( 736)				goto _hx_goto_14;
            			}
            			/* default */{
            			}
            			_hx_goto_14:;
            		}
HXLINE( 749)		if ((this->textWidth > (this->width - ( (Float)(4) )))) {
HXLINE( 751)			this->maxScrollH = ::Std_obj::_hx_int(((this->textWidth - this->width) + 4));
            		}
            		else {
HXLINE( 755)			this->maxScrollH = 0;
            		}
HXLINE( 758)		if ((this->scrollH > this->maxScrollH)) {
HXLINE( 758)			this->scrollH = this->maxScrollH;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

void TextEngine_obj::getLayoutGroups(){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_762_getLayoutGroups)
HXDLIN( 762)		 ::openfl::text::_internal::TextEngine _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 763)		this->layoutGroups->set_length(0);
HXLINE( 765)		bool _hx_tmp;
HXDLIN( 765)		if (::hx::IsNotNull( this->text )) {
HXLINE( 765)			_hx_tmp = (this->text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 765)			_hx_tmp = true;
            		}
HXDLIN( 765)		if (_hx_tmp) {
HXLINE( 765)			return;
            		}
HXLINE( 767)		int rangeIndex = -1;
HXLINE( 768)		 ::openfl::text::_internal::TextFormatRange formatRange = null();
HXLINE( 769)		 ::lime::text::Font font = null();
HXLINE( 771)		 ::openfl::text::TextFormat currentFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 774)		int leading = 0;
HXLINE( 775)		Float ascent = ((Float)0.0);
HXDLIN( 775)		Float maxAscent = ((Float)0.0);
HXLINE( 776)		Float descent = ((Float)0.0);
HXLINE( 779)		 ::Dynamic align = 3;
HXLINE( 780)		int blockIndent = 0;
HXLINE( 781)		bool bullet = false;
HXLINE( 782)		int indent = 0;
HXLINE( 783)		int leftMargin = 0;
HXLINE( 784)		int rightMargin = 0;
HXLINE( 785)		bool firstLineOfParagraph = true;
HXLINE( 787)		 ::Dynamic tabStops = null();
HXLINE( 789)		 ::openfl::text::_internal::TextLayoutGroup layoutGroup = null();
HXDLIN( 789)		::Array< ::Dynamic> positions = null();
HXLINE( 790)		Float widthValue = ((Float)0.0);
HXDLIN( 790)		int heightValue = 0;
HXDLIN( 790)		int maxHeightValue = 0;
HXLINE( 791)		int previousSpaceIndex = -2;
HXLINE( 792)		int previousBreakIndex = -1;
HXLINE( 793)		int spaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 794)		int breakCount = 0;
HXLINE( 795)		int breakIndex;
HXDLIN( 795)		if ((breakCount < this->lineBreaks->get_length())) {
HXLINE( 795)			breakIndex = this->lineBreaks->get(breakCount);
            		}
            		else {
HXLINE( 795)			breakIndex = -1;
            		}
HXLINE( 797)		Float offsetX = ((Float)0.0);
HXLINE( 798)		Float offsetY = ((Float)0.0);
HXLINE( 799)		int textIndex = 0;
HXLINE( 800)		int lineIndex = 0;
HXLINE(1356)		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1356)			rangeIndex = (rangeIndex + 1);
HXDLIN(1356)			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1356)			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1356)			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            		}
HXLINE(1357)		{
HXLINE(1357)			firstLineOfParagraph = true;
HXDLIN(1357)			if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1357)				align = currentFormat->align;
            			}
            			else {
HXLINE(1357)				align = 3;
            			}
HXDLIN(1357)			if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1357)				blockIndent = ( (int)(currentFormat->blockIndent) );
            			}
            			else {
HXLINE(1357)				blockIndent = 0;
            			}
HXDLIN(1357)			if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1357)				indent = ( (int)(currentFormat->indent) );
            			}
            			else {
HXLINE(1357)				indent = 0;
            			}
HXDLIN(1357)			if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1357)				leftMargin = ( (int)(currentFormat->leftMargin) );
            			}
            			else {
HXLINE(1357)				leftMargin = 0;
            			}
HXDLIN(1357)			if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1357)				rightMargin = ( (int)(currentFormat->rightMargin) );
            			}
            			else {
HXLINE(1357)				rightMargin = 0;
            			}
HXDLIN(1357)			bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1357)			bool _hx_tmp2 = ::hx::IsNotNull( currentFormat->tabStops );
            		}
HXLINE(1358)		{
HXLINE(1358)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1358)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1358)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE(1358)				bool _hx_tmp;
HXDLIN(1358)				if (::hx::IsNotNull( font )) {
HXLINE(1358)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE(1358)					_hx_tmp = false;
            				}
HXDLIN(1358)				if (_hx_tmp) {
HXLINE(1358)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1358)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE(1358)					ascent = ( (Float)(currentFormat->size) );
HXDLIN(1358)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXDLIN(1358)			leading = ( (int)(currentFormat->leading) );
HXDLIN(1358)			heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1358)			if ((heightValue > maxHeightValue)) {
HXLINE(1358)				maxHeightValue = heightValue;
            			}
HXDLIN(1358)			if ((ascent > maxAscent)) {
HXLINE(1358)				maxAscent = ascent;
            			}
            		}
HXLINE(1360)		bool wrap;
HXLINE(1361)		int maxLoops = (this->text.length + 1);
HXLINE(1365)		while((textIndex < maxLoops)){
HXLINE(1367)			bool _hx_tmp;
HXDLIN(1367)			if ((breakIndex > -1)) {
HXLINE(1367)				if ((spaceIndex != -1)) {
HXLINE(1367)					_hx_tmp = (breakIndex < spaceIndex);
            				}
            				else {
HXLINE(1367)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(1367)				_hx_tmp = false;
            			}
HXDLIN(1367)			if (_hx_tmp) {
HXLINE(1371)				if ((textIndex <= breakIndex)) {
HXLINE(1373)					if ((textIndex >= breakIndex)) {
HXLINE(1373)						positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1373)						widthValue = ( (Float)(0) );
            					}
            					else {
HXLINE(1373)						if ((breakIndex <= formatRange->end)) {
HXLINE(1373)							::String text = _gthis->text;
HXDLIN(1373)							Float letterSpacing = ((Float)0.0);
HXDLIN(1373)							if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1373)								letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            							}
HXDLIN(1373)							if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1373)								_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            							}
HXDLIN(1373)							_gthis->_hx___textLayout->set_text(null());
HXDLIN(1373)							_gthis->_hx___textLayout->set_font(font);
HXDLIN(1373)							if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1373)								_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            							}
HXDLIN(1373)							_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1373)							bool positions1;
HXDLIN(1373)							if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1373)								positions1 = (_gthis->sharpness < 400);
            							}
            							else {
HXLINE(1373)								positions1 = true;
            							}
HXDLIN(1373)							_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1373)							 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1373)							_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1373)							if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1373)								positions = _gthis->_hx___textLayout->get_positions();
            							}
            							else {
HXLINE(1373)								positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            							}
HXDLIN(1373)							Float width = ((Float)0.0);
HXDLIN(1373)							{
HXLINE(1373)								int _g = 0;
HXDLIN(1373)								while((_g < positions->length)){
HXLINE(1373)									 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1373)									_g = (_g + 1);
HXDLIN(1373)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1373)							widthValue = width;
            						}
            						else {
HXLINE(1373)							int tempIndex = textIndex;
HXDLIN(1373)							int tempRangeEnd = formatRange->end;
HXDLIN(1373)							int countRanges = 0;
HXDLIN(1373)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1373)							widthValue = ( (Float)(0) );
HXDLIN(1373)							while(true){
HXLINE(1373)								if ((tempIndex != tempRangeEnd)) {
HXLINE(1373)									::String text = _gthis->text;
HXDLIN(1373)									Float letterSpacing = ((Float)0.0);
HXDLIN(1373)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1373)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1373)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1373)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1373)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1373)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1373)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1373)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1373)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1373)									bool _hx_tmp;
HXDLIN(1373)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1373)										_hx_tmp = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1373)										_hx_tmp = true;
            									}
HXDLIN(1373)									_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1373)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1373)									_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1373)									::Array< ::Dynamic> tempPositions;
HXDLIN(1373)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1373)										tempPositions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1373)										tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1373)									positions = positions->concat(tempPositions);
            								}
HXDLIN(1373)								if ((tempRangeEnd != breakIndex)) {
HXLINE(1373)									bool _hx_tmp;
HXDLIN(1373)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1373)										rangeIndex = (rangeIndex + 1);
HXDLIN(1373)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1373)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1373)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1373)										_hx_tmp = true;
            									}
            									else {
HXLINE(1373)										_hx_tmp = false;
            									}
HXDLIN(1373)									if (!(_hx_tmp)) {
HXLINE(1373)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1373)										goto _hx_goto_18;
            									}
HXDLIN(1373)									tempIndex = tempRangeEnd;
HXDLIN(1373)									if ((breakIndex < formatRange->end)) {
HXLINE(1373)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1373)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1373)									countRanges = (countRanges + 1);
            								}
            								else {
HXLINE(1373)									Float width = ((Float)0.0);
HXDLIN(1373)									{
HXLINE(1373)										int _g = 0;
HXDLIN(1373)										while((_g < positions->length)){
HXLINE(1373)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1373)											_g = (_g + 1);
HXDLIN(1373)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1373)									widthValue = width;
HXDLIN(1373)									goto _hx_goto_18;
            								}
            							}
            							_hx_goto_18:;
HXDLIN(1373)							rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1373)							if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1373)								rangeIndex = (rangeIndex + 1);
HXDLIN(1373)								formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1373)								currentFormat->_hx___merge(formatRange->format);
HXDLIN(1373)								font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            							}
            						}
            					}
HXLINE(1374)					{
HXLINE(1374)						bool _hx_tmp;
HXDLIN(1374)						if ((_gthis->width >= 4)) {
HXLINE(1374)							_hx_tmp = _gthis->wordWrap;
            						}
            						else {
HXLINE(1374)							_hx_tmp = false;
            						}
HXDLIN(1374)						if (_hx_tmp) {
HXLINE(1374)							::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1374)							int bufferCount;
HXDLIN(1374)							int placeIndex;
HXDLIN(1374)							Float positionWidth;
HXDLIN(1374)							 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1374)							Float width = ((Float)0.0);
HXDLIN(1374)							{
HXLINE(1374)								int _g = 0;
HXDLIN(1374)								while((_g < remainingPositions->length)){
HXLINE(1374)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)									_g = (_g + 1);
HXDLIN(1374)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1374)							Float tempWidth = width;
HXDLIN(1374)							int i = (remainingPositions->length - 1);
HXDLIN(1374)							while((i >= 0)){
HXLINE(1374)								 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1374)								bool _hx_tmp;
HXDLIN(1374)								if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1374)									_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            								}
            								else {
HXLINE(1374)									_hx_tmp = false;
            								}
HXDLIN(1374)								if (_hx_tmp) {
HXLINE(1374)									goto _hx_goto_21;
            								}
HXDLIN(1374)								 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)								tempWidth = (tempWidth - position->advance->x);
HXDLIN(1374)								i = (i - 1);
            							}
            							_hx_goto_21:;
HXDLIN(1374)							while(true){
HXLINE(1374)								bool _hx_tmp;
HXDLIN(1374)								if ((remainingPositions->length > 0)) {
HXLINE(1374)									int _hx_tmp1;
HXDLIN(1374)									if (firstLineOfParagraph) {
HXLINE(1374)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1374)										_hx_tmp1 = 0;
            									}
HXDLIN(1374)									_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            								}
            								else {
HXLINE(1374)									_hx_tmp = false;
            								}
HXDLIN(1374)								if (!(_hx_tmp)) {
HXLINE(1374)									goto _hx_goto_22;
            								}
HXDLIN(1374)								bufferCount = 0;
HXDLIN(1374)								i = bufferCount;
HXDLIN(1374)								positionWidth = ((Float)0.0);
HXDLIN(1374)								while(true){
HXLINE(1374)									int _hx_tmp;
HXDLIN(1374)									if (firstLineOfParagraph) {
HXLINE(1374)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1374)										_hx_tmp = 0;
            									}
HXDLIN(1374)									if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1374)										goto _hx_goto_23;
            									}
HXDLIN(1374)									currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)									if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1374)										i = (i + 1);
HXDLIN(1374)										bufferCount = (bufferCount + 1);
            									}
            									else {
HXLINE(1374)										positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1374)										i = (i + 1);
            									}
            								}
            								_hx_goto_23:;
HXDLIN(1374)								if ((i == bufferCount)) {
HXLINE(1374)									i = (bufferCount + 1);
            								}
            								else {
HXLINE(1374)									while(true){
HXLINE(1374)										bool _hx_tmp;
HXDLIN(1374)										if ((i > 1)) {
HXLINE(1374)											int _hx_tmp1;
HXDLIN(1374)											if (firstLineOfParagraph) {
HXLINE(1374)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1374)												_hx_tmp1 = 0;
            											}
HXDLIN(1374)											_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1374)											_hx_tmp = false;
            										}
HXDLIN(1374)										if (!(_hx_tmp)) {
HXLINE(1374)											goto _hx_goto_24;
            										}
HXDLIN(1374)										i = (i - 1);
HXDLIN(1374)										if (((i - bufferCount) > 0)) {
HXLINE(1374)											{
HXLINE(1374)												int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1374)												if ((textIndex >= endIndex)) {
HXLINE(1374)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1374)													if ((endIndex <= formatRange->end)) {
HXLINE(1374)														::String text = _gthis->text;
HXDLIN(1374)														Float letterSpacing = ((Float)0.0);
HXDLIN(1374)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1374)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1374)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1374)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)														bool positions1;
HXDLIN(1374)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1374)															positions1 = true;
            														}
HXDLIN(1374)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1374)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1374)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1374)														Float width = ((Float)0.0);
HXDLIN(1374)														{
HXLINE(1374)															int _g = 0;
HXDLIN(1374)															while((_g < positions->length)){
HXLINE(1374)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)																_g = (_g + 1);
HXDLIN(1374)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1374)														widthValue = width;
            													}
            													else {
HXLINE(1374)														int tempIndex = textIndex;
HXDLIN(1374)														int tempRangeEnd = formatRange->end;
HXDLIN(1374)														int countRanges = 0;
HXDLIN(1374)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)														widthValue = ( (Float)(0) );
HXDLIN(1374)														while(true){
HXLINE(1374)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1374)																::String text = _gthis->text;
HXDLIN(1374)																Float letterSpacing = ((Float)0.0);
HXDLIN(1374)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1374)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1374)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1374)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)																bool _hx_tmp;
HXDLIN(1374)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1374)																	_hx_tmp = true;
            																}
HXDLIN(1374)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1374)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1374)																::Array< ::Dynamic> tempPositions;
HXDLIN(1374)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1374)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1374)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1374)															if ((tempRangeEnd != endIndex)) {
HXLINE(1374)																bool _hx_tmp;
HXDLIN(1374)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1374)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1374)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1374)																	_hx_tmp = false;
            																}
HXDLIN(1374)																if (!(_hx_tmp)) {
HXLINE(1374)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1374)																	goto _hx_goto_26;
            																}
HXDLIN(1374)																tempIndex = tempRangeEnd;
HXDLIN(1374)																if ((endIndex < formatRange->end)) {
HXLINE(1374)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1374)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1374)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1374)																Float width = ((Float)0.0);
HXDLIN(1374)																{
HXLINE(1374)																	int _g = 0;
HXDLIN(1374)																	while((_g < positions->length)){
HXLINE(1374)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)																		_g = (_g + 1);
HXDLIN(1374)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1374)																widthValue = width;
HXDLIN(1374)																goto _hx_goto_26;
            															}
            														}
            														_hx_goto_26:;
HXDLIN(1374)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1374)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)															rangeIndex = (rangeIndex + 1);
HXDLIN(1374)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1374)											positionWidth = widthValue;
            										}
            										else {
HXLINE(1374)											i = 1;
HXDLIN(1374)											bufferCount = 0;
HXDLIN(1374)											{
HXLINE(1374)												int endIndex = (textIndex + 1);
HXDLIN(1374)												if ((textIndex >= endIndex)) {
HXLINE(1374)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1374)													if ((endIndex <= formatRange->end)) {
HXLINE(1374)														::String text = _gthis->text;
HXDLIN(1374)														Float letterSpacing = ((Float)0.0);
HXDLIN(1374)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1374)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1374)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1374)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)														bool positions1;
HXDLIN(1374)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1374)															positions1 = true;
            														}
HXDLIN(1374)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1374)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1374)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1374)														Float width = ((Float)0.0);
HXDLIN(1374)														{
HXLINE(1374)															int _g = 0;
HXDLIN(1374)															while((_g < positions->length)){
HXLINE(1374)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)																_g = (_g + 1);
HXDLIN(1374)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1374)														widthValue = width;
            													}
            													else {
HXLINE(1374)														int tempIndex = textIndex;
HXDLIN(1374)														int tempRangeEnd = formatRange->end;
HXDLIN(1374)														int countRanges = 0;
HXDLIN(1374)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)														widthValue = ( (Float)(0) );
HXDLIN(1374)														while(true){
HXLINE(1374)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1374)																::String text = _gthis->text;
HXDLIN(1374)																Float letterSpacing = ((Float)0.0);
HXDLIN(1374)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1374)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1374)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1374)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)																bool _hx_tmp;
HXDLIN(1374)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1374)																	_hx_tmp = true;
            																}
HXDLIN(1374)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1374)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1374)																::Array< ::Dynamic> tempPositions;
HXDLIN(1374)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1374)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1374)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1374)															if ((tempRangeEnd != endIndex)) {
HXLINE(1374)																bool _hx_tmp;
HXDLIN(1374)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1374)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1374)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1374)																	_hx_tmp = false;
            																}
HXDLIN(1374)																if (!(_hx_tmp)) {
HXLINE(1374)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1374)																	goto _hx_goto_29;
            																}
HXDLIN(1374)																tempIndex = tempRangeEnd;
HXDLIN(1374)																if ((endIndex < formatRange->end)) {
HXLINE(1374)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1374)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1374)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1374)																Float width = ((Float)0.0);
HXDLIN(1374)																{
HXLINE(1374)																	int _g = 0;
HXDLIN(1374)																	while((_g < positions->length)){
HXLINE(1374)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)																		_g = (_g + 1);
HXDLIN(1374)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1374)																widthValue = width;
HXDLIN(1374)																goto _hx_goto_29;
            															}
            														}
            														_hx_goto_29:;
HXDLIN(1374)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1374)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)															rangeIndex = (rangeIndex + 1);
HXDLIN(1374)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1374)											positionWidth = ( (Float)(0) );
            										}
            									}
            									_hx_goto_24:;
            								}
HXDLIN(1374)								placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1374)								{
HXLINE(1374)									if ((placeIndex <= formatRange->end)) {
HXLINE(1374)										::String text = _gthis->text;
HXDLIN(1374)										Float letterSpacing = ((Float)0.0);
HXDLIN(1374)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1374)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)										bool positions1;
HXDLIN(1374)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1374)											positions1 = true;
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)										_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1374)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1374)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1374)										Float width = ((Float)0.0);
HXDLIN(1374)										{
HXLINE(1374)											int _g = 0;
HXDLIN(1374)											while((_g < positions->length)){
HXLINE(1374)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)												_g = (_g + 1);
HXDLIN(1374)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1374)										widthValue = width;
HXDLIN(1374)										bool _hx_tmp;
HXDLIN(1374)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1374)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1374)											_hx_tmp = true;
            										}
HXDLIN(1374)										if (_hx_tmp) {
HXLINE(1374)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1374)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1374)											layoutGroup->format = formatRange->format;
HXDLIN(1374)											layoutGroup->startIndex = textIndex;
HXDLIN(1374)											layoutGroup->endIndex = placeIndex;
            										}
HXDLIN(1374)										layoutGroup->positions = positions;
HXDLIN(1374)										int _hx_tmp1;
HXDLIN(1374)										if (firstLineOfParagraph) {
HXLINE(1374)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1374)											_hx_tmp1 = 0;
            										}
HXDLIN(1374)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1374)										layoutGroup->ascent = ascent;
HXDLIN(1374)										layoutGroup->descent = descent;
HXDLIN(1374)										layoutGroup->leading = leading;
HXDLIN(1374)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1374)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1374)										layoutGroup->width = widthValue;
HXDLIN(1374)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1374)										offsetX = (offsetX + widthValue);
HXDLIN(1374)										if ((placeIndex == formatRange->end)) {
HXLINE(1374)											layoutGroup = null();
HXDLIN(1374)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)												rangeIndex = (rangeIndex + 1);
HXDLIN(1374)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1374)											{
HXLINE(1374)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1374)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1374)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1374)													bool _hx_tmp;
HXDLIN(1374)													if (::hx::IsNotNull( font )) {
HXLINE(1374)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1374)														_hx_tmp = false;
            													}
HXDLIN(1374)													if (_hx_tmp) {
HXLINE(1374)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1374)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1374)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1374)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1374)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1374)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1374)												if ((heightValue > maxHeightValue)) {
HXLINE(1374)													maxHeightValue = heightValue;
            												}
HXDLIN(1374)												if ((ascent > maxAscent)) {
HXLINE(1374)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1374)										while(true){
HXLINE(1374)											int tempRangeEnd;
HXDLIN(1374)											if ((placeIndex < formatRange->end)) {
HXLINE(1374)												tempRangeEnd = placeIndex;
            											}
            											else {
HXLINE(1374)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1374)											if ((textIndex != tempRangeEnd)) {
HXLINE(1374)												::String text = _gthis->text;
HXDLIN(1374)												Float letterSpacing = ((Float)0.0);
HXDLIN(1374)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1374)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1374)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1374)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)												bool positions1;
HXDLIN(1374)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1374)													positions1 = true;
            												}
HXDLIN(1374)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1374)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1374)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1374)												Float width = ((Float)0.0);
HXDLIN(1374)												{
HXLINE(1374)													int _g = 0;
HXDLIN(1374)													while((_g < positions->length)){
HXLINE(1374)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)														_g = (_g + 1);
HXDLIN(1374)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1374)												widthValue = width;
HXDLIN(1374)												bool _hx_tmp;
HXDLIN(1374)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1374)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1374)													_hx_tmp = true;
            												}
HXDLIN(1374)												if (_hx_tmp) {
HXLINE(1374)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1374)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1374)													layoutGroup->format = formatRange->format;
HXDLIN(1374)													layoutGroup->startIndex = textIndex;
HXDLIN(1374)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1374)												layoutGroup->positions = positions;
HXDLIN(1374)												int _hx_tmp1;
HXDLIN(1374)												if (firstLineOfParagraph) {
HXLINE(1374)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1374)													_hx_tmp1 = 0;
            												}
HXDLIN(1374)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1374)												layoutGroup->ascent = ascent;
HXDLIN(1374)												layoutGroup->descent = descent;
HXDLIN(1374)												layoutGroup->leading = leading;
HXDLIN(1374)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1374)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1374)												layoutGroup->width = widthValue;
HXDLIN(1374)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1374)												offsetX = (offsetX + widthValue);
HXDLIN(1374)												textIndex = tempRangeEnd;
            											}
HXDLIN(1374)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1374)												layoutGroup = null();
            											}
HXDLIN(1374)											if ((tempRangeEnd == placeIndex)) {
HXLINE(1374)												goto _hx_goto_32;
            											}
HXDLIN(1374)											bool _hx_tmp;
HXDLIN(1374)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)												rangeIndex = (rangeIndex + 1);
HXDLIN(1374)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1374)												_hx_tmp = true;
            											}
            											else {
HXLINE(1374)												_hx_tmp = false;
            											}
HXDLIN(1374)											if (!(_hx_tmp)) {
HXLINE(1374)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1374)												goto _hx_goto_32;
            											}
HXDLIN(1374)											{
HXLINE(1374)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1374)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1374)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1374)													bool _hx_tmp;
HXDLIN(1374)													if (::hx::IsNotNull( font )) {
HXLINE(1374)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1374)														_hx_tmp = false;
            													}
HXDLIN(1374)													if (_hx_tmp) {
HXLINE(1374)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1374)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1374)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1374)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1374)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1374)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1374)												if ((heightValue > maxHeightValue)) {
HXLINE(1374)													maxHeightValue = heightValue;
            												}
HXDLIN(1374)												if ((ascent > maxAscent)) {
HXLINE(1374)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_32:;
            									}
HXDLIN(1374)									textIndex = placeIndex;
            								}
HXDLIN(1374)								{
HXLINE(1374)									{
HXLINE(1374)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1374)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1374)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1374)											bool _hx_tmp;
HXDLIN(1374)											if (::hx::IsNotNull( font )) {
HXLINE(1374)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1374)												_hx_tmp = false;
            											}
HXDLIN(1374)											if (_hx_tmp) {
HXLINE(1374)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1374)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1374)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1374)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1374)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1374)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1374)										if ((heightValue > maxHeightValue)) {
HXLINE(1374)											maxHeightValue = heightValue;
            										}
HXDLIN(1374)										if ((ascent > maxAscent)) {
HXLINE(1374)											maxAscent = ascent;
            										}
            									}
HXDLIN(1374)									int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1374)									while(true){
HXLINE(1374)										i1 = (i1 - 1);
HXDLIN(1374)										if (!((i1 > -1))) {
HXLINE(1374)											goto _hx_goto_34;
            										}
HXDLIN(1374)										 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1374)										if ((lg->lineIndex < lineIndex)) {
HXLINE(1374)											goto _hx_goto_34;
            										}
HXDLIN(1374)										if ((lg->lineIndex > lineIndex)) {
HXLINE(1374)											continue;
            										}
HXDLIN(1374)										lg->ascent = maxAscent;
HXDLIN(1374)										lg->height = ( (Float)(maxHeightValue) );
            									}
            									_hx_goto_34:;
HXDLIN(1374)									offsetY = (offsetY + maxHeightValue);
HXDLIN(1374)									maxAscent = ((Float)0.0);
HXDLIN(1374)									maxHeightValue = 0;
HXDLIN(1374)									lineIndex = (lineIndex + 1);
HXDLIN(1374)									offsetX = ( (Float)(0) );
HXDLIN(1374)									firstLineOfParagraph = false;
            								}
HXDLIN(1374)								if ((placeIndex >= breakIndex)) {
HXLINE(1374)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)									widthValue = ( (Float)(0) );
            								}
            								else {
HXLINE(1374)									if ((breakIndex <= formatRange->end)) {
HXLINE(1374)										::String text = _gthis->text;
HXDLIN(1374)										Float letterSpacing = ((Float)0.0);
HXDLIN(1374)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1374)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)										bool positions1;
HXDLIN(1374)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1374)											positions1 = true;
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)										_gthis1->set_text(text.substring(placeIndex,breakIndex));
HXDLIN(1374)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1374)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1374)										Float width = ((Float)0.0);
HXDLIN(1374)										{
HXLINE(1374)											int _g = 0;
HXDLIN(1374)											while((_g < positions->length)){
HXLINE(1374)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)												_g = (_g + 1);
HXDLIN(1374)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1374)										widthValue = width;
            									}
            									else {
HXLINE(1374)										int tempIndex = placeIndex;
HXDLIN(1374)										int tempRangeEnd = formatRange->end;
HXDLIN(1374)										int countRanges = 0;
HXDLIN(1374)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)										widthValue = ( (Float)(0) );
HXDLIN(1374)										while(true){
HXLINE(1374)											if ((tempIndex != tempRangeEnd)) {
HXLINE(1374)												::String text = _gthis->text;
HXDLIN(1374)												Float letterSpacing = ((Float)0.0);
HXDLIN(1374)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1374)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1374)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1374)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)												bool _hx_tmp;
HXDLIN(1374)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)													_hx_tmp = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1374)													_hx_tmp = true;
            												}
HXDLIN(1374)												_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1374)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)												_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1374)												::Array< ::Dynamic> tempPositions;
HXDLIN(1374)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)													tempPositions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1374)													tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1374)												positions = positions->concat(tempPositions);
            											}
HXDLIN(1374)											if ((tempRangeEnd != breakIndex)) {
HXLINE(1374)												bool _hx_tmp;
HXDLIN(1374)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)													rangeIndex = (rangeIndex + 1);
HXDLIN(1374)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1374)													_hx_tmp = true;
            												}
            												else {
HXLINE(1374)													_hx_tmp = false;
            												}
HXDLIN(1374)												if (!(_hx_tmp)) {
HXLINE(1374)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1374)													goto _hx_goto_36;
            												}
HXDLIN(1374)												tempIndex = tempRangeEnd;
HXDLIN(1374)												if ((breakIndex < formatRange->end)) {
HXLINE(1374)													tempRangeEnd = breakIndex;
            												}
            												else {
HXLINE(1374)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1374)												countRanges = (countRanges + 1);
            											}
            											else {
HXLINE(1374)												Float width = ((Float)0.0);
HXDLIN(1374)												{
HXLINE(1374)													int _g = 0;
HXDLIN(1374)													while((_g < positions->length)){
HXLINE(1374)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)														_g = (_g + 1);
HXDLIN(1374)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1374)												widthValue = width;
HXDLIN(1374)												goto _hx_goto_36;
            											}
            										}
            										_hx_goto_36:;
HXDLIN(1374)										rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1374)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)											rangeIndex = (rangeIndex + 1);
HXDLIN(1374)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
            									}
            								}
HXDLIN(1374)								remainingPositions = positions;
HXDLIN(1374)								tempWidth = widthValue;
            							}
            							_hx_goto_22:;
            						}
HXDLIN(1374)						{
HXLINE(1374)							if ((breakIndex <= formatRange->end)) {
HXLINE(1374)								::String text = _gthis->text;
HXDLIN(1374)								Float letterSpacing = ((Float)0.0);
HXDLIN(1374)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1374)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1374)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1374)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)								bool positions1;
HXDLIN(1374)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1374)									positions1 = true;
            								}
HXDLIN(1374)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)								_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1374)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1374)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1374)								Float width = ((Float)0.0);
HXDLIN(1374)								{
HXLINE(1374)									int _g = 0;
HXDLIN(1374)									while((_g < positions->length)){
HXLINE(1374)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)										_g = (_g + 1);
HXDLIN(1374)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1374)								widthValue = width;
HXDLIN(1374)								bool _hx_tmp;
HXDLIN(1374)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1374)									_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            								}
            								else {
HXLINE(1374)									_hx_tmp = true;
            								}
HXDLIN(1374)								if (_hx_tmp) {
HXLINE(1374)									layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,breakIndex);
HXDLIN(1374)									_gthis->layoutGroups->push(layoutGroup);
            								}
            								else {
HXLINE(1374)									layoutGroup->format = formatRange->format;
HXDLIN(1374)									layoutGroup->startIndex = textIndex;
HXDLIN(1374)									layoutGroup->endIndex = breakIndex;
            								}
HXDLIN(1374)								layoutGroup->positions = positions;
HXDLIN(1374)								int _hx_tmp1;
HXDLIN(1374)								if (firstLineOfParagraph) {
HXLINE(1374)									_hx_tmp1 = indent;
            								}
            								else {
HXLINE(1374)									_hx_tmp1 = 0;
            								}
HXDLIN(1374)								layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1374)								layoutGroup->ascent = ascent;
HXDLIN(1374)								layoutGroup->descent = descent;
HXDLIN(1374)								layoutGroup->leading = leading;
HXDLIN(1374)								layoutGroup->lineIndex = lineIndex;
HXDLIN(1374)								layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1374)								layoutGroup->width = widthValue;
HXDLIN(1374)								layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1374)								offsetX = (offsetX + widthValue);
HXDLIN(1374)								if ((breakIndex == formatRange->end)) {
HXLINE(1374)									layoutGroup = null();
HXDLIN(1374)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)										rangeIndex = (rangeIndex + 1);
HXDLIN(1374)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
HXDLIN(1374)									{
HXLINE(1374)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1374)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1374)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1374)											bool _hx_tmp;
HXDLIN(1374)											if (::hx::IsNotNull( font )) {
HXLINE(1374)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1374)												_hx_tmp = false;
            											}
HXDLIN(1374)											if (_hx_tmp) {
HXLINE(1374)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1374)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1374)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1374)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1374)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1374)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1374)										if ((heightValue > maxHeightValue)) {
HXLINE(1374)											maxHeightValue = heightValue;
            										}
HXDLIN(1374)										if ((ascent > maxAscent)) {
HXLINE(1374)											maxAscent = ascent;
            										}
            									}
            								}
            							}
            							else {
HXLINE(1374)								while(true){
HXLINE(1374)									int tempRangeEnd;
HXDLIN(1374)									if ((breakIndex < formatRange->end)) {
HXLINE(1374)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1374)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1374)									if ((textIndex != tempRangeEnd)) {
HXLINE(1374)										::String text = _gthis->text;
HXDLIN(1374)										Float letterSpacing = ((Float)0.0);
HXDLIN(1374)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1374)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)										bool positions1;
HXDLIN(1374)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1374)											positions1 = true;
            										}
HXDLIN(1374)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1374)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1374)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1374)										Float width = ((Float)0.0);
HXDLIN(1374)										{
HXLINE(1374)											int _g = 0;
HXDLIN(1374)											while((_g < positions->length)){
HXLINE(1374)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)												_g = (_g + 1);
HXDLIN(1374)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1374)										widthValue = width;
HXDLIN(1374)										bool _hx_tmp;
HXDLIN(1374)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1374)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1374)											_hx_tmp = true;
            										}
HXDLIN(1374)										if (_hx_tmp) {
HXLINE(1374)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1374)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1374)											layoutGroup->format = formatRange->format;
HXDLIN(1374)											layoutGroup->startIndex = textIndex;
HXDLIN(1374)											layoutGroup->endIndex = tempRangeEnd;
            										}
HXDLIN(1374)										layoutGroup->positions = positions;
HXDLIN(1374)										int _hx_tmp1;
HXDLIN(1374)										if (firstLineOfParagraph) {
HXLINE(1374)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1374)											_hx_tmp1 = 0;
            										}
HXDLIN(1374)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1374)										layoutGroup->ascent = ascent;
HXDLIN(1374)										layoutGroup->descent = descent;
HXDLIN(1374)										layoutGroup->leading = leading;
HXDLIN(1374)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1374)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1374)										layoutGroup->width = widthValue;
HXDLIN(1374)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1374)										offsetX = (offsetX + widthValue);
HXDLIN(1374)										textIndex = tempRangeEnd;
            									}
HXDLIN(1374)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1374)										layoutGroup = null();
            									}
HXDLIN(1374)									if ((tempRangeEnd == breakIndex)) {
HXLINE(1374)										goto _hx_goto_39;
            									}
HXDLIN(1374)									bool _hx_tmp;
HXDLIN(1374)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)										rangeIndex = (rangeIndex + 1);
HXDLIN(1374)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1374)										_hx_tmp = true;
            									}
            									else {
HXLINE(1374)										_hx_tmp = false;
            									}
HXDLIN(1374)									if (!(_hx_tmp)) {
HXLINE(1374)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1374)										goto _hx_goto_39;
            									}
HXDLIN(1374)									{
HXLINE(1374)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1374)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1374)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1374)											bool _hx_tmp;
HXDLIN(1374)											if (::hx::IsNotNull( font )) {
HXLINE(1374)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1374)												_hx_tmp = false;
            											}
HXDLIN(1374)											if (_hx_tmp) {
HXLINE(1374)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1374)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1374)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1374)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1374)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1374)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1374)										if ((heightValue > maxHeightValue)) {
HXLINE(1374)											maxHeightValue = heightValue;
            										}
HXDLIN(1374)										if ((ascent > maxAscent)) {
HXLINE(1374)											maxAscent = ascent;
            										}
            									}
            								}
            								_hx_goto_39:;
            							}
HXDLIN(1374)							textIndex = breakIndex;
            						}
            					}
HXLINE(1376)					layoutGroup = null();
            				}
            				else {
HXLINE(1378)					bool _hx_tmp;
HXDLIN(1378)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1378)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1378)						_hx_tmp = false;
            					}
HXDLIN(1378)					if (_hx_tmp) {
HXLINE(1381)						if ((layoutGroup->endIndex == spaceIndex)) {
HXLINE(1383)							 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1383)							int index = (layoutGroup->positions->length - 1);
HXDLIN(1383)							Float _hx_tmp;
HXDLIN(1383)							bool _hx_tmp1;
HXDLIN(1383)							if ((index >= 0)) {
HXLINE(1383)								_hx_tmp1 = (index < layoutGroup->positions->length);
            							}
            							else {
HXLINE(1383)								_hx_tmp1 = false;
            							}
HXDLIN(1383)							if (_hx_tmp1) {
HXLINE(1383)								_hx_tmp = layoutGroup->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1383)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN(1383)							layoutGroup1->width = (layoutGroup1->width - _hx_tmp);
            						}
HXLINE(1386)						layoutGroup = null();
            					}
            				}
HXLINE(1389)				{
HXLINE(1389)					{
HXLINE(1389)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1389)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1389)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1389)							bool _hx_tmp;
HXDLIN(1389)							if (::hx::IsNotNull( font )) {
HXLINE(1389)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1389)								_hx_tmp = false;
            							}
HXDLIN(1389)							if (_hx_tmp) {
HXLINE(1389)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1389)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1389)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1389)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1389)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1389)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1389)						if ((heightValue > maxHeightValue)) {
HXLINE(1389)							maxHeightValue = heightValue;
            						}
HXDLIN(1389)						if ((ascent > maxAscent)) {
HXLINE(1389)							maxAscent = ascent;
            						}
            					}
HXDLIN(1389)					int i = _gthis->layoutGroups->get_length();
HXDLIN(1389)					while(true){
HXLINE(1389)						i = (i - 1);
HXDLIN(1389)						if (!((i > -1))) {
HXLINE(1389)							goto _hx_goto_41;
            						}
HXDLIN(1389)						 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1389)						if ((lg->lineIndex < lineIndex)) {
HXLINE(1389)							goto _hx_goto_41;
            						}
HXDLIN(1389)						if ((lg->lineIndex > lineIndex)) {
HXLINE(1389)							continue;
            						}
HXDLIN(1389)						lg->ascent = maxAscent;
HXDLIN(1389)						lg->height = ( (Float)(maxHeightValue) );
            					}
            					_hx_goto_41:;
HXDLIN(1389)					offsetY = (offsetY + maxHeightValue);
HXDLIN(1389)					maxAscent = ((Float)0.0);
HXDLIN(1389)					maxHeightValue = 0;
HXDLIN(1389)					lineIndex = (lineIndex + 1);
HXDLIN(1389)					offsetX = ( (Float)(0) );
HXDLIN(1389)					firstLineOfParagraph = false;
            				}
HXLINE(1392)				if ((formatRange->end == breakIndex)) {
HXLINE(1394)					if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1394)						rangeIndex = (rangeIndex + 1);
HXDLIN(1394)						formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1394)						currentFormat->_hx___merge(formatRange->format);
HXDLIN(1394)						font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            					}
HXLINE(1395)					{
HXLINE(1395)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1395)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1395)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1395)							bool _hx_tmp;
HXDLIN(1395)							if (::hx::IsNotNull( font )) {
HXLINE(1395)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1395)								_hx_tmp = false;
            							}
HXDLIN(1395)							if (_hx_tmp) {
HXLINE(1395)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1395)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1395)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1395)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1395)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1395)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1395)						if ((heightValue > maxHeightValue)) {
HXLINE(1395)							maxHeightValue = heightValue;
            						}
HXDLIN(1395)						if ((ascent > maxAscent)) {
HXLINE(1395)							maxAscent = ascent;
            						}
            					}
            				}
HXLINE(1398)				textIndex = (breakIndex + 1);
HXLINE(1399)				previousBreakIndex = breakIndex;
HXLINE(1400)				breakCount = (breakCount + 1);
HXLINE(1401)				if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1401)					breakIndex = this->lineBreaks->get(breakCount);
            				}
            				else {
HXLINE(1401)					breakIndex = -1;
            				}
HXLINE(1403)				{
HXLINE(1403)					firstLineOfParagraph = true;
HXDLIN(1403)					if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1403)						align = currentFormat->align;
            					}
            					else {
HXLINE(1403)						align = 3;
            					}
HXDLIN(1403)					if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1403)						blockIndent = ( (int)(currentFormat->blockIndent) );
            					}
            					else {
HXLINE(1403)						blockIndent = 0;
            					}
HXDLIN(1403)					if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1403)						indent = ( (int)(currentFormat->indent) );
            					}
            					else {
HXLINE(1403)						indent = 0;
            					}
HXDLIN(1403)					if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1403)						leftMargin = ( (int)(currentFormat->leftMargin) );
            					}
            					else {
HXLINE(1403)						leftMargin = 0;
            					}
HXDLIN(1403)					if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1403)						rightMargin = ( (int)(currentFormat->rightMargin) );
            					}
            					else {
HXLINE(1403)						rightMargin = 0;
            					}
HXDLIN(1403)					bool _hx_tmp = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1403)					bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->tabStops );
            				}
            			}
            			else {
HXLINE(1405)				if ((spaceIndex > -1)) {
HXLINE(1409)					bool _hx_tmp;
HXDLIN(1409)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1409)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1409)						_hx_tmp = false;
            					}
HXDLIN(1409)					if (_hx_tmp) {
HXLINE(1411)						layoutGroup = null();
            					}
HXLINE(1414)					wrap = false;
HXLINE(1416)					while((textIndex < this->text.length)){
HXLINE(1420)						int endIndex = -1;
HXLINE(1422)						if ((spaceIndex == -1)) {
HXLINE(1424)							endIndex = breakIndex;
            						}
            						else {
HXLINE(1428)							endIndex = (spaceIndex + 1);
HXLINE(1430)							bool _hx_tmp;
HXDLIN(1430)							if ((breakIndex > -1)) {
HXLINE(1430)								_hx_tmp = (breakIndex < endIndex);
            							}
            							else {
HXLINE(1430)								_hx_tmp = false;
            							}
HXDLIN(1430)							if (_hx_tmp) {
HXLINE(1432)								endIndex = breakIndex;
            							}
            						}
HXLINE(1436)						if ((endIndex == -1)) {
HXLINE(1438)							endIndex = this->text.length;
            						}
HXLINE(1441)						if ((textIndex >= endIndex)) {
HXLINE(1441)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1441)							widthValue = ( (Float)(0) );
            						}
            						else {
HXLINE(1441)							if ((endIndex <= formatRange->end)) {
HXLINE(1441)								::String text = _gthis->text;
HXDLIN(1441)								Float letterSpacing = ((Float)0.0);
HXDLIN(1441)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1441)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1441)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1441)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1441)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1441)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1441)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1441)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1441)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1441)								bool positions1;
HXDLIN(1441)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1441)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1441)									positions1 = true;
            								}
HXDLIN(1441)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1441)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1441)								_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1441)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1441)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1441)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1441)								Float width = ((Float)0.0);
HXDLIN(1441)								{
HXLINE(1441)									int _g = 0;
HXDLIN(1441)									while((_g < positions->length)){
HXLINE(1441)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1441)										_g = (_g + 1);
HXDLIN(1441)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1441)								widthValue = width;
            							}
            							else {
HXLINE(1441)								int tempIndex = textIndex;
HXDLIN(1441)								int tempRangeEnd = formatRange->end;
HXDLIN(1441)								int countRanges = 0;
HXDLIN(1441)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1441)								widthValue = ( (Float)(0) );
HXDLIN(1441)								while(true){
HXLINE(1441)									if ((tempIndex != tempRangeEnd)) {
HXLINE(1441)										::String text = _gthis->text;
HXDLIN(1441)										Float letterSpacing = ((Float)0.0);
HXDLIN(1441)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1441)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1441)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1441)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1441)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1441)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1441)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1441)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1441)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1441)										bool _hx_tmp;
HXDLIN(1441)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1441)											_hx_tmp = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1441)											_hx_tmp = true;
            										}
HXDLIN(1441)										_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1441)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1441)										_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1441)										::Array< ::Dynamic> tempPositions;
HXDLIN(1441)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1441)											tempPositions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1441)											tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1441)										positions = positions->concat(tempPositions);
            									}
HXDLIN(1441)									if ((tempRangeEnd != endIndex)) {
HXLINE(1441)										bool _hx_tmp;
HXDLIN(1441)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1441)											rangeIndex = (rangeIndex + 1);
HXDLIN(1441)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1441)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1441)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1441)											_hx_tmp = true;
            										}
            										else {
HXLINE(1441)											_hx_tmp = false;
            										}
HXDLIN(1441)										if (!(_hx_tmp)) {
HXLINE(1441)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1441)											goto _hx_goto_44;
            										}
HXDLIN(1441)										tempIndex = tempRangeEnd;
HXDLIN(1441)										if ((endIndex < formatRange->end)) {
HXLINE(1441)											tempRangeEnd = endIndex;
            										}
            										else {
HXLINE(1441)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1441)										countRanges = (countRanges + 1);
            									}
            									else {
HXLINE(1441)										Float width = ((Float)0.0);
HXDLIN(1441)										{
HXLINE(1441)											int _g = 0;
HXDLIN(1441)											while((_g < positions->length)){
HXLINE(1441)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1441)												_g = (_g + 1);
HXDLIN(1441)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1441)										widthValue = width;
HXDLIN(1441)										goto _hx_goto_44;
            									}
            								}
            								_hx_goto_44:;
HXDLIN(1441)								rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1441)								if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1441)									rangeIndex = (rangeIndex + 1);
HXDLIN(1441)									formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1441)									currentFormat->_hx___merge(formatRange->format);
HXDLIN(1441)									font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            								}
            							}
            						}
HXLINE(1443)						if (::hx::IsEq( align,2 )) {
HXLINE(1445)							bool _hx_tmp;
HXDLIN(1445)							if ((positions->length > 0)) {
HXLINE(1445)								_hx_tmp = (textIndex == previousSpaceIndex);
            							}
            							else {
HXLINE(1445)								_hx_tmp = false;
            							}
HXDLIN(1445)							if (_hx_tmp) {
HXLINE(1448)								textIndex = (textIndex + 1);
HXLINE(1450)								Float spaceWidth = positions->shift().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1451)								widthValue = (widthValue - spaceWidth);
HXLINE(1452)								offsetX = (offsetX + spaceWidth);
            							}
HXLINE(1455)							bool _hx_tmp1;
HXDLIN(1455)							if ((positions->length > 0)) {
HXLINE(1455)								_hx_tmp1 = (endIndex == (spaceIndex + 1));
            							}
            							else {
HXLINE(1455)								_hx_tmp1 = false;
            							}
HXDLIN(1455)							if (_hx_tmp1) {
HXLINE(1458)								endIndex = (endIndex - 1);
HXLINE(1460)								Float spaceWidth = positions->pop().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1461)								widthValue = (widthValue - spaceWidth);
            							}
            						}
HXLINE(1465)						if (this->wordWrap) {
HXLINE(1467)							int _hx_tmp;
HXDLIN(1467)							if (firstLineOfParagraph) {
HXLINE(1467)								_hx_tmp = indent;
            							}
            							else {
HXLINE(1467)								_hx_tmp = 0;
            							}
HXDLIN(1467)							if (((offsetX + widthValue) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1469)								wrap = true;
HXLINE(1471)								bool _hx_tmp;
HXDLIN(1471)								if ((positions->length > 0)) {
HXLINE(1471)									_hx_tmp = (endIndex == (spaceIndex + 1));
            								}
            								else {
HXLINE(1471)									_hx_tmp = false;
            								}
HXDLIN(1471)								if (_hx_tmp) {
HXLINE(1475)									 ::openfl::text::_internal::GlyphPosition lastPosition = positions->__get((positions->length - 1)).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXLINE(1476)									Float spaceWidth = lastPosition->advance->x;
HXLINE(1478)									int _hx_tmp;
HXDLIN(1478)									if (firstLineOfParagraph) {
HXLINE(1478)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1478)										_hx_tmp = 0;
            									}
HXDLIN(1478)									if ((((offsetX + widthValue) - spaceWidth) <= (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1480)										wrap = false;
            									}
            								}
            							}
            						}
HXLINE(1486)						if (wrap) {
HXLINE(1488)							bool _hx_tmp;
HXDLIN(1488)							if (::hx::IsNotEq( align,2 )) {
HXLINE(1488)								if (::hx::IsNull( layoutGroup )) {
HXLINE(1488)									_hx_tmp = (this->layoutGroups->get_length() > 0);
            								}
            								else {
HXLINE(1488)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1488)								_hx_tmp = false;
            							}
HXDLIN(1488)							if (_hx_tmp) {
HXLINE(1490)								 ::openfl::text::_internal::TextLayoutGroup previous = layoutGroup;
HXLINE(1491)								if (::hx::IsNull( previous )) {
HXLINE(1493)									::Dynamic this1 = this->layoutGroups;
HXDLIN(1493)									previous = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            								}
HXLINE(1497)								 ::openfl::text::_internal::TextLayoutGroup previous1 = previous;
HXDLIN(1497)								int index = (previous->positions->length - 1);
HXDLIN(1497)								Float _hx_tmp;
HXDLIN(1497)								bool _hx_tmp1;
HXDLIN(1497)								if ((index >= 0)) {
HXLINE(1497)									_hx_tmp1 = (index < previous->positions->length);
            								}
            								else {
HXLINE(1497)									_hx_tmp1 = false;
            								}
HXDLIN(1497)								if (_hx_tmp1) {
HXLINE(1497)									_hx_tmp = previous->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1497)									_hx_tmp = ( (Float)(0) );
            								}
HXDLIN(1497)								previous1->width = (previous1->width - _hx_tmp);
HXLINE(1498)								previous->endIndex--;
            							}
HXLINE(1501)							int i = (this->layoutGroups->get_length() - 1);
HXLINE(1502)							int offsetCount = 0;
HXLINE(1504)							while((i >= 0)){
HXLINE(1506)								layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1508)								bool _hx_tmp;
HXDLIN(1508)								if ((i > 0)) {
HXLINE(1508)									_hx_tmp = (layoutGroup->startIndex > previousSpaceIndex);
            								}
            								else {
HXLINE(1508)									_hx_tmp = false;
            								}
HXDLIN(1508)								if (_hx_tmp) {
HXLINE(1510)									offsetCount = (offsetCount + 1);
            								}
            								else {
HXLINE(1514)									goto _hx_goto_46;
            								}
HXLINE(1517)								i = (i - 1);
            							}
            							_hx_goto_46:;
HXLINE(1520)							if ((textIndex == (previousSpaceIndex + 1))) {
HXLINE(1522)								{
HXLINE(1522)									if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1522)										ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1522)										descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            									}
            									else {
HXLINE(1522)										bool _hx_tmp;
HXDLIN(1522)										if (::hx::IsNotNull( font )) {
HXLINE(1522)											_hx_tmp = (font->unitsPerEM != 0);
            										}
            										else {
HXLINE(1522)											_hx_tmp = false;
            										}
HXDLIN(1522)										if (_hx_tmp) {
HXLINE(1522)											ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1522)											descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            										}
            										else {
HXLINE(1522)											ascent = ( (Float)(currentFormat->size) );
HXDLIN(1522)											descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            										}
            									}
HXDLIN(1522)									leading = ( (int)(currentFormat->leading) );
HXDLIN(1522)									heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1522)									if ((heightValue > maxHeightValue)) {
HXLINE(1522)										maxHeightValue = heightValue;
            									}
HXDLIN(1522)									if ((ascent > maxAscent)) {
HXLINE(1522)										maxAscent = ascent;
            									}
            								}
HXDLIN(1522)								int i = _gthis->layoutGroups->get_length();
HXDLIN(1522)								while(true){
HXLINE(1522)									i = (i - 1);
HXDLIN(1522)									if (!((i > -1))) {
HXLINE(1522)										goto _hx_goto_47;
            									}
HXDLIN(1522)									 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1522)									if ((lg->lineIndex < lineIndex)) {
HXLINE(1522)										goto _hx_goto_47;
            									}
HXDLIN(1522)									if ((lg->lineIndex > lineIndex)) {
HXLINE(1522)										continue;
            									}
HXDLIN(1522)									lg->ascent = maxAscent;
HXDLIN(1522)									lg->height = ( (Float)(maxHeightValue) );
            								}
            								_hx_goto_47:;
HXDLIN(1522)								offsetY = (offsetY + maxHeightValue);
HXDLIN(1522)								maxAscent = ((Float)0.0);
HXDLIN(1522)								maxHeightValue = 0;
HXDLIN(1522)								lineIndex = (lineIndex + 1);
HXDLIN(1522)								offsetX = ( (Float)(0) );
HXDLIN(1522)								firstLineOfParagraph = false;
            							}
HXLINE(1525)							offsetX = ( (Float)(0) );
HXLINE(1527)							if ((offsetCount > 0)) {
HXLINE(1529)								::Dynamic this1 = this->layoutGroups;
HXDLIN(1529)								Float bumpX = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - offsetCount)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->offsetX;
HXLINE(1531)								{
HXLINE(1531)									int _g = (this->layoutGroups->get_length() - offsetCount);
HXDLIN(1531)									int _g1 = this->layoutGroups->get_length();
HXDLIN(1531)									while((_g < _g1)){
HXLINE(1531)										_g = (_g + 1);
HXDLIN(1531)										int i = (_g - 1);
HXLINE(1533)										layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1534)										 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1534)										layoutGroup1->offsetX = (layoutGroup1->offsetX - bumpX);
HXLINE(1535)										layoutGroup->offsetY = (offsetY + 2);
HXLINE(1536)										layoutGroup->lineIndex = lineIndex;
HXLINE(1537)										offsetX = (offsetX + layoutGroup->width);
            									}
            								}
            							}
HXLINE(1541)							{
HXLINE(1541)								bool _hx_tmp1;
HXDLIN(1541)								if ((_gthis->width >= 4)) {
HXLINE(1541)									_hx_tmp1 = _gthis->wordWrap;
            								}
            								else {
HXLINE(1541)									_hx_tmp1 = false;
            								}
HXDLIN(1541)								if (_hx_tmp1) {
HXLINE(1541)									::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1541)									int bufferCount;
HXDLIN(1541)									int placeIndex;
HXDLIN(1541)									Float positionWidth;
HXDLIN(1541)									 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1541)									Float width = ((Float)0.0);
HXDLIN(1541)									{
HXLINE(1541)										int _g = 0;
HXDLIN(1541)										while((_g < remainingPositions->length)){
HXLINE(1541)											 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)											_g = (_g + 1);
HXDLIN(1541)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1541)									Float tempWidth = width;
HXDLIN(1541)									int i = (remainingPositions->length - 1);
HXDLIN(1541)									while((i >= 0)){
HXLINE(1541)										 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1541)										bool _hx_tmp;
HXDLIN(1541)										if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1541)											_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            										}
            										else {
HXLINE(1541)											_hx_tmp = false;
            										}
HXDLIN(1541)										if (_hx_tmp) {
HXLINE(1541)											goto _hx_goto_50;
            										}
HXDLIN(1541)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)										tempWidth = (tempWidth - position->advance->x);
HXDLIN(1541)										i = (i - 1);
            									}
            									_hx_goto_50:;
HXDLIN(1541)									while(true){
HXLINE(1541)										bool _hx_tmp;
HXDLIN(1541)										if ((remainingPositions->length > 0)) {
HXLINE(1541)											int _hx_tmp1;
HXDLIN(1541)											if (firstLineOfParagraph) {
HXLINE(1541)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1541)												_hx_tmp1 = 0;
            											}
HXDLIN(1541)											_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1541)											_hx_tmp = false;
            										}
HXDLIN(1541)										if (!(_hx_tmp)) {
HXLINE(1541)											goto _hx_goto_51;
            										}
HXDLIN(1541)										bufferCount = 0;
HXDLIN(1541)										i = bufferCount;
HXDLIN(1541)										positionWidth = ((Float)0.0);
HXDLIN(1541)										while(true){
HXLINE(1541)											int _hx_tmp;
HXDLIN(1541)											if (firstLineOfParagraph) {
HXLINE(1541)												_hx_tmp = indent;
            											}
            											else {
HXLINE(1541)												_hx_tmp = 0;
            											}
HXDLIN(1541)											if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1541)												goto _hx_goto_52;
            											}
HXDLIN(1541)											currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)											if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1541)												i = (i + 1);
HXDLIN(1541)												bufferCount = (bufferCount + 1);
            											}
            											else {
HXLINE(1541)												positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1541)												i = (i + 1);
            											}
            										}
            										_hx_goto_52:;
HXDLIN(1541)										if ((i == bufferCount)) {
HXLINE(1541)											i = (bufferCount + 1);
            										}
            										else {
HXLINE(1541)											while(true){
HXLINE(1541)												bool _hx_tmp;
HXDLIN(1541)												if ((i > 1)) {
HXLINE(1541)													int _hx_tmp1;
HXDLIN(1541)													if (firstLineOfParagraph) {
HXLINE(1541)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1541)														_hx_tmp1 = 0;
            													}
HXDLIN(1541)													_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1541)													_hx_tmp = false;
            												}
HXDLIN(1541)												if (!(_hx_tmp)) {
HXLINE(1541)													goto _hx_goto_53;
            												}
HXDLIN(1541)												i = (i - 1);
HXDLIN(1541)												if (((i - bufferCount) > 0)) {
HXLINE(1541)													{
HXLINE(1541)														int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1541)														if ((textIndex >= endIndex)) {
HXLINE(1541)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1541)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1541)															if ((endIndex <= formatRange->end)) {
HXLINE(1541)																::String text = _gthis->text;
HXDLIN(1541)																Float letterSpacing = ((Float)0.0);
HXDLIN(1541)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1541)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1541)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1541)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)																bool positions1;
HXDLIN(1541)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1541)																	positions1 = true;
            																}
HXDLIN(1541)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1541)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1541)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1541)																Float width = ((Float)0.0);
HXDLIN(1541)																{
HXLINE(1541)																	int _g = 0;
HXDLIN(1541)																	while((_g < positions->length)){
HXLINE(1541)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)																		_g = (_g + 1);
HXDLIN(1541)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1541)																widthValue = width;
            															}
            															else {
HXLINE(1541)																int tempIndex = textIndex;
HXDLIN(1541)																int tempRangeEnd = formatRange->end;
HXDLIN(1541)																int countRanges = 0;
HXDLIN(1541)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1541)																widthValue = ( (Float)(0) );
HXDLIN(1541)																while(true){
HXLINE(1541)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1541)																		::String text = _gthis->text;
HXDLIN(1541)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1541)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1541)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1541)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1541)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)																		bool _hx_tmp;
HXDLIN(1541)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1541)																			_hx_tmp = true;
            																		}
HXDLIN(1541)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1541)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1541)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1541)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1541)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1541)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1541)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1541)																		bool _hx_tmp;
HXDLIN(1541)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1541)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1541)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1541)																			_hx_tmp = false;
            																		}
HXDLIN(1541)																		if (!(_hx_tmp)) {
HXLINE(1541)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1541)																			goto _hx_goto_55;
            																		}
HXDLIN(1541)																		tempIndex = tempRangeEnd;
HXDLIN(1541)																		if ((endIndex < formatRange->end)) {
HXLINE(1541)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1541)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1541)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1541)																		Float width = ((Float)0.0);
HXDLIN(1541)																		{
HXLINE(1541)																			int _g = 0;
HXDLIN(1541)																			while((_g < positions->length)){
HXLINE(1541)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)																				_g = (_g + 1);
HXDLIN(1541)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1541)																		widthValue = width;
HXDLIN(1541)																		goto _hx_goto_55;
            																	}
            																}
            																_hx_goto_55:;
HXDLIN(1541)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1541)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1541)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1541)													positionWidth = widthValue;
            												}
            												else {
HXLINE(1541)													i = 1;
HXDLIN(1541)													bufferCount = 0;
HXDLIN(1541)													{
HXLINE(1541)														int endIndex = (textIndex + 1);
HXDLIN(1541)														if ((textIndex >= endIndex)) {
HXLINE(1541)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1541)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1541)															if ((endIndex <= formatRange->end)) {
HXLINE(1541)																::String text = _gthis->text;
HXDLIN(1541)																Float letterSpacing = ((Float)0.0);
HXDLIN(1541)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1541)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1541)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1541)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)																bool positions1;
HXDLIN(1541)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1541)																	positions1 = true;
            																}
HXDLIN(1541)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1541)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1541)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1541)																Float width = ((Float)0.0);
HXDLIN(1541)																{
HXLINE(1541)																	int _g = 0;
HXDLIN(1541)																	while((_g < positions->length)){
HXLINE(1541)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)																		_g = (_g + 1);
HXDLIN(1541)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1541)																widthValue = width;
            															}
            															else {
HXLINE(1541)																int tempIndex = textIndex;
HXDLIN(1541)																int tempRangeEnd = formatRange->end;
HXDLIN(1541)																int countRanges = 0;
HXDLIN(1541)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1541)																widthValue = ( (Float)(0) );
HXDLIN(1541)																while(true){
HXLINE(1541)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1541)																		::String text = _gthis->text;
HXDLIN(1541)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1541)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1541)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1541)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1541)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)																		bool _hx_tmp;
HXDLIN(1541)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1541)																			_hx_tmp = true;
            																		}
HXDLIN(1541)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1541)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1541)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1541)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1541)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1541)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1541)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1541)																		bool _hx_tmp;
HXDLIN(1541)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1541)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1541)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1541)																			_hx_tmp = false;
            																		}
HXDLIN(1541)																		if (!(_hx_tmp)) {
HXLINE(1541)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1541)																			goto _hx_goto_58;
            																		}
HXDLIN(1541)																		tempIndex = tempRangeEnd;
HXDLIN(1541)																		if ((endIndex < formatRange->end)) {
HXLINE(1541)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1541)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1541)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1541)																		Float width = ((Float)0.0);
HXDLIN(1541)																		{
HXLINE(1541)																			int _g = 0;
HXDLIN(1541)																			while((_g < positions->length)){
HXLINE(1541)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)																				_g = (_g + 1);
HXDLIN(1541)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1541)																		widthValue = width;
HXDLIN(1541)																		goto _hx_goto_58;
            																	}
            																}
            																_hx_goto_58:;
HXDLIN(1541)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1541)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1541)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1541)													positionWidth = ( (Float)(0) );
            												}
            											}
            											_hx_goto_53:;
            										}
HXDLIN(1541)										placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1541)										{
HXLINE(1541)											if ((placeIndex <= formatRange->end)) {
HXLINE(1541)												::String text = _gthis->text;
HXDLIN(1541)												Float letterSpacing = ((Float)0.0);
HXDLIN(1541)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1541)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)												bool positions1;
HXDLIN(1541)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1541)													positions1 = true;
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)												_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1541)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1541)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1541)												Float width = ((Float)0.0);
HXDLIN(1541)												{
HXLINE(1541)													int _g = 0;
HXDLIN(1541)													while((_g < positions->length)){
HXLINE(1541)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)														_g = (_g + 1);
HXDLIN(1541)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1541)												widthValue = width;
HXDLIN(1541)												bool _hx_tmp;
HXDLIN(1541)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1541)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1541)													_hx_tmp = true;
            												}
HXDLIN(1541)												if (_hx_tmp) {
HXLINE(1541)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1541)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1541)													layoutGroup->format = formatRange->format;
HXDLIN(1541)													layoutGroup->startIndex = textIndex;
HXDLIN(1541)													layoutGroup->endIndex = placeIndex;
            												}
HXDLIN(1541)												layoutGroup->positions = positions;
HXDLIN(1541)												int _hx_tmp1;
HXDLIN(1541)												if (firstLineOfParagraph) {
HXLINE(1541)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1541)													_hx_tmp1 = 0;
            												}
HXDLIN(1541)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1541)												layoutGroup->ascent = ascent;
HXDLIN(1541)												layoutGroup->descent = descent;
HXDLIN(1541)												layoutGroup->leading = leading;
HXDLIN(1541)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1541)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1541)												layoutGroup->width = widthValue;
HXDLIN(1541)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1541)												offsetX = (offsetX + widthValue);
HXDLIN(1541)												if ((placeIndex == formatRange->end)) {
HXLINE(1541)													layoutGroup = null();
HXDLIN(1541)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)														rangeIndex = (rangeIndex + 1);
HXDLIN(1541)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1541)													{
HXLINE(1541)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1541)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1541)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1541)															bool _hx_tmp;
HXDLIN(1541)															if (::hx::IsNotNull( font )) {
HXLINE(1541)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1541)																_hx_tmp = false;
            															}
HXDLIN(1541)															if (_hx_tmp) {
HXLINE(1541)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1541)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1541)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1541)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1541)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1541)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1541)														if ((heightValue > maxHeightValue)) {
HXLINE(1541)															maxHeightValue = heightValue;
            														}
HXDLIN(1541)														if ((ascent > maxAscent)) {
HXLINE(1541)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1541)												while(true){
HXLINE(1541)													int tempRangeEnd;
HXDLIN(1541)													if ((placeIndex < formatRange->end)) {
HXLINE(1541)														tempRangeEnd = placeIndex;
            													}
            													else {
HXLINE(1541)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1541)													if ((textIndex != tempRangeEnd)) {
HXLINE(1541)														::String text = _gthis->text;
HXDLIN(1541)														Float letterSpacing = ((Float)0.0);
HXDLIN(1541)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1541)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1541)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1541)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)														bool positions1;
HXDLIN(1541)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1541)															positions1 = true;
            														}
HXDLIN(1541)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1541)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1541)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1541)														Float width = ((Float)0.0);
HXDLIN(1541)														{
HXLINE(1541)															int _g = 0;
HXDLIN(1541)															while((_g < positions->length)){
HXLINE(1541)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)																_g = (_g + 1);
HXDLIN(1541)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1541)														widthValue = width;
HXDLIN(1541)														bool _hx_tmp;
HXDLIN(1541)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1541)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1541)															_hx_tmp = true;
            														}
HXDLIN(1541)														if (_hx_tmp) {
HXLINE(1541)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1541)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1541)															layoutGroup->format = formatRange->format;
HXDLIN(1541)															layoutGroup->startIndex = textIndex;
HXDLIN(1541)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1541)														layoutGroup->positions = positions;
HXDLIN(1541)														int _hx_tmp1;
HXDLIN(1541)														if (firstLineOfParagraph) {
HXLINE(1541)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1541)															_hx_tmp1 = 0;
            														}
HXDLIN(1541)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1541)														layoutGroup->ascent = ascent;
HXDLIN(1541)														layoutGroup->descent = descent;
HXDLIN(1541)														layoutGroup->leading = leading;
HXDLIN(1541)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1541)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1541)														layoutGroup->width = widthValue;
HXDLIN(1541)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1541)														offsetX = (offsetX + widthValue);
HXDLIN(1541)														textIndex = tempRangeEnd;
            													}
HXDLIN(1541)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1541)														layoutGroup = null();
            													}
HXDLIN(1541)													if ((tempRangeEnd == placeIndex)) {
HXLINE(1541)														goto _hx_goto_61;
            													}
HXDLIN(1541)													bool _hx_tmp;
HXDLIN(1541)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)														rangeIndex = (rangeIndex + 1);
HXDLIN(1541)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1541)														_hx_tmp = true;
            													}
            													else {
HXLINE(1541)														_hx_tmp = false;
            													}
HXDLIN(1541)													if (!(_hx_tmp)) {
HXLINE(1541)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1541)														goto _hx_goto_61;
            													}
HXDLIN(1541)													{
HXLINE(1541)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1541)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1541)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1541)															bool _hx_tmp;
HXDLIN(1541)															if (::hx::IsNotNull( font )) {
HXLINE(1541)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1541)																_hx_tmp = false;
            															}
HXDLIN(1541)															if (_hx_tmp) {
HXLINE(1541)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1541)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1541)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1541)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1541)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1541)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1541)														if ((heightValue > maxHeightValue)) {
HXLINE(1541)															maxHeightValue = heightValue;
            														}
HXDLIN(1541)														if ((ascent > maxAscent)) {
HXLINE(1541)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_61:;
            											}
HXDLIN(1541)											textIndex = placeIndex;
            										}
HXDLIN(1541)										{
HXLINE(1541)											{
HXLINE(1541)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1541)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1541)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1541)													bool _hx_tmp;
HXDLIN(1541)													if (::hx::IsNotNull( font )) {
HXLINE(1541)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1541)														_hx_tmp = false;
            													}
HXDLIN(1541)													if (_hx_tmp) {
HXLINE(1541)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1541)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1541)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1541)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1541)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1541)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1541)												if ((heightValue > maxHeightValue)) {
HXLINE(1541)													maxHeightValue = heightValue;
            												}
HXDLIN(1541)												if ((ascent > maxAscent)) {
HXLINE(1541)													maxAscent = ascent;
            												}
            											}
HXDLIN(1541)											int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1541)											while(true){
HXLINE(1541)												i1 = (i1 - 1);
HXDLIN(1541)												if (!((i1 > -1))) {
HXLINE(1541)													goto _hx_goto_63;
            												}
HXDLIN(1541)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1541)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1541)													goto _hx_goto_63;
            												}
HXDLIN(1541)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1541)													continue;
            												}
HXDLIN(1541)												lg->ascent = maxAscent;
HXDLIN(1541)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_63:;
HXDLIN(1541)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1541)											maxAscent = ((Float)0.0);
HXDLIN(1541)											maxHeightValue = 0;
HXDLIN(1541)											lineIndex = (lineIndex + 1);
HXDLIN(1541)											offsetX = ( (Float)(0) );
HXDLIN(1541)											firstLineOfParagraph = false;
            										}
HXDLIN(1541)										if ((placeIndex >= endIndex)) {
HXLINE(1541)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1541)											widthValue = ( (Float)(0) );
            										}
            										else {
HXLINE(1541)											if ((endIndex <= formatRange->end)) {
HXLINE(1541)												::String text = _gthis->text;
HXDLIN(1541)												Float letterSpacing = ((Float)0.0);
HXDLIN(1541)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1541)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)												bool positions1;
HXDLIN(1541)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1541)													positions1 = true;
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)												_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1541)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1541)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1541)												Float width = ((Float)0.0);
HXDLIN(1541)												{
HXLINE(1541)													int _g = 0;
HXDLIN(1541)													while((_g < positions->length)){
HXLINE(1541)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)														_g = (_g + 1);
HXDLIN(1541)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1541)												widthValue = width;
            											}
            											else {
HXLINE(1541)												int tempIndex = placeIndex;
HXDLIN(1541)												int tempRangeEnd = formatRange->end;
HXDLIN(1541)												int countRanges = 0;
HXDLIN(1541)												positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1541)												widthValue = ( (Float)(0) );
HXDLIN(1541)												while(true){
HXLINE(1541)													if ((tempIndex != tempRangeEnd)) {
HXLINE(1541)														::String text = _gthis->text;
HXDLIN(1541)														Float letterSpacing = ((Float)0.0);
HXDLIN(1541)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1541)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1541)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1541)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)														bool _hx_tmp;
HXDLIN(1541)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)															_hx_tmp = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1541)															_hx_tmp = true;
            														}
HXDLIN(1541)														_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1541)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)														_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1541)														::Array< ::Dynamic> tempPositions;
HXDLIN(1541)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)															tempPositions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1541)															tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1541)														positions = positions->concat(tempPositions);
            													}
HXDLIN(1541)													if ((tempRangeEnd != endIndex)) {
HXLINE(1541)														bool _hx_tmp;
HXDLIN(1541)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)															rangeIndex = (rangeIndex + 1);
HXDLIN(1541)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1541)															_hx_tmp = true;
            														}
            														else {
HXLINE(1541)															_hx_tmp = false;
            														}
HXDLIN(1541)														if (!(_hx_tmp)) {
HXLINE(1541)															::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1541)															goto _hx_goto_65;
            														}
HXDLIN(1541)														tempIndex = tempRangeEnd;
HXDLIN(1541)														if ((endIndex < formatRange->end)) {
HXLINE(1541)															tempRangeEnd = endIndex;
            														}
            														else {
HXLINE(1541)															tempRangeEnd = formatRange->end;
            														}
HXDLIN(1541)														countRanges = (countRanges + 1);
            													}
            													else {
HXLINE(1541)														Float width = ((Float)0.0);
HXDLIN(1541)														{
HXLINE(1541)															int _g = 0;
HXDLIN(1541)															while((_g < positions->length)){
HXLINE(1541)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)																_g = (_g + 1);
HXDLIN(1541)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1541)														widthValue = width;
HXDLIN(1541)														goto _hx_goto_65;
            													}
            												}
            												_hx_goto_65:;
HXDLIN(1541)												rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1541)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)													rangeIndex = (rangeIndex + 1);
HXDLIN(1541)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
            											}
            										}
HXDLIN(1541)										remainingPositions = positions;
HXDLIN(1541)										tempWidth = widthValue;
            									}
            									_hx_goto_51:;
            								}
HXDLIN(1541)								{
HXLINE(1541)									if ((endIndex <= formatRange->end)) {
HXLINE(1541)										::String text = _gthis->text;
HXDLIN(1541)										Float letterSpacing = ((Float)0.0);
HXDLIN(1541)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1541)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1541)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1541)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)										bool positions1;
HXDLIN(1541)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1541)											positions1 = true;
            										}
HXDLIN(1541)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)										_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1541)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1541)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1541)										Float width = ((Float)0.0);
HXDLIN(1541)										{
HXLINE(1541)											int _g = 0;
HXDLIN(1541)											while((_g < positions->length)){
HXLINE(1541)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)												_g = (_g + 1);
HXDLIN(1541)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1541)										widthValue = width;
HXDLIN(1541)										bool _hx_tmp;
HXDLIN(1541)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1541)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1541)											_hx_tmp = true;
            										}
HXDLIN(1541)										if (_hx_tmp) {
HXLINE(1541)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1541)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1541)											layoutGroup->format = formatRange->format;
HXDLIN(1541)											layoutGroup->startIndex = textIndex;
HXDLIN(1541)											layoutGroup->endIndex = endIndex;
            										}
HXDLIN(1541)										layoutGroup->positions = positions;
HXDLIN(1541)										int _hx_tmp1;
HXDLIN(1541)										if (firstLineOfParagraph) {
HXLINE(1541)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1541)											_hx_tmp1 = 0;
            										}
HXDLIN(1541)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1541)										layoutGroup->ascent = ascent;
HXDLIN(1541)										layoutGroup->descent = descent;
HXDLIN(1541)										layoutGroup->leading = leading;
HXDLIN(1541)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1541)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1541)										layoutGroup->width = widthValue;
HXDLIN(1541)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1541)										offsetX = (offsetX + widthValue);
HXDLIN(1541)										if ((endIndex == formatRange->end)) {
HXLINE(1541)											layoutGroup = null();
HXDLIN(1541)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)												rangeIndex = (rangeIndex + 1);
HXDLIN(1541)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1541)											{
HXLINE(1541)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1541)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1541)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1541)													bool _hx_tmp;
HXDLIN(1541)													if (::hx::IsNotNull( font )) {
HXLINE(1541)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1541)														_hx_tmp = false;
            													}
HXDLIN(1541)													if (_hx_tmp) {
HXLINE(1541)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1541)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1541)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1541)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1541)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1541)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1541)												if ((heightValue > maxHeightValue)) {
HXLINE(1541)													maxHeightValue = heightValue;
            												}
HXDLIN(1541)												if ((ascent > maxAscent)) {
HXLINE(1541)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1541)										while(true){
HXLINE(1541)											int tempRangeEnd;
HXDLIN(1541)											if ((endIndex < formatRange->end)) {
HXLINE(1541)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1541)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1541)											if ((textIndex != tempRangeEnd)) {
HXLINE(1541)												::String text = _gthis->text;
HXDLIN(1541)												Float letterSpacing = ((Float)0.0);
HXDLIN(1541)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1541)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1541)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1541)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1541)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1541)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1541)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1541)												bool positions1;
HXDLIN(1541)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1541)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1541)													positions1 = true;
            												}
HXDLIN(1541)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1541)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1541)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1541)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1541)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1541)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1541)												Float width = ((Float)0.0);
HXDLIN(1541)												{
HXLINE(1541)													int _g = 0;
HXDLIN(1541)													while((_g < positions->length)){
HXLINE(1541)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1541)														_g = (_g + 1);
HXDLIN(1541)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1541)												widthValue = width;
HXDLIN(1541)												bool _hx_tmp;
HXDLIN(1541)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1541)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1541)													_hx_tmp = true;
            												}
HXDLIN(1541)												if (_hx_tmp) {
HXLINE(1541)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1541)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1541)													layoutGroup->format = formatRange->format;
HXDLIN(1541)													layoutGroup->startIndex = textIndex;
HXDLIN(1541)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1541)												layoutGroup->positions = positions;
HXDLIN(1541)												int _hx_tmp1;
HXDLIN(1541)												if (firstLineOfParagraph) {
HXLINE(1541)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1541)													_hx_tmp1 = 0;
            												}
HXDLIN(1541)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1541)												layoutGroup->ascent = ascent;
HXDLIN(1541)												layoutGroup->descent = descent;
HXDLIN(1541)												layoutGroup->leading = leading;
HXDLIN(1541)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1541)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1541)												layoutGroup->width = widthValue;
HXDLIN(1541)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1541)												offsetX = (offsetX + widthValue);
HXDLIN(1541)												textIndex = tempRangeEnd;
            											}
HXDLIN(1541)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1541)												layoutGroup = null();
            											}
HXDLIN(1541)											if ((tempRangeEnd == endIndex)) {
HXLINE(1541)												goto _hx_goto_68;
            											}
HXDLIN(1541)											bool _hx_tmp;
HXDLIN(1541)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1541)												rangeIndex = (rangeIndex + 1);
HXDLIN(1541)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1541)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1541)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1541)												_hx_tmp = true;
            											}
            											else {
HXLINE(1541)												_hx_tmp = false;
            											}
HXDLIN(1541)											if (!(_hx_tmp)) {
HXLINE(1541)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1541)												goto _hx_goto_68;
            											}
HXDLIN(1541)											{
HXLINE(1541)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1541)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1541)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1541)													bool _hx_tmp;
HXDLIN(1541)													if (::hx::IsNotNull( font )) {
HXLINE(1541)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1541)														_hx_tmp = false;
            													}
HXDLIN(1541)													if (_hx_tmp) {
HXLINE(1541)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1541)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1541)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1541)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1541)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1541)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1541)												if ((heightValue > maxHeightValue)) {
HXLINE(1541)													maxHeightValue = heightValue;
            												}
HXDLIN(1541)												if ((ascent > maxAscent)) {
HXLINE(1541)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_68:;
            									}
HXDLIN(1541)									textIndex = endIndex;
            								}
            							}
HXLINE(1543)							wrap = false;
            						}
            						else {
HXLINE(1547)							bool _hx_tmp;
HXDLIN(1547)							bool _hx_tmp1;
HXDLIN(1547)							if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1547)								_hx_tmp1 = (textIndex == spaceIndex);
            							}
            							else {
HXLINE(1547)								_hx_tmp1 = false;
            							}
HXDLIN(1547)							if (_hx_tmp1) {
HXLINE(1547)								_hx_tmp = (previousSpaceIndex != (spaceIndex - 1));
            							}
            							else {
HXLINE(1547)								_hx_tmp = false;
            							}
HXDLIN(1547)							if (_hx_tmp) {
HXLINE(1550)								if (::hx::IsNotEq( align,2 )) {
HXLINE(1552)									layoutGroup->endIndex = spaceIndex;
HXLINE(1553)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1554)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1554)									layoutGroup1->width = (layoutGroup1->width + widthValue);
            								}
HXLINE(1556)								offsetX = (offsetX + widthValue);
HXLINE(1558)								textIndex = endIndex;
            							}
            							else {
HXLINE(1560)								bool _hx_tmp;
HXDLIN(1560)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1560)									_hx_tmp = ::hx::IsEq( align,2 );
            								}
            								else {
HXLINE(1560)									_hx_tmp = true;
            								}
HXDLIN(1560)								if (_hx_tmp) {
HXLINE(1562)									{
HXLINE(1562)										bool _hx_tmp;
HXDLIN(1562)										if ((_gthis->width >= 4)) {
HXLINE(1562)											_hx_tmp = _gthis->wordWrap;
            										}
            										else {
HXLINE(1562)											_hx_tmp = false;
            										}
HXDLIN(1562)										if (_hx_tmp) {
HXLINE(1562)											::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1562)											int bufferCount;
HXDLIN(1562)											int placeIndex;
HXDLIN(1562)											Float positionWidth;
HXDLIN(1562)											 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1562)											Float width = ((Float)0.0);
HXDLIN(1562)											{
HXLINE(1562)												int _g = 0;
HXDLIN(1562)												while((_g < remainingPositions->length)){
HXLINE(1562)													 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)													_g = (_g + 1);
HXDLIN(1562)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1562)											Float tempWidth = width;
HXDLIN(1562)											int i = (remainingPositions->length - 1);
HXDLIN(1562)											while((i >= 0)){
HXLINE(1562)												 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1562)												bool _hx_tmp;
HXDLIN(1562)												if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1562)													_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            												}
            												else {
HXLINE(1562)													_hx_tmp = false;
            												}
HXDLIN(1562)												if (_hx_tmp) {
HXLINE(1562)													goto _hx_goto_71;
            												}
HXDLIN(1562)												 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)												tempWidth = (tempWidth - position->advance->x);
HXDLIN(1562)												i = (i - 1);
            											}
            											_hx_goto_71:;
HXDLIN(1562)											while(true){
HXLINE(1562)												bool _hx_tmp;
HXDLIN(1562)												if ((remainingPositions->length > 0)) {
HXLINE(1562)													int _hx_tmp1;
HXDLIN(1562)													if (firstLineOfParagraph) {
HXLINE(1562)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1562)														_hx_tmp1 = 0;
            													}
HXDLIN(1562)													_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1562)													_hx_tmp = false;
            												}
HXDLIN(1562)												if (!(_hx_tmp)) {
HXLINE(1562)													goto _hx_goto_72;
            												}
HXDLIN(1562)												bufferCount = 0;
HXDLIN(1562)												i = bufferCount;
HXDLIN(1562)												positionWidth = ((Float)0.0);
HXDLIN(1562)												while(true){
HXLINE(1562)													int _hx_tmp;
HXDLIN(1562)													if (firstLineOfParagraph) {
HXLINE(1562)														_hx_tmp = indent;
            													}
            													else {
HXLINE(1562)														_hx_tmp = 0;
            													}
HXDLIN(1562)													if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1562)														goto _hx_goto_73;
            													}
HXDLIN(1562)													currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)													if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1562)														i = (i + 1);
HXDLIN(1562)														bufferCount = (bufferCount + 1);
            													}
            													else {
HXLINE(1562)														positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1562)														i = (i + 1);
            													}
            												}
            												_hx_goto_73:;
HXDLIN(1562)												if ((i == bufferCount)) {
HXLINE(1562)													i = (bufferCount + 1);
            												}
            												else {
HXLINE(1562)													while(true){
HXLINE(1562)														bool _hx_tmp;
HXDLIN(1562)														if ((i > 1)) {
HXLINE(1562)															int _hx_tmp1;
HXDLIN(1562)															if (firstLineOfParagraph) {
HXLINE(1562)																_hx_tmp1 = indent;
            															}
            															else {
HXLINE(1562)																_hx_tmp1 = 0;
            															}
HXDLIN(1562)															_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            														}
            														else {
HXLINE(1562)															_hx_tmp = false;
            														}
HXDLIN(1562)														if (!(_hx_tmp)) {
HXLINE(1562)															goto _hx_goto_74;
            														}
HXDLIN(1562)														i = (i - 1);
HXDLIN(1562)														if (((i - bufferCount) > 0)) {
HXLINE(1562)															{
HXLINE(1562)																int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1562)																if ((textIndex >= endIndex)) {
HXLINE(1562)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1562)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1562)																	if ((endIndex <= formatRange->end)) {
HXLINE(1562)																		::String text = _gthis->text;
HXDLIN(1562)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1562)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1562)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1562)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1562)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)																		bool positions1;
HXDLIN(1562)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1562)																			positions1 = true;
            																		}
HXDLIN(1562)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1562)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1562)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1562)																		Float width = ((Float)0.0);
HXDLIN(1562)																		{
HXLINE(1562)																			int _g = 0;
HXDLIN(1562)																			while((_g < positions->length)){
HXLINE(1562)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																				_g = (_g + 1);
HXDLIN(1562)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1562)																		widthValue = width;
            																	}
            																	else {
HXLINE(1562)																		int tempIndex = textIndex;
HXDLIN(1562)																		int tempRangeEnd = formatRange->end;
HXDLIN(1562)																		int countRanges = 0;
HXDLIN(1562)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1562)																		widthValue = ( (Float)(0) );
HXDLIN(1562)																		while(true){
HXLINE(1562)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1562)																				::String text = _gthis->text;
HXDLIN(1562)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1562)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1562)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1562)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1562)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)																				bool _hx_tmp;
HXDLIN(1562)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1562)																					_hx_tmp = true;
            																				}
HXDLIN(1562)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1562)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1562)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1562)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1562)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1562)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1562)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1562)																				bool _hx_tmp;
HXDLIN(1562)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1562)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1562)																					_hx_tmp = false;
            																				}
HXDLIN(1562)																				if (!(_hx_tmp)) {
HXLINE(1562)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1562)																					goto _hx_goto_76;
            																				}
HXDLIN(1562)																				tempIndex = tempRangeEnd;
HXDLIN(1562)																				if ((endIndex < formatRange->end)) {
HXLINE(1562)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1562)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1562)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1562)																				Float width = ((Float)0.0);
HXDLIN(1562)																				{
HXLINE(1562)																					int _g = 0;
HXDLIN(1562)																					while((_g < positions->length)){
HXLINE(1562)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																						_g = (_g + 1);
HXDLIN(1562)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1562)																				widthValue = width;
HXDLIN(1562)																				goto _hx_goto_76;
            																			}
            																		}
            																		_hx_goto_76:;
HXDLIN(1562)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1562)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1562)															positionWidth = widthValue;
            														}
            														else {
HXLINE(1562)															i = 1;
HXDLIN(1562)															bufferCount = 0;
HXDLIN(1562)															{
HXLINE(1562)																int endIndex = (textIndex + 1);
HXDLIN(1562)																if ((textIndex >= endIndex)) {
HXLINE(1562)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1562)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1562)																	if ((endIndex <= formatRange->end)) {
HXLINE(1562)																		::String text = _gthis->text;
HXDLIN(1562)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1562)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1562)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1562)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1562)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)																		bool positions1;
HXDLIN(1562)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1562)																			positions1 = true;
            																		}
HXDLIN(1562)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1562)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1562)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1562)																		Float width = ((Float)0.0);
HXDLIN(1562)																		{
HXLINE(1562)																			int _g = 0;
HXDLIN(1562)																			while((_g < positions->length)){
HXLINE(1562)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																				_g = (_g + 1);
HXDLIN(1562)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1562)																		widthValue = width;
            																	}
            																	else {
HXLINE(1562)																		int tempIndex = textIndex;
HXDLIN(1562)																		int tempRangeEnd = formatRange->end;
HXDLIN(1562)																		int countRanges = 0;
HXDLIN(1562)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1562)																		widthValue = ( (Float)(0) );
HXDLIN(1562)																		while(true){
HXLINE(1562)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1562)																				::String text = _gthis->text;
HXDLIN(1562)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1562)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1562)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1562)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1562)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)																				bool _hx_tmp;
HXDLIN(1562)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1562)																					_hx_tmp = true;
            																				}
HXDLIN(1562)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1562)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1562)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1562)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1562)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1562)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1562)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1562)																				bool _hx_tmp;
HXDLIN(1562)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1562)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1562)																					_hx_tmp = false;
            																				}
HXDLIN(1562)																				if (!(_hx_tmp)) {
HXLINE(1562)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1562)																					goto _hx_goto_79;
            																				}
HXDLIN(1562)																				tempIndex = tempRangeEnd;
HXDLIN(1562)																				if ((endIndex < formatRange->end)) {
HXLINE(1562)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1562)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1562)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1562)																				Float width = ((Float)0.0);
HXDLIN(1562)																				{
HXLINE(1562)																					int _g = 0;
HXDLIN(1562)																					while((_g < positions->length)){
HXLINE(1562)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																						_g = (_g + 1);
HXDLIN(1562)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1562)																				widthValue = width;
HXDLIN(1562)																				goto _hx_goto_79;
            																			}
            																		}
            																		_hx_goto_79:;
HXDLIN(1562)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1562)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1562)															positionWidth = ( (Float)(0) );
            														}
            													}
            													_hx_goto_74:;
            												}
HXDLIN(1562)												placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1562)												{
HXLINE(1562)													if ((placeIndex <= formatRange->end)) {
HXLINE(1562)														::String text = _gthis->text;
HXDLIN(1562)														Float letterSpacing = ((Float)0.0);
HXDLIN(1562)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1562)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)														bool positions1;
HXDLIN(1562)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1562)															positions1 = true;
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)														_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1562)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1562)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1562)														Float width = ((Float)0.0);
HXDLIN(1562)														{
HXLINE(1562)															int _g = 0;
HXDLIN(1562)															while((_g < positions->length)){
HXLINE(1562)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																_g = (_g + 1);
HXDLIN(1562)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1562)														widthValue = width;
HXDLIN(1562)														bool _hx_tmp;
HXDLIN(1562)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1562)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1562)															_hx_tmp = true;
            														}
HXDLIN(1562)														if (_hx_tmp) {
HXLINE(1562)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1562)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1562)															layoutGroup->format = formatRange->format;
HXDLIN(1562)															layoutGroup->startIndex = textIndex;
HXDLIN(1562)															layoutGroup->endIndex = placeIndex;
            														}
HXDLIN(1562)														layoutGroup->positions = positions;
HXDLIN(1562)														int _hx_tmp1;
HXDLIN(1562)														if (firstLineOfParagraph) {
HXLINE(1562)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1562)															_hx_tmp1 = 0;
            														}
HXDLIN(1562)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1562)														layoutGroup->ascent = ascent;
HXDLIN(1562)														layoutGroup->descent = descent;
HXDLIN(1562)														layoutGroup->leading = leading;
HXDLIN(1562)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1562)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1562)														layoutGroup->width = widthValue;
HXDLIN(1562)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1562)														offsetX = (offsetX + widthValue);
HXDLIN(1562)														if ((placeIndex == formatRange->end)) {
HXLINE(1562)															layoutGroup = null();
HXDLIN(1562)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
HXDLIN(1562)															{
HXLINE(1562)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1562)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1562)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1562)																	bool _hx_tmp;
HXDLIN(1562)																	if (::hx::IsNotNull( font )) {
HXLINE(1562)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1562)																		_hx_tmp = false;
            																	}
HXDLIN(1562)																	if (_hx_tmp) {
HXLINE(1562)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1562)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1562)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1562)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1562)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1562)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1562)																if ((heightValue > maxHeightValue)) {
HXLINE(1562)																	maxHeightValue = heightValue;
            																}
HXDLIN(1562)																if ((ascent > maxAscent)) {
HXLINE(1562)																	maxAscent = ascent;
            																}
            															}
            														}
            													}
            													else {
HXLINE(1562)														while(true){
HXLINE(1562)															int tempRangeEnd;
HXDLIN(1562)															if ((placeIndex < formatRange->end)) {
HXLINE(1562)																tempRangeEnd = placeIndex;
            															}
            															else {
HXLINE(1562)																tempRangeEnd = formatRange->end;
            															}
HXDLIN(1562)															if ((textIndex != tempRangeEnd)) {
HXLINE(1562)																::String text = _gthis->text;
HXDLIN(1562)																Float letterSpacing = ((Float)0.0);
HXDLIN(1562)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1562)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1562)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1562)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)																bool positions1;
HXDLIN(1562)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1562)																	positions1 = true;
            																}
HXDLIN(1562)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)																_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1562)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1562)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1562)																Float width = ((Float)0.0);
HXDLIN(1562)																{
HXLINE(1562)																	int _g = 0;
HXDLIN(1562)																	while((_g < positions->length)){
HXLINE(1562)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																		_g = (_g + 1);
HXDLIN(1562)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1562)																widthValue = width;
HXDLIN(1562)																bool _hx_tmp;
HXDLIN(1562)																if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1562)																	_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            																}
            																else {
HXLINE(1562)																	_hx_tmp = true;
            																}
HXDLIN(1562)																if (_hx_tmp) {
HXLINE(1562)																	layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1562)																	_gthis->layoutGroups->push(layoutGroup);
            																}
            																else {
HXLINE(1562)																	layoutGroup->format = formatRange->format;
HXDLIN(1562)																	layoutGroup->startIndex = textIndex;
HXDLIN(1562)																	layoutGroup->endIndex = tempRangeEnd;
            																}
HXDLIN(1562)																layoutGroup->positions = positions;
HXDLIN(1562)																int _hx_tmp1;
HXDLIN(1562)																if (firstLineOfParagraph) {
HXLINE(1562)																	_hx_tmp1 = indent;
            																}
            																else {
HXLINE(1562)																	_hx_tmp1 = 0;
            																}
HXDLIN(1562)																layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1562)																layoutGroup->ascent = ascent;
HXDLIN(1562)																layoutGroup->descent = descent;
HXDLIN(1562)																layoutGroup->leading = leading;
HXDLIN(1562)																layoutGroup->lineIndex = lineIndex;
HXDLIN(1562)																layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1562)																layoutGroup->width = widthValue;
HXDLIN(1562)																layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1562)																offsetX = (offsetX + widthValue);
HXDLIN(1562)																textIndex = tempRangeEnd;
            															}
HXDLIN(1562)															if ((tempRangeEnd == formatRange->end)) {
HXLINE(1562)																layoutGroup = null();
            															}
HXDLIN(1562)															if ((tempRangeEnd == placeIndex)) {
HXLINE(1562)																goto _hx_goto_82;
            															}
HXDLIN(1562)															bool _hx_tmp;
HXDLIN(1562)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1562)																_hx_tmp = true;
            															}
            															else {
HXLINE(1562)																_hx_tmp = false;
            															}
HXDLIN(1562)															if (!(_hx_tmp)) {
HXLINE(1562)																::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1562)																goto _hx_goto_82;
            															}
HXDLIN(1562)															{
HXLINE(1562)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1562)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1562)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1562)																	bool _hx_tmp;
HXDLIN(1562)																	if (::hx::IsNotNull( font )) {
HXLINE(1562)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1562)																		_hx_tmp = false;
            																	}
HXDLIN(1562)																	if (_hx_tmp) {
HXLINE(1562)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1562)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1562)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1562)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1562)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1562)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1562)																if ((heightValue > maxHeightValue)) {
HXLINE(1562)																	maxHeightValue = heightValue;
            																}
HXDLIN(1562)																if ((ascent > maxAscent)) {
HXLINE(1562)																	maxAscent = ascent;
            																}
            															}
            														}
            														_hx_goto_82:;
            													}
HXDLIN(1562)													textIndex = placeIndex;
            												}
HXDLIN(1562)												{
HXLINE(1562)													{
HXLINE(1562)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1562)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1562)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1562)															bool _hx_tmp;
HXDLIN(1562)															if (::hx::IsNotNull( font )) {
HXLINE(1562)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1562)																_hx_tmp = false;
            															}
HXDLIN(1562)															if (_hx_tmp) {
HXLINE(1562)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1562)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1562)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1562)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1562)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1562)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1562)														if ((heightValue > maxHeightValue)) {
HXLINE(1562)															maxHeightValue = heightValue;
            														}
HXDLIN(1562)														if ((ascent > maxAscent)) {
HXLINE(1562)															maxAscent = ascent;
            														}
            													}
HXDLIN(1562)													int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1562)													while(true){
HXLINE(1562)														i1 = (i1 - 1);
HXDLIN(1562)														if (!((i1 > -1))) {
HXLINE(1562)															goto _hx_goto_84;
            														}
HXDLIN(1562)														 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1562)														if ((lg->lineIndex < lineIndex)) {
HXLINE(1562)															goto _hx_goto_84;
            														}
HXDLIN(1562)														if ((lg->lineIndex > lineIndex)) {
HXLINE(1562)															continue;
            														}
HXDLIN(1562)														lg->ascent = maxAscent;
HXDLIN(1562)														lg->height = ( (Float)(maxHeightValue) );
            													}
            													_hx_goto_84:;
HXDLIN(1562)													offsetY = (offsetY + maxHeightValue);
HXDLIN(1562)													maxAscent = ((Float)0.0);
HXDLIN(1562)													maxHeightValue = 0;
HXDLIN(1562)													lineIndex = (lineIndex + 1);
HXDLIN(1562)													offsetX = ( (Float)(0) );
HXDLIN(1562)													firstLineOfParagraph = false;
            												}
HXDLIN(1562)												if ((placeIndex >= endIndex)) {
HXLINE(1562)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1562)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1562)													if ((endIndex <= formatRange->end)) {
HXLINE(1562)														::String text = _gthis->text;
HXDLIN(1562)														Float letterSpacing = ((Float)0.0);
HXDLIN(1562)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1562)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)														bool positions1;
HXDLIN(1562)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1562)															positions1 = true;
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)														_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1562)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1562)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1562)														Float width = ((Float)0.0);
HXDLIN(1562)														{
HXLINE(1562)															int _g = 0;
HXDLIN(1562)															while((_g < positions->length)){
HXLINE(1562)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																_g = (_g + 1);
HXDLIN(1562)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1562)														widthValue = width;
            													}
            													else {
HXLINE(1562)														int tempIndex = placeIndex;
HXDLIN(1562)														int tempRangeEnd = formatRange->end;
HXDLIN(1562)														int countRanges = 0;
HXDLIN(1562)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1562)														widthValue = ( (Float)(0) );
HXDLIN(1562)														while(true){
HXLINE(1562)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1562)																::String text = _gthis->text;
HXDLIN(1562)																Float letterSpacing = ((Float)0.0);
HXDLIN(1562)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1562)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1562)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1562)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)																bool _hx_tmp;
HXDLIN(1562)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1562)																	_hx_tmp = true;
            																}
HXDLIN(1562)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1562)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1562)																::Array< ::Dynamic> tempPositions;
HXDLIN(1562)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1562)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1562)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1562)															if ((tempRangeEnd != endIndex)) {
HXLINE(1562)																bool _hx_tmp;
HXDLIN(1562)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1562)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1562)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1562)																	_hx_tmp = false;
            																}
HXDLIN(1562)																if (!(_hx_tmp)) {
HXLINE(1562)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1562)																	goto _hx_goto_86;
            																}
HXDLIN(1562)																tempIndex = tempRangeEnd;
HXDLIN(1562)																if ((endIndex < formatRange->end)) {
HXLINE(1562)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1562)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1562)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1562)																Float width = ((Float)0.0);
HXDLIN(1562)																{
HXLINE(1562)																	int _g = 0;
HXDLIN(1562)																	while((_g < positions->length)){
HXLINE(1562)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																		_g = (_g + 1);
HXDLIN(1562)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1562)																widthValue = width;
HXDLIN(1562)																goto _hx_goto_86;
            															}
            														}
            														_hx_goto_86:;
HXDLIN(1562)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1562)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)															rangeIndex = (rangeIndex + 1);
HXDLIN(1562)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
HXDLIN(1562)												remainingPositions = positions;
HXDLIN(1562)												tempWidth = widthValue;
            											}
            											_hx_goto_72:;
            										}
HXDLIN(1562)										{
HXLINE(1562)											if ((endIndex <= formatRange->end)) {
HXLINE(1562)												::String text = _gthis->text;
HXDLIN(1562)												Float letterSpacing = ((Float)0.0);
HXDLIN(1562)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1562)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1562)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1562)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)												bool positions1;
HXDLIN(1562)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1562)													positions1 = true;
            												}
HXDLIN(1562)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1562)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1562)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1562)												Float width = ((Float)0.0);
HXDLIN(1562)												{
HXLINE(1562)													int _g = 0;
HXDLIN(1562)													while((_g < positions->length)){
HXLINE(1562)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)														_g = (_g + 1);
HXDLIN(1562)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1562)												widthValue = width;
HXDLIN(1562)												bool _hx_tmp;
HXDLIN(1562)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1562)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1562)													_hx_tmp = true;
            												}
HXDLIN(1562)												if (_hx_tmp) {
HXLINE(1562)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1562)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1562)													layoutGroup->format = formatRange->format;
HXDLIN(1562)													layoutGroup->startIndex = textIndex;
HXDLIN(1562)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1562)												layoutGroup->positions = positions;
HXDLIN(1562)												int _hx_tmp1;
HXDLIN(1562)												if (firstLineOfParagraph) {
HXLINE(1562)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1562)													_hx_tmp1 = 0;
            												}
HXDLIN(1562)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1562)												layoutGroup->ascent = ascent;
HXDLIN(1562)												layoutGroup->descent = descent;
HXDLIN(1562)												layoutGroup->leading = leading;
HXDLIN(1562)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1562)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1562)												layoutGroup->width = widthValue;
HXDLIN(1562)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1562)												offsetX = (offsetX + widthValue);
HXDLIN(1562)												if ((endIndex == formatRange->end)) {
HXLINE(1562)													layoutGroup = null();
HXDLIN(1562)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)														rangeIndex = (rangeIndex + 1);
HXDLIN(1562)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1562)													{
HXLINE(1562)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1562)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1562)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1562)															bool _hx_tmp;
HXDLIN(1562)															if (::hx::IsNotNull( font )) {
HXLINE(1562)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1562)																_hx_tmp = false;
            															}
HXDLIN(1562)															if (_hx_tmp) {
HXLINE(1562)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1562)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1562)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1562)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1562)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1562)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1562)														if ((heightValue > maxHeightValue)) {
HXLINE(1562)															maxHeightValue = heightValue;
            														}
HXDLIN(1562)														if ((ascent > maxAscent)) {
HXLINE(1562)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1562)												while(true){
HXLINE(1562)													int tempRangeEnd;
HXDLIN(1562)													if ((endIndex < formatRange->end)) {
HXLINE(1562)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1562)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1562)													if ((textIndex != tempRangeEnd)) {
HXLINE(1562)														::String text = _gthis->text;
HXDLIN(1562)														Float letterSpacing = ((Float)0.0);
HXDLIN(1562)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1562)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1562)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1562)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1562)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1562)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1562)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1562)														bool positions1;
HXDLIN(1562)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1562)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1562)															positions1 = true;
            														}
HXDLIN(1562)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1562)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1562)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1562)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1562)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1562)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1562)														Float width = ((Float)0.0);
HXDLIN(1562)														{
HXLINE(1562)															int _g = 0;
HXDLIN(1562)															while((_g < positions->length)){
HXLINE(1562)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1562)																_g = (_g + 1);
HXDLIN(1562)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1562)														widthValue = width;
HXDLIN(1562)														bool _hx_tmp;
HXDLIN(1562)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1562)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1562)															_hx_tmp = true;
            														}
HXDLIN(1562)														if (_hx_tmp) {
HXLINE(1562)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1562)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1562)															layoutGroup->format = formatRange->format;
HXDLIN(1562)															layoutGroup->startIndex = textIndex;
HXDLIN(1562)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1562)														layoutGroup->positions = positions;
HXDLIN(1562)														int _hx_tmp1;
HXDLIN(1562)														if (firstLineOfParagraph) {
HXLINE(1562)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1562)															_hx_tmp1 = 0;
            														}
HXDLIN(1562)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1562)														layoutGroup->ascent = ascent;
HXDLIN(1562)														layoutGroup->descent = descent;
HXDLIN(1562)														layoutGroup->leading = leading;
HXDLIN(1562)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1562)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1562)														layoutGroup->width = widthValue;
HXDLIN(1562)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1562)														offsetX = (offsetX + widthValue);
HXDLIN(1562)														textIndex = tempRangeEnd;
            													}
HXDLIN(1562)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1562)														layoutGroup = null();
            													}
HXDLIN(1562)													if ((tempRangeEnd == endIndex)) {
HXLINE(1562)														goto _hx_goto_89;
            													}
HXDLIN(1562)													bool _hx_tmp;
HXDLIN(1562)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1562)														rangeIndex = (rangeIndex + 1);
HXDLIN(1562)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1562)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1562)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1562)														_hx_tmp = true;
            													}
            													else {
HXLINE(1562)														_hx_tmp = false;
            													}
HXDLIN(1562)													if (!(_hx_tmp)) {
HXLINE(1562)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1562)														goto _hx_goto_89;
            													}
HXDLIN(1562)													{
HXLINE(1562)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1562)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1562)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1562)															bool _hx_tmp;
HXDLIN(1562)															if (::hx::IsNotNull( font )) {
HXLINE(1562)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1562)																_hx_tmp = false;
            															}
HXDLIN(1562)															if (_hx_tmp) {
HXLINE(1562)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1562)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1562)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1562)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1562)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1562)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1562)														if ((heightValue > maxHeightValue)) {
HXLINE(1562)															maxHeightValue = heightValue;
            														}
HXDLIN(1562)														if ((ascent > maxAscent)) {
HXLINE(1562)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_89:;
            											}
HXDLIN(1562)											textIndex = endIndex;
            										}
            									}
HXLINE(1563)									if ((endIndex == this->text.length)) {
HXLINE(1563)										{
HXLINE(1563)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1563)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1563)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1563)												bool _hx_tmp;
HXDLIN(1563)												if (::hx::IsNotNull( font )) {
HXLINE(1563)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1563)													_hx_tmp = false;
            												}
HXDLIN(1563)												if (_hx_tmp) {
HXLINE(1563)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1563)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1563)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1563)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1563)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1563)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1563)											if ((heightValue > maxHeightValue)) {
HXLINE(1563)												maxHeightValue = heightValue;
            											}
HXDLIN(1563)											if ((ascent > maxAscent)) {
HXLINE(1563)												maxAscent = ascent;
            											}
            										}
HXDLIN(1563)										int i = _gthis->layoutGroups->get_length();
HXDLIN(1563)										while(true){
HXLINE(1563)											i = (i - 1);
HXDLIN(1563)											if (!((i > -1))) {
HXLINE(1563)												goto _hx_goto_91;
            											}
HXDLIN(1563)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1563)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1563)												goto _hx_goto_91;
            											}
HXDLIN(1563)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1563)												continue;
            											}
HXDLIN(1563)											lg->ascent = maxAscent;
HXDLIN(1563)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_91:;
HXDLIN(1563)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1563)										maxAscent = ((Float)0.0);
HXDLIN(1563)										maxHeightValue = 0;
HXDLIN(1563)										lineIndex = (lineIndex + 1);
HXDLIN(1563)										offsetX = ( (Float)(0) );
HXDLIN(1563)										firstLineOfParagraph = false;
            									}
            								}
            								else {
HXLINE(1567)									int tempRangeEnd;
HXDLIN(1567)									if ((endIndex < formatRange->end)) {
HXLINE(1567)										tempRangeEnd = endIndex;
            									}
            									else {
HXLINE(1567)										tempRangeEnd = formatRange->end;
            									}
HXLINE(1569)									if ((tempRangeEnd < endIndex)) {
HXLINE(1571)										::String text = this->text;
HXDLIN(1571)										Float letterSpacing = ((Float)0.0);
HXDLIN(1571)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1571)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1571)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1571)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1571)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1571)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1571)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1571)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1571)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1571)										bool positions1;
HXDLIN(1571)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1571)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1571)											positions1 = true;
            										}
HXDLIN(1571)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1571)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1571)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1571)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1571)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1571)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXLINE(1572)										Float width = ((Float)0.0);
HXDLIN(1572)										{
HXLINE(1572)											int _g = 0;
HXDLIN(1572)											while((_g < positions->length)){
HXLINE(1572)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1572)												_g = (_g + 1);
HXDLIN(1572)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1572)										widthValue = width;
            									}
HXLINE(1575)									layoutGroup->endIndex = tempRangeEnd;
HXLINE(1576)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1577)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1577)									layoutGroup1->width = (layoutGroup1->width + widthValue);
HXLINE(1579)									offsetX = (offsetX + widthValue);
HXLINE(1581)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1583)										layoutGroup = null();
HXLINE(1584)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1584)											rangeIndex = (rangeIndex + 1);
HXDLIN(1584)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1584)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1584)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXLINE(1585)										{
HXLINE(1585)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1585)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1585)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1585)												bool _hx_tmp;
HXDLIN(1585)												if (::hx::IsNotNull( font )) {
HXLINE(1585)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1585)													_hx_tmp = false;
            												}
HXDLIN(1585)												if (_hx_tmp) {
HXLINE(1585)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1585)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1585)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1585)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1585)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1585)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1585)											if ((heightValue > maxHeightValue)) {
HXLINE(1585)												maxHeightValue = heightValue;
            											}
HXDLIN(1585)											if ((ascent > maxAscent)) {
HXLINE(1585)												maxAscent = ascent;
            											}
            										}
HXLINE(1587)										textIndex = tempRangeEnd;
HXLINE(1589)										if ((tempRangeEnd != endIndex)) {
HXLINE(1591)											if ((endIndex <= formatRange->end)) {
HXLINE(1591)												::String text = _gthis->text;
HXDLIN(1591)												Float letterSpacing = ((Float)0.0);
HXDLIN(1591)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1591)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1591)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1591)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1591)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1591)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1591)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1591)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1591)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1591)												bool positions1;
HXDLIN(1591)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1591)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1591)													positions1 = true;
            												}
HXDLIN(1591)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1591)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1591)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1591)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1591)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1591)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1591)												Float width = ((Float)0.0);
HXDLIN(1591)												{
HXLINE(1591)													int _g = 0;
HXDLIN(1591)													while((_g < positions->length)){
HXLINE(1591)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1591)														_g = (_g + 1);
HXDLIN(1591)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1591)												widthValue = width;
HXDLIN(1591)												bool _hx_tmp;
HXDLIN(1591)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1591)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1591)													_hx_tmp = true;
            												}
HXDLIN(1591)												if (_hx_tmp) {
HXLINE(1591)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1591)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1591)													layoutGroup->format = formatRange->format;
HXDLIN(1591)													layoutGroup->startIndex = textIndex;
HXDLIN(1591)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1591)												layoutGroup->positions = positions;
HXDLIN(1591)												int _hx_tmp1;
HXDLIN(1591)												if (firstLineOfParagraph) {
HXLINE(1591)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1591)													_hx_tmp1 = 0;
            												}
HXDLIN(1591)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1591)												layoutGroup->ascent = ascent;
HXDLIN(1591)												layoutGroup->descent = descent;
HXDLIN(1591)												layoutGroup->leading = leading;
HXDLIN(1591)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1591)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1591)												layoutGroup->width = widthValue;
HXDLIN(1591)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1591)												offsetX = (offsetX + widthValue);
HXDLIN(1591)												if ((endIndex == formatRange->end)) {
HXLINE(1591)													layoutGroup = null();
HXDLIN(1591)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1591)														rangeIndex = (rangeIndex + 1);
HXDLIN(1591)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1591)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1591)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1591)													{
HXLINE(1591)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1591)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1591)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1591)															bool _hx_tmp;
HXDLIN(1591)															if (::hx::IsNotNull( font )) {
HXLINE(1591)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1591)																_hx_tmp = false;
            															}
HXDLIN(1591)															if (_hx_tmp) {
HXLINE(1591)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1591)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1591)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1591)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1591)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1591)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1591)														if ((heightValue > maxHeightValue)) {
HXLINE(1591)															maxHeightValue = heightValue;
            														}
HXDLIN(1591)														if ((ascent > maxAscent)) {
HXLINE(1591)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1591)												while(true){
HXLINE(1591)													int tempRangeEnd;
HXDLIN(1591)													if ((endIndex < formatRange->end)) {
HXLINE(1591)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1591)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1591)													if ((textIndex != tempRangeEnd)) {
HXLINE(1591)														::String text = _gthis->text;
HXDLIN(1591)														Float letterSpacing = ((Float)0.0);
HXDLIN(1591)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1591)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1591)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1591)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1591)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1591)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1591)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1591)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1591)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1591)														bool positions1;
HXDLIN(1591)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1591)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1591)															positions1 = true;
            														}
HXDLIN(1591)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1591)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1591)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1591)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1591)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1591)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1591)														Float width = ((Float)0.0);
HXDLIN(1591)														{
HXLINE(1591)															int _g = 0;
HXDLIN(1591)															while((_g < positions->length)){
HXLINE(1591)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1591)																_g = (_g + 1);
HXDLIN(1591)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1591)														widthValue = width;
HXDLIN(1591)														bool _hx_tmp;
HXDLIN(1591)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1591)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1591)															_hx_tmp = true;
            														}
HXDLIN(1591)														if (_hx_tmp) {
HXLINE(1591)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1591)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1591)															layoutGroup->format = formatRange->format;
HXDLIN(1591)															layoutGroup->startIndex = textIndex;
HXDLIN(1591)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1591)														layoutGroup->positions = positions;
HXDLIN(1591)														int _hx_tmp1;
HXDLIN(1591)														if (firstLineOfParagraph) {
HXLINE(1591)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1591)															_hx_tmp1 = 0;
            														}
HXDLIN(1591)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1591)														layoutGroup->ascent = ascent;
HXDLIN(1591)														layoutGroup->descent = descent;
HXDLIN(1591)														layoutGroup->leading = leading;
HXDLIN(1591)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1591)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1591)														layoutGroup->width = widthValue;
HXDLIN(1591)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1591)														offsetX = (offsetX + widthValue);
HXDLIN(1591)														textIndex = tempRangeEnd;
            													}
HXDLIN(1591)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1591)														layoutGroup = null();
            													}
HXDLIN(1591)													if ((tempRangeEnd == endIndex)) {
HXLINE(1591)														goto _hx_goto_94;
            													}
HXDLIN(1591)													bool _hx_tmp;
HXDLIN(1591)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1591)														rangeIndex = (rangeIndex + 1);
HXDLIN(1591)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1591)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1591)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1591)														_hx_tmp = true;
            													}
            													else {
HXLINE(1591)														_hx_tmp = false;
            													}
HXDLIN(1591)													if (!(_hx_tmp)) {
HXLINE(1591)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1591)														goto _hx_goto_94;
            													}
HXDLIN(1591)													{
HXLINE(1591)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1591)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1591)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1591)															bool _hx_tmp;
HXDLIN(1591)															if (::hx::IsNotNull( font )) {
HXLINE(1591)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1591)																_hx_tmp = false;
            															}
HXDLIN(1591)															if (_hx_tmp) {
HXLINE(1591)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1591)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1591)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1591)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1591)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1591)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1591)														if ((heightValue > maxHeightValue)) {
HXLINE(1591)															maxHeightValue = heightValue;
            														}
HXDLIN(1591)														if ((ascent > maxAscent)) {
HXLINE(1591)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_94:;
            											}
HXDLIN(1591)											textIndex = endIndex;
            										}
            									}
HXLINE(1597)									if ((breakIndex == endIndex)) {
HXLINE(1597)										endIndex = (endIndex + 1);
            									}
HXLINE(1599)									textIndex = endIndex;
HXLINE(1601)									if ((endIndex == this->text.length)) {
HXLINE(1603)										{
HXLINE(1603)											{
HXLINE(1603)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1603)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1603)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1603)													bool _hx_tmp;
HXDLIN(1603)													if (::hx::IsNotNull( font )) {
HXLINE(1603)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1603)														_hx_tmp = false;
            													}
HXDLIN(1603)													if (_hx_tmp) {
HXLINE(1603)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1603)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1603)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1603)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1603)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1603)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1603)												if ((heightValue > maxHeightValue)) {
HXLINE(1603)													maxHeightValue = heightValue;
            												}
HXDLIN(1603)												if ((ascent > maxAscent)) {
HXLINE(1603)													maxAscent = ascent;
            												}
            											}
HXDLIN(1603)											int i = _gthis->layoutGroups->get_length();
HXDLIN(1603)											while(true){
HXLINE(1603)												i = (i - 1);
HXDLIN(1603)												if (!((i > -1))) {
HXLINE(1603)													goto _hx_goto_96;
            												}
HXDLIN(1603)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1603)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1603)													goto _hx_goto_96;
            												}
HXDLIN(1603)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1603)													continue;
            												}
HXDLIN(1603)												lg->ascent = maxAscent;
HXDLIN(1603)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_96:;
HXDLIN(1603)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1603)											maxAscent = ((Float)0.0);
HXDLIN(1603)											maxHeightValue = 0;
HXDLIN(1603)											lineIndex = (lineIndex + 1);
HXDLIN(1603)											offsetX = ( (Float)(0) );
HXDLIN(1603)											firstLineOfParagraph = false;
            										}
HXLINE(1605)										if ((breakIndex != -1)) {
HXLINE(1607)											previousBreakIndex = breakIndex;
HXLINE(1608)											breakCount = (breakCount + 1);
HXLINE(1609)											if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1609)												breakIndex = this->lineBreaks->get(breakCount);
            											}
            											else {
HXLINE(1609)												breakIndex = -1;
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE(1615)						int nextSpaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),textIndex);
HXLINE(1620)						if ((breakIndex == previousSpaceIndex)) {
HXLINE(1622)							layoutGroup->endIndex = breakIndex;
HXLINE(1624)							if ((((breakIndex - layoutGroup->startIndex) - layoutGroup->positions->length) < 0)) {
HXLINE(1627)								layoutGroup->positions->push(null());
            							}
HXLINE(1630)							textIndex = (breakIndex + 1);
            						}
HXLINE(1633)						previousSpaceIndex = spaceIndex;
HXLINE(1634)						spaceIndex = nextSpaceIndex;
HXLINE(1636)						bool _hx_tmp;
HXDLIN(1636)						bool _hx_tmp1;
HXDLIN(1636)						bool _hx_tmp2;
HXDLIN(1636)						if ((breakIndex > -1)) {
HXLINE(1636)							_hx_tmp2 = (breakIndex <= textIndex);
            						}
            						else {
HXLINE(1636)							_hx_tmp2 = false;
            						}
HXDLIN(1636)						if (_hx_tmp2) {
HXLINE(1636)							if ((spaceIndex <= breakIndex)) {
HXLINE(1636)								_hx_tmp1 = (spaceIndex == -1);
            							}
            							else {
HXLINE(1636)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE(1636)							_hx_tmp1 = false;
            						}
HXDLIN(1636)						if (!(_hx_tmp1)) {
HXLINE(1636)							_hx_tmp = (textIndex > this->text.length);
            						}
            						else {
HXLINE(1636)							_hx_tmp = true;
            						}
HXDLIN(1636)						if (_hx_tmp) {
HXLINE(1639)							goto _hx_goto_42;
            						}
            					}
            					_hx_goto_42:;
            				}
            				else {
HXLINE(1645)					if ((textIndex < this->text.length)) {
HXLINE(1648)						{
HXLINE(1648)							int endIndex = this->text.length;
HXDLIN(1648)							if ((textIndex >= endIndex)) {
HXLINE(1648)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1648)								widthValue = ( (Float)(0) );
            							}
            							else {
HXLINE(1648)								if ((endIndex <= formatRange->end)) {
HXLINE(1648)									::String text = _gthis->text;
HXDLIN(1648)									Float letterSpacing = ((Float)0.0);
HXDLIN(1648)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1648)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1648)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1648)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1648)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1648)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1648)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1648)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1648)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1648)									bool positions1;
HXDLIN(1648)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1648)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1648)										positions1 = true;
            									}
HXDLIN(1648)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1648)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1648)									_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1648)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1648)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1648)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1648)									Float width = ((Float)0.0);
HXDLIN(1648)									{
HXLINE(1648)										int _g = 0;
HXDLIN(1648)										while((_g < positions->length)){
HXLINE(1648)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1648)											_g = (_g + 1);
HXDLIN(1648)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1648)									widthValue = width;
            								}
            								else {
HXLINE(1648)									int tempIndex = textIndex;
HXDLIN(1648)									int tempRangeEnd = formatRange->end;
HXDLIN(1648)									int countRanges = 0;
HXDLIN(1648)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1648)									widthValue = ( (Float)(0) );
HXDLIN(1648)									while(true){
HXLINE(1648)										if ((tempIndex != tempRangeEnd)) {
HXLINE(1648)											::String text = _gthis->text;
HXDLIN(1648)											Float letterSpacing = ((Float)0.0);
HXDLIN(1648)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1648)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1648)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1648)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1648)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1648)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1648)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1648)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1648)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1648)											bool _hx_tmp;
HXDLIN(1648)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1648)												_hx_tmp = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1648)												_hx_tmp = true;
            											}
HXDLIN(1648)											_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1648)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1648)											_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1648)											::Array< ::Dynamic> tempPositions;
HXDLIN(1648)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1648)												tempPositions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1648)												tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1648)											positions = positions->concat(tempPositions);
            										}
HXDLIN(1648)										if ((tempRangeEnd != endIndex)) {
HXLINE(1648)											bool _hx_tmp;
HXDLIN(1648)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1648)												rangeIndex = (rangeIndex + 1);
HXDLIN(1648)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1648)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1648)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1648)												_hx_tmp = true;
            											}
            											else {
HXLINE(1648)												_hx_tmp = false;
            											}
HXDLIN(1648)											if (!(_hx_tmp)) {
HXLINE(1648)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1648)												goto _hx_goto_98;
            											}
HXDLIN(1648)											tempIndex = tempRangeEnd;
HXDLIN(1648)											if ((endIndex < formatRange->end)) {
HXLINE(1648)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1648)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1648)											countRanges = (countRanges + 1);
            										}
            										else {
HXLINE(1648)											Float width = ((Float)0.0);
HXDLIN(1648)											{
HXLINE(1648)												int _g = 0;
HXDLIN(1648)												while((_g < positions->length)){
HXLINE(1648)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1648)													_g = (_g + 1);
HXDLIN(1648)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1648)											widthValue = width;
HXDLIN(1648)											goto _hx_goto_98;
            										}
            									}
            									_hx_goto_98:;
HXDLIN(1648)									rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1648)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1648)										rangeIndex = (rangeIndex + 1);
HXDLIN(1648)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1648)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1648)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
            								}
            							}
            						}
HXLINE(1649)						{
HXLINE(1649)							int endIndex1 = this->text.length;
HXDLIN(1649)							bool _hx_tmp;
HXDLIN(1649)							if ((_gthis->width >= 4)) {
HXLINE(1649)								_hx_tmp = _gthis->wordWrap;
            							}
            							else {
HXLINE(1649)								_hx_tmp = false;
            							}
HXDLIN(1649)							if (_hx_tmp) {
HXLINE(1649)								::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1649)								int bufferCount;
HXDLIN(1649)								int placeIndex;
HXDLIN(1649)								Float positionWidth;
HXDLIN(1649)								 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1649)								Float width = ((Float)0.0);
HXDLIN(1649)								{
HXLINE(1649)									int _g = 0;
HXDLIN(1649)									while((_g < remainingPositions->length)){
HXLINE(1649)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)										_g = (_g + 1);
HXDLIN(1649)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1649)								Float tempWidth = width;
HXDLIN(1649)								int i = (remainingPositions->length - 1);
HXDLIN(1649)								while((i >= 0)){
HXLINE(1649)									 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1649)									bool _hx_tmp;
HXDLIN(1649)									if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1649)										_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            									}
            									else {
HXLINE(1649)										_hx_tmp = false;
            									}
HXDLIN(1649)									if (_hx_tmp) {
HXLINE(1649)										goto _hx_goto_101;
            									}
HXDLIN(1649)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)									tempWidth = (tempWidth - position->advance->x);
HXDLIN(1649)									i = (i - 1);
            								}
            								_hx_goto_101:;
HXDLIN(1649)								while(true){
HXLINE(1649)									bool _hx_tmp;
HXDLIN(1649)									if ((remainingPositions->length > 0)) {
HXLINE(1649)										int _hx_tmp1;
HXDLIN(1649)										if (firstLineOfParagraph) {
HXLINE(1649)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1649)											_hx_tmp1 = 0;
            										}
HXDLIN(1649)										_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            									}
            									else {
HXLINE(1649)										_hx_tmp = false;
            									}
HXDLIN(1649)									if (!(_hx_tmp)) {
HXLINE(1649)										goto _hx_goto_102;
            									}
HXDLIN(1649)									bufferCount = 0;
HXDLIN(1649)									i = bufferCount;
HXDLIN(1649)									positionWidth = ((Float)0.0);
HXDLIN(1649)									while(true){
HXLINE(1649)										int _hx_tmp;
HXDLIN(1649)										if (firstLineOfParagraph) {
HXLINE(1649)											_hx_tmp = indent;
            										}
            										else {
HXLINE(1649)											_hx_tmp = 0;
            										}
HXDLIN(1649)										if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1649)											goto _hx_goto_103;
            										}
HXDLIN(1649)										currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)										if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1649)											i = (i + 1);
HXDLIN(1649)											bufferCount = (bufferCount + 1);
            										}
            										else {
HXLINE(1649)											positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1649)											i = (i + 1);
            										}
            									}
            									_hx_goto_103:;
HXDLIN(1649)									if ((i == bufferCount)) {
HXLINE(1649)										i = (bufferCount + 1);
            									}
            									else {
HXLINE(1649)										while(true){
HXLINE(1649)											bool _hx_tmp;
HXDLIN(1649)											if ((i > 1)) {
HXLINE(1649)												int _hx_tmp1;
HXDLIN(1649)												if (firstLineOfParagraph) {
HXLINE(1649)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1649)													_hx_tmp1 = 0;
            												}
HXDLIN(1649)												_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            											}
            											else {
HXLINE(1649)												_hx_tmp = false;
            											}
HXDLIN(1649)											if (!(_hx_tmp)) {
HXLINE(1649)												goto _hx_goto_104;
            											}
HXDLIN(1649)											i = (i - 1);
HXDLIN(1649)											if (((i - bufferCount) > 0)) {
HXLINE(1649)												{
HXLINE(1649)													int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1649)													if ((textIndex >= endIndex)) {
HXLINE(1649)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1649)														if ((endIndex <= formatRange->end)) {
HXLINE(1649)															::String text = _gthis->text;
HXDLIN(1649)															Float letterSpacing = ((Float)0.0);
HXDLIN(1649)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1649)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1649)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1649)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)															bool positions1;
HXDLIN(1649)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1649)																positions1 = true;
            															}
HXDLIN(1649)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1649)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1649)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1649)															Float width = ((Float)0.0);
HXDLIN(1649)															{
HXLINE(1649)																int _g = 0;
HXDLIN(1649)																while((_g < positions->length)){
HXLINE(1649)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)																	_g = (_g + 1);
HXDLIN(1649)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1649)															widthValue = width;
            														}
            														else {
HXLINE(1649)															int tempIndex = textIndex;
HXDLIN(1649)															int tempRangeEnd = formatRange->end;
HXDLIN(1649)															int countRanges = 0;
HXDLIN(1649)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)															widthValue = ( (Float)(0) );
HXDLIN(1649)															while(true){
HXLINE(1649)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1649)																	::String text = _gthis->text;
HXDLIN(1649)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1649)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1649)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1649)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1649)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)																	bool _hx_tmp;
HXDLIN(1649)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1649)																		_hx_tmp = true;
            																	}
HXDLIN(1649)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1649)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1649)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1649)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1649)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1649)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1649)																if ((tempRangeEnd != endIndex)) {
HXLINE(1649)																	bool _hx_tmp;
HXDLIN(1649)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1649)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1649)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1649)																		_hx_tmp = false;
            																	}
HXDLIN(1649)																	if (!(_hx_tmp)) {
HXLINE(1649)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1649)																		goto _hx_goto_106;
            																	}
HXDLIN(1649)																	tempIndex = tempRangeEnd;
HXDLIN(1649)																	if ((endIndex < formatRange->end)) {
HXLINE(1649)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1649)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1649)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1649)																	Float width = ((Float)0.0);
HXDLIN(1649)																	{
HXLINE(1649)																		int _g = 0;
HXDLIN(1649)																		while((_g < positions->length)){
HXLINE(1649)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)																			_g = (_g + 1);
HXDLIN(1649)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1649)																	widthValue = width;
HXDLIN(1649)																	goto _hx_goto_106;
            																}
            															}
            															_hx_goto_106:;
HXDLIN(1649)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1649)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)																rangeIndex = (rangeIndex + 1);
HXDLIN(1649)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1649)												positionWidth = widthValue;
            											}
            											else {
HXLINE(1649)												i = 1;
HXDLIN(1649)												bufferCount = 0;
HXDLIN(1649)												{
HXLINE(1649)													int endIndex = (textIndex + 1);
HXDLIN(1649)													if ((textIndex >= endIndex)) {
HXLINE(1649)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1649)														if ((endIndex <= formatRange->end)) {
HXLINE(1649)															::String text = _gthis->text;
HXDLIN(1649)															Float letterSpacing = ((Float)0.0);
HXDLIN(1649)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1649)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1649)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1649)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)															bool positions1;
HXDLIN(1649)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1649)																positions1 = true;
            															}
HXDLIN(1649)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1649)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1649)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1649)															Float width = ((Float)0.0);
HXDLIN(1649)															{
HXLINE(1649)																int _g = 0;
HXDLIN(1649)																while((_g < positions->length)){
HXLINE(1649)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)																	_g = (_g + 1);
HXDLIN(1649)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1649)															widthValue = width;
            														}
            														else {
HXLINE(1649)															int tempIndex = textIndex;
HXDLIN(1649)															int tempRangeEnd = formatRange->end;
HXDLIN(1649)															int countRanges = 0;
HXDLIN(1649)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)															widthValue = ( (Float)(0) );
HXDLIN(1649)															while(true){
HXLINE(1649)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1649)																	::String text = _gthis->text;
HXDLIN(1649)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1649)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1649)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1649)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1649)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)																	bool _hx_tmp;
HXDLIN(1649)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1649)																		_hx_tmp = true;
            																	}
HXDLIN(1649)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1649)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1649)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1649)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1649)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1649)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1649)																if ((tempRangeEnd != endIndex)) {
HXLINE(1649)																	bool _hx_tmp;
HXDLIN(1649)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1649)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1649)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1649)																		_hx_tmp = false;
            																	}
HXDLIN(1649)																	if (!(_hx_tmp)) {
HXLINE(1649)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1649)																		goto _hx_goto_109;
            																	}
HXDLIN(1649)																	tempIndex = tempRangeEnd;
HXDLIN(1649)																	if ((endIndex < formatRange->end)) {
HXLINE(1649)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1649)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1649)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1649)																	Float width = ((Float)0.0);
HXDLIN(1649)																	{
HXLINE(1649)																		int _g = 0;
HXDLIN(1649)																		while((_g < positions->length)){
HXLINE(1649)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)																			_g = (_g + 1);
HXDLIN(1649)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1649)																	widthValue = width;
HXDLIN(1649)																	goto _hx_goto_109;
            																}
            															}
            															_hx_goto_109:;
HXDLIN(1649)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1649)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)																rangeIndex = (rangeIndex + 1);
HXDLIN(1649)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1649)												positionWidth = ( (Float)(0) );
            											}
            										}
            										_hx_goto_104:;
            									}
HXDLIN(1649)									placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1649)									{
HXLINE(1649)										if ((placeIndex <= formatRange->end)) {
HXLINE(1649)											::String text = _gthis->text;
HXDLIN(1649)											Float letterSpacing = ((Float)0.0);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1649)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)											bool positions1;
HXDLIN(1649)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1649)												positions1 = true;
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)											_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1649)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1649)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1649)											Float width = ((Float)0.0);
HXDLIN(1649)											{
HXLINE(1649)												int _g = 0;
HXDLIN(1649)												while((_g < positions->length)){
HXLINE(1649)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)													_g = (_g + 1);
HXDLIN(1649)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1649)											widthValue = width;
HXDLIN(1649)											bool _hx_tmp;
HXDLIN(1649)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1649)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1649)												_hx_tmp = true;
            											}
HXDLIN(1649)											if (_hx_tmp) {
HXLINE(1649)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1649)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1649)												layoutGroup->format = formatRange->format;
HXDLIN(1649)												layoutGroup->startIndex = textIndex;
HXDLIN(1649)												layoutGroup->endIndex = placeIndex;
            											}
HXDLIN(1649)											layoutGroup->positions = positions;
HXDLIN(1649)											int _hx_tmp1;
HXDLIN(1649)											if (firstLineOfParagraph) {
HXLINE(1649)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1649)												_hx_tmp1 = 0;
            											}
HXDLIN(1649)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1649)											layoutGroup->ascent = ascent;
HXDLIN(1649)											layoutGroup->descent = descent;
HXDLIN(1649)											layoutGroup->leading = leading;
HXDLIN(1649)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1649)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1649)											layoutGroup->width = widthValue;
HXDLIN(1649)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1649)											offsetX = (offsetX + widthValue);
HXDLIN(1649)											if ((placeIndex == formatRange->end)) {
HXLINE(1649)												layoutGroup = null();
HXDLIN(1649)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)													rangeIndex = (rangeIndex + 1);
HXDLIN(1649)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
HXDLIN(1649)												{
HXLINE(1649)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1649)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1649)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1649)														bool _hx_tmp;
HXDLIN(1649)														if (::hx::IsNotNull( font )) {
HXLINE(1649)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1649)															_hx_tmp = false;
            														}
HXDLIN(1649)														if (_hx_tmp) {
HXLINE(1649)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1649)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1649)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1649)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1649)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1649)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1649)													if ((heightValue > maxHeightValue)) {
HXLINE(1649)														maxHeightValue = heightValue;
            													}
HXDLIN(1649)													if ((ascent > maxAscent)) {
HXLINE(1649)														maxAscent = ascent;
            													}
            												}
            											}
            										}
            										else {
HXLINE(1649)											while(true){
HXLINE(1649)												int tempRangeEnd;
HXDLIN(1649)												if ((placeIndex < formatRange->end)) {
HXLINE(1649)													tempRangeEnd = placeIndex;
            												}
            												else {
HXLINE(1649)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1649)												if ((textIndex != tempRangeEnd)) {
HXLINE(1649)													::String text = _gthis->text;
HXDLIN(1649)													Float letterSpacing = ((Float)0.0);
HXDLIN(1649)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1649)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1649)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1649)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)													bool positions1;
HXDLIN(1649)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)														positions1 = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1649)														positions1 = true;
            													}
HXDLIN(1649)													_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)													_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1649)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)														positions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1649)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1649)													Float width = ((Float)0.0);
HXDLIN(1649)													{
HXLINE(1649)														int _g = 0;
HXDLIN(1649)														while((_g < positions->length)){
HXLINE(1649)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)															_g = (_g + 1);
HXDLIN(1649)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1649)													widthValue = width;
HXDLIN(1649)													bool _hx_tmp;
HXDLIN(1649)													if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1649)														_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            													}
            													else {
HXLINE(1649)														_hx_tmp = true;
            													}
HXDLIN(1649)													if (_hx_tmp) {
HXLINE(1649)														layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1649)														_gthis->layoutGroups->push(layoutGroup);
            													}
            													else {
HXLINE(1649)														layoutGroup->format = formatRange->format;
HXDLIN(1649)														layoutGroup->startIndex = textIndex;
HXDLIN(1649)														layoutGroup->endIndex = tempRangeEnd;
            													}
HXDLIN(1649)													layoutGroup->positions = positions;
HXDLIN(1649)													int _hx_tmp1;
HXDLIN(1649)													if (firstLineOfParagraph) {
HXLINE(1649)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1649)														_hx_tmp1 = 0;
            													}
HXDLIN(1649)													layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1649)													layoutGroup->ascent = ascent;
HXDLIN(1649)													layoutGroup->descent = descent;
HXDLIN(1649)													layoutGroup->leading = leading;
HXDLIN(1649)													layoutGroup->lineIndex = lineIndex;
HXDLIN(1649)													layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1649)													layoutGroup->width = widthValue;
HXDLIN(1649)													layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1649)													offsetX = (offsetX + widthValue);
HXDLIN(1649)													textIndex = tempRangeEnd;
            												}
HXDLIN(1649)												if ((tempRangeEnd == formatRange->end)) {
HXLINE(1649)													layoutGroup = null();
            												}
HXDLIN(1649)												if ((tempRangeEnd == placeIndex)) {
HXLINE(1649)													goto _hx_goto_112;
            												}
HXDLIN(1649)												bool _hx_tmp;
HXDLIN(1649)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)													rangeIndex = (rangeIndex + 1);
HXDLIN(1649)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1649)													_hx_tmp = true;
            												}
            												else {
HXLINE(1649)													_hx_tmp = false;
            												}
HXDLIN(1649)												if (!(_hx_tmp)) {
HXLINE(1649)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1649)													goto _hx_goto_112;
            												}
HXDLIN(1649)												{
HXLINE(1649)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1649)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1649)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1649)														bool _hx_tmp;
HXDLIN(1649)														if (::hx::IsNotNull( font )) {
HXLINE(1649)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1649)															_hx_tmp = false;
            														}
HXDLIN(1649)														if (_hx_tmp) {
HXLINE(1649)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1649)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1649)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1649)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1649)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1649)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1649)													if ((heightValue > maxHeightValue)) {
HXLINE(1649)														maxHeightValue = heightValue;
            													}
HXDLIN(1649)													if ((ascent > maxAscent)) {
HXLINE(1649)														maxAscent = ascent;
            													}
            												}
            											}
            											_hx_goto_112:;
            										}
HXDLIN(1649)										textIndex = placeIndex;
            									}
HXDLIN(1649)									{
HXLINE(1649)										{
HXLINE(1649)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1649)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1649)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1649)												bool _hx_tmp;
HXDLIN(1649)												if (::hx::IsNotNull( font )) {
HXLINE(1649)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1649)													_hx_tmp = false;
            												}
HXDLIN(1649)												if (_hx_tmp) {
HXLINE(1649)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1649)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1649)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1649)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1649)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1649)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1649)											if ((heightValue > maxHeightValue)) {
HXLINE(1649)												maxHeightValue = heightValue;
            											}
HXDLIN(1649)											if ((ascent > maxAscent)) {
HXLINE(1649)												maxAscent = ascent;
            											}
            										}
HXDLIN(1649)										int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1649)										while(true){
HXLINE(1649)											i1 = (i1 - 1);
HXDLIN(1649)											if (!((i1 > -1))) {
HXLINE(1649)												goto _hx_goto_114;
            											}
HXDLIN(1649)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1649)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1649)												goto _hx_goto_114;
            											}
HXDLIN(1649)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1649)												continue;
            											}
HXDLIN(1649)											lg->ascent = maxAscent;
HXDLIN(1649)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_114:;
HXDLIN(1649)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1649)										maxAscent = ((Float)0.0);
HXDLIN(1649)										maxHeightValue = 0;
HXDLIN(1649)										lineIndex = (lineIndex + 1);
HXDLIN(1649)										offsetX = ( (Float)(0) );
HXDLIN(1649)										firstLineOfParagraph = false;
            									}
HXDLIN(1649)									if ((placeIndex >= endIndex1)) {
HXLINE(1649)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)										widthValue = ( (Float)(0) );
            									}
            									else {
HXLINE(1649)										if ((endIndex1 <= formatRange->end)) {
HXLINE(1649)											::String text = _gthis->text;
HXDLIN(1649)											Float letterSpacing = ((Float)0.0);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1649)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)											bool positions1;
HXDLIN(1649)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1649)												positions1 = true;
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)											_gthis1->set_text(text.substring(placeIndex,endIndex1));
HXDLIN(1649)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1649)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1649)											Float width = ((Float)0.0);
HXDLIN(1649)											{
HXLINE(1649)												int _g = 0;
HXDLIN(1649)												while((_g < positions->length)){
HXLINE(1649)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)													_g = (_g + 1);
HXDLIN(1649)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1649)											widthValue = width;
            										}
            										else {
HXLINE(1649)											int tempIndex = placeIndex;
HXDLIN(1649)											int tempRangeEnd = formatRange->end;
HXDLIN(1649)											int countRanges = 0;
HXDLIN(1649)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)											widthValue = ( (Float)(0) );
HXDLIN(1649)											while(true){
HXLINE(1649)												if ((tempIndex != tempRangeEnd)) {
HXLINE(1649)													::String text = _gthis->text;
HXDLIN(1649)													Float letterSpacing = ((Float)0.0);
HXDLIN(1649)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1649)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1649)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1649)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)													bool _hx_tmp;
HXDLIN(1649)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)														_hx_tmp = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1649)														_hx_tmp = true;
            													}
HXDLIN(1649)													_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1649)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)													_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1649)													::Array< ::Dynamic> tempPositions;
HXDLIN(1649)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)														tempPositions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1649)														tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1649)													positions = positions->concat(tempPositions);
            												}
HXDLIN(1649)												if ((tempRangeEnd != endIndex1)) {
HXLINE(1649)													bool _hx_tmp;
HXDLIN(1649)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)														rangeIndex = (rangeIndex + 1);
HXDLIN(1649)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1649)														_hx_tmp = true;
            													}
            													else {
HXLINE(1649)														_hx_tmp = false;
            													}
HXDLIN(1649)													if (!(_hx_tmp)) {
HXLINE(1649)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1116,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1649)														goto _hx_goto_116;
            													}
HXDLIN(1649)													tempIndex = tempRangeEnd;
HXDLIN(1649)													if ((endIndex1 < formatRange->end)) {
HXLINE(1649)														tempRangeEnd = endIndex1;
            													}
            													else {
HXLINE(1649)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1649)													countRanges = (countRanges + 1);
            												}
            												else {
HXLINE(1649)													Float width = ((Float)0.0);
HXDLIN(1649)													{
HXLINE(1649)														int _g = 0;
HXDLIN(1649)														while((_g < positions->length)){
HXLINE(1649)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)															_g = (_g + 1);
HXDLIN(1649)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1649)													widthValue = width;
HXDLIN(1649)													goto _hx_goto_116;
            												}
            											}
            											_hx_goto_116:;
HXDLIN(1649)											rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1649)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)												rangeIndex = (rangeIndex + 1);
HXDLIN(1649)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
            										}
            									}
HXDLIN(1649)									remainingPositions = positions;
HXDLIN(1649)									tempWidth = widthValue;
            								}
            								_hx_goto_102:;
            							}
HXDLIN(1649)							{
HXLINE(1649)								if ((endIndex1 <= formatRange->end)) {
HXLINE(1649)									::String text = _gthis->text;
HXDLIN(1649)									Float letterSpacing = ((Float)0.0);
HXDLIN(1649)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1649)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1649)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1649)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)									bool positions1;
HXDLIN(1649)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1649)										positions1 = true;
            									}
HXDLIN(1649)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)									_gthis1->set_text(text.substring(textIndex,endIndex1));
HXDLIN(1649)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1649)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1649)									Float width = ((Float)0.0);
HXDLIN(1649)									{
HXLINE(1649)										int _g = 0;
HXDLIN(1649)										while((_g < positions->length)){
HXLINE(1649)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)											_g = (_g + 1);
HXDLIN(1649)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1649)									widthValue = width;
HXDLIN(1649)									bool _hx_tmp;
HXDLIN(1649)									if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1649)										_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            									}
            									else {
HXLINE(1649)										_hx_tmp = true;
            									}
HXDLIN(1649)									if (_hx_tmp) {
HXLINE(1649)										layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex1);
HXDLIN(1649)										_gthis->layoutGroups->push(layoutGroup);
            									}
            									else {
HXLINE(1649)										layoutGroup->format = formatRange->format;
HXDLIN(1649)										layoutGroup->startIndex = textIndex;
HXDLIN(1649)										layoutGroup->endIndex = endIndex1;
            									}
HXDLIN(1649)									layoutGroup->positions = positions;
HXDLIN(1649)									int _hx_tmp1;
HXDLIN(1649)									if (firstLineOfParagraph) {
HXLINE(1649)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1649)										_hx_tmp1 = 0;
            									}
HXDLIN(1649)									layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1649)									layoutGroup->ascent = ascent;
HXDLIN(1649)									layoutGroup->descent = descent;
HXDLIN(1649)									layoutGroup->leading = leading;
HXDLIN(1649)									layoutGroup->lineIndex = lineIndex;
HXDLIN(1649)									layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1649)									layoutGroup->width = widthValue;
HXDLIN(1649)									layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1649)									offsetX = (offsetX + widthValue);
HXDLIN(1649)									if ((endIndex1 == formatRange->end)) {
HXLINE(1649)										layoutGroup = null();
HXDLIN(1649)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)											rangeIndex = (rangeIndex + 1);
HXDLIN(1649)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXDLIN(1649)										{
HXLINE(1649)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1649)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1649)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1649)												bool _hx_tmp;
HXDLIN(1649)												if (::hx::IsNotNull( font )) {
HXLINE(1649)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1649)													_hx_tmp = false;
            												}
HXDLIN(1649)												if (_hx_tmp) {
HXLINE(1649)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1649)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1649)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1649)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1649)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1649)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1649)											if ((heightValue > maxHeightValue)) {
HXLINE(1649)												maxHeightValue = heightValue;
            											}
HXDLIN(1649)											if ((ascent > maxAscent)) {
HXLINE(1649)												maxAscent = ascent;
            											}
            										}
            									}
            								}
            								else {
HXLINE(1649)									while(true){
HXLINE(1649)										int tempRangeEnd;
HXDLIN(1649)										if ((endIndex1 < formatRange->end)) {
HXLINE(1649)											tempRangeEnd = endIndex1;
            										}
            										else {
HXLINE(1649)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1649)										if ((textIndex != tempRangeEnd)) {
HXLINE(1649)											::String text = _gthis->text;
HXDLIN(1649)											Float letterSpacing = ((Float)0.0);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1649)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)											bool positions1;
HXDLIN(1649)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1649)												positions1 = true;
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)											_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1649)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1649)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1649)											Float width = ((Float)0.0);
HXDLIN(1649)											{
HXLINE(1649)												int _g = 0;
HXDLIN(1649)												while((_g < positions->length)){
HXLINE(1649)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)													_g = (_g + 1);
HXDLIN(1649)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1649)											widthValue = width;
HXDLIN(1649)											bool _hx_tmp;
HXDLIN(1649)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1649)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1649)												_hx_tmp = true;
            											}
HXDLIN(1649)											if (_hx_tmp) {
HXLINE(1649)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1649)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1649)												layoutGroup->format = formatRange->format;
HXDLIN(1649)												layoutGroup->startIndex = textIndex;
HXDLIN(1649)												layoutGroup->endIndex = tempRangeEnd;
            											}
HXDLIN(1649)											layoutGroup->positions = positions;
HXDLIN(1649)											int _hx_tmp1;
HXDLIN(1649)											if (firstLineOfParagraph) {
HXLINE(1649)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1649)												_hx_tmp1 = 0;
            											}
HXDLIN(1649)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1649)											layoutGroup->ascent = ascent;
HXDLIN(1649)											layoutGroup->descent = descent;
HXDLIN(1649)											layoutGroup->leading = leading;
HXDLIN(1649)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1649)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1649)											layoutGroup->width = widthValue;
HXDLIN(1649)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1649)											offsetX = (offsetX + widthValue);
HXDLIN(1649)											textIndex = tempRangeEnd;
            										}
HXDLIN(1649)										if ((tempRangeEnd == formatRange->end)) {
HXLINE(1649)											layoutGroup = null();
            										}
HXDLIN(1649)										if ((tempRangeEnd == endIndex1)) {
HXLINE(1649)											goto _hx_goto_119;
            										}
HXDLIN(1649)										bool _hx_tmp;
HXDLIN(1649)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)											rangeIndex = (rangeIndex + 1);
HXDLIN(1649)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1649)											_hx_tmp = true;
            										}
            										else {
HXLINE(1649)											_hx_tmp = false;
            										}
HXDLIN(1649)										if (!(_hx_tmp)) {
HXLINE(1649)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1204,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1649)											goto _hx_goto_119;
            										}
HXDLIN(1649)										{
HXLINE(1649)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1649)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1649)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1649)												bool _hx_tmp;
HXDLIN(1649)												if (::hx::IsNotNull( font )) {
HXLINE(1649)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1649)													_hx_tmp = false;
            												}
HXDLIN(1649)												if (_hx_tmp) {
HXLINE(1649)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1649)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1649)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1649)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1649)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1649)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1649)											if ((heightValue > maxHeightValue)) {
HXLINE(1649)												maxHeightValue = heightValue;
            											}
HXDLIN(1649)											if ((ascent > maxAscent)) {
HXLINE(1649)												maxAscent = ascent;
            											}
            										}
            									}
            									_hx_goto_119:;
            								}
HXDLIN(1649)								textIndex = endIndex1;
            							}
            						}
HXLINE(1651)						{
HXLINE(1651)							{
HXLINE(1651)								if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1651)									ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1651)									descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            								}
            								else {
HXLINE(1651)									bool _hx_tmp;
HXDLIN(1651)									if (::hx::IsNotNull( font )) {
HXLINE(1651)										_hx_tmp = (font->unitsPerEM != 0);
            									}
            									else {
HXLINE(1651)										_hx_tmp = false;
            									}
HXDLIN(1651)									if (_hx_tmp) {
HXLINE(1651)										ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1651)										descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            									}
            									else {
HXLINE(1651)										ascent = ( (Float)(currentFormat->size) );
HXDLIN(1651)										descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            									}
            								}
HXDLIN(1651)								leading = ( (int)(currentFormat->leading) );
HXDLIN(1651)								heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1651)								if ((heightValue > maxHeightValue)) {
HXLINE(1651)									maxHeightValue = heightValue;
            								}
HXDLIN(1651)								if ((ascent > maxAscent)) {
HXLINE(1651)									maxAscent = ascent;
            								}
            							}
HXDLIN(1651)							int i = _gthis->layoutGroups->get_length();
HXDLIN(1651)							while(true){
HXLINE(1651)								i = (i - 1);
HXDLIN(1651)								if (!((i > -1))) {
HXLINE(1651)									goto _hx_goto_121;
            								}
HXDLIN(1651)								 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1651)								if ((lg->lineIndex < lineIndex)) {
HXLINE(1651)									goto _hx_goto_121;
            								}
HXDLIN(1651)								if ((lg->lineIndex > lineIndex)) {
HXLINE(1651)									continue;
            								}
HXDLIN(1651)								lg->ascent = maxAscent;
HXDLIN(1651)								lg->height = ( (Float)(maxHeightValue) );
            							}
            							_hx_goto_121:;
HXDLIN(1651)							offsetY = (offsetY + maxHeightValue);
HXDLIN(1651)							maxAscent = ((Float)0.0);
HXDLIN(1651)							maxHeightValue = 0;
HXDLIN(1651)							lineIndex = (lineIndex + 1);
HXDLIN(1651)							offsetX = ( (Float)(0) );
HXDLIN(1651)							firstLineOfParagraph = false;
            						}
            					}
HXLINE(1654)					textIndex = (textIndex + 1);
            				}
            			}
            		}
HXLINE(1659)		bool _hx_tmp3;
HXDLIN(1659)		if ((previousBreakIndex == (textIndex - 2))) {
HXLINE(1659)			_hx_tmp3 = (previousBreakIndex > -1);
            		}
            		else {
HXLINE(1659)			_hx_tmp3 = false;
            		}
HXDLIN(1659)		if (_hx_tmp3) {
HXLINE(1661)			{
HXLINE(1661)				int startIndex = (textIndex - 1);
HXDLIN(1661)				int endIndex = (textIndex - 1);
HXDLIN(1661)				bool _hx_tmp;
HXDLIN(1661)				if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1661)					_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            				}
            				else {
HXLINE(1661)					_hx_tmp = true;
            				}
HXDLIN(1661)				if (_hx_tmp) {
HXLINE(1661)					layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,startIndex,endIndex);
HXDLIN(1661)					_gthis->layoutGroups->push(layoutGroup);
            				}
            				else {
HXLINE(1661)					layoutGroup->format = formatRange->format;
HXDLIN(1661)					layoutGroup->startIndex = startIndex;
HXDLIN(1661)					layoutGroup->endIndex = endIndex;
            				}
            			}
HXLINE(1663)			layoutGroup->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1664)			layoutGroup->ascent = ascent;
HXLINE(1665)			layoutGroup->descent = descent;
HXLINE(1666)			layoutGroup->leading = leading;
HXLINE(1667)			layoutGroup->lineIndex = lineIndex;
HXLINE(1668)			int _hx_tmp1;
HXDLIN(1668)			if (firstLineOfParagraph) {
HXLINE(1668)				_hx_tmp1 = indent;
            			}
            			else {
HXLINE(1668)				_hx_tmp1 = 0;
            			}
HXDLIN(1668)			layoutGroup->offsetX = ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) );
HXLINE(1669)			layoutGroup->offsetY = (offsetY + 2);
HXLINE(1670)			layoutGroup->width = ( (Float)(0) );
HXLINE(1671)			layoutGroup->height = ( (Float)(heightValue) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

::String TextEngine_obj::restrictText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1695_restrictText)
HXLINE(1696)		if (::hx::IsNull( value )) {
HXLINE(1698)			return value;
            		}
HXLINE(1701)		if (::hx::IsNotNull( this->_hx___restrictRegexp )) {
HXLINE(1703)			value = this->_hx___restrictRegexp->split(value)->join(HX_("",00,00,00,00));
            		}
HXLINE(1712)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,restrictText,return )

void TextEngine_obj::setTextAlignment(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1716_setTextAlignment)
HXLINE(1717)		int lineIndex = -1;
HXLINE(1718)		Float offsetX = ((Float)0.0);
HXLINE(1719)		Float totalWidth = (this->width - ( (Float)(4) ));
HXLINE(1720)		 ::openfl::text::_internal::TextLayoutGroup group;
HXDLIN(1720)		int lineLength;
HXLINE(1721)		bool lineMeasurementsDirty = false;
HXLINE(1723)		{
HXLINE(1723)			int _g = 0;
HXDLIN(1723)			int _g1 = this->layoutGroups->get_length();
HXDLIN(1723)			while((_g < _g1)){
HXLINE(1723)				_g = (_g + 1);
HXDLIN(1723)				int i = (_g - 1);
HXLINE(1725)				group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1727)				if ((group->lineIndex != lineIndex)) {
HXLINE(1729)					lineIndex = group->lineIndex;
HXLINE(1730)					totalWidth = ((this->width - ( (Float)(4) )) - ( (Float)(group->format->rightMargin) ));
HXLINE(1732)					 ::Dynamic _hx_switch_0 = group->format->align;
            					if (  (_hx_switch_0==0) ){
HXLINE(1735)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1737)							offsetX = ( (Float)(::Math_obj::round(((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)(2) )))) );
            						}
            						else {
HXLINE(1741)							offsetX = ( (Float)(0) );
            						}
HXLINE(1735)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1755)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1757)							lineLength = 1;
HXLINE(1759)							{
HXLINE(1759)								int _g = (i + 1);
HXDLIN(1759)								int _g1 = this->layoutGroups->get_length();
HXDLIN(1759)								while((_g < _g1)){
HXLINE(1759)									_g = (_g + 1);
HXDLIN(1759)									int j = (_g - 1);
HXLINE(1761)									if ((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->lineIndex == lineIndex)) {
HXLINE(1763)										bool _hx_tmp;
HXDLIN(1763)										if ((j != 0)) {
HXLINE(1763)											::String _hx_tmp1 = this->text;
HXDLIN(1763)											_hx_tmp = ::hx::IsEq( _hx_tmp1.charCodeAt((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->startIndex - 1)),32 );
            										}
            										else {
HXLINE(1763)											_hx_tmp = true;
            										}
HXDLIN(1763)										if (_hx_tmp) {
HXLINE(1765)											lineLength = (lineLength + 1);
            										}
            									}
            									else {
HXLINE(1770)										goto _hx_goto_126;
            									}
            								}
            								_hx_goto_126:;
            							}
HXLINE(1774)							if ((lineLength > 1)) {
HXLINE(1776)								group = this->layoutGroups->get(((i + lineLength) - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1778)								 ::Dynamic endChar = this->text.charCodeAt(group->endIndex);
HXLINE(1779)								bool _hx_tmp;
HXDLIN(1779)								bool _hx_tmp1;
HXDLIN(1779)								if ((group->endIndex < this->text.length)) {
HXLINE(1779)									_hx_tmp1 = ::hx::IsNotEq( endChar,10 );
            								}
            								else {
HXLINE(1779)									_hx_tmp1 = false;
            								}
HXDLIN(1779)								if (_hx_tmp1) {
HXLINE(1779)									_hx_tmp = ::hx::IsNotEq( endChar,13 );
            								}
            								else {
HXLINE(1779)									_hx_tmp = false;
            								}
HXDLIN(1779)								if (_hx_tmp) {
HXLINE(1781)									offsetX = ((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)((lineLength - 1)) ));
HXLINE(1782)									lineMeasurementsDirty = true;
HXLINE(1784)									int j = 1;
HXLINE(1785)									while(true){
HXLINE(1794)										 ::openfl::text::_internal::TextLayoutGroup fh = this->layoutGroups->get((i + j)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1794)										fh->offsetX = (fh->offsetX + (offsetX * ( (Float)(j) )));
HXLINE(1796)										j = (j + 1);
HXLINE(1785)										if (!((j < lineLength))) {
HXLINE(1785)											goto _hx_goto_127;
            										}
            									}
            									_hx_goto_127:;
            								}
            							}
            						}
HXLINE(1801)						offsetX = ( (Float)(0) );
HXLINE(1754)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==4) ){
HXLINE(1745)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1747)							offsetX = ( (Float)(::Math_obj::round((totalWidth - this->lineWidths->get(lineIndex)))) );
            						}
            						else {
HXLINE(1751)							offsetX = ( (Float)(0) );
            						}
HXLINE(1745)						goto _hx_goto_125;
            					}
            					/* default */{
HXLINE(1804)						offsetX = ( (Float)(0) );
            					}
            					_hx_goto_125:;
            				}
HXLINE(1808)				if ((offsetX > 0)) {
HXLINE(1810)					 ::openfl::text::_internal::TextLayoutGroup group1 = group;
HXDLIN(1810)					group1->offsetX = (group1->offsetX + offsetX);
            				}
            			}
            		}
HXLINE(1814)		if (lineMeasurementsDirty) {
HXLINE(1818)			this->getLineMeasurements();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

::String TextEngine_obj::trimText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1823_trimText)
HXLINE(1824)		if (::hx::IsNull( value )) {
HXLINE(1826)			return value;
            		}
HXLINE(1829)		bool _hx_tmp;
HXDLIN(1829)		if ((this->maxChars > 0)) {
HXLINE(1829)			_hx_tmp = (value.length > this->maxChars);
            		}
            		else {
HXLINE(1829)			_hx_tmp = false;
            		}
HXDLIN(1829)		if (_hx_tmp) {
HXLINE(1831)			value = value.substr(0,this->maxChars);
            		}
HXLINE(1834)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,trimText,return )

void TextEngine_obj::update(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1838_update)
HXLINE(1839)		bool _hx_tmp;
HXDLIN(1839)		if (::hx::IsNotNull( this->text )) {
HXLINE(1839)			_hx_tmp = (this->textFormatRanges->get_length() == 0);
            		}
            		else {
HXLINE(1839)			_hx_tmp = true;
            		}
HXDLIN(1839)		if (_hx_tmp) {
HXLINE(1841)			this->lineAscents->set_length(0);
HXLINE(1842)			this->lineBreaks->set_length(0);
HXLINE(1843)			this->lineDescents->set_length(0);
HXLINE(1844)			this->lineLeadings->set_length(0);
HXLINE(1845)			this->lineHeights->set_length(0);
HXLINE(1846)			this->lineWidths->set_length(0);
HXLINE(1847)			this->layoutGroups->set_length(0);
HXLINE(1849)			this->textWidth = ( (Float)(0) );
HXLINE(1850)			this->textHeight = ( (Float)(0) );
HXLINE(1851)			this->numLines = 1;
HXLINE(1852)			this->maxScrollH = 0;
HXLINE(1853)			this->maxScrollV = 1;
HXLINE(1854)			this->bottomScrollV = 1;
            		}
            		else {
HXLINE(1858)			this->getLineBreaks();
HXLINE(1859)			this->getLayoutGroups();
HXLINE(1860)			this->getLineMeasurements();
HXLINE(1861)			this->setTextAlignment();
            		}
HXLINE(1864)		this->getBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1871_get_bottomScrollV)
HXDLIN(1871)		bool _hx_tmp;
HXDLIN(1871)		if ((this->numLines != 1)) {
HXDLIN(1871)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1871)			_hx_tmp = true;
            		}
HXDLIN(1871)		if (_hx_tmp) {
HXLINE(1873)			return 1;
            		}
            		else {
HXLINE(1877)			int ret = this->lineHeights->get_length();
HXLINE(1879)			Float tempHeight;
HXDLIN(1879)			if ((this->lineLeadings->get_length() == ret)) {
HXLINE(1879)				tempHeight = -(this->lineLeadings->get((ret - 1)));
            			}
            			else {
HXLINE(1879)				tempHeight = ((Float)0.0);
            			}
HXLINE(1881)			{
HXLINE(1881)				int _g;
HXDLIN(1881)				if ((this->get_scrollV() > 0)) {
HXLINE(1881)					_g = this->get_scrollV();
            				}
            				else {
HXLINE(1881)					_g = 1;
            				}
HXDLIN(1881)				int _g1 = (_g - 1);
HXDLIN(1881)				int _g2 = this->lineHeights->get_length();
HXDLIN(1881)				while((_g1 < _g2)){
HXLINE(1881)					_g1 = (_g1 + 1);
HXDLIN(1881)					int i = (_g1 - 1);
HXLINE(1883)					Float lineHeight = this->lineHeights->get(i);
HXLINE(1885)					tempHeight = (tempHeight + lineHeight);
HXLINE(1887)					if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1889)						int ret1;
HXDLIN(1889)						if (((tempHeight - this->height) >= 0)) {
HXLINE(1889)							ret1 = 0;
            						}
            						else {
HXLINE(1889)							ret1 = 1;
            						}
HXDLIN(1889)						ret = (i + ret1);
HXLINE(1890)						goto _hx_goto_131;
            					}
            				}
            				_hx_goto_131:;
            			}
HXLINE(1905)			if ((ret < this->get_scrollV())) {
HXLINE(1905)				return this->get_scrollV();
            			}
HXLINE(1911)			return ret;
            		}
HXLINE(1871)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_bottomScrollV,return )

int TextEngine_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1918_get_maxScrollV)
HXDLIN(1918)		bool _hx_tmp;
HXDLIN(1918)		if ((this->numLines != 1)) {
HXDLIN(1918)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1918)			_hx_tmp = true;
            		}
HXDLIN(1918)		if (_hx_tmp) {
HXLINE(1920)			return 1;
            		}
            		else {
HXLINE(1924)			int i = (this->numLines - 1);
HXDLIN(1924)			Float tempHeight = ((Float)0.0);
HXLINE(1925)			int j = i;
HXLINE(1928)			while((i >= 0)){
HXLINE(1930)				tempHeight = (tempHeight + this->lineHeights->get(i));
HXLINE(1932)				if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1934)					int i1;
HXDLIN(1934)					if (((tempHeight - this->height) < 0)) {
HXLINE(1934)						i1 = 1;
            					}
            					else {
HXLINE(1934)						i1 = 2;
            					}
HXDLIN(1934)					i = (i + i1);
HXLINE(1935)					goto _hx_goto_133;
            				}
HXLINE(1937)				i = (i - 1);
            			}
            			_hx_goto_133:;
HXLINE(1953)			if ((i < 1)) {
HXLINE(1953)				return 1;
            			}
HXLINE(1954)			return i;
            		}
HXLINE(1918)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_maxScrollV,return )

::String TextEngine_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1959_set_restrict)
HXLINE(1960)		if ((this->restrict == value)) {
HXLINE(1962)			return this->restrict;
            		}
HXLINE(1965)		this->restrict = value;
HXLINE(1967)		bool _hx_tmp;
HXDLIN(1967)		if (::hx::IsNotNull( this->restrict )) {
HXLINE(1967)			_hx_tmp = (this->restrict.length == 0);
            		}
            		else {
HXLINE(1967)			_hx_tmp = true;
            		}
HXDLIN(1967)		if (_hx_tmp) {
HXLINE(1969)			this->_hx___restrictRegexp = null();
            		}
            		else {
HXLINE(1973)			this->_hx___restrictRegexp = this->createRestrictRegexp(value);
            		}
HXLINE(1976)		return this->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_restrict,return )

int TextEngine_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1980_get_scrollV)
HXLINE(1981)		bool _hx_tmp;
HXDLIN(1981)		if ((this->numLines != 1)) {
HXLINE(1981)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXLINE(1981)			_hx_tmp = true;
            		}
HXDLIN(1981)		if (_hx_tmp) {
HXLINE(1981)			return 1;
            		}
HXLINE(1983)		int max = this->get_maxScrollV();
HXLINE(1986)		if ((this->scrollV > max)) {
HXLINE(1986)			return max;
            		}
HXLINE(1988)		return this->scrollV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_scrollV,return )

int TextEngine_obj::set_scrollV(int value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1992_set_scrollV)
HXLINE(1993)		if ((value < 1)) {
HXLINE(1993)			value = 1;
            		}
            		else {
HXLINE(1994)			if ((value > this->get_maxScrollV())) {
HXLINE(1994)				value = this->get_maxScrollV();
            			}
            		}
HXLINE(1996)		return (this->scrollV = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_scrollV,return )

::String TextEngine_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_2001_set_text)
HXDLIN(2001)		return (this->text = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_text,return )

int TextEngine_obj::GUTTER;

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

 ::haxe::ds::StringMap TextEngine_obj::_hx___defaultFonts;

 ::openfl::text::Font TextEngine_obj::findFont(::String name){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_206_findFont)
HXLINE( 210)		{
HXLINE( 210)			int _g = 0;
HXDLIN( 210)			::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::_hx___registeredFonts;
HXDLIN( 210)			while((_g < _g1->length)){
HXLINE( 210)				 ::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 210)				_g = (_g + 1);
HXLINE( 212)				if (::hx::IsNull( registeredFont )) {
HXLINE( 212)					continue;
            				}
HXLINE( 214)				bool _hx_tmp;
HXDLIN( 214)				if ((registeredFont->name != name)) {
HXLINE( 215)					if (::hx::IsNotNull( registeredFont->_hx___fontPath )) {
HXLINE( 216)						if ((registeredFont->_hx___fontPath != name)) {
HXLINE( 214)							_hx_tmp = (registeredFont->_hx___fontPathWithoutDirectory == name);
            						}
            						else {
HXLINE( 214)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 214)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 214)					_hx_tmp = true;
            				}
HXDLIN( 214)				if (_hx_tmp) {
HXLINE( 218)					if (registeredFont->_hx___initialize()) {
HXLINE( 220)						return registeredFont;
            					}
            				}
            			}
            		}
HXLINE( 229)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);
HXLINE( 231)		if (::hx::IsNotNull( font )) {
HXLINE( 233)			::openfl::text::Font_obj::_hx___registeredFonts->push(font);
HXLINE( 234)			::openfl::text::Font_obj::_hx___fontByName->set(font->name,font);
HXLINE( 235)			return font;
            		}
HXLINE( 239)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

 ::openfl::text::Font TextEngine_obj::findFontVariant( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_243_findFontVariant)
HXLINE( 244)		::String fontName = format->font;
HXLINE( 245)		 ::Dynamic bold = format->bold;
HXLINE( 246)		 ::Dynamic italic = format->italic;
HXLINE( 248)		if (::hx::IsNull( fontName )) {
HXLINE( 248)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 249)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 251)		bool _hx_tmp;
HXDLIN( 251)		bool _hx_tmp1;
HXDLIN( 251)		if (( (bool)(bold) )) {
HXLINE( 251)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 251)			_hx_tmp1 = false;
            		}
HXDLIN( 251)		if (_hx_tmp1) {
HXLINE( 251)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 251)			_hx_tmp = false;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXLINE( 253)			return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 255)			bool _hx_tmp;
HXDLIN( 255)			if (( (bool)(bold) )) {
HXLINE( 255)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 255)				_hx_tmp = false;
            			}
HXDLIN( 255)			if (_hx_tmp) {
HXLINE( 257)				return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 259)				bool _hx_tmp;
HXDLIN( 259)				if (( (bool)(italic) )) {
HXLINE( 259)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 259)					_hx_tmp = false;
            				}
HXDLIN( 259)				if (_hx_tmp) {
HXLINE( 261)					return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            			}
            		}
HXLINE( 264)		return ::openfl::text::_internal::TextEngine_obj::findFont(fontName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFontVariant,return )

 ::openfl::text::Font TextEngine_obj::getDefaultFont(::String name,bool bold,bool italic){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_300_getDefaultFont)
HXLINE( 301)		if (::hx::IsNull( ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::openfl::text::Font _hx_run(::Array< ::String > list){
            				HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_309_getDefaultFont)
HXLINE( 310)				 ::openfl::text::Font font = null();
HXLINE( 311)				{
HXLINE( 311)					int _g = 0;
HXDLIN( 311)					while((_g < list->length)){
HXLINE( 311)						::String path = list->__get(_g);
HXDLIN( 311)						_g = (_g + 1);
HXLINE( 313)						font = ::openfl::text::_internal::TextEngine_obj::findFont(path);
HXLINE( 314)						if (::hx::IsNotNull( font )) {
HXLINE( 314)							goto _hx_goto_142;
            						}
            					}
            					_hx_goto_142:;
            				}
HXLINE( 316)				return font;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 303)			::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 306)			::String systemFontDirectory = ::lime::_hx_system::System_obj::get_fontsDirectory();
HXLINE( 308)			 ::Dynamic processFontList =  ::Dynamic(new _hx_Closure_0());
HXLINE( 320)			{
HXLINE( 320)				::Dynamic this1 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 321)				 ::openfl::text::Font value = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arial.ttf",2c,34,8e,d8)));
HXDLIN( 321)				 ::openfl::text::Font value1 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbd.ttf",ee,27,90,25)));
HXLINE( 322)				 ::openfl::text::Font value2 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/ariali.ttf",2d,c9,3e,6e)));
HXLINE( 320)				( ( ::haxe::ds::StringMap)(this1) )->set(HX_("_sans",32,a0,5e,ff), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value,value1,value2,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbi.ttf",73,0e,91,06)))));
            			}
HXLINE( 324)			{
HXLINE( 324)				::Dynamic this2 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 325)				 ::openfl::text::Font value3 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/times.ttf",2f,58,44,c5)));
HXDLIN( 325)				 ::openfl::text::Font value4 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbd.ttf",b1,92,19,47)));
HXLINE( 326)				 ::openfl::text::Font value5 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesi.ttf",ca,27,e8,a0)));
HXLINE( 324)				( ( ::haxe::ds::StringMap)(this2) )->set(HX_("_serif",be,66,15,76), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value3,value4,value5,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbi.ttf",36,79,1a,28)))));
            			}
HXLINE( 328)			{
HXLINE( 328)				::Dynamic this3 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 329)				 ::openfl::text::Font value6 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/cour.ttf",30,7b,d2,6a)));
HXDLIN( 329)				 ::openfl::text::Font value7 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbd.ttf",f2,37,b7,06)));
HXLINE( 330)				 ::openfl::text::Font value8 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/couri.ttf",a9,a5,b8,d7)));
HXLINE( 328)				( ( ::haxe::ds::StringMap)(this3) )->set(HX_("_typewriter",0c,5e,52,94), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value6,value7,value8,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbi.ttf",77,1e,b8,e7)))));
            			}
            		}
HXLINE( 422)		 ::openfl::text::_internal::_TextEngine::DefaultFontSet fontSet = ( ( ::openfl::text::_internal::_TextEngine::DefaultFontSet)(::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->get(name)) );
HXLINE( 423)		if (::hx::IsNull( fontSet )) {
HXLINE( 423)			return null();
            		}
HXLINE( 425)		bool _hx_tmp;
HXDLIN( 425)		bool _hx_tmp1;
HXDLIN( 425)		if (bold) {
HXLINE( 425)			_hx_tmp1 = italic;
            		}
            		else {
HXLINE( 425)			_hx_tmp1 = false;
            		}
HXDLIN( 425)		if (_hx_tmp1) {
HXLINE( 425)			_hx_tmp = ::hx::IsNotNull( fontSet->boldItalic );
            		}
            		else {
HXLINE( 425)			_hx_tmp = false;
            		}
HXDLIN( 425)		if (_hx_tmp) {
HXLINE( 425)			return fontSet->boldItalic;
            		}
            		else {
HXLINE( 425)			bool _hx_tmp;
HXDLIN( 425)			if (italic) {
HXLINE( 425)				_hx_tmp = ::hx::IsNotNull( fontSet->italic );
            			}
            			else {
HXLINE( 425)				_hx_tmp = false;
            			}
HXDLIN( 425)			if (_hx_tmp) {
HXLINE( 425)				return fontSet->italic;
            			}
            			else {
HXLINE( 425)				bool _hx_tmp;
HXDLIN( 425)				if (bold) {
HXLINE( 425)					_hx_tmp = ::hx::IsNotNull( fontSet->bold );
            				}
            				else {
HXLINE( 425)					_hx_tmp = false;
            				}
HXDLIN( 425)				if (_hx_tmp) {
HXLINE( 425)					return fontSet->bold;
            				}
            				else {
HXLINE( 425)					return fontSet->normal;
            				}
            			}
            		}
HXDLIN( 425)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextEngine_obj,getDefaultFont,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_429_getFormatHeight)
HXLINE( 430)		Float ascent;
HXDLIN( 430)		Float descent;
HXLINE( 440)		 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(format);
HXLINE( 442)		if (::hx::IsNotNull( format->_hx___ascent )) {
HXLINE( 444)			ascent = (( (Float)(format->size) ) * ( (Float)(format->_hx___ascent) ));
HXLINE( 445)			descent = (( (Float)(format->size) ) * ( (Float)(format->_hx___descent) ));
            		}
            		else {
HXLINE( 447)			bool _hx_tmp;
HXDLIN( 447)			if (::hx::IsNotNull( font )) {
HXLINE( 447)				_hx_tmp = (font->unitsPerEM != 0);
            			}
            			else {
HXLINE( 447)				_hx_tmp = false;
            			}
HXDLIN( 447)			if (_hx_tmp) {
HXLINE( 450)				ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) ));
HXLINE( 451)				descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) )));
            			}
            			else {
HXLINE( 459)				ascent = ( (Float)(format->size) );
HXLINE( 460)				descent = (( (Float)(format->size) ) * ((Float)0.185));
            			}
            		}
HXLINE( 430)		int leading = ( (int)(format->leading) );
HXLINE( 465)		return ((ascent + descent) + leading);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_469_getFont)
HXLINE( 470)		::String fontName = format->font;
HXLINE( 471)		 ::Dynamic bold = format->bold;
HXLINE( 472)		 ::Dynamic italic = format->italic;
HXLINE( 474)		if (::hx::IsNull( fontName )) {
HXLINE( 474)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 475)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 477)		bool _hx_tmp;
HXDLIN( 477)		bool _hx_tmp1;
HXDLIN( 477)		if (( (bool)(bold) )) {
HXLINE( 477)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 477)			_hx_tmp1 = false;
            		}
HXDLIN( 477)		if (_hx_tmp1) {
HXLINE( 477)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 477)			_hx_tmp = false;
            		}
HXDLIN( 477)		if (_hx_tmp) {
HXLINE( 479)			fontName = (fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94));
HXLINE( 480)			bold = false;
HXLINE( 481)			italic = false;
            		}
            		else {
HXLINE( 483)			bool _hx_tmp;
HXDLIN( 483)			if (( (bool)(bold) )) {
HXLINE( 483)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 483)				_hx_tmp = false;
            			}
HXDLIN( 483)			if (_hx_tmp) {
HXLINE( 485)				fontName = (fontNamePrefix + HX_(" Bold",c5,3d,c7,98));
HXLINE( 486)				bold = false;
            			}
            			else {
HXLINE( 488)				bool _hx_tmp;
HXDLIN( 488)				if (( (bool)(italic) )) {
HXLINE( 488)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 488)					_hx_tmp = false;
            				}
HXDLIN( 488)				if (_hx_tmp) {
HXLINE( 490)					fontName = (fontNamePrefix + HX_(" Italic",30,7b,a7,6d));
HXLINE( 491)					italic = false;
            				}
            				else {
HXLINE( 497)					bool _hx_tmp;
HXDLIN( 497)					if (( (bool)(bold) )) {
HXLINE( 497)						if ((fontName.indexOf(HX_(" Bold ",bb,ce,8e,15),null()) <= -1)) {
HXLINE( 497)							_hx_tmp = ::StringTools_obj::endsWith(fontName,HX_(" Bold",c5,3d,c7,98));
            						}
            						else {
HXLINE( 497)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 497)						_hx_tmp = false;
            					}
HXDLIN( 497)					if (_hx_tmp) {
HXLINE( 499)						bold = false;
            					}
HXLINE( 502)					bool _hx_tmp1;
HXDLIN( 502)					if (( (bool)(italic) )) {
HXLINE( 502)						if ((fontName.indexOf(HX_(" Italic ",f0,4e,e4,84),null()) <= -1)) {
HXLINE( 502)							_hx_tmp1 = ::StringTools_obj::endsWith(fontName,HX_(" Italic",30,7b,a7,6d));
            						}
            						else {
HXLINE( 502)							_hx_tmp1 = true;
            						}
            					}
            					else {
HXLINE( 502)						_hx_tmp1 = false;
            					}
HXDLIN( 502)					if (_hx_tmp1) {
HXLINE( 504)						italic = false;
            					}
            				}
            			}
            		}
HXLINE( 508)		::String font;
HXDLIN( 508)		if (( (bool)(italic) )) {
HXLINE( 508)			font = HX_("italic ",30,e3,44,91);
            		}
            		else {
HXLINE( 508)			font = HX_("normal ",19,70,da,2b);
            		}
HXLINE( 509)		font = (font + HX_("normal ",19,70,da,2b));
HXLINE( 510)		::String font1;
HXDLIN( 510)		if (( (bool)(bold) )) {
HXLINE( 510)			font1 = HX_("bold ",fb,d2,f5,b6);
            		}
            		else {
HXLINE( 510)			font1 = HX_("normal ",19,70,da,2b);
            		}
HXDLIN( 510)		font = (font + font1);
HXLINE( 511)		font = (font + (format->size + HX_("px",08,62,00,00)));
HXLINE( 513)		font = (font + ((HX_("/",2f,00,00,00) + (format->size + 3)) + HX_("px ",18,65,55,00)));
HXLINE( 515)		::String font2;
HXDLIN( 515)		::String _hx_switch_0 = fontName;
            		if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ){
HXLINE( 515)			font2 = HX_("sans-serif",c3,60,fb,08);
HXDLIN( 515)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_serif",be,66,15,76)) ){
HXLINE( 515)			font2 = HX_("serif",7d,1f,2e,7a);
HXDLIN( 515)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 515)			font2 = HX_("monospace",c3,d1,e5,5e);
HXDLIN( 515)			goto _hx_goto_146;
            		}
            		/* default */{
HXLINE( 515)			font2 = ((HX_("'",27,00,00,00) +  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\\s'\"]+(.*)[\\s'\"]+$",eb,e4,eb,f5),HX_("",00,00,00,00))->replace(fontName,HX_("$1",8d,1f,00,00))) + HX_("'",27,00,00,00));
            		}
            		_hx_goto_146:;
HXDLIN( 515)		font = (font + (HX_("",00,00,00,00) + font2));
HXLINE( 523)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

 ::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_527_getFontInstance)
HXLINE( 531)		 ::openfl::text::Font instance = null();
HXLINE( 532)		 ::Dynamic fontList = null();
HXLINE( 534)		bool _hx_tmp;
HXDLIN( 534)		if (::hx::IsNotNull( format )) {
HXLINE( 534)			_hx_tmp = ::hx::IsNotNull( format->font );
            		}
            		else {
HXLINE( 534)			_hx_tmp = false;
            		}
HXDLIN( 534)		if (_hx_tmp) {
HXLINE( 536)			::String _hx_switch_0 = format->font;
            			if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ||  (_hx_switch_0==HX_("_serif",be,66,15,76)) ||  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 539)				instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(format->font,( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 540)				if (::hx::IsNotNull( instance )) {
HXLINE( 540)					return instance;
            				}
HXLINE( 538)				goto _hx_goto_148;
            			}
            			/* default */{
            			}
            			_hx_goto_148:;
HXLINE( 544)			instance = ::openfl::text::_internal::TextEngine_obj::findFontVariant(format);
HXLINE( 545)			if (::hx::IsNotNull( instance )) {
HXLINE( 545)				return instance;
            			}
            		}
HXLINE( 548)		instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(HX_("_serif",be,66,15,76),( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 549)		if (::hx::IsNotNull( instance )) {
HXLINE( 549)			return instance;
            		}
HXLINE( 552)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new( ::openfl::text::TextField textField) {
	::hx::ObjectPtr< TextEngine_obj > __this = new TextEngine_obj();
	__this->__construct(textField);
	return __this;
}

::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField textField) {
	TextEngine_obj *__this = (TextEngine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEngine_obj), true, "openfl.text._internal.TextEngine"));
	*(void **)__this = TextEngine_obj::_hx_vtable;
	__this->__construct(textField);
	return __this;
}

TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textBounds,"textBounds");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_MARK_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_MARK_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(_hx___font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textBounds,"textBounds");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_VISIT_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_VISIT_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(_hx___font,"__font");
}

::hx::Val TextEngine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"__font") ) { return ::hx::Val( _hx___font ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return ::hx::Val( scrollH ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrollV() : scrollV ); }
		if (HX_FIELD_EQ(inName,"getLine") ) { return ::hx::Val( getLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return ::hx::Val( maxChars ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return ::hx::Val( numLines ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { return ::hx::Val( restrict ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		if (HX_FIELD_EQ(inName,"trimText") ) { return ::hx::Val( trimText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return ::hx::Val( sharpness ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( textWidth ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return ::hx::Val( embedFonts ); }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return ::hx::Val( lineBreaks ); }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return ::hx::Val( lineWidths ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return ::hx::Val( maxScrollH ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxScrollV() : maxScrollV ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return ::hx::Val( selectable ); }
		if (HX_FIELD_EQ(inName,"textBounds") ) { return ::hx::Val( textBounds ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( textHeight ); }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return ::hx::Val( _hx___hasFocus ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return ::hx::Val( gridFitType ); }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return ::hx::Val( lineAscents ); }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return ::hx::Val( lineHeights ); }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return ::hx::Val( _hx___isKeyDown ); }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return ::hx::Val( _hx___cairoFont ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return ::hx::Val( layoutGroups ); }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return ::hx::Val( lineDescents ); }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return ::hx::Val( lineLeadings ); }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { return ::hx::Val( _hx___shapeCache ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return ::hx::Val( _hx___textLayout ); }
		if (HX_FIELD_EQ(inName,"restrictText") ) { return ::hx::Val( restrictText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return ::hx::Val( antiAliasType ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomScrollV() : bottomScrollV ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { return ::hx::Val( getLineBreaks_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return ::hx::Val( _hx___measuredWidth ); }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return ::hx::Val( getLayoutGroups_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return ::hx::Val( textFormatRanges ); }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return ::hx::Val( _hx___measuredHeight ); }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { return ::hx::Val( _hx___restrictRegexp ); }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return ::hx::Val( _hx___selectionStart ); }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { return ::hx::Val( _hx___useIntAdvances ); }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return ::hx::Val( setTextAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return ::hx::Val( getLineBreakIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return ::hx::Val( getLineMeasurements_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createRestrictRegexp") ) { return ::hx::Val( createRestrictRegexp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = ( _hx___defaultFonts ); return true; }
		if (HX_FIELD_EQ(inName,"getDefaultFont") ) { outValue = getDefaultFont_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findFontVariant") ) { outValue = findFontVariant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val TextEngine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { _hx___font=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) );scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) );restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBounds") ) { textBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { _hx___hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { _hx___isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { _hx___cairoFont=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { _hx___shapeCache=inValue.Cast<  ::openfl::text::_internal::ShapeCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { _hx___textLayout=inValue.Cast<  ::openfl::text::_internal::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { _hx___measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { _hx___measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { _hx___restrictRegexp=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { _hx___selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { _hx___useIntAdvances=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { _hx___defaultFonts=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("layoutGroups",9e,a2,6c,37));
	outFields->push(HX_("lineAscents",45,0c,c2,3e));
	outFields->push(HX_("lineBreaks",e8,fd,5b,ea));
	outFields->push(HX_("lineDescents",0d,ad,64,49));
	outFields->push(HX_("lineLeadings",01,23,97,76));
	outFields->push(HX_("lineHeights",18,99,8e,3e));
	outFields->push(HX_("lineWidths",c1,8a,a4,20));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textBounds",02,07,0e,9d));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textFormatRanges",fa,0e,49,a2));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__hasFocus",3e,1d,1a,34));
	outFields->push(HX_("__isKeyDown",b7,2f,72,ce));
	outFields->push(HX_("__measuredHeight",ed,b6,23,42));
	outFields->push(HX_("__measuredWidth",c0,49,ec,02));
	outFields->push(HX_("__restrictRegexp",45,9f,ae,a9));
	outFields->push(HX_("__selectionStart",96,e3,b9,43));
	outFields->push(HX_("__shapeCache",81,aa,e8,5f));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	outFields->push(HX_("__textLayout",57,aa,3c,c8));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__useIntAdvances",d9,17,72,7d));
	outFields->push(HX_("__cairoFont",57,e7,b5,28));
	outFields->push(HX_("__font",ef,c0,b8,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEngine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_("antiAliasType",68,c4,fa,e7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,autoSize),HX_("autoSize",d0,8f,79,2f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_("bottomScrollV",fe,f7,87,8b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_("embedFonts",2b,c7,e1,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,gridFitType),HX_("gridFitType",05,f3,13,b4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_("layoutGroups",9e,a2,6c,37)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineAscents),HX_("lineAscents",45,0c,c2,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_("lineBreaks",e8,fd,5b,ea)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineDescents),HX_("lineDescents",0d,ad,64,49)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_("lineLeadings",01,23,97,76)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineHeights),HX_("lineHeights",18,99,8e,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineWidths),HX_("lineWidths",c1,8a,a4,20)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_("maxChars",99,ef,d0,ef)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_("maxScrollH",57,ad,fc,9a)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_("maxScrollV",65,ad,fc,9a)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_("numLines",d9,f1,11,32)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_("restrict",3c,cb,9e,f1)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_("scrollH",9b,33,d8,30)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_("scrollV",a9,33,d8,30)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_("selectable",96,b6,2a,c4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_("sharpness",81,22,25,1b)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,textBounds),HX_("textBounds",02,07,0e,9d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_("textFormatRanges",fa,0e,49,a2)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextEngine_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextEngine_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___hasFocus),HX_("__hasFocus",3e,1d,1a,34)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___isKeyDown),HX_("__isKeyDown",b7,2f,72,ce)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredHeight),HX_("__measuredHeight",ed,b6,23,42)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredWidth),HX_("__measuredWidth",c0,49,ec,02)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TextEngine_obj,_hx___restrictRegexp),HX_("__restrictRegexp",45,9f,ae,a9)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___selectionStart),HX_("__selectionStart",96,e3,b9,43)},
	{::hx::fsObject /*  ::openfl::text::_internal::ShapeCache */ ,(int)offsetof(TextEngine_obj,_hx___shapeCache),HX_("__shapeCache",81,aa,e8,5f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextEngine_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextLayout */ ,(int)offsetof(TextEngine_obj,_hx___textLayout),HX_("__textLayout",57,aa,3c,c8)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextEngine_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___useIntAdvances),HX_("__useIntAdvances",d9,17,72,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___cairoFont),HX_("__cairoFont",57,e7,b5,28)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(TextEngine_obj,_hx___font),HX_("__font",ef,c0,b8,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextEngine_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextEngine_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_("UTF8_TAB",07,d5,41,1d)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_("UTF8_ENDLINE",01,29,41,cf)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_("UTF8_SPACE",f8,7b,a9,c7)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_("UTF8_HYPHEN",60,3c,3f,bf)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextEngine_obj::_hx___defaultFonts,HX_("__defaultFonts",63,76,ad,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEngine_obj_sMemberFields[] = {
	HX_("antiAliasType",68,c4,fa,e7),
	HX_("autoSize",d0,8f,79,2f),
	HX_("background",ee,93,1d,26),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("border",ec,4c,1a,64),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("bottomScrollV",fe,f7,87,8b),
	HX_("bounds",75,86,1d,66),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("embedFonts",2b,c7,e1,8e),
	HX_("gridFitType",05,f3,13,b4),
	HX_("height",e7,07,4c,02),
	HX_("layoutGroups",9e,a2,6c,37),
	HX_("lineAscents",45,0c,c2,3e),
	HX_("lineBreaks",e8,fd,5b,ea),
	HX_("lineDescents",0d,ad,64,49),
	HX_("lineLeadings",01,23,97,76),
	HX_("lineHeights",18,99,8e,3e),
	HX_("lineWidths",c1,8a,a4,20),
	HX_("maxChars",99,ef,d0,ef),
	HX_("maxScrollH",57,ad,fc,9a),
	HX_("maxScrollV",65,ad,fc,9a),
	HX_("multiline",ed,d2,11,9e),
	HX_("numLines",d9,f1,11,32),
	HX_("restrict",3c,cb,9e,f1),
	HX_("scrollH",9b,33,d8,30),
	HX_("scrollV",a9,33,d8,30),
	HX_("selectable",96,b6,2a,c4),
	HX_("sharpness",81,22,25,1b),
	HX_("text",ad,cc,f9,4c),
	HX_("textBounds",02,07,0e,9d),
	HX_("textHeight",74,88,3c,39),
	HX_("textFormatRanges",fa,0e,49,a2),
	HX_("textWidth",19,46,50,63),
	HX_("type",ba,f2,08,4d),
	HX_("width",06,b6,62,ca),
	HX_("wordWrap",b4,14,db,00),
	HX_("textField",cd,24,81,99),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__hasFocus",3e,1d,1a,34),
	HX_("__isKeyDown",b7,2f,72,ce),
	HX_("__measuredHeight",ed,b6,23,42),
	HX_("__measuredWidth",c0,49,ec,02),
	HX_("__restrictRegexp",45,9f,ae,a9),
	HX_("__selectionStart",96,e3,b9,43),
	HX_("__shapeCache",81,aa,e8,5f),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("__textLayout",57,aa,3c,c8),
	HX_("__texture",bb,19,2f,20),
	HX_("__useIntAdvances",d9,17,72,7d),
	HX_("__cairoFont",57,e7,b5,28),
	HX_("__font",ef,c0,b8,f2),
	HX_("createRestrictRegexp",41,d0,6b,e1),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getLine",aa,c7,35,1a),
	HX_("getLineBreaks",1e,5a,ce,46),
	HX_("getLineBreakIndex",1d,16,36,36),
	HX_("getLineMeasurements",c1,9f,81,56),
	HX_("getLayoutGroups",54,f8,56,5a),
	HX_("restrictText",09,12,3e,34),
	HX_("setTextAlignment",74,0f,33,62),
	HX_("trimText",af,ae,63,65),
	HX_("update",09,86,05,87),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void TextEngine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEngine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#endif

::hx::Class TextEngine_obj::__mClass;

static ::String TextEngine_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("UTF8_TAB",07,d5,41,1d),
	HX_("UTF8_ENDLINE",01,29,41,cf),
	HX_("UTF8_SPACE",f8,7b,a9,c7),
	HX_("UTF8_HYPHEN",60,3c,3f,bf),
	HX_("__defaultFonts",63,76,ad,da),
	HX_("findFont",a8,6a,54,96),
	HX_("findFontVariant",bd,22,bb,b2),
	HX_("getDefaultFont",3a,aa,1d,9d),
	HX_("getFormatHeight",34,24,4b,62),
	HX_("getFont",85,0d,43,16),
	HX_("getFontInstance",3a,76,96,9e),
	::String(null())
};

void TextEngine_obj::__register()
{
	TextEngine_obj _hx_dummy;
	TextEngine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextEngine",04,88,80,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = TextEngine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextEngine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEngine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEngine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEngine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEngine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_38_boot)
HXDLIN(  38)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("__cairoFont",57,e7,b5,28), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_40_boot)
HXDLIN(  40)		GUTTER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_41_boot)
HXDLIN(  41)		UTF8_TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_42_boot)
HXDLIN(  42)		UTF8_ENDLINE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_43_boot)
HXDLIN(  43)		UTF8_SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_44_boot)
HXDLIN(  44)		UTF8_HYPHEN = 45;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
