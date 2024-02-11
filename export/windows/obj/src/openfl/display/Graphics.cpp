#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsQuadPath
#include <openfl/display/GraphicsQuadPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShaderFill
#include <openfl/display/GraphicsShaderFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#include <openfl/display/GraphicsTrianglePath.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_043516e11ce5c7d5_111_new,"openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",111,0x8d299ce7)
HX_DEFINE_STACK_FRAME(_hx_pos_043516e11ce5c7d5_52_new,"openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",52,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_168_beginBitmapFill,"openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",168,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_197_beginFill,"openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",197,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_298_beginGradientFill,"openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",298,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_389_beginShaderFill,"openfl.display.Graphics","beginShaderFill",0x2f039098,"openfl.display.Graphics.beginShaderFill","openfl/display/Graphics.hx",389,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_407_clear,"openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",407,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_443_copyFrom,"openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",443,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_494_cubicCurveTo,"openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",494,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_542_curveTo,"openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",542,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_583_drawCircle,"openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",583,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_611_drawEllipse,"openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",611,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_635_drawGraphicsData,"openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",635,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_766_drawPath,"openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",766,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_839_drawQuads,"openfl.display.Graphics","drawQuads",0x8da790af,"openfl.display.Graphics.drawQuads","openfl/display/Graphics.hx",839,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_946_drawRect,"openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",946,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_987_drawRoundRect,"openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",987,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1006_drawRoundRectComplex,"openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",1006,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1071_drawTriangles,"openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",1071,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1137_endFill,"openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",1137,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1171_lineBitmapStyle,"openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",1171,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1249_lineGradientStyle,"openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",1249,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1453_lineStyle,"openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",1453,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1498_lineTo,"openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",1498,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1531_moveTo,"openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",1531,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1540_overrideBlendMode,"openfl.display.Graphics","overrideBlendMode",0x65da3cef,"openfl.display.Graphics.overrideBlendMode","openfl/display/Graphics.hx",1540,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1597_readGraphicsData,"openfl.display.Graphics","readGraphicsData",0x877c6664,"openfl.display.Graphics.readGraphicsData","openfl/display/Graphics.hx",1597,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1605___calculateBezierCubicPoint,"openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",1605,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1612___calculateBezierQuadPoint,"openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",1612,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1618___cleanup,"openfl.display.Graphics","__cleanup",0x9445428b,"openfl.display.Graphics.__cleanup","openfl/display/Graphics.hx",1618,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1644___getBounds,"openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",1644,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1654___hitTest,"openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",1654,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1678___findExtrema,"openfl.display.Graphics","__findExtrema",0x90f47d96,"openfl.display.Graphics.__findExtrema","openfl/display/Graphics.hx",1678,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1729___inflateBounds,"openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",1729,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1763___readGraphicsData,"openfl.display.Graphics","__readGraphicsData",0xf8dcc1c4,"openfl.display.Graphics.__readGraphicsData","openfl/display/Graphics.hx",1763,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1873___update,"openfl.display.Graphics","__update",0x711b5982,"openfl.display.Graphics.__update","openfl/display/Graphics.hx",1873,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_2026_set___dirty,"openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",2026,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_52_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",52,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_54_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",54,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_55_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",55,0x8d299ce7)
namespace openfl{
namespace display{

void Graphics_obj::__construct( ::openfl::display::DisplayObject owner){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::display::_internal::ShaderBuffer _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_111_new)
HXLINE( 111)			return  ::openfl::display::_internal::ShaderBuffer_obj::__alloc( HX_CTX );
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_52_new)
HXLINE(  59)		this->_hx___dirty = true;
HXLINE(  97)		this->_hx___owner = owner;
HXLINE(  99)		this->_hx___commands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
HXLINE( 100)		this->_hx___strokePadding = ( (Float)(0) );
HXLINE( 101)		this->_hx___positionX = ( (Float)(0) );
HXLINE( 102)		this->_hx___positionY = ( (Float)(0) );
HXLINE( 103)		this->_hx___renderTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 104)		this->_hx___usedShaderBuffers =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 105)		this->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 106)		this->_hx___width = 0;
HXLINE( 107)		this->_hx___height = 0;
HXLINE( 109)		this->_hx___bitmapScale = ( (Float)(1) );
HXLINE( 111)		this->_hx___shaderBufferPool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()),null(),null());
            	}

Dynamic Graphics_obj::__CreateEmpty() { return new Graphics_obj; }

void *Graphics_obj::_hx_vtable = 0;

Dynamic Graphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Graphics_obj > _hx_result = new Graphics_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Graphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e198379;
}

void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_168_beginBitmapFill)
HXLINE( 169)		if (!(bitmap->readable)) {
HXLINE( 173)			this->beginFill(0,((Float)1.0));
HXLINE( 174)			return;
            		}
HXLINE( 177)		 ::openfl::display::_internal::DrawCommandBuffer _hx_tmp = this->_hx___commands;
HXDLIN( 177)		 ::openfl::geom::Matrix _hx_tmp1;
HXDLIN( 177)		if (::hx::IsNotNull( matrix )) {
HXLINE( 177)			_hx_tmp1 = matrix->clone();
            		}
            		else {
HXLINE( 177)			_hx_tmp1 = null();
            		}
HXDLIN( 177)		_hx_tmp->beginBitmapFill(bitmap,_hx_tmp1,repeat,smooth);
HXLINE( 179)		this->_hx___visible = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

void Graphics_obj::beginFill(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_197_beginFill)
HXLINE( 198)		this->_hx___commands->beginFill((color & 16777215),alpha);
HXLINE( 200)		if ((alpha > 0)) {
HXLINE( 200)			this->_hx___visible = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

void Graphics_obj::beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic __o_spreadMethod, ::Dynamic __o_interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		 ::Dynamic spreadMethod = __o_spreadMethod;
            		if (::hx::IsNull(__o_spreadMethod)) spreadMethod = 0;
            		 ::Dynamic interpolationMethod = __o_interpolationMethod;
            		if (::hx::IsNull(__o_interpolationMethod)) interpolationMethod = 1;
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_298_beginGradientFill)
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if (::hx::IsNotNull( colors )) {
HXLINE( 299)			_hx_tmp = (colors->length == 0);
            		}
            		else {
HXLINE( 299)			_hx_tmp = true;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 299)			return;
            		}
HXLINE( 301)		if (::hx::IsNull( alphas )) {
HXLINE( 303)			alphas = ::Array_obj< Float >::__new(0);
HXLINE( 305)			{
HXLINE( 305)				int _g = 0;
HXDLIN( 305)				int _g1 = colors->length;
HXDLIN( 305)				while((_g < _g1)){
HXLINE( 305)					_g = (_g + 1);
HXDLIN( 305)					int i = (_g - 1);
HXLINE( 307)					alphas->push(1);
            				}
            			}
            		}
HXLINE( 311)		if (::hx::IsNull( ratios )) {
HXLINE( 313)			ratios = ::Array_obj< int >::__new(0);
HXLINE( 315)			{
HXLINE( 315)				int _g = 0;
HXDLIN( 315)				int _g1 = colors->length;
HXDLIN( 315)				while((_g < _g1)){
HXLINE( 315)					_g = (_g + 1);
HXDLIN( 315)					int i = (_g - 1);
HXLINE( 317)					ratios->push(::Math_obj::ceil(((( (Float)(i) ) / ( (Float)((colors->length - 1)) )) * ( (Float)(255) ))));
            				}
            			}
            		}
HXLINE( 321)		bool _hx_tmp1;
HXDLIN( 321)		if ((alphas->length >= colors->length)) {
HXLINE( 321)			_hx_tmp1 = (ratios->length < colors->length);
            		}
            		else {
HXLINE( 321)			_hx_tmp1 = true;
            		}
HXDLIN( 321)		if (_hx_tmp1) {
HXLINE( 321)			return;
            		}
HXLINE( 323)		this->_hx___commands->beginGradientFill(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			while((_g < alphas->length)){
HXLINE( 325)				Float alpha = alphas->__get(_g);
HXDLIN( 325)				_g = (_g + 1);
HXLINE( 327)				if ((alpha > 0)) {
HXLINE( 329)					this->_hx___visible = true;
HXLINE( 330)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

void Graphics_obj::beginShaderFill( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_389_beginShaderFill)
HXDLIN( 389)		if (::hx::IsNotNull( shader )) {
HXLINE( 392)			 ::openfl::display::_internal::ShaderBuffer shaderBuffer = this->_hx___shaderBufferPool->get().StaticCast<  ::openfl::display::_internal::ShaderBuffer >();
HXLINE( 393)			this->_hx___usedShaderBuffers->add(shaderBuffer);
HXLINE( 394)			shaderBuffer->update(( ( ::openfl::display::GraphicsShader)(shader) ));
HXLINE( 396)			this->_hx___commands->beginShaderFill(shaderBuffer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginShaderFill,(void))

void Graphics_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_407_clear)
HXLINE( 409)		{
HXLINE( 409)			 ::haxe::ds::_List::ListNode _g_head = this->_hx___usedShaderBuffers->h;
HXDLIN( 409)			while(::hx::IsNotNull( _g_head )){
HXLINE( 409)				 ::openfl::display::_internal::ShaderBuffer val = ( ( ::openfl::display::_internal::ShaderBuffer)(_g_head->item) );
HXDLIN( 409)				_g_head = _g_head->next;
HXDLIN( 409)				 ::openfl::display::_internal::ShaderBuffer shaderBuffer = val;
HXLINE( 411)				this->_hx___shaderBufferPool->release(shaderBuffer);
            			}
            		}
HXLINE( 415)		this->_hx___usedShaderBuffers->clear();
HXLINE( 416)		this->_hx___commands->clear();
HXLINE( 417)		this->_hx___strokePadding = ( (Float)(0) );
HXLINE( 419)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE( 421)			this->set___dirty(true);
HXLINE( 422)			this->_hx___transformDirty = true;
HXLINE( 423)			this->_hx___bounds = null();
            		}
HXLINE( 426)		this->_hx___visible = false;
HXLINE( 427)		this->_hx___positionX = ( (Float)(0) );
HXLINE( 428)		this->_hx___positionY = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_443_copyFrom)
HXLINE( 444)		 ::openfl::geom::Rectangle _hx_tmp;
HXDLIN( 444)		if (::hx::IsNotNull( sourceGraphics->_hx___bounds )) {
HXLINE( 444)			_hx_tmp = sourceGraphics->_hx___bounds->clone();
            		}
            		else {
HXLINE( 444)			_hx_tmp = null();
            		}
HXDLIN( 444)		this->_hx___bounds = _hx_tmp;
HXLINE( 445)		this->_hx___commands = sourceGraphics->_hx___commands->copy();
HXLINE( 446)		this->set___dirty(true);
HXLINE( 447)		this->_hx___strokePadding = sourceGraphics->_hx___strokePadding;
HXLINE( 448)		this->_hx___positionX = sourceGraphics->_hx___positionX;
HXLINE( 449)		this->_hx___positionY = sourceGraphics->_hx___positionY;
HXLINE( 450)		this->_hx___transformDirty = true;
HXLINE( 451)		this->_hx___visible = sourceGraphics->_hx___visible;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

void Graphics_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_494_cubicCurveTo)
HXLINE( 495)		 ::Dynamic xs = this->_hx___findExtrema(this->_hx___positionX,controlX1,controlX2,anchorX);
HXLINE( 496)		 ::Dynamic ys = this->_hx___findExtrema(this->_hx___positionY,controlY1,controlY2,anchorY);
HXLINE( 498)		this->_hx___inflateBounds((( (Float)(xs->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) ) - this->_hx___strokePadding),(( (Float)(ys->__Field(HX_("min",92,11,53,00),::hx::paccDynamic)) ) - this->_hx___strokePadding));
HXLINE( 499)		this->_hx___inflateBounds(( (Float)((xs->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic) + this->_hx___strokePadding)) ),( (Float)((ys->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic) + this->_hx___strokePadding)) ));
HXLINE( 501)		this->_hx___positionX = anchorX;
HXLINE( 502)		this->_hx___positionY = anchorY;
HXLINE( 504)		this->_hx___commands->cubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);
HXLINE( 506)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

void Graphics_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_542_curveTo)
HXLINE( 543)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 544)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 546)		Float ix;
HXDLIN( 546)		Float iy;
HXLINE( 548)		bool _hx_tmp;
HXDLIN( 548)		bool _hx_tmp1;
HXDLIN( 548)		if ((controlX < anchorX)) {
HXLINE( 548)			_hx_tmp1 = (controlX > this->_hx___positionX);
            		}
            		else {
HXLINE( 548)			_hx_tmp1 = false;
            		}
HXDLIN( 548)		if (!(_hx_tmp1)) {
HXLINE( 548)			if ((controlX > anchorX)) {
HXLINE( 548)				_hx_tmp = (controlX < this->_hx___positionX);
            			}
            			else {
HXLINE( 548)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 548)			_hx_tmp = true;
            		}
HXDLIN( 548)		if (_hx_tmp) {
HXLINE( 550)			ix = anchorX;
            		}
            		else {
HXLINE( 554)			Float tx = ((this->_hx___positionX - controlX) / ((this->_hx___positionX - (( (Float)(2) ) * controlX)) + anchorX));
HXLINE( 555)			Float iT = (( (Float)(1) ) - tx);
HXDLIN( 555)			ix = ((((iT * iT) * this->_hx___positionX) + (((( (Float)(2) ) * iT) * tx) * controlX)) + ((tx * tx) * anchorX));
            		}
HXLINE( 558)		bool _hx_tmp2;
HXDLIN( 558)		bool _hx_tmp3;
HXDLIN( 558)		if ((controlY < anchorY)) {
HXLINE( 558)			_hx_tmp3 = (controlY > this->_hx___positionY);
            		}
            		else {
HXLINE( 558)			_hx_tmp3 = false;
            		}
HXDLIN( 558)		if (!(_hx_tmp3)) {
HXLINE( 558)			if ((controlY > anchorY)) {
HXLINE( 558)				_hx_tmp2 = (controlY < this->_hx___positionY);
            			}
            			else {
HXLINE( 558)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 558)			_hx_tmp2 = true;
            		}
HXDLIN( 558)		if (_hx_tmp2) {
HXLINE( 560)			iy = anchorY;
            		}
            		else {
HXLINE( 564)			Float ty = ((this->_hx___positionY - controlY) / ((this->_hx___positionY - (( (Float)(2) ) * controlY)) + anchorY));
HXLINE( 565)			Float iT = (( (Float)(1) ) - ty);
HXDLIN( 565)			iy = ((((iT * iT) * this->_hx___positionY) + (((( (Float)(2) ) * iT) * ty) * controlY)) + ((ty * ty) * anchorY));
            		}
HXLINE( 568)		this->_hx___inflateBounds((ix - this->_hx___strokePadding),(iy - this->_hx___strokePadding));
HXLINE( 569)		this->_hx___inflateBounds((ix + this->_hx___strokePadding),(iy + this->_hx___strokePadding));
HXLINE( 571)		this->_hx___positionX = anchorX;
HXLINE( 572)		this->_hx___positionY = anchorY;
HXLINE( 574)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 575)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 577)		this->_hx___commands->curveTo(controlX,controlY,anchorX,anchorY);
HXLINE( 579)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

void Graphics_obj::drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_583_drawCircle)
HXLINE( 584)		if ((radius <= 0)) {
HXLINE( 584)			return;
            		}
HXLINE( 586)		this->_hx___inflateBounds(((x - radius) - this->_hx___strokePadding),((y - radius) - this->_hx___strokePadding));
HXLINE( 587)		this->_hx___inflateBounds(((x + radius) + this->_hx___strokePadding),((y + radius) + this->_hx___strokePadding));
HXLINE( 589)		this->_hx___commands->drawCircle(x,y,radius);
HXLINE( 591)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

void Graphics_obj::drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_611_drawEllipse)
HXLINE( 612)		bool _hx_tmp;
HXDLIN( 612)		if (!((width <= 0))) {
HXLINE( 612)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE( 612)			_hx_tmp = true;
            		}
HXDLIN( 612)		if (_hx_tmp) {
HXLINE( 612)			return;
            		}
HXLINE( 614)		this->_hx___inflateBounds((x - this->_hx___strokePadding),(y - this->_hx___strokePadding));
HXLINE( 615)		this->_hx___inflateBounds(((x + width) + this->_hx___strokePadding),((y + height) + this->_hx___strokePadding));
HXLINE( 617)		this->_hx___commands->drawEllipse(x,y,width,height);
HXLINE( 619)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

void Graphics_obj::drawGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_635_drawGraphicsData)
HXLINE( 636)		 ::openfl::display::GraphicsSolidFill fill;
HXLINE( 637)		 ::openfl::display::GraphicsBitmapFill bitmapFill;
HXLINE( 638)		 ::openfl::display::GraphicsGradientFill gradientFill;
HXLINE( 639)		 ::openfl::display::GraphicsShaderFill shaderFill;
HXLINE( 640)		 ::openfl::display::GraphicsStroke stroke;
HXLINE( 641)		 ::openfl::display::GraphicsPath path;
HXLINE( 642)		 ::openfl::display::GraphicsTrianglePath trianglePath;
HXLINE( 643)		 ::openfl::display::GraphicsQuadPath quadPath;
HXLINE( 645)		{
HXLINE( 645)			 ::Dynamic graphics = graphicsData->iterator();
HXDLIN( 645)			while(( (bool)(graphics->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 645)				::Dynamic graphics1 = graphics->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 647)				switch((int)(( (int)(graphics1->__Field(HX_("__graphicsDataType",0f,5d,4d,46),::hx::paccDynamic)) ))){
            					case (int)0: {
HXLINE( 667)						stroke = ( ( ::openfl::display::GraphicsStroke)(graphics1) );
HXLINE( 669)						if (::hx::IsNotNull( stroke->fill )) {
HXLINE( 671)							 ::Dynamic thickness = stroke->thickness;
HXLINE( 673)							if (::Math_obj::isNaN(( (Float)(thickness) ))) {
HXLINE( 675)								thickness = null();
            							}
HXLINE( 678)							switch((int)(( (int)(stroke->fill->__Field(HX_("__graphicsFillType",e8,75,eb,27),::hx::paccDynamic)) ))){
            								case (int)0: {
HXLINE( 681)									fill = ( ( ::openfl::display::GraphicsSolidFill)(stroke->fill) );
HXLINE( 682)									this->lineStyle(thickness,fill->color,fill->alpha,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
            								}
            								break;
            								case (int)1: {
HXLINE( 691)									gradientFill = ( ( ::openfl::display::GraphicsGradientFill)(stroke->fill) );
HXLINE( 692)									this->lineStyle(thickness,0,1,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
HXLINE( 693)									this->lineGradientStyle(gradientFill->type,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,gradientFill->matrix,gradientFill->spreadMethod,gradientFill->interpolationMethod,gradientFill->focalPointRatio);
            								}
            								break;
            								case (int)2: {
HXLINE( 686)									bitmapFill = ( ( ::openfl::display::GraphicsBitmapFill)(stroke->fill) );
HXLINE( 687)									this->lineStyle(thickness,0,1,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
HXLINE( 688)									this->lineBitmapStyle(bitmapFill->bitmapData,bitmapFill->matrix,bitmapFill->repeat,bitmapFill->smooth);
            								}
            								break;
            								default:{
            								}
            							}
            						}
            						else {
HXLINE( 701)							this->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 650)						fill = ( ( ::openfl::display::GraphicsSolidFill)(graphics1) );
HXLINE( 651)						this->beginFill(fill->color,fill->alpha);
            					}
            					break;
            					case (int)2: {
HXLINE( 658)						gradientFill = ( ( ::openfl::display::GraphicsGradientFill)(graphics1) );
HXLINE( 659)						this->beginGradientFill(gradientFill->type,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,gradientFill->matrix,gradientFill->spreadMethod,gradientFill->interpolationMethod,gradientFill->focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE( 705)						path = ( ( ::openfl::display::GraphicsPath)(graphics1) );
HXLINE( 706)						this->drawPath(path->commands,path->data,path->winding);
            					}
            					break;
            					case (int)4: {
HXLINE( 654)						bitmapFill = ( ( ::openfl::display::GraphicsBitmapFill)(graphics1) );
HXLINE( 655)						this->beginBitmapFill(bitmapFill->bitmapData,bitmapFill->matrix,bitmapFill->repeat,bitmapFill->smooth);
            					}
            					break;
            					case (int)5: {
HXLINE( 713)						this->endFill();
            					}
            					break;
            					case (int)6: {
HXLINE( 716)						quadPath = ( ( ::openfl::display::GraphicsQuadPath)(graphics1) );
HXLINE( 717)						this->drawQuads(quadPath->rects,quadPath->indices,quadPath->transforms);
            					}
            					break;
            					case (int)7: {
HXLINE( 709)						trianglePath = ( ( ::openfl::display::GraphicsTrianglePath)(graphics1) );
HXLINE( 710)						this->drawTriangles(trianglePath->vertices,trianglePath->indices,trianglePath->uvtData,trianglePath->culling);
            					}
            					break;
            					case (int)8: {
HXLINE( 663)						shaderFill = ( ( ::openfl::display::GraphicsShaderFill)(graphics1) );
HXLINE( 664)						this->beginShaderFill(shaderFill->shader,shaderFill->matrix);
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

void Graphics_obj::drawPath( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding){
            		 ::Dynamic winding = __o_winding;
            		if (::hx::IsNull(__o_winding)) winding = 0;
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_766_drawPath)
HXLINE( 767)		int dataIndex = 0;
HXLINE( 769)		if (::hx::IsEq( winding,1 )) {
HXLINE( 769)			this->_hx___commands->windingNonZero();
            		}
HXLINE( 771)		{
HXLINE( 771)			 ::Dynamic command = commands->iterator();
HXDLIN( 771)			while(( (bool)(command->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 771)				int command1 = ( (int)(command->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 773)				switch((int)(command1)){
            					case (int)1: {
HXLINE( 776)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 776)						this->moveTo(_hx_tmp,data->get((dataIndex + 1)));
HXLINE( 777)						dataIndex = (dataIndex + 2);
            					}
            					break;
            					case (int)2: {
HXLINE( 780)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 780)						this->lineTo(_hx_tmp,data->get((dataIndex + 1)));
HXLINE( 781)						dataIndex = (dataIndex + 2);
            					}
            					break;
            					case (int)3: {
HXLINE( 794)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 794)						Float _hx_tmp1 = data->get((dataIndex + 1));
HXDLIN( 794)						Float _hx_tmp2 = data->get((dataIndex + 2));
HXDLIN( 794)						this->curveTo(_hx_tmp,_hx_tmp1,_hx_tmp2,data->get((dataIndex + 3)));
HXLINE( 795)						dataIndex = (dataIndex + 4);
            					}
            					break;
            					case (int)4: {
HXLINE( 784)						Float _hx_tmp = data->get((dataIndex + 2));
HXDLIN( 784)						this->moveTo(_hx_tmp,data->get((dataIndex + 3)));
HXLINE( 785)						goto _hx_goto_18;
            					}
            					break;
            					case (int)5: {
HXLINE( 789)						Float _hx_tmp = data->get((dataIndex + 2));
HXDLIN( 789)						this->lineTo(_hx_tmp,data->get((dataIndex + 3)));
HXLINE( 790)						goto _hx_goto_18;
            					}
            					break;
            					case (int)6: {
HXLINE( 798)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 798)						Float _hx_tmp1 = data->get((dataIndex + 1));
HXDLIN( 798)						Float _hx_tmp2 = data->get((dataIndex + 2));
HXDLIN( 798)						Float _hx_tmp3 = data->get((dataIndex + 3));
HXDLIN( 798)						Float _hx_tmp4 = data->get((dataIndex + 4));
HXDLIN( 798)						this->cubicCurveTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,data->get((dataIndex + 5)));
HXLINE( 799)						dataIndex = (dataIndex + 6);
            					}
            					break;
            					default:{
            					}
            				}
            			}
            			_hx_goto_18:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

void Graphics_obj::drawQuads( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_839_drawQuads)
HXLINE( 840)		if (::hx::IsNull( rects )) {
HXLINE( 840)			return;
            		}
HXLINE( 842)		bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 843)		bool transformABCD = false;
HXDLIN( 843)		bool transformXY = false;
HXLINE( 845)		int length;
HXDLIN( 845)		if (hasIndices) {
HXLINE( 845)			length = indices->get_length();
            		}
            		else {
HXLINE( 845)			length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            		}
HXLINE( 846)		if ((length == 0)) {
HXLINE( 846)			return;
            		}
HXLINE( 848)		if (::hx::IsNotNull( transforms )) {
HXLINE( 850)			if ((transforms->get_length() >= (length * 6))) {
HXLINE( 852)				transformABCD = true;
HXLINE( 853)				transformXY = true;
            			}
            			else {
HXLINE( 855)				if ((transforms->get_length() >= (length * 4))) {
HXLINE( 857)					transformABCD = true;
            				}
            				else {
HXLINE( 859)					if ((transforms->get_length() >= (length * 2))) {
HXLINE( 861)						transformXY = true;
            					}
            				}
            			}
            		}
HXLINE( 865)		 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 866)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 868)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 869)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 870)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 871)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 873)		int ri;
HXDLIN( 873)		int ti;
HXLINE( 875)		{
HXLINE( 875)			int _g = 0;
HXDLIN( 875)			int _g1 = length;
HXDLIN( 875)			while((_g < _g1)){
HXLINE( 875)				_g = (_g + 1);
HXDLIN( 875)				int i = (_g - 1);
HXLINE( 877)				if (hasIndices) {
HXLINE( 877)					ri = (indices->get(i) * 4);
            				}
            				else {
HXLINE( 877)					ri = (i * 4);
            				}
HXLINE( 878)				if ((ri < 0)) {
HXLINE( 878)					continue;
            				}
HXLINE( 879)				Float _hx_tmp = rects->get((ri + 2));
HXDLIN( 879)				tileRect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,rects->get((ri + 3)));
HXLINE( 881)				bool _hx_tmp1;
HXDLIN( 881)				if (!((tileRect->width <= 0))) {
HXLINE( 881)					_hx_tmp1 = (tileRect->height <= 0);
            				}
            				else {
HXLINE( 881)					_hx_tmp1 = true;
            				}
HXDLIN( 881)				if (_hx_tmp1) {
HXLINE( 883)					continue;
            				}
HXLINE( 886)				bool _hx_tmp2;
HXDLIN( 886)				if (transformABCD) {
HXLINE( 886)					_hx_tmp2 = transformXY;
            				}
            				else {
HXLINE( 886)					_hx_tmp2 = false;
            				}
HXDLIN( 886)				if (_hx_tmp2) {
HXLINE( 888)					ti = (i * 6);
HXLINE( 889)					Float _hx_tmp = transforms->get(ti);
HXDLIN( 889)					Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 889)					Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 889)					Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 889)					Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 889)					tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            				}
            				else {
HXLINE( 891)					if (transformABCD) {
HXLINE( 893)						ti = (i * 4);
HXLINE( 894)						Float _hx_tmp = transforms->get(ti);
HXDLIN( 894)						Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 894)						Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 894)						tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            					}
            					else {
HXLINE( 896)						if (transformXY) {
HXLINE( 898)							ti = (i * 2);
HXLINE( 899)							tileTransform->tx = transforms->get(ti);
HXLINE( 900)							tileTransform->ty = transforms->get((ti + 1));
            						}
            						else {
HXLINE( 904)							tileTransform->tx = tileRect->x;
HXLINE( 905)							tileTransform->ty = tileRect->y;
            						}
            					}
            				}
HXLINE( 908)				tileRect->_hx___transform(tileRect,tileTransform);
HXLINE( 910)				if ((minX > tileRect->x)) {
HXLINE( 910)					minX = tileRect->x;
            				}
HXLINE( 911)				if ((minY > tileRect->y)) {
HXLINE( 911)					minY = tileRect->y;
            				}
HXLINE( 912)				if ((maxX < tileRect->get_right())) {
HXLINE( 912)					maxX = tileRect->get_right();
            				}
HXLINE( 913)				if ((maxY < tileRect->get_bottom())) {
HXLINE( 913)					maxY = tileRect->get_bottom();
            				}
            			}
            		}
HXLINE( 916)		this->_hx___inflateBounds(minX,minY);
HXLINE( 917)		this->_hx___inflateBounds(maxX,maxY);
HXLINE( 919)		this->_hx___commands->drawQuads(rects,indices,transforms);
HXLINE( 921)		this->set___dirty(true);
HXLINE( 922)		this->_hx___visible = true;
HXLINE( 924)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 925)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawQuads,(void))

void Graphics_obj::drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_946_drawRect)
HXLINE( 947)		bool _hx_tmp;
HXDLIN( 947)		if ((width == 0)) {
HXLINE( 947)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 947)			_hx_tmp = false;
            		}
HXDLIN( 947)		if (_hx_tmp) {
HXLINE( 947)			return;
            		}
HXLINE( 949)		int xSign;
HXDLIN( 949)		if ((width < 0)) {
HXLINE( 949)			xSign = -1;
            		}
            		else {
HXLINE( 949)			xSign = 1;
            		}
HXLINE( 950)		int ySign;
HXDLIN( 950)		if ((height < 0)) {
HXLINE( 950)			ySign = -1;
            		}
            		else {
HXLINE( 950)			ySign = 1;
            		}
HXLINE( 952)		this->_hx___inflateBounds((x - (this->_hx___strokePadding * ( (Float)(xSign) ))),(y - (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 953)		this->_hx___inflateBounds(((x + width) + (this->_hx___strokePadding * ( (Float)(xSign) ))),((y + height) + (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 955)		this->_hx___commands->drawRect(x,y,width,height);
HXLINE( 957)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

void Graphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_987_drawRoundRect)
HXLINE( 988)		bool _hx_tmp;
HXDLIN( 988)		if ((width == 0)) {
HXLINE( 988)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 988)			_hx_tmp = false;
            		}
HXDLIN( 988)		if (_hx_tmp) {
HXLINE( 988)			return;
            		}
HXLINE( 990)		int xSign;
HXDLIN( 990)		if ((width < 0)) {
HXLINE( 990)			xSign = -1;
            		}
            		else {
HXLINE( 990)			xSign = 1;
            		}
HXLINE( 991)		int ySign;
HXDLIN( 991)		if ((height < 0)) {
HXLINE( 991)			ySign = -1;
            		}
            		else {
HXLINE( 991)			ySign = 1;
            		}
HXLINE( 993)		this->_hx___inflateBounds((x - (this->_hx___strokePadding * ( (Float)(xSign) ))),(y - (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 994)		this->_hx___inflateBounds(((x + width) + (this->_hx___strokePadding * ( (Float)(xSign) ))),((y + height) + (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 996)		this->_hx___commands->drawRoundRect(x,y,width,height,ellipseWidth,ellipseHeight);
HXLINE( 998)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

void Graphics_obj::drawRoundRectComplex(Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1006_drawRoundRectComplex)
HXLINE(1007)		bool _hx_tmp;
HXDLIN(1007)		if (!((width <= 0))) {
HXLINE(1007)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE(1007)			_hx_tmp = true;
            		}
HXDLIN(1007)		if (_hx_tmp) {
HXLINE(1007)			return;
            		}
HXLINE(1009)		this->_hx___inflateBounds((x - this->_hx___strokePadding),(y - this->_hx___strokePadding));
HXLINE(1010)		this->_hx___inflateBounds(((x + width) + this->_hx___strokePadding),((y + height) + this->_hx___strokePadding));
HXLINE(1012)		Float xw = (x + width);
HXLINE(1013)		Float yh = (y + height);
HXLINE(1014)		Float minSize;
HXDLIN(1014)		if ((width < height)) {
HXLINE(1014)			minSize = (width * ( (Float)(2) ));
            		}
            		else {
HXLINE(1014)			minSize = (height * ( (Float)(2) ));
            		}
HXLINE(1015)		if (!((topLeftRadius < minSize))) {
HXLINE(1015)			topLeftRadius = minSize;
            		}
HXLINE(1016)		if (!((topRightRadius < minSize))) {
HXLINE(1016)			topRightRadius = minSize;
            		}
HXLINE(1017)		if (!((bottomLeftRadius < minSize))) {
HXLINE(1017)			bottomLeftRadius = minSize;
            		}
HXLINE(1018)		if (!((bottomRightRadius < minSize))) {
HXLINE(1018)			bottomRightRadius = minSize;
            		}
HXLINE(1020)		Float anchor = (( (Float)(1) ) - ::Math_obj::sin((( (Float)(45) ) * (::Math_obj::PI / ( (Float)(180) )))));
HXLINE(1021)		Float control = (( (Float)(1) ) - ::Math_obj::tan((((Float)22.5) * (::Math_obj::PI / ( (Float)(180) )))));
HXLINE(1023)		Float a = (bottomRightRadius * anchor);
HXLINE(1024)		Float s = (bottomRightRadius * control);
HXLINE(1025)		this->moveTo(xw,(yh - bottomRightRadius));
HXLINE(1026)		this->curveTo(xw,(yh - s),(xw - a),(yh - a));
HXLINE(1027)		this->curveTo((xw - s),yh,(xw - bottomRightRadius),yh);
HXLINE(1029)		a = (bottomLeftRadius * anchor);
HXLINE(1030)		s = (bottomLeftRadius * control);
HXLINE(1031)		this->lineTo((x + bottomLeftRadius),yh);
HXLINE(1032)		this->curveTo((x + s),yh,(x + a),(yh - a));
HXLINE(1033)		this->curveTo(x,(yh - s),x,(yh - bottomLeftRadius));
HXLINE(1035)		a = (topLeftRadius * anchor);
HXLINE(1036)		s = (topLeftRadius * control);
HXLINE(1037)		this->lineTo(x,(y + topLeftRadius));
HXLINE(1038)		this->curveTo(x,(y + s),(x + a),(y + a));
HXLINE(1039)		this->curveTo((x + s),y,(x + topLeftRadius),y);
HXLINE(1041)		a = (topRightRadius * anchor);
HXLINE(1042)		s = (topRightRadius * control);
HXLINE(1043)		this->lineTo((xw - topRightRadius),y);
HXLINE(1044)		this->curveTo((xw - s),y,(xw - a),(y + a));
HXLINE(1045)		this->curveTo(xw,(y + s),xw,(y + topRightRadius));
HXLINE(1046)		this->lineTo(xw,(yh - bottomRightRadius));
HXLINE(1048)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

void Graphics_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling){
            		 ::Dynamic culling = __o_culling;
            		if (::hx::IsNull(__o_culling)) culling = 1;
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1071_drawTriangles)
HXLINE(1072)		bool _hx_tmp;
HXDLIN(1072)		if (::hx::IsNotNull( vertices )) {
HXLINE(1072)			_hx_tmp = (vertices->get_length() == 0);
            		}
            		else {
HXLINE(1072)			_hx_tmp = true;
            		}
HXDLIN(1072)		if (_hx_tmp) {
HXLINE(1072)			return;
            		}
HXLINE(1074)		int vertLength = ::Std_obj::_hx_int((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE(1076)		if (::hx::IsNull( indices )) {
HXLINE(1080)			if ((::hx::Mod(vertLength,3) != 0)) {
HXLINE(1082)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Not enough vertices to close a triangle.",fe,c6,58,0d)));
            			}
HXLINE(1085)			int length = null();
HXDLIN(1085)			bool fixed = null();
HXDLIN(1085)			::Array< int > array = null();
HXDLIN(1085)			indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
HXLINE(1087)			{
HXLINE(1087)				int _g = 0;
HXDLIN(1087)				int _g1 = vertLength;
HXDLIN(1087)				while((_g < _g1)){
HXLINE(1087)					_g = (_g + 1);
HXDLIN(1087)					int i = (_g - 1);
HXLINE(1089)					indices->push(i);
            				}
            			}
            		}
HXLINE(1093)		if (::hx::IsNull( culling )) {
HXLINE(1095)			culling = 1;
            		}
HXLINE(1098)		Float x;
HXDLIN(1098)		Float y;
HXLINE(1099)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1100)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1101)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(1102)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(1104)		{
HXLINE(1104)			int _g = 0;
HXDLIN(1104)			int _g1 = vertLength;
HXDLIN(1104)			while((_g < _g1)){
HXLINE(1104)				_g = (_g + 1);
HXDLIN(1104)				int i = (_g - 1);
HXLINE(1106)				x = vertices->get((i * 2));
HXLINE(1107)				y = vertices->get(((i * 2) + 1));
HXLINE(1109)				if ((minX > x)) {
HXLINE(1109)					minX = x;
            				}
HXLINE(1110)				if ((minY > y)) {
HXLINE(1110)					minY = y;
            				}
HXLINE(1111)				if ((maxX < x)) {
HXLINE(1111)					maxX = x;
            				}
HXLINE(1112)				if ((maxY < y)) {
HXLINE(1112)					maxY = y;
            				}
            			}
            		}
HXLINE(1115)		this->_hx___inflateBounds(minX,minY);
HXLINE(1116)		this->_hx___inflateBounds(maxX,maxY);
HXLINE(1118)		this->_hx___commands->drawTriangles(vertices,indices,uvtData,culling);
HXLINE(1120)		this->set___dirty(true);
HXLINE(1121)		this->_hx___visible = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTriangles,(void))

void Graphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1137_endFill)
HXDLIN(1137)		this->_hx___commands->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1171_lineBitmapStyle)
HXDLIN(1171)		 ::openfl::display::_internal::DrawCommandBuffer _hx_tmp = this->_hx___commands;
HXDLIN(1171)		 ::openfl::geom::Matrix _hx_tmp1;
HXDLIN(1171)		if (::hx::IsNotNull( matrix )) {
HXDLIN(1171)			_hx_tmp1 = matrix->clone();
            		}
            		else {
HXDLIN(1171)			_hx_tmp1 = null();
            		}
HXDLIN(1171)		_hx_tmp->lineBitmapStyle(bitmap,_hx_tmp1,repeat,smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

void Graphics_obj::lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic __o_spreadMethod, ::Dynamic __o_interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		 ::Dynamic spreadMethod = __o_spreadMethod;
            		if (::hx::IsNull(__o_spreadMethod)) spreadMethod = 0;
            		 ::Dynamic interpolationMethod = __o_interpolationMethod;
            		if (::hx::IsNull(__o_interpolationMethod)) interpolationMethod = 1;
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1249_lineGradientStyle)
HXLINE(1250)		if (::hx::IsNull( alphas )) {
HXLINE(1252)			alphas = ::Array_obj< Float >::__new(0);
HXLINE(1254)			{
HXLINE(1254)				int _g = 0;
HXDLIN(1254)				int _g1 = colors->length;
HXDLIN(1254)				while((_g < _g1)){
HXLINE(1254)					_g = (_g + 1);
HXDLIN(1254)					int i = (_g - 1);
HXLINE(1256)					alphas->push(1);
            				}
            			}
            		}
HXLINE(1260)		if (::hx::IsNull( ratios )) {
HXLINE(1262)			ratios = ::Array_obj< int >::__new(0);
HXLINE(1264)			{
HXLINE(1264)				int _g = 0;
HXDLIN(1264)				int _g1 = colors->length;
HXDLIN(1264)				while((_g < _g1)){
HXLINE(1264)					_g = (_g + 1);
HXDLIN(1264)					int i = (_g - 1);
HXLINE(1266)					ratios->push(::Math_obj::ceil(((( (Float)(i) ) / ( (Float)((colors->length - 1)) )) * ( (Float)(255) ))));
            				}
            			}
            		}
HXLINE(1269)		this->_hx___commands->lineGradientStyle(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

void Graphics_obj::lineStyle( ::Dynamic thickness,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< bool >  __o_pixelHinting, ::Dynamic __o_scaleMode, ::Dynamic caps, ::Dynamic joints,::hx::Null< Float >  __o_miterLimit){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            		bool pixelHinting = __o_pixelHinting.Default(false);
            		 ::Dynamic scaleMode = __o_scaleMode;
            		if (::hx::IsNull(__o_scaleMode)) scaleMode = 2;
            		Float miterLimit = __o_miterLimit.Default(3);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1453_lineStyle)
HXLINE(1454)		if (::hx::IsNull( caps )) {
HXLINE(1456)			caps = 1;
            		}
HXLINE(1459)		if (::hx::IsNull( joints )) {
HXLINE(1461)			joints = 2;
            		}
HXLINE(1464)		if (::hx::IsNotNull( thickness )) {
HXLINE(1466)			if (::hx::IsEq( joints,1 )) {
HXLINE(1468)				if (::hx::IsGreater( thickness,this->_hx___strokePadding )) {
HXLINE(1468)					this->_hx___strokePadding = ( (Float)(::Math_obj::ceil(( (Float)(thickness) ))) );
            				}
            			}
            			else {
HXLINE(1472)				if (((( (Float)(thickness) ) / ( (Float)(2) )) > this->_hx___strokePadding)) {
HXLINE(1472)					this->_hx___strokePadding = ( (Float)(::Math_obj::ceil((( (Float)(thickness) ) / ( (Float)(2) )))) );
            				}
            			}
            		}
HXLINE(1476)		this->_hx___commands->lineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
HXLINE(1478)		if (::hx::IsNotNull( thickness )) {
HXLINE(1478)			this->_hx___visible = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

void Graphics_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1498_lineTo)
HXLINE(1499)		bool _hx_tmp;
HXDLIN(1499)		if (::Math_obj::isFinite(x)) {
HXLINE(1499)			_hx_tmp = !(::Math_obj::isFinite(y));
            		}
            		else {
HXLINE(1499)			_hx_tmp = true;
            		}
HXDLIN(1499)		if (_hx_tmp) {
HXLINE(1501)			return;
            		}
HXLINE(1506)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE(1507)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE(1509)		this->_hx___positionX = x;
HXLINE(1510)		this->_hx___positionY = y;
HXLINE(1512)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE(1513)		this->_hx___inflateBounds((this->_hx___positionX + (this->_hx___strokePadding * ( (Float)(2) ))),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE(1515)		this->_hx___commands->lineTo(x,y);
HXLINE(1517)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

void Graphics_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1531_moveTo)
HXLINE(1532)		this->_hx___positionX = x;
HXLINE(1533)		this->_hx___positionY = y;
HXLINE(1535)		this->_hx___commands->moveTo(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

void Graphics_obj::overrideBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1540_overrideBlendMode)
HXLINE(1541)		if (::hx::IsNull( blendMode )) {
HXLINE(1541)			blendMode = 10;
            		}
HXLINE(1542)		this->_hx___commands->overrideBlendMode(blendMode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,overrideBlendMode,(void))

 ::openfl::_Vector::ObjectVector Graphics_obj::readGraphicsData(::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1597_readGraphicsData)
HXLINE(1598)		int length = null();
HXDLIN(1598)		bool fixed = null();
HXDLIN(1598)		::Array< ::Dynamic> array = null();
HXDLIN(1598)		 ::openfl::_Vector::ObjectVector graphicsData =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(1599)		this->_hx___owner->_hx___readGraphicsData(graphicsData,recurse);
HXLINE(1600)		return graphicsData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,readGraphicsData,return )

Float Graphics_obj::_hx___calculateBezierCubicPoint(Float t,Float p1,Float p2,Float p3,Float p4){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1605___calculateBezierCubicPoint)
HXLINE(1606)		Float iT = (( (Float)(1) ) - t);
HXLINE(1607)		return ((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t * t))) + (p4 * ((t * t) * t)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,_hx___calculateBezierCubicPoint,return )

Float Graphics_obj::_hx___calculateBezierQuadPoint(Float t,Float p1,Float p2,Float p3){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1612___calculateBezierQuadPoint)
HXLINE(1613)		Float iT = (( (Float)(1) ) - t);
HXLINE(1614)		return ((((iT * iT) * p1) + (((( (Float)(2) ) * iT) * t) * p2)) + ((t * t) * p3));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___calculateBezierQuadPoint,return )

void Graphics_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1618___cleanup)
HXLINE(1626)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE(1628)			this->set___dirty(true);
HXLINE(1629)			this->_hx___transformDirty = true;
            		}
HXLINE(1633)		this->_hx___bitmap = null();
HXLINE(1639)		this->_hx___cairo = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,_hx___cleanup,(void))

void Graphics_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1644___getBounds)
HXLINE(1645)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1645)			return;
            		}
HXLINE(1647)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1648)		this->_hx___bounds->_hx___transform(bounds,matrix);
HXLINE(1649)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(1650)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___getBounds,(void))

bool Graphics_obj::_hx___hitTest(Float x,Float y,bool shapeFlag, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1654___hitTest)
HXLINE(1655)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1655)			return false;
            		}
HXLINE(1657)		Float norm = ((matrix->a * matrix->d) - (matrix->b * matrix->c));
HXDLIN(1657)		Float px;
HXDLIN(1657)		if ((norm == 0)) {
HXLINE(1657)			px = -(matrix->tx);
            		}
            		else {
HXLINE(1657)			px = ((((Float)1.0) / norm) * ((matrix->c * (matrix->ty - y)) + (matrix->d * (x - matrix->tx))));
            		}
HXLINE(1658)		Float norm1 = ((matrix->a * matrix->d) - (matrix->b * matrix->c));
HXDLIN(1658)		Float py;
HXDLIN(1658)		if ((norm1 == 0)) {
HXLINE(1658)			py = -(matrix->ty);
            		}
            		else {
HXLINE(1658)			py = ((((Float)1.0) / norm1) * ((matrix->a * (y - matrix->ty)) + (matrix->b * (matrix->tx - x))));
            		}
HXLINE(1660)		bool _hx_tmp;
HXDLIN(1660)		bool _hx_tmp1;
HXDLIN(1660)		if ((px > this->_hx___bounds->x)) {
HXLINE(1660)			_hx_tmp1 = (py > this->_hx___bounds->y);
            		}
            		else {
HXLINE(1660)			_hx_tmp1 = false;
            		}
HXDLIN(1660)		if (_hx_tmp1) {
HXLINE(1660)			_hx_tmp = this->_hx___bounds->contains(px,py);
            		}
            		else {
HXLINE(1660)			_hx_tmp = false;
            		}
HXDLIN(1660)		if (_hx_tmp) {
HXLINE(1662)			if (shapeFlag) {
HXLINE(1667)				return ::openfl::display::_internal::CairoGraphics_obj::hitTest(::hx::ObjectPtr<OBJ_>(this),px,py);
            			}
HXLINE(1671)			return true;
            		}
HXLINE(1674)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___hitTest,return )

 ::Dynamic Graphics_obj::_hx___findExtrema(Float p1,Float p2,Float p3,Float p4){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1678___findExtrema)
HXLINE(1679)		::Array< Float > solutions = ::Array_obj< Float >::__new(0);
HXLINE(1680)		bool _hx_tmp;
HXDLIN(1680)		bool _hx_tmp1;
HXDLIN(1680)		bool _hx_tmp2;
HXDLIN(1680)		if ((p2 < p4)) {
HXLINE(1680)			_hx_tmp2 = (p2 > p1);
            		}
            		else {
HXLINE(1680)			_hx_tmp2 = false;
            		}
HXDLIN(1680)		if (!(_hx_tmp2)) {
HXLINE(1680)			if ((p2 > p4)) {
HXLINE(1680)				_hx_tmp1 = (p2 < p1);
            			}
            			else {
HXLINE(1680)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE(1680)			_hx_tmp1 = true;
            		}
HXDLIN(1680)		if (_hx_tmp1) {
HXLINE(1680)			bool _hx_tmp1;
HXDLIN(1680)			if ((p3 < p4)) {
HXLINE(1680)				_hx_tmp1 = (p3 > p1);
            			}
            			else {
HXLINE(1680)				_hx_tmp1 = false;
            			}
HXDLIN(1680)			if (!(_hx_tmp1)) {
HXLINE(1680)				if ((p3 > p4)) {
HXLINE(1680)					_hx_tmp = (p3 < p1);
            				}
            				else {
HXLINE(1680)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(1680)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1680)			_hx_tmp = false;
            		}
HXDLIN(1680)		if (!(_hx_tmp)) {
HXLINE(1684)			Float a = (((-(p1) + (( (Float)(3) ) * p2)) + p4) - (( (Float)(3) ) * p3));
HXLINE(1685)			Float b = (((( (Float)(2) ) * p1) - (( (Float)(4) ) * p2)) + (( (Float)(2) ) * p3));
HXLINE(1686)			Float c = (p2 - p1);
HXLINE(1688)			Float d = ((b * b) - ((( (Float)(4) ) * a) * c));
HXLINE(1689)			if ((a == 0)) {
HXLINE(1691)				Float t = (-(c) / b);
HXLINE(1692)				bool _hx_tmp;
HXDLIN(1692)				if ((t > 0)) {
HXLINE(1692)					_hx_tmp = (t < 1);
            				}
            				else {
HXLINE(1692)					_hx_tmp = false;
            				}
HXDLIN(1692)				if (_hx_tmp) {
HXLINE(1694)					Float iT = (( (Float)(1) ) - t);
HXDLIN(1694)					solutions->push(((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t * t))) + (p4 * ((t * t) * t))));
            				}
            			}
            			else {
HXLINE(1697)				if ((d >= 0)) {
HXLINE(1699)					Float t1 = ((-(b) + ::Math_obj::sqrt(d)) / (( (Float)(2) ) * a));
HXLINE(1700)					Float t2 = ((-(b) - ::Math_obj::sqrt(d)) / (( (Float)(2) ) * a));
HXLINE(1701)					bool _hx_tmp;
HXDLIN(1701)					if ((t1 > 0)) {
HXLINE(1701)						_hx_tmp = (t1 < 1);
            					}
            					else {
HXLINE(1701)						_hx_tmp = false;
            					}
HXDLIN(1701)					if (_hx_tmp) {
HXLINE(1703)						Float iT = (( (Float)(1) ) - t1);
HXDLIN(1703)						solutions->push(((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t1) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t1 * t1))) + (p4 * ((t1 * t1) * t1))));
            					}
HXLINE(1705)					bool _hx_tmp1;
HXDLIN(1705)					if ((t2 > 0)) {
HXLINE(1705)						_hx_tmp1 = (t2 < 1);
            					}
            					else {
HXLINE(1705)						_hx_tmp1 = false;
            					}
HXDLIN(1705)					if (_hx_tmp1) {
HXLINE(1707)						Float iT = (( (Float)(1) ) - t2);
HXDLIN(1707)						solutions->push(((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t2) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t2 * t2))) + (p4 * ((t2 * t2) * t2))));
            					}
            				}
            			}
            		}
HXLINE(1711)		Float min = p1;
HXLINE(1712)		Float max = p1;
HXLINE(1713)		solutions->push(p4);
HXLINE(1714)		{
HXLINE(1714)			int _g = 0;
HXDLIN(1714)			while((_g < solutions->length)){
HXLINE(1714)				Float val = solutions->__get(_g);
HXDLIN(1714)				_g = (_g + 1);
HXLINE(1716)				if ((val < min)) {
HXLINE(1718)					min = val;
            				}
HXLINE(1720)				if ((val > max)) {
HXLINE(1722)					max = val;
            				}
            			}
            		}
HXLINE(1725)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("min",92,11,53,00),min));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___findExtrema,return )

void Graphics_obj::_hx___inflateBounds(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1729___inflateBounds)
HXLINE(1730)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1732)			this->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,0,0);
HXLINE(1733)			this->_hx___transformDirty = true;
HXLINE(1734)			return;
            		}
HXLINE(1737)		if ((x < this->_hx___bounds->x)) {
HXLINE(1739)			 ::openfl::geom::Rectangle fh = this->_hx___bounds;
HXDLIN(1739)			fh->width = (fh->width + (this->_hx___bounds->x - x));
HXLINE(1740)			this->_hx___bounds->x = x;
HXLINE(1741)			this->_hx___transformDirty = true;
            		}
HXLINE(1744)		if ((y < this->_hx___bounds->y)) {
HXLINE(1746)			 ::openfl::geom::Rectangle fh = this->_hx___bounds;
HXDLIN(1746)			fh->height = (fh->height + (this->_hx___bounds->y - y));
HXLINE(1747)			this->_hx___bounds->y = y;
HXLINE(1748)			this->_hx___transformDirty = true;
            		}
HXLINE(1751)		if ((x > (this->_hx___bounds->x + this->_hx___bounds->width))) {
HXLINE(1753)			this->_hx___bounds->width = (x - this->_hx___bounds->x);
            		}
HXLINE(1756)		if ((y > (this->_hx___bounds->y + this->_hx___bounds->height))) {
HXLINE(1758)			this->_hx___bounds->height = (y - this->_hx___bounds->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___inflateBounds,(void))

void Graphics_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1763___readGraphicsData)
HXLINE(1764)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,this->_hx___commands);
HXLINE(1765)		 ::openfl::display::GraphicsPath path = null();
HXDLIN(1765)		 ::openfl::display::GraphicsStroke stroke;
HXLINE(1767)		{
HXLINE(1767)			int _g = 0;
HXDLIN(1767)			::Array< ::Dynamic> _g1 = this->_hx___commands->types;
HXDLIN(1767)			while((_g < _g1->length)){
HXLINE(1767)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1767)				_g = (_g + 1);
HXLINE(1769)				switch((int)(type->_hx_getIndex())){
            					case (int)4: case (int)5: case (int)6: case (int)7: case (int)9: case (int)10: case (int)17: case (int)18: {
HXLINE(1772)						if (::hx::IsNull( path )) {
HXLINE(1774)							path =  ::openfl::display::GraphicsPath_obj::__alloc( HX_CTX ,null(),null(),null());
            						}
            					}
            					break;
            					default:{
HXLINE(1778)						if (::hx::IsNotNull( path )) {
HXLINE(1780)							graphicsData->push(path);
HXLINE(1781)							path = null();
            						}
            					}
            				}
HXLINE(1785)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(1847)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 2);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->iPos = (data1->iPos + 1);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 4);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1847)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1847)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 5);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 2);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 4);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1847)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1847)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 4);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1847)								data2->iPos = (data2->iPos + 1);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1847)								data3->fPos = (data3->fPos + 2);
HXDLIN(1847)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1847)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1847)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1847)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1847)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1847)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1847)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1848)						graphicsData->push( ::openfl::display::GraphicsBitmapFill_obj::__alloc( HX_CTX ,( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1))));
            					}
            					break;
            					case (int)1: {
HXLINE(1851)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 2);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->iPos = (data1->iPos + 1);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 4);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1851)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1851)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 5);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 2);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 4);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1851)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1851)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 4);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1851)								data2->iPos = (data2->iPos + 1);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1851)								data3->fPos = (data3->fPos + 2);
HXDLIN(1851)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1851)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1851)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1851)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1851)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1851)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1851)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1852)						graphicsData->push( ::openfl::display::GraphicsSolidFill_obj::__alloc( HX_CTX ,c->buffer->i->__get(c->iPos),1));
            					}
            					break;
            					case (int)2: {
HXLINE(1855)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 2);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->iPos = (data1->iPos + 1);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 4);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1855)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1855)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 5);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 2);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 4);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1855)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1855)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 4);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1855)								data2->iPos = (data2->iPos + 1);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1855)								data3->fPos = (data3->fPos + 2);
HXDLIN(1855)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1855)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1855)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1855)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1855)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1855)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1855)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1856)						graphicsData->push( ::openfl::display::GraphicsGradientFill_obj::__alloc( HX_CTX ,c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos)));
            					}
            					break;
            					case (int)3: {
            					}
            					break;
            					case (int)4: {
HXLINE(1788)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 2);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->iPos = (data1->iPos + 1);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 4);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1788)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1788)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 5);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 2);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 4);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1788)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1788)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 4);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1788)								data2->iPos = (data2->iPos + 1);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1788)								data3->fPos = (data3->fPos + 2);
HXDLIN(1788)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1788)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1788)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1788)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1788)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1788)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1788)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1789)						path->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            					}
            					break;
            					case (int)5: {
HXLINE(1792)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->iPos = (data1->iPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1792)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1792)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 5);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1792)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1792)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->iPos = (data2->iPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1792)								data3->fPos = (data3->fPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1792)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1792)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1792)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1792)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1793)						path->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)6: {
HXLINE(1804)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 2);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->iPos = (data1->iPos + 1);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 4);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1804)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1804)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 5);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 2);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 4);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1804)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1804)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 4);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1804)								data2->iPos = (data2->iPos + 1);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1804)								data3->fPos = (data3->fPos + 2);
HXDLIN(1804)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1804)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1804)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1804)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1804)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1804)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1804)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1805)						path->_hx___drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            					}
            					break;
            					case (int)7: {
HXLINE(1808)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 2);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->iPos = (data1->iPos + 1);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 4);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1808)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1808)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 5);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 2);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 4);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1808)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1808)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 4);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1808)								data2->iPos = (data2->iPos + 1);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1808)								data3->fPos = (data3->fPos + 2);
HXDLIN(1808)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1808)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1808)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1808)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1808)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1808)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1808)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1809)						path->_hx___drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)9: {
HXLINE(1812)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 2);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->iPos = (data1->iPos + 1);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 4);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1812)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1812)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 5);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 2);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 4);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1812)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1812)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 4);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1812)								data2->iPos = (data2->iPos + 1);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1812)								data3->fPos = (data3->fPos + 2);
HXDLIN(1812)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1812)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1812)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1812)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1812)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1812)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1812)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1813)						path->_hx___drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE(1816)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->iPos = (data1->iPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1816)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1816)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 5);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1816)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1816)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 4);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1816)								data2->iPos = (data2->iPos + 1);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1816)								data3->fPos = (data3->fPos + 2);
HXDLIN(1816)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1816)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1816)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1816)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1816)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1816)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1816)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1817)						Float _hx_tmp;
HXDLIN(1817)						if (::hx::IsNotNull( c->buffer->o->__get(c->oPos) )) {
HXLINE(1817)							_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            						}
            						else {
HXLINE(1817)							_hx_tmp = c->buffer->f->__get((c->fPos + 4));
            						}
HXDLIN(1817)						path->_hx___drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),_hx_tmp);
            					}
            					break;
            					case (int)13: {
HXLINE(1843)						{
HXLINE(1843)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 2);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->iPos = (data1->iPos + 1);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 4);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1843)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1843)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 5);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 2);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 4);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1843)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1843)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 4);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1843)									data2->iPos = (data2->iPos + 1);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1843)									data3->fPos = (data3->fPos + 2);
HXDLIN(1843)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1843)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1843)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1843)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1843)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1843)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1844)						graphicsData->push( ::openfl::display::GraphicsEndFill_obj::__alloc( HX_CTX ));
            					}
            					break;
            					case (int)14: {
HXLINE(1830)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 2);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->iPos = (data1->iPos + 1);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 4);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1830)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1830)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 5);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 2);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 4);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1830)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1830)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 4);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1830)								data2->iPos = (data2->iPos + 1);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1830)								data3->fPos = (data3->fPos + 2);
HXDLIN(1830)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1830)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1830)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1830)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1830)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1830)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1830)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1831)						path = null();
            					}
            					break;
            					case (int)15: {
HXLINE(1822)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 2);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->iPos = (data1->iPos + 1);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 4);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1822)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1822)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 5);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 2);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 4);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1822)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1822)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 4);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1822)								data2->iPos = (data2->iPos + 1);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1822)								data3->fPos = (data3->fPos + 2);
HXDLIN(1822)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1822)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1822)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1822)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1822)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1822)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1822)						 ::openfl::display::_internal::DrawCommandReader c = this1;
            					}
            					break;
            					case (int)16: {
HXLINE(1837)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 2);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->iPos = (data1->iPos + 1);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 4);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1837)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1837)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 5);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 2);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 4);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1837)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1837)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 4);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1837)								data2->iPos = (data2->iPos + 1);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1837)								data3->fPos = (data3->fPos + 2);
HXDLIN(1837)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1837)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1837)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1837)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1837)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1837)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1837)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1838)						stroke =  ::openfl::display::GraphicsStroke_obj::__alloc( HX_CTX ,c->buffer->o->__get(c->oPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)),null());
HXLINE(1839)						stroke->fill =  ::openfl::display::GraphicsSolidFill_obj::__alloc( HX_CTX ,c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1840)						graphicsData->push(stroke);
            					}
            					break;
            					case (int)17: {
HXLINE(1796)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 2);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->iPos = (data1->iPos + 1);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 4);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1796)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1796)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 5);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 2);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 4);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1796)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1796)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 4);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1796)								data2->iPos = (data2->iPos + 1);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1796)								data3->fPos = (data3->fPos + 2);
HXDLIN(1796)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1796)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1796)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1796)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1796)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1796)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1796)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1797)						path->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)18: {
HXLINE(1800)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 2);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->iPos = (data1->iPos + 1);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 4);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1800)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1800)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 5);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 2);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 4);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1800)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1800)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 4);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1800)								data2->iPos = (data2->iPos + 1);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1800)								data3->fPos = (data3->fPos + 2);
HXDLIN(1800)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1800)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1800)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1800)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1800)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1800)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1800)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1801)						path->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					default:{
HXLINE(1862)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 2);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->iPos = (data1->iPos + 1);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 4);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1862)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1862)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 5);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 2);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 4);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1862)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1862)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 4);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1862)								data2->iPos = (data2->iPos + 1);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1862)								data3->fPos = (data3->fPos + 2);
HXDLIN(1862)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1862)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1862)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1862)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1862)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE(1866)		if (::hx::IsNotNull( path )) {
HXLINE(1868)			graphicsData->push(path);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,_hx___readGraphicsData,(void))

void Graphics_obj::_hx___update( ::openfl::geom::Matrix displayMatrix,Float pixelRatio){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1873___update)
HXLINE(1874)		bool _hx_tmp;
HXDLIN(1874)		bool _hx_tmp1;
HXDLIN(1874)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE(1874)			_hx_tmp1 = (this->_hx___bounds->width <= 0);
            		}
            		else {
HXLINE(1874)			_hx_tmp1 = true;
            		}
HXDLIN(1874)		if (!(_hx_tmp1)) {
HXLINE(1874)			_hx_tmp = (this->_hx___bounds->height <= 0);
            		}
            		else {
HXLINE(1874)			_hx_tmp = true;
            		}
HXDLIN(1874)		if (_hx_tmp) {
HXLINE(1874)			return;
            		}
HXLINE(1876)		 ::openfl::geom::Matrix parentTransform = this->_hx___owner->_hx___renderTransform;
HXLINE(1877)		if (::hx::IsNull( parentTransform )) {
HXLINE(1877)			return;
            		}
HXLINE(1879)		Float scaleX = pixelRatio;
HXDLIN(1879)		Float scaleY = pixelRatio;
HXLINE(1881)		if (::hx::IsNull( this->_hx___owner->_hx___worldScale9Grid )) {
HXLINE(1883)			if ((parentTransform->b == 0)) {
HXLINE(1885)				scaleX = ::Math_obj::abs(parentTransform->a);
            			}
            			else {
HXLINE(1889)				scaleX = ::Math_obj::sqrt(((parentTransform->a * parentTransform->a) + (parentTransform->b * parentTransform->b)));
            			}
HXLINE(1892)			if ((parentTransform->c == 0)) {
HXLINE(1894)				scaleY = ::Math_obj::abs(parentTransform->d);
            			}
            			else {
HXLINE(1898)				scaleY = ::Math_obj::sqrt(((parentTransform->c * parentTransform->c) + (parentTransform->d * parentTransform->d)));
            			}
HXLINE(1901)			if (::hx::IsNotNull( displayMatrix )) {
HXLINE(1903)				if ((displayMatrix->b == 0)) {
HXLINE(1905)					scaleX = (scaleX * displayMatrix->a);
            				}
            				else {
HXLINE(1909)					scaleX = (scaleX * ::Math_obj::sqrt(((displayMatrix->a * displayMatrix->a) + (displayMatrix->b * displayMatrix->b))));
            				}
HXLINE(1912)				if ((displayMatrix->c == 0)) {
HXLINE(1914)					scaleY = (scaleY * displayMatrix->d);
            				}
            				else {
HXLINE(1918)					scaleY = (scaleY * ::Math_obj::sqrt(((displayMatrix->c * displayMatrix->c) + (displayMatrix->d * displayMatrix->d))));
            				}
            			}
            		}
HXLINE(1928)		Float width = (this->_hx___bounds->width * scaleX);
HXLINE(1929)		Float height = (this->_hx___bounds->height * scaleY);
HXLINE(1931)		bool _hx_tmp2;
HXDLIN(1931)		if (!((width < 1))) {
HXLINE(1931)			_hx_tmp2 = (height < 1);
            		}
            		else {
HXLINE(1931)			_hx_tmp2 = true;
            		}
HXDLIN(1931)		if (_hx_tmp2) {
HXLINE(1933)			bool _hx_tmp;
HXDLIN(1933)			if ((this->_hx___width < 1)) {
HXLINE(1933)				_hx_tmp = (this->_hx___height >= 1);
            			}
            			else {
HXLINE(1933)				_hx_tmp = true;
            			}
HXDLIN(1933)			if (_hx_tmp) {
HXLINE(1933)				this->set___dirty(true);
            			}
HXLINE(1934)			this->_hx___width = 0;
HXLINE(1935)			this->_hx___height = 0;
HXLINE(1936)			return;
            		}
HXLINE(1939)		bool _hx_tmp3;
HXDLIN(1939)		if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(1939)			_hx_tmp3 = ::hx::IsGreater( width,::openfl::display::Graphics_obj::maxTextureWidth );
            		}
            		else {
HXLINE(1939)			_hx_tmp3 = false;
            		}
HXDLIN(1939)		if (_hx_tmp3) {
HXLINE(1941)			width = ( (Float)(::openfl::display::Graphics_obj::maxTextureWidth) );
HXLINE(1942)			scaleX = (( (Float)(::openfl::display::Graphics_obj::maxTextureWidth) ) / this->_hx___bounds->width);
            		}
HXLINE(1945)		bool _hx_tmp4;
HXDLIN(1945)		if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(1945)			_hx_tmp4 = ::hx::IsGreater( height,::openfl::display::Graphics_obj::maxTextureHeight );
            		}
            		else {
HXLINE(1945)			_hx_tmp4 = false;
            		}
HXDLIN(1945)		if (_hx_tmp4) {
HXLINE(1947)			height = ( (Float)(::openfl::display::Graphics_obj::maxTextureHeight) );
HXLINE(1948)			scaleY = (( (Float)(::openfl::display::Graphics_obj::maxTextureHeight) ) / this->_hx___bounds->height);
            		}
HXLINE(1951)		Float inverseA;
HXDLIN(1951)		Float inverseD;
HXLINE(1953)		if (::hx::IsNotNull( this->_hx___owner->_hx___worldScale9Grid )) {
HXLINE(1955)			this->_hx___renderTransform->a = pixelRatio;
HXLINE(1956)			this->_hx___renderTransform->d = pixelRatio;
HXLINE(1957)			inverseA = (( (Float)(1) ) / pixelRatio);
HXLINE(1958)			inverseD = (( (Float)(1) ) / pixelRatio);
            		}
            		else {
HXLINE(1962)			this->_hx___renderTransform->a = (width / this->_hx___bounds->width);
HXLINE(1963)			this->_hx___renderTransform->d = (height / this->_hx___bounds->height);
HXLINE(1964)			inverseA = (( (Float)(1) ) / this->_hx___renderTransform->a);
HXLINE(1965)			inverseD = (( (Float)(1) ) / this->_hx___renderTransform->d);
            		}
HXLINE(1969)		this->_hx___worldTransform->a = (inverseA * parentTransform->a);
HXLINE(1970)		this->_hx___worldTransform->b = (inverseA * parentTransform->b);
HXLINE(1971)		this->_hx___worldTransform->c = (inverseD * parentTransform->c);
HXLINE(1972)		this->_hx___worldTransform->d = (inverseD * parentTransform->d);
HXLINE(1974)		Float x = this->_hx___bounds->x;
HXLINE(1975)		Float y = this->_hx___bounds->y;
HXLINE(1976)		Float tx = (((x * parentTransform->a) + (y * parentTransform->c)) + parentTransform->tx);
HXLINE(1977)		Float ty = (((x * parentTransform->b) + (y * parentTransform->d)) + parentTransform->ty);
HXLINE(1984)		if ((pixelRatio > ((Float)1.0))) {
HXLINE(1990)			Float nativePixelSize = (( (Float)(1) ) / pixelRatio);
HXLINE(1991)			this->_hx___worldTransform->tx = (::Math_obj::fround((tx / nativePixelSize)) * nativePixelSize);
HXLINE(1992)			this->_hx___worldTransform->ty = (::Math_obj::fround((ty / nativePixelSize)) * nativePixelSize);
            		}
            		else {
HXLINE(1996)			this->_hx___worldTransform->tx = ::Math_obj::fround(tx);
HXLINE(1997)			this->_hx___worldTransform->ty = ::Math_obj::fround(ty);
            		}
HXLINE(2001)		 ::openfl::geom::Matrix _this = this->_hx___worldTransform;
HXDLIN(2001)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(2001)		Float _hx_tmp5;
HXDLIN(2001)		if ((norm == 0)) {
HXLINE(2001)			_hx_tmp5 = -(_this->tx);
            		}
            		else {
HXLINE(2001)			_hx_tmp5 = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - ty)) + (_this->d * (tx - _this->tx))));
            		}
HXDLIN(2001)		this->_hx___renderTransform->tx = _hx_tmp5;
HXLINE(2002)		 ::openfl::geom::Matrix _this1 = this->_hx___worldTransform;
HXDLIN(2002)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(2002)		Float _hx_tmp6;
HXDLIN(2002)		if ((norm1 == 0)) {
HXLINE(2002)			_hx_tmp6 = -(_this1->ty);
            		}
            		else {
HXLINE(2002)			_hx_tmp6 = ((((Float)1.0) / norm1) * ((_this1->a * (ty - _this1->ty)) + (_this1->b * (_this1->tx - tx))));
            		}
HXDLIN(2002)		this->_hx___renderTransform->ty = _hx_tmp6;
HXLINE(2009)		int newWidth = ::Math_obj::ceil((width + ((Float)1.0)));
HXLINE(2010)		int newHeight = ::Math_obj::ceil((height + ((Float)1.0)));
HXLINE(2013)		bool _hx_tmp7;
HXDLIN(2013)		if ((newWidth == this->_hx___width)) {
HXLINE(2013)			_hx_tmp7 = (newHeight != this->_hx___height);
            		}
            		else {
HXLINE(2013)			_hx_tmp7 = true;
            		}
HXDLIN(2013)		if (_hx_tmp7) {
HXLINE(2016)			this->set___dirty(true);
            		}
HXLINE(2020)		this->_hx___width = newWidth;
HXLINE(2021)		this->_hx___height = newHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___update,(void))

bool Graphics_obj::set___dirty(bool value){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_2026_set___dirty)
HXLINE(2027)		bool _hx_tmp;
HXDLIN(2027)		if (value) {
HXLINE(2027)			_hx_tmp = ::hx::IsNotNull( this->_hx___owner );
            		}
            		else {
HXLINE(2027)			_hx_tmp = false;
            		}
HXDLIN(2027)		if (_hx_tmp) {
HXLINE(2029)			 ::openfl::display::DisplayObject _this = this->_hx___owner;
HXDLIN(2029)			if (!(_this->_hx___renderDirty)) {
HXLINE(2029)				_this->_hx___renderDirty = true;
HXDLIN(2029)				_this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(2032)		if (value) {
HXLINE(2034)			this->_hx___softwareDirty = true;
HXLINE(2035)			this->_hx___hardwareDirty = true;
            		}
HXLINE(2038)		return (this->_hx___dirty = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

 ::Dynamic Graphics_obj::maxTextureHeight;

 ::Dynamic Graphics_obj::maxTextureWidth;


::hx::ObjectPtr< Graphics_obj > Graphics_obj::__new( ::openfl::display::DisplayObject owner) {
	::hx::ObjectPtr< Graphics_obj > __this = new Graphics_obj();
	__this->__construct(owner);
	return __this;
}

::hx::ObjectPtr< Graphics_obj > Graphics_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject owner) {
	Graphics_obj *__this = (Graphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Graphics_obj), true, "openfl.display.Graphics"));
	*(void **)__this = Graphics_obj::_hx_vtable;
	__this->__construct(owner);
	return __this;
}

Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_MARK_MEMBER_NAME(_hx___commands,"__commands");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___hardwareDirty,"__hardwareDirty");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___managed,"__managed");
	HX_MARK_MEMBER_NAME(_hx___positionX,"__positionX");
	HX_MARK_MEMBER_NAME(_hx___positionY,"__positionY");
	HX_MARK_MEMBER_NAME(_hx___quadBuffer,"__quadBuffer");
	HX_MARK_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(_hx___shaderBufferPool,"__shaderBufferPool");
	HX_MARK_MEMBER_NAME(_hx___softwareDirty,"__softwareDirty");
	HX_MARK_MEMBER_NAME(_hx___strokePadding,"__strokePadding");
	HX_MARK_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBuffer,"__triangleIndexBuffer");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBufferCount,"__triangleIndexBufferCount");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBufferData,"__triangleIndexBufferData");
	HX_MARK_MEMBER_NAME(_hx___usedShaderBuffers,"__usedShaderBuffers");
	HX_MARK_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferCount,"__vertexBufferCount");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferCountUVT,"__vertexBufferCountUVT");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferDataUVT,"__vertexBufferDataUVT");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferUVT,"__vertexBufferUVT");
	HX_MARK_MEMBER_NAME(_hx___visible,"__visible");
	HX_MARK_MEMBER_NAME(_hx___owner,"__owner");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_MARK_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(_hx___bitmapScale,"__bitmapScale");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(_hx___commands,"__commands");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___hardwareDirty,"__hardwareDirty");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___managed,"__managed");
	HX_VISIT_MEMBER_NAME(_hx___positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(_hx___positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(_hx___quadBuffer,"__quadBuffer");
	HX_VISIT_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(_hx___shaderBufferPool,"__shaderBufferPool");
	HX_VISIT_MEMBER_NAME(_hx___softwareDirty,"__softwareDirty");
	HX_VISIT_MEMBER_NAME(_hx___strokePadding,"__strokePadding");
	HX_VISIT_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBuffer,"__triangleIndexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBufferCount,"__triangleIndexBufferCount");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBufferData,"__triangleIndexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___usedShaderBuffers,"__usedShaderBuffers");
	HX_VISIT_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferCount,"__vertexBufferCount");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferCountUVT,"__vertexBufferCountUVT");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferDataUVT,"__vertexBufferDataUVT");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferUVT,"__vertexBufferUVT");
	HX_VISIT_MEMBER_NAME(_hx___visible,"__visible");
	HX_VISIT_MEMBER_NAME(_hx___owner,"__owner");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(_hx___bitmapScale,"__bitmapScale");
}

::hx::Val Graphics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		if (HX_FIELD_EQ(inName,"__owner") ) { return ::hx::Val( _hx___owner ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return ::hx::Val( _hx___cairo ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return ::hx::Val( endFill_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return ::hx::Val( _hx___bounds ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return ::hx::Val( _hx___bitmap ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return ::hx::Val( drawPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return ::hx::Val( drawRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { return ::hx::Val( _hx___managed ); }
		if (HX_FIELD_EQ(inName,"__visible") ) { return ::hx::Val( _hx___visible ); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return ::hx::Val( beginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawQuads") ) { return ::hx::Val( drawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { return ::hx::Val( _hx___commands ); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { return ::hx::Val( _hx___positionX ); }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return ::hx::Val( _hx___positionY ); }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return ::hx::Val( drawEllipse_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return ::hx::Val( set___dirty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__quadBuffer") ) { return ::hx::Val( _hx___quadBuffer ); }
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bitmapScale") ) { return ::hx::Val( _hx___bitmapScale ); }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return ::hx::Val( drawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		if (HX_FIELD_EQ(inName,"__findExtrema") ) { return ::hx::Val( _hx___findExtrema_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { return ::hx::Val( _hx___vertexBuffer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__hardwareDirty") ) { return ::hx::Val( _hx___hardwareDirty ); }
		if (HX_FIELD_EQ(inName,"__softwareDirty") ) { return ::hx::Val( _hx___softwareDirty ); }
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { return ::hx::Val( _hx___strokePadding ); }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return ::hx::Val( beginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginShaderFill") ) { return ::hx::Val( beginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return ::hx::Val( lineBitmapStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return ::hx::Val( _hx___inflateBounds_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return ::hx::Val( _hx___transformDirty ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return ::hx::Val( drawGraphicsData_dyn() ); }
		if (HX_FIELD_EQ(inName,"readGraphicsData") ) { return ::hx::Val( readGraphicsData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return ::hx::Val( _hx___renderTransform ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferUVT") ) { return ::hx::Val( _hx___vertexBufferUVT ); }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return ::hx::Val( beginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return ::hx::Val( lineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"overrideBlendMode") ) { return ::hx::Val( overrideBlendMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__shaderBufferPool") ) { return ::hx::Val( _hx___shaderBufferPool ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { return ::hx::Val( _hx___vertexBufferData ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__usedShaderBuffers") ) { return ::hx::Val( _hx___usedShaderBuffers ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferCount") ) { return ::hx::Val( _hx___vertexBufferCount ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return ::hx::Val( drawRoundRectComplex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__triangleIndexBuffer") ) { return ::hx::Val( _hx___triangleIndexBuffer ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferDataUVT") ) { return ::hx::Val( _hx___vertexBufferDataUVT ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__vertexBufferCountUVT") ) { return ::hx::Val( _hx___vertexBufferCountUVT ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferData") ) { return ::hx::Val( _hx___triangleIndexBufferData ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferCount") ) { return ::hx::Val( _hx___triangleIndexBufferCount ); }
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return ::hx::Val( _hx___calculateBezierQuadPoint_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return ::hx::Val( _hx___calculateBezierCubicPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxTextureWidth") ) { outValue = ( maxTextureWidth ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxTextureHeight") ) { outValue = ( maxTextureHeight ); return true; }
	}
	return false;
}

::hx::Val Graphics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___dirty(inValue.Cast< bool >()) );_hx___dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { _hx___owner=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { _hx___cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { _hx___bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { _hx___bitmap=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { _hx___managed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { _hx___visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { _hx___commands=inValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { _hx___positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { _hx___positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__quadBuffer") ) { _hx___quadBuffer=inValue.Cast<  ::openfl::display::_internal::Context3DBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bitmapScale") ) { _hx___bitmapScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { _hx___vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__hardwareDirty") ) { _hx___hardwareDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__softwareDirty") ) { _hx___softwareDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { _hx___strokePadding=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { _hx___transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { _hx___renderTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferUVT") ) { _hx___vertexBufferUVT=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__shaderBufferPool") ) { _hx___shaderBufferPool=inValue.Cast<  ::lime::utils::ObjectPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { _hx___vertexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__usedShaderBuffers") ) { _hx___usedShaderBuffers=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferCount") ) { _hx___vertexBufferCount=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__triangleIndexBuffer") ) { _hx___triangleIndexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferDataUVT") ) { _hx___vertexBufferDataUVT=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__vertexBufferCountUVT") ) { _hx___vertexBufferCountUVT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferData") ) { _hx___triangleIndexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferCount") ) { _hx___triangleIndexBufferCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxTextureWidth") ) { maxTextureWidth=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxTextureHeight") ) { maxTextureHeight=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__bounds",95,f1,4c,0e));
	outFields->push(HX_("__commands",e8,23,8e,61));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__hardwareDirty",2a,75,7d,55));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__managed",3f,e3,0f,95));
	outFields->push(HX_("__positionX",6f,3c,7e,fe));
	outFields->push(HX_("__positionY",70,3c,7e,fe));
	outFields->push(HX_("__quadBuffer",47,34,70,71));
	outFields->push(HX_("__renderTransform",16,b8,95,b1));
	outFields->push(HX_("__shaderBufferPool",a1,80,f9,54));
	outFields->push(HX_("__softwareDirty",4b,4f,75,e7));
	outFields->push(HX_("__strokePadding",d9,6d,da,c4));
	outFields->push(HX_("__transformDirty",26,f6,91,84));
	outFields->push(HX_("__triangleIndexBuffer",aa,c4,11,a7));
	outFields->push(HX_("__triangleIndexBufferCount",c5,c7,43,e4));
	outFields->push(HX_("__triangleIndexBufferData",f4,e3,9e,9c));
	outFields->push(HX_("__usedShaderBuffers",31,ef,1d,4f));
	outFields->push(HX_("__vertexBuffer",a4,32,6a,91));
	outFields->push(HX_("__vertexBufferCount",8b,6f,78,56));
	outFields->push(HX_("__vertexBufferCountUVT",28,64,58,bf));
	outFields->push(HX_("__vertexBufferData",ee,d6,5e,32));
	outFields->push(HX_("__vertexBufferDataUVT",a5,7c,9c,2d));
	outFields->push(HX_("__vertexBufferUVT",af,d6,28,26));
	outFields->push(HX_("__visible",52,c9,72,24));
	outFields->push(HX_("__owner",13,f1,d4,a2));
	outFields->push(HX_("__width",e6,0e,c1,34));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	outFields->push(HX_("__cairo",68,89,77,ab));
	outFields->push(HX_("__bitmap",0f,7b,3b,99));
	outFields->push(HX_("__bitmapScale",fb,4c,9d,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Graphics_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Graphics_obj,_hx___bounds),HX_("__bounds",95,f1,4c,0e)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(int)offsetof(Graphics_obj,_hx___commands),HX_("__commands",e8,23,8e,61)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___hardwareDirty),HX_("__hardwareDirty",2a,75,7d,55)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___managed),HX_("__managed",3f,e3,0f,95)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___positionX),HX_("__positionX",6f,3c,7e,fe)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___positionY),HX_("__positionY",70,3c,7e,fe)},
	{::hx::fsObject /*  ::openfl::display::_internal::Context3DBuffer */ ,(int)offsetof(Graphics_obj,_hx___quadBuffer),HX_("__quadBuffer",47,34,70,71)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Graphics_obj,_hx___renderTransform),HX_("__renderTransform",16,b8,95,b1)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(int)offsetof(Graphics_obj,_hx___shaderBufferPool),HX_("__shaderBufferPool",a1,80,f9,54)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___softwareDirty),HX_("__softwareDirty",4b,4f,75,e7)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___strokePadding),HX_("__strokePadding",d9,6d,da,c4)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___transformDirty),HX_("__transformDirty",26,f6,91,84)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___triangleIndexBuffer),HX_("__triangleIndexBuffer",aa,c4,11,a7)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___triangleIndexBufferCount),HX_("__triangleIndexBufferCount",c5,c7,43,e4)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___triangleIndexBufferData),HX_("__triangleIndexBufferData",f4,e3,9e,9c)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Graphics_obj,_hx___usedShaderBuffers),HX_("__usedShaderBuffers",31,ef,1d,4f)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___vertexBuffer),HX_("__vertexBuffer",a4,32,6a,91)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___vertexBufferCount),HX_("__vertexBufferCount",8b,6f,78,56)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___vertexBufferCountUVT),HX_("__vertexBufferCountUVT",28,64,58,bf)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferData),HX_("__vertexBufferData",ee,d6,5e,32)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferDataUVT),HX_("__vertexBufferDataUVT",a5,7c,9c,2d)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferUVT),HX_("__vertexBufferUVT",af,d6,28,26)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___visible),HX_("__visible",52,c9,72,24)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Graphics_obj,_hx___owner),HX_("__owner",13,f1,d4,a2)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Graphics_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(Graphics_obj,_hx___cairo),HX_("__cairo",68,89,77,ab)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Graphics_obj,_hx___bitmap),HX_("__bitmap",0f,7b,3b,99)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___bitmapScale),HX_("__bitmapScale",fb,4c,9d,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Graphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Graphics_obj::maxTextureHeight,HX_("maxTextureHeight",de,49,6c,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Graphics_obj::maxTextureWidth,HX_("maxTextureWidth",ef,1f,1f,70)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Graphics_obj_sMemberFields[] = {
	HX_("__bounds",95,f1,4c,0e),
	HX_("__commands",e8,23,8e,61),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__hardwareDirty",2a,75,7d,55),
	HX_("__height",07,73,7b,aa),
	HX_("__managed",3f,e3,0f,95),
	HX_("__positionX",6f,3c,7e,fe),
	HX_("__positionY",70,3c,7e,fe),
	HX_("__quadBuffer",47,34,70,71),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__shaderBufferPool",a1,80,f9,54),
	HX_("__softwareDirty",4b,4f,75,e7),
	HX_("__strokePadding",d9,6d,da,c4),
	HX_("__transformDirty",26,f6,91,84),
	HX_("__triangleIndexBuffer",aa,c4,11,a7),
	HX_("__triangleIndexBufferCount",c5,c7,43,e4),
	HX_("__triangleIndexBufferData",f4,e3,9e,9c),
	HX_("__usedShaderBuffers",31,ef,1d,4f),
	HX_("__vertexBuffer",a4,32,6a,91),
	HX_("__vertexBufferCount",8b,6f,78,56),
	HX_("__vertexBufferCountUVT",28,64,58,bf),
	HX_("__vertexBufferData",ee,d6,5e,32),
	HX_("__vertexBufferDataUVT",a5,7c,9c,2d),
	HX_("__vertexBufferUVT",af,d6,28,26),
	HX_("__visible",52,c9,72,24),
	HX_("__owner",13,f1,d4,a2),
	HX_("__width",e6,0e,c1,34),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__cairo",68,89,77,ab),
	HX_("__bitmap",0f,7b,3b,99),
	HX_("__bitmapScale",fb,4c,9d,01),
	HX_("beginBitmapFill",9b,c9,07,6a),
	HX_("beginFill",4c,ad,95,8c),
	HX_("beginGradientFill",5c,3c,03,2e),
	HX_("beginShaderFill",d1,4b,43,67),
	HX_("clear",8d,71,5b,48),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("curveTo",0a,60,88,ce),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawGraphicsData",b9,aa,6e,60),
	HX_("drawPath",c9,8f,bb,5e),
	HX_("drawQuads",28,ab,f2,25),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawRoundRectComplex",e2,43,2c,11),
	HX_("drawTriangles",07,44,68,de),
	HX_("endFill",fe,87,e0,25),
	HX_("lineBitmapStyle",2e,3f,21,45),
	HX_("lineGradientStyle",8d,24,f2,c1),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("lineTo",8f,46,a0,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("overrideBlendMode",68,f8,e9,f9),
	HX_("readGraphicsData",0b,7d,00,87),
	HX_("__calculateBezierCubicPoint",0b,c2,af,f4),
	HX_("__calculateBezierQuadPoint",44,46,e8,5e),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__findExtrema",8f,c8,50,c1),
	HX_("__inflateBounds",3c,6f,ee,b6),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__update",29,f1,34,2f),
	HX_("set___dirty",15,10,96,d4),
	::String(null()) };

static void Graphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::maxTextureHeight,"maxTextureHeight");
	HX_MARK_MEMBER_NAME(Graphics_obj::maxTextureWidth,"maxTextureWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Graphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::maxTextureHeight,"maxTextureHeight");
	HX_VISIT_MEMBER_NAME(Graphics_obj::maxTextureWidth,"maxTextureWidth");
};

#endif

::hx::Class Graphics_obj::__mClass;

static ::String Graphics_obj_sStaticFields[] = {
	HX_("maxTextureHeight",de,49,6c,61),
	HX_("maxTextureWidth",ef,1f,1f,70),
	::String(null())
};

void Graphics_obj::__register()
{
	Graphics_obj _hx_dummy;
	Graphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Graphics",35,67,20,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = Graphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Graphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Graphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Graphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_52_boot)
HXDLIN(  52)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__cairo",68,89,77,ab), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("overrideBlendMode",68,f8,e9,f9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_54_boot)
HXDLIN(  54)		maxTextureHeight = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_55_boot)
HXDLIN(  55)		maxTextureWidth = null();
            	}
}

} // end namespace openfl
} // end namespace display
