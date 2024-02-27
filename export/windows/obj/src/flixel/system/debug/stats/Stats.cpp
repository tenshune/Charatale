#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_Stats
#include <flixel/system/debug/stats/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#include <flixel/system/debug/stats/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton
#include <flixel/system/debug/stats/_Stats/GraphicMaximizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMinimizeButton
#include <flixel/system/debug/stats/_Stats/GraphicMinimizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a2cdb8120663480d_28_new,"flixel.system.debug.stats.Stats","new",0xd5f45fda,"flixel.system.debug.stats.Stats.new","flixel/system/debug/stats/Stats.hx",28,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_164_start,"flixel.system.debug.stats.Stats","start",0x6e8a565c,"flixel.system.debug.stats.Stats.start","flixel/system/debug/stats/Stats.hx",164,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_177_stop,"flixel.system.debug.stats.Stats","stop",0x6338eb48,"flixel.system.debug.stats.Stats.stop","flixel/system/debug/stats/Stats.hx",177,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_184_destroy,"flixel.system.debug.stats.Stats","destroy",0xd5fd0174,"flixel.system.debug.stats.Stats.destroy","flixel/system/debug/stats/Stats.hx",184,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_224_update,"flixel.system.debug.stats.Stats","update",0xcb8c5ecf,"flixel.system.debug.stats.Stats.update","flixel/system/debug/stats/Stats.hx",224,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_299_updateTexts,"flixel.system.debug.stats.Stats","updateTexts",0xc9854dd7,"flixel.system.debug.stats.Stats.updateTexts","flixel/system/debug/stats/Stats.hx",299,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_312_divide,"flixel.system.debug.stats.Stats","divide",0x0399083f,"flixel.system.debug.stats.Stats.divide","flixel/system/debug/stats/Stats.hx",312,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_320_currentFps,"flixel.system.debug.stats.Stats","currentFps",0x555240f6,"flixel.system.debug.stats.Stats.currentFps","flixel/system/debug/stats/Stats.hx",320,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_328_intervalTime,"flixel.system.debug.stats.Stats","intervalTime",0x37fba938,"flixel.system.debug.stats.Stats.intervalTime","flixel/system/debug/stats/Stats.hx",328,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_336_currentMem,"flixel.system.debug.stats.Stats","currentMem",0x55578722,"flixel.system.debug.stats.Stats.currentMem","flixel/system/debug/stats/Stats.hx",336,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_345_flixelUpdate,"flixel.system.debug.stats.Stats","flixelUpdate",0xda311acb,"flixel.system.debug.stats.Stats.flixelUpdate","flixel/system/debug/stats/Stats.hx",345,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_357_flixelDraw,"flixel.system.debug.stats.Stats","flixelDraw",0xdc09ac46,"flixel.system.debug.stats.Stats.flixelDraw","flixel/system/debug/stats/Stats.hx",357,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_369_activeObjects,"flixel.system.debug.stats.Stats","activeObjects",0xffa11fa8,"flixel.system.debug.stats.Stats.activeObjects","flixel/system/debug/stats/Stats.hx",369,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_381_visibleObjects,"flixel.system.debug.stats.Stats","visibleObjects",0x48c7f948,"flixel.system.debug.stats.Stats.visibleObjects","flixel/system/debug/stats/Stats.hx",381,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_393_drawCalls,"flixel.system.debug.stats.Stats","drawCalls",0x25570e6b,"flixel.system.debug.stats.Stats.drawCalls","flixel/system/debug/stats/Stats.hx",393,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_404_onFocus,"flixel.system.debug.stats.Stats","onFocus",0x4c3dd2b3,"flixel.system.debug.stats.Stats.onFocus","flixel/system/debug/stats/Stats.hx",404,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_412_onFocusLost,"flixel.system.debug.stats.Stats","onFocusLost",0x17d97e37,"flixel.system.debug.stats.Stats.onFocusLost","flixel/system/debug/stats/Stats.hx",412,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_416_toggleSize,"flixel.system.debug.stats.Stats","toggleSize",0x72339a3b,"flixel.system.debug.stats.Stats.toggleSize","flixel/system/debug/stats/Stats.hx",416,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_439_updateSize,"flixel.system.debug.stats.Stats","updateSize",0x93323f30,"flixel.system.debug.stats.Stats.updateSize","flixel/system/debug/stats/Stats.hx",439,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_33_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",33,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_38_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",38,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_40_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",40,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_41_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",41,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_42_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",42,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_43_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",43,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_45_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",45,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_46_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",46,0xc15f23b8)
HX_LOCAL_STACK_FRAME(_hx_pos_a2cdb8120663480d_47_boot,"flixel.system.debug.stats.Stats","boot",0x57f87f78,"flixel.system.debug.stats.Stats.boot","flixel/system/debug/stats/Stats.hx",47,0xc15f23b8)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{

void Stats_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a2cdb8120663480d_28_new)
HXLINE(  86)		this->_paused = true;
HXLINE(  84)		this->_activeObjectMarker = 0;
HXLINE(  83)		this->_activeObject = ::Array_obj< int >::__new(0);
HXLINE(  81)		this->_visibleObjectMarker = 0;
HXLINE(  80)		this->_visibleObject = ::Array_obj< int >::__new(0);
HXLINE(  78)		this->_drawCallsMarker = 0;
HXLINE(  77)		this->_drawCalls = ::Array_obj< int >::__new(0);
HXLINE(  75)		this->_drawMarker = 0;
HXLINE(  74)		this->_draw = ::Array_obj< int >::__new(0);
HXLINE(  72)		this->_updateMarker = 0;
HXLINE(  71)		this->_update = ::Array_obj< int >::__new(0);
HXLINE(  69)		this->_updateTimer = 0;
HXLINE(  68)		this->_lastTime = 0;
HXLINE(  66)		this->drawCallsCount = 0;
HXLINE(  65)		this->drawTime = 0;
HXLINE(  64)		this->updateTime = 0;
HXLINE(  63)		this->activeCount = 0;
HXLINE(  62)		this->visibleCount = 0;
HXLINE(  61)		this->flashPlayerFramerate = ((Float)0);
HXLINE(  52)		this->_itvTime = 0;
HXLINE(  95)		super::__construct(HX_("Stats",ff,e5,38,17), ::flixel::_hx_system::debug::GraphicStats_obj::__alloc( HX_CTX ,0,0,null(),null()),0,0,false,null(),null(),null());
HXLINE(  97)		int minHeight;
HXDLIN(  97)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(  97)			minHeight = 200;
            		}
            		else {
HXLINE(  97)			minHeight = 185;
            		}
HXLINE(  98)		this->minSize->y = ( (Float)(minHeight) );
HXLINE(  99)		this->resize(( (Float)(160) ),( (Float)(minHeight) ));
HXLINE( 101)		this->start();
HXLINE( 103)		int gutter = 5;
HXLINE( 104)		int graphX = gutter;
HXLINE( 105)		int graphY = (::Std_obj::_hx_int(this->_header->get_height()) + gutter);
HXLINE( 106)		int graphHeight = 40;
HXLINE( 107)		int graphWidth = 140;
HXLINE( 109)		this->fpsGraph =  ::flixel::_hx_system::debug::stats::StatsGraph_obj::__alloc( HX_CTX ,graphX,graphY,graphWidth,graphHeight,-6881536,HX_("fps",e9,c7,4d,00),null(),null());
HXLINE( 110)		this->addChild(this->fpsGraph);
HXLINE( 111)		this->fpsGraph->maxValue = ( (Float)(::flixel::FlxG_obj::drawFramerate) );
HXLINE( 112)		this->fpsGraph->minValue = ( (Float)(0) );
HXLINE( 114)		graphY = ((::Std_obj::_hx_int(this->_header->get_height()) + graphHeight) + 20);
HXLINE( 116)		this->memoryGraph =  ::flixel::_hx_system::debug::stats::StatsGraph_obj::__alloc( HX_CTX ,graphX,graphY,graphWidth,graphHeight,-16737025,HX_("MB",55,43,00,00),null(),null());
HXLINE( 117)		this->addChild(this->memoryGraph);
HXLINE( 119)		graphY = (::Std_obj::_hx_int(this->_header->get_height()) + gutter);
HXLINE( 120)		graphX = (graphX + ((gutter + graphWidth) + 20));
HXLINE( 121)		graphWidth = (graphWidth - 10);
HXLINE( 123)		this->updateTimeGraph =  ::flixel::_hx_system::debug::stats::StatsGraph_obj::__alloc( HX_CTX ,graphX,graphY,graphWidth,graphHeight,-2305024,HX_("ms",66,5f,00,00),35,HX_("Update",29,fa,99,bb));
HXLINE( 124)		this->updateTimeGraph->set_visible(false);
HXLINE( 125)		this->addChild(this->updateTimeGraph);
HXLINE( 127)		graphY = ((::Std_obj::_hx_int(this->_header->get_height()) + graphHeight) + 20);
HXLINE( 129)		this->drawTimeGraph =  ::flixel::_hx_system::debug::stats::StatsGraph_obj::__alloc( HX_CTX ,graphX,graphY,graphWidth,graphHeight,-5898236,HX_("ms",66,5f,00,00),35,HX_("Draw",24,58,49,2d));
HXLINE( 130)		this->drawTimeGraph->set_visible(false);
HXLINE( 131)		this->addChild(this->drawTimeGraph);
HXLINE( 133)		this->addChild((this->_leftTextField = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(gutter,((graphHeight * 2) + 45),(int)-1426063361,11)));
HXLINE( 134)		this->addChild((this->_rightTextField = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((gutter + 75),((graphHeight * 2) + 45),-1,11)));
HXLINE( 136)		 ::openfl::text::TextField _hx_tmp = this->_leftTextField;
HXDLIN( 136)		_hx_tmp->set_multiline(this->_rightTextField->set_multiline(true));
HXLINE( 138)		::String drawMethod = HX_("",00,00,00,00);
HXLINE( 139)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 141)			drawMethod = HX_("DrawQuads",08,8b,c5,c7);
HXLINE( 147)			drawMethod = ((HX_("\n",0a,00,00,00) + drawMethod) + HX_(":",3a,00,00,00));
            		}
HXLINE( 150)		this->_leftTextField->set_text(((HX_("Update: \nDraw:",9b,e1,5f,a0) + drawMethod) + HX_("\nQuadTrees: \nLists:",e5,f7,d0,58)));
HXLINE( 152)		this->_toggleSizeButton =  ::flixel::_hx_system::ui::FlxSystemButton_obj::__alloc( HX_CTX , ::flixel::_hx_system::debug::stats::_Stats::GraphicMaximizeButton_obj::__alloc( HX_CTX ,0,0,null(),null()),this->toggleSize_dyn(),null());
HXLINE( 153)		this->_toggleSizeButton->set_alpha(((Float)0.8));
HXLINE( 154)		this->addChild(this->_toggleSizeButton);
HXLINE( 156)		this->updateSize();
            	}

Dynamic Stats_obj::__CreateEmpty() { return new Stats_obj; }

void *Stats_obj::_hx_vtable = 0;

Dynamic Stats_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stats_obj > _hx_result = new Stats_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stats_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x38052be8) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x38052be8;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x39123ef8 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Stats_obj::start(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_164_start)
HXDLIN( 164)		if (this->_paused) {
HXLINE( 166)			this->_paused = false;
HXLINE( 167)			this->_itvTime = ::flixel::FlxG_obj::game->ticks;
HXLINE( 168)			this->_frameCount = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,start,(void))

void Stats_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_177_stop)
HXDLIN( 177)		this->_paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,stop,(void))

void Stats_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_184_destroy)
HXLINE( 185)		if (::hx::IsNotNull( this->fpsGraph )) {
HXLINE( 187)			this->fpsGraph->destroy();
HXLINE( 188)			this->removeChild(this->fpsGraph);
            		}
HXLINE( 190)		this->fpsGraph = null();
HXLINE( 192)		if (::hx::IsNotNull( this->memoryGraph )) {
HXLINE( 194)			this->removeChild(this->memoryGraph);
            		}
HXLINE( 196)		this->memoryGraph = null();
HXLINE( 198)		if (::hx::IsNotNull( this->_leftTextField )) {
HXLINE( 200)			this->removeChild(this->_leftTextField);
            		}
HXLINE( 202)		this->_leftTextField = null();
HXLINE( 204)		if (::hx::IsNotNull( this->_rightTextField )) {
HXLINE( 206)			this->removeChild(this->_rightTextField);
            		}
HXLINE( 208)		this->_rightTextField = null();
HXLINE( 210)		this->_update = null();
HXLINE( 211)		this->_draw = null();
HXLINE( 212)		this->_activeObject = null();
HXLINE( 213)		this->_visibleObject = null();
HXLINE( 214)		this->_drawCalls = null();
HXLINE( 216)		this->super::destroy();
            	}


void Stats_obj::update(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_224_update)
HXLINE( 225)		if (this->_paused) {
HXLINE( 227)			return;
            		}
HXLINE( 229)		int time = (this->_currentTime = ::flixel::FlxG_obj::game->ticks);
HXLINE( 231)		int elapsed = (time - this->_lastTime);
HXLINE( 233)		if ((elapsed > 250)) {
HXLINE( 235)			elapsed = 250;
            		}
HXLINE( 237)		this->_lastTime = time;
HXLINE( 239)		 ::flixel::_hx_system::debug::stats::Stats _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)		_hx_tmp->_updateTimer = (_hx_tmp->_updateTimer + elapsed);
HXLINE( 241)		this->_frameCount++;
HXLINE( 243)		if ((this->_updateTimer > 250)) {
HXLINE( 245)			this->fpsGraph->update((( (Float)(this->_frameCount) ) / (( (Float)((this->_currentTime - this->_itvTime)) ) / ( (Float)(1000) ))));
HXLINE( 246)			 ::flixel::_hx_system::debug::stats::StatsGraph _hx_tmp = this->memoryGraph;
HXDLIN( 246)			_hx_tmp->update(((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ( (Float)(1024) )) / ( (Float)(1000) )));
HXLINE( 247)			this->updateTexts();
HXLINE( 249)			this->_frameCount = 0;
HXLINE( 250)			this->_itvTime = this->_currentTime;
HXLINE( 252)			this->updateTime = 0;
HXLINE( 253)			{
HXLINE( 253)				int _g = 0;
HXDLIN( 253)				int _g1 = this->_updateMarker;
HXDLIN( 253)				while((_g < _g1)){
HXLINE( 253)					_g = (_g + 1);
HXDLIN( 253)					int i = (_g - 1);
HXLINE( 255)					 ::flixel::_hx_system::debug::stats::Stats _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)					_hx_tmp->updateTime = (_hx_tmp->updateTime + this->_update->__get(i));
            				}
            			}
HXLINE( 258)			{
HXLINE( 258)				int _g2 = 0;
HXDLIN( 258)				int _g3 = this->_activeObjectMarker;
HXDLIN( 258)				while((_g2 < _g3)){
HXLINE( 258)					_g2 = (_g2 + 1);
HXDLIN( 258)					int i = (_g2 - 1);
HXLINE( 260)					 ::flixel::_hx_system::debug::stats::Stats _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)					_hx_tmp->activeCount = (_hx_tmp->activeCount + this->_activeObject->__get(i));
            				}
            			}
HXLINE( 262)			this->activeCount = ::Std_obj::_hx_int(this->divide(( (Float)(this->activeCount) ),( (Float)(this->_activeObjectMarker) )));
HXLINE( 264)			this->drawTime = 0;
HXLINE( 265)			{
HXLINE( 265)				int _g4 = 0;
HXDLIN( 265)				int _g5 = this->_drawMarker;
HXDLIN( 265)				while((_g4 < _g5)){
HXLINE( 265)					_g4 = (_g4 + 1);
HXDLIN( 265)					int i = (_g4 - 1);
HXLINE( 267)					 ::flixel::_hx_system::debug::stats::Stats _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 267)					_hx_tmp->drawTime = (_hx_tmp->drawTime + this->_draw->__get(i));
            				}
            			}
HXLINE( 270)			{
HXLINE( 270)				int _g6 = 0;
HXDLIN( 270)				int _g7 = this->_visibleObjectMarker;
HXDLIN( 270)				while((_g6 < _g7)){
HXLINE( 270)					_g6 = (_g6 + 1);
HXDLIN( 270)					int i = (_g6 - 1);
HXLINE( 272)					 ::flixel::_hx_system::debug::stats::Stats _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 272)					_hx_tmp->visibleCount = (_hx_tmp->visibleCount + this->_visibleObject->__get(i));
            				}
            			}
HXLINE( 274)			this->visibleCount = ::Std_obj::_hx_int(this->divide(( (Float)(this->visibleCount) ),( (Float)(this->_visibleObjectMarker) )));
HXLINE( 276)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 278)				{
HXLINE( 278)					int _g = 0;
HXDLIN( 278)					int _g1 = this->_drawCallsMarker;
HXDLIN( 278)					while((_g < _g1)){
HXLINE( 278)						_g = (_g + 1);
HXDLIN( 278)						int i = (_g - 1);
HXLINE( 280)						 ::flixel::_hx_system::debug::stats::Stats _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)						_hx_tmp->drawCallsCount = (_hx_tmp->drawCallsCount + this->_drawCalls->__get(i));
            					}
            				}
HXLINE( 282)				this->drawCallsCount = ::Std_obj::_hx_int(this->divide(( (Float)(this->drawCallsCount) ),( (Float)(this->_drawCallsMarker) )));
            			}
HXLINE( 285)			this->_updateMarker = 0;
HXLINE( 286)			this->_drawMarker = 0;
HXLINE( 287)			this->_activeObjectMarker = 0;
HXLINE( 288)			this->_visibleObjectMarker = 0;
HXLINE( 289)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 291)				this->_drawCallsMarker = 0;
            			}
HXLINE( 294)			 ::flixel::_hx_system::debug::stats::Stats _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)			_hx_tmp1->_updateTimer = (_hx_tmp1->_updateTimer - 250);
            		}
            	}


void Stats_obj::updateTexts(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_299_updateTexts)
HXLINE( 300)		Float updTime = ::flixel::math::FlxMath_obj::roundDecimal(this->divide(( (Float)(this->updateTime) ),( (Float)(this->_updateMarker) )),1);
HXLINE( 301)		Float drwTime = ::flixel::math::FlxMath_obj::roundDecimal(this->divide(( (Float)(this->drawTime) ),( (Float)(this->_drawMarker) )),1);
HXLINE( 303)		this->drawTimeGraph->update(drwTime);
HXLINE( 304)		this->updateTimeGraph->update(updTime);
HXLINE( 307)		::String _hx_tmp;
HXDLIN( 307)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 307)			_hx_tmp = (this->drawCallsCount + HX_("\n",0a,00,00,00));
            		}
            		else {
HXLINE( 307)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXLINE( 306)		this->_rightTextField->set_text((((((((((((this->activeCount + HX_(" (",08,1c,00,00)) + updTime) + HX_("ms)\n",a7,a8,63,48)) + this->visibleCount) + HX_(" (",08,1c,00,00)) + drwTime) + HX_("ms)\n",a7,a8,63,48)) + _hx_tmp) + ::flixel::_hx_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES) + HX_("\n",0a,00,00,00)) + ::flixel::_hx_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,updateTexts,(void))

Float Stats_obj::divide(Float f1,Float f2){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_312_divide)
HXDLIN( 312)		if ((f2 == 0)) {
HXDLIN( 312)			return ( (Float)(0) );
            		}
            		else {
HXDLIN( 312)			return (f1 / f2);
            		}
HXDLIN( 312)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stats_obj,divide,return )

Float Stats_obj::currentFps(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_320_currentFps)
HXDLIN( 320)		return (( (Float)(this->_frameCount) ) / (( (Float)((this->_currentTime - this->_itvTime)) ) / ( (Float)(1000) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentFps,return )

Float Stats_obj::intervalTime(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_328_intervalTime)
HXDLIN( 328)		return (( (Float)((this->_currentTime - this->_itvTime)) ) / ( (Float)(1000) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,intervalTime,return )

Float Stats_obj::currentMem(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_336_currentMem)
HXDLIN( 336)		return ((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ( (Float)(1024) )) / ( (Float)(1000) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentMem,return )

void Stats_obj::flixelUpdate(int Time){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_345_flixelUpdate)
HXLINE( 346)		if (this->_paused) {
HXLINE( 347)			return;
            		}
HXLINE( 348)		this->_update[this->_updateMarker++] = Time;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelUpdate,(void))

void Stats_obj::flixelDraw(int Time){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_357_flixelDraw)
HXLINE( 358)		if (this->_paused) {
HXLINE( 359)			return;
            		}
HXLINE( 360)		this->_draw[this->_drawMarker++] = Time;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelDraw,(void))

void Stats_obj::activeObjects(int Count){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_369_activeObjects)
HXLINE( 370)		if (this->_paused) {
HXLINE( 371)			return;
            		}
HXLINE( 372)		this->_activeObject[this->_activeObjectMarker++] = Count;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,activeObjects,(void))

void Stats_obj::visibleObjects(int Count){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_381_visibleObjects)
HXLINE( 382)		if (this->_paused) {
HXLINE( 383)			return;
            		}
HXLINE( 384)		this->_visibleObject[this->_visibleObjectMarker++] = Count;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,visibleObjects,(void))

void Stats_obj::drawCalls(int Drawcalls){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_393_drawCalls)
HXLINE( 394)		if (this->_paused) {
HXLINE( 395)			return;
            		}
HXLINE( 396)		this->_drawCalls[this->_drawCallsMarker++] = Drawcalls;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,drawCalls,(void))

void Stats_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_404_onFocus)
HXDLIN( 404)		this->_paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocus,(void))

void Stats_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_412_onFocusLost)
HXDLIN( 412)		this->_paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocusLost,(void))

void Stats_obj::toggleSize(){
            	HX_GC_STACKFRAME(&_hx_pos_a2cdb8120663480d_416_toggleSize)
HXLINE( 417)		if ((this->_width == 160)) {
HXLINE( 419)			this->resize(( (Float)(320) ),( (Float)(this->_height) ));
HXLINE( 420)			this->set_x((this->get_x() - ( (Float)(160) )));
HXLINE( 421)			this->drawTimeGraph->set_visible(true);
HXLINE( 422)			this->updateTimeGraph->set_visible(true);
HXLINE( 423)			 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->_toggleSizeButton;
HXDLIN( 423)			_hx_tmp->changeIcon( ::flixel::_hx_system::debug::stats::_Stats::GraphicMinimizeButton_obj::__alloc( HX_CTX ,0,0,null(),null()));
            		}
            		else {
HXLINE( 427)			this->resize(( (Float)(160) ),( (Float)(this->_height) ));
HXLINE( 428)			this->set_x((this->get_x() + 160));
HXLINE( 429)			this->drawTimeGraph->set_visible(false);
HXLINE( 430)			this->updateTimeGraph->set_visible(false);
HXLINE( 431)			 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->_toggleSizeButton;
HXDLIN( 431)			_hx_tmp->changeIcon( ::flixel::_hx_system::debug::stats::_Stats::GraphicMaximizeButton_obj::__alloc( HX_CTX ,0,0,null(),null()));
            		}
HXLINE( 434)		this->updateSize();
HXLINE( 435)		this->bound();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,toggleSize,(void))

void Stats_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_439_updateSize)
HXLINE( 440)		this->super::updateSize();
HXLINE( 441)		if (::hx::IsNotNull( this->_toggleSizeButton )) {
HXLINE( 443)			 ::flixel::_hx_system::ui::FlxSystemButton _hx_tmp = this->_toggleSizeButton;
HXDLIN( 443)			int _hx_tmp1 = this->_width;
HXDLIN( 443)			_hx_tmp->set_x(((( (Float)(_hx_tmp1) ) - this->_toggleSizeButton->get_width()) - ( (Float)(3) )));
HXLINE( 444)			this->_toggleSizeButton->set_y(( (Float)(3) ));
            		}
            	}


int Stats_obj::UPDATE_DELAY;

int Stats_obj::INITIAL_WIDTH;

int Stats_obj::FPS_COLOR;

int Stats_obj::MEMORY_COLOR;

int Stats_obj::DRAW_TIME_COLOR;

int Stats_obj::UPDATE_TIME_COLOR;

int Stats_obj::LABEL_COLOR;

int Stats_obj::TEXT_SIZE;

int Stats_obj::DECIMALS;


::hx::ObjectPtr< Stats_obj > Stats_obj::__new() {
	::hx::ObjectPtr< Stats_obj > __this = new Stats_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Stats_obj > Stats_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Stats_obj *__this = (Stats_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stats_obj), true, "flixel.system.debug.stats.Stats"));
	*(void **)__this = Stats_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Stats_obj::Stats_obj()
{
}

void Stats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stats);
	HX_MARK_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_MARK_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_MARK_MEMBER_NAME(_itvTime,"_itvTime");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_MARK_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_MARK_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_MARK_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_MARK_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_MARK_MEMBER_NAME(visibleCount,"visibleCount");
	HX_MARK_MEMBER_NAME(activeCount,"activeCount");
	HX_MARK_MEMBER_NAME(updateTime,"updateTime");
	HX_MARK_MEMBER_NAME(drawTime,"drawTime");
	HX_MARK_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_MARK_MEMBER_NAME(_lastTime,"_lastTime");
	HX_MARK_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_MARK_MEMBER_NAME(_draw,"_draw");
	HX_MARK_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_MARK_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_MARK_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_MARK_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_MARK_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_MARK_MEMBER_NAME(_activeObject,"_activeObject");
	HX_MARK_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_VISIT_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_VISIT_MEMBER_NAME(_itvTime,"_itvTime");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_VISIT_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_VISIT_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_VISIT_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_VISIT_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_VISIT_MEMBER_NAME(visibleCount,"visibleCount");
	HX_VISIT_MEMBER_NAME(activeCount,"activeCount");
	HX_VISIT_MEMBER_NAME(updateTime,"updateTime");
	HX_VISIT_MEMBER_NAME(drawTime,"drawTime");
	HX_VISIT_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_VISIT_MEMBER_NAME(_lastTime,"_lastTime");
	HX_VISIT_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_VISIT_MEMBER_NAME(_draw,"_draw");
	HX_VISIT_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_VISIT_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_VISIT_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_VISIT_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_VISIT_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_VISIT_MEMBER_NAME(_activeObject,"_activeObject");
	HX_VISIT_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Stats_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { return ::hx::Val( _draw ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"divide") ) { return ::hx::Val( divide_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return ::hx::Val( _update ); }
		if (HX_FIELD_EQ(inName,"_paused") ) { return ::hx::Val( _paused ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { return ::hx::Val( _itvTime ); }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { return ::hx::Val( fpsGraph ); }
		if (HX_FIELD_EQ(inName,"drawTime") ) { return ::hx::Val( drawTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastTime") ) { return ::hx::Val( _lastTime ); }
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return ::hx::Val( drawCalls_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { return ::hx::Val( updateTime ); }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { return ::hx::Val( _drawCalls ); }
		if (HX_FIELD_EQ(inName,"currentFps") ) { return ::hx::Val( currentFps_dyn() ); }
		if (HX_FIELD_EQ(inName,"currentMem") ) { return ::hx::Val( currentMem_dyn() ); }
		if (HX_FIELD_EQ(inName,"flixelDraw") ) { return ::hx::Val( flixelDraw_dyn() ); }
		if (HX_FIELD_EQ(inName,"toggleSize") ) { return ::hx::Val( toggleSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return ::hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return ::hx::Val( _frameCount ); }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { return ::hx::Val( memoryGraph ); }
		if (HX_FIELD_EQ(inName,"activeCount") ) { return ::hx::Val( activeCount ); }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { return ::hx::Val( _drawMarker ); }
		if (HX_FIELD_EQ(inName,"updateTexts") ) { return ::hx::Val( updateTexts_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return ::hx::Val( _currentTime ); }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { return ::hx::Val( visibleCount ); }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { return ::hx::Val( _updateTimer ); }
		if (HX_FIELD_EQ(inName,"intervalTime") ) { return ::hx::Val( intervalTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"flixelUpdate") ) { return ::hx::Val( flixelUpdate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { return ::hx::Val( drawTimeGraph ); }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { return ::hx::Val( _updateMarker ); }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { return ::hx::Val( _activeObject ); }
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return ::hx::Val( activeObjects_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { return ::hx::Val( _leftTextField ); }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { return ::hx::Val( drawCallsCount ); }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { return ::hx::Val( _visibleObject ); }
		if (HX_FIELD_EQ(inName,"visibleObjects") ) { return ::hx::Val( visibleObjects_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { return ::hx::Val( _rightTextField ); }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { return ::hx::Val( updateTimeGraph ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { return ::hx::Val( _drawCallsMarker ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { return ::hx::Val( _toggleSizeButton ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { return ::hx::Val( _activeObjectMarker ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { return ::hx::Val( flashPlayerFramerate ); }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { return ::hx::Val( _visibleObjectMarker ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Stats_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { _draw=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { _itvTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { fpsGraph=inValue.Cast<  ::flixel::_hx_system::debug::stats::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { drawTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastTime") ) { _lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { updateTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { _drawCalls=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { memoryGraph=inValue.Cast<  ::flixel::_hx_system::debug::stats::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { activeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { _drawMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { visibleCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { _updateTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { drawTimeGraph=inValue.Cast<  ::flixel::_hx_system::debug::stats::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { _updateMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { _activeObject=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { _leftTextField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { drawCallsCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { _visibleObject=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { _rightTextField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { updateTimeGraph=inValue.Cast<  ::flixel::_hx_system::debug::stats::StatsGraph >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { _drawCallsMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { _toggleSizeButton=inValue.Cast<  ::flixel::_hx_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { _activeObjectMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { flashPlayerFramerate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { _visibleObjectMarker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_leftTextField",07,34,be,51));
	outFields->push(HX_("_rightTextField",f0,e5,f5,c1));
	outFields->push(HX_("_itvTime",59,55,8a,d2));
	outFields->push(HX_("_frameCount",81,46,13,00));
	outFields->push(HX_("_currentTime",e7,52,98,eb));
	outFields->push(HX_("fpsGraph",a5,6a,9f,23));
	outFields->push(HX_("memoryGraph",8d,30,93,6c));
	outFields->push(HX_("drawTimeGraph",5d,f7,01,ae));
	outFields->push(HX_("updateTimeGraph",b8,b4,65,9e));
	outFields->push(HX_("flashPlayerFramerate",1c,9e,c7,3e));
	outFields->push(HX_("visibleCount",fd,5e,e8,bf));
	outFields->push(HX_("activeCount",29,45,a8,a6));
	outFields->push(HX_("updateTime",b6,b6,b1,05));
	outFields->push(HX_("drawTime",31,76,66,61));
	outFields->push(HX_("drawCallsCount",9e,73,40,b2));
	outFields->push(HX_("_lastTime",e2,dc,db,27));
	outFields->push(HX_("_updateTimer",fd,d6,d7,5b));
	outFields->push(HX_("_update",a8,97,7c,f5));
	outFields->push(HX_("_updateMarker",82,af,a2,9c));
	outFields->push(HX_("_draw",e3,47,81,f5));
	outFields->push(HX_("_drawMarker",fd,bd,bd,ce));
	outFields->push(HX_("_drawCalls",32,23,c9,64));
	outFields->push(HX_("_drawCallsMarker",8c,7e,fb,1e));
	outFields->push(HX_("_visibleObject",12,3d,83,b2));
	outFields->push(HX_("_visibleObjectMarker",6c,40,96,6f));
	outFields->push(HX_("_activeObject",04,60,c9,57));
	outFields->push(HX_("_activeObjectMarker",de,24,6c,76));
	outFields->push(HX_("_paused",4d,52,fb,5d));
	outFields->push(HX_("_toggleSizeButton",a6,70,b9,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stats_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Stats_obj,_leftTextField),HX_("_leftTextField",07,34,be,51)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Stats_obj,_rightTextField),HX_("_rightTextField",f0,e5,f5,c1)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_itvTime),HX_("_itvTime",59,55,8a,d2)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_frameCount),HX_("_frameCount",81,46,13,00)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_currentTime),HX_("_currentTime",e7,52,98,eb)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::stats::StatsGraph */ ,(int)offsetof(Stats_obj,fpsGraph),HX_("fpsGraph",a5,6a,9f,23)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::stats::StatsGraph */ ,(int)offsetof(Stats_obj,memoryGraph),HX_("memoryGraph",8d,30,93,6c)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::stats::StatsGraph */ ,(int)offsetof(Stats_obj,drawTimeGraph),HX_("drawTimeGraph",5d,f7,01,ae)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::stats::StatsGraph */ ,(int)offsetof(Stats_obj,updateTimeGraph),HX_("updateTimeGraph",b8,b4,65,9e)},
	{::hx::fsFloat,(int)offsetof(Stats_obj,flashPlayerFramerate),HX_("flashPlayerFramerate",1c,9e,c7,3e)},
	{::hx::fsInt,(int)offsetof(Stats_obj,visibleCount),HX_("visibleCount",fd,5e,e8,bf)},
	{::hx::fsInt,(int)offsetof(Stats_obj,activeCount),HX_("activeCount",29,45,a8,a6)},
	{::hx::fsInt,(int)offsetof(Stats_obj,updateTime),HX_("updateTime",b6,b6,b1,05)},
	{::hx::fsInt,(int)offsetof(Stats_obj,drawTime),HX_("drawTime",31,76,66,61)},
	{::hx::fsInt,(int)offsetof(Stats_obj,drawCallsCount),HX_("drawCallsCount",9e,73,40,b2)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_lastTime),HX_("_lastTime",e2,dc,db,27)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_updateTimer),HX_("_updateTimer",fd,d6,d7,5b)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Stats_obj,_update),HX_("_update",a8,97,7c,f5)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_updateMarker),HX_("_updateMarker",82,af,a2,9c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Stats_obj,_draw),HX_("_draw",e3,47,81,f5)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_drawMarker),HX_("_drawMarker",fd,bd,bd,ce)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Stats_obj,_drawCalls),HX_("_drawCalls",32,23,c9,64)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_drawCallsMarker),HX_("_drawCallsMarker",8c,7e,fb,1e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Stats_obj,_visibleObject),HX_("_visibleObject",12,3d,83,b2)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_visibleObjectMarker),HX_("_visibleObjectMarker",6c,40,96,6f)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Stats_obj,_activeObject),HX_("_activeObject",04,60,c9,57)},
	{::hx::fsInt,(int)offsetof(Stats_obj,_activeObjectMarker),HX_("_activeObjectMarker",de,24,6c,76)},
	{::hx::fsBool,(int)offsetof(Stats_obj,_paused),HX_("_paused",4d,52,fb,5d)},
	{::hx::fsObject /*  ::flixel::_hx_system::ui::FlxSystemButton */ ,(int)offsetof(Stats_obj,_toggleSizeButton),HX_("_toggleSizeButton",a6,70,b9,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Stats_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Stats_obj::UPDATE_DELAY,HX_("UPDATE_DELAY",6d,35,f7,07)},
	{::hx::fsInt,(void *) &Stats_obj::INITIAL_WIDTH,HX_("INITIAL_WIDTH",8b,7c,50,0d)},
	{::hx::fsInt,(void *) &Stats_obj::FPS_COLOR,HX_("FPS_COLOR",0d,d1,6d,cd)},
	{::hx::fsInt,(void *) &Stats_obj::MEMORY_COLOR,HX_("MEMORY_COLOR",45,1e,bd,fc)},
	{::hx::fsInt,(void *) &Stats_obj::DRAW_TIME_COLOR,HX_("DRAW_TIME_COLOR",ec,9b,c0,3b)},
	{::hx::fsInt,(void *) &Stats_obj::UPDATE_TIME_COLOR,HX_("UPDATE_TIME_COLOR",07,42,13,96)},
	{::hx::fsInt,(void *) &Stats_obj::LABEL_COLOR,HX_("LABEL_COLOR",58,4d,57,fe)},
	{::hx::fsInt,(void *) &Stats_obj::TEXT_SIZE,HX_("TEXT_SIZE",d3,dc,4f,6d)},
	{::hx::fsInt,(void *) &Stats_obj::DECIMALS,HX_("DECIMALS",c2,da,ef,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Stats_obj_sMemberFields[] = {
	HX_("_leftTextField",07,34,be,51),
	HX_("_rightTextField",f0,e5,f5,c1),
	HX_("_itvTime",59,55,8a,d2),
	HX_("_frameCount",81,46,13,00),
	HX_("_currentTime",e7,52,98,eb),
	HX_("fpsGraph",a5,6a,9f,23),
	HX_("memoryGraph",8d,30,93,6c),
	HX_("drawTimeGraph",5d,f7,01,ae),
	HX_("updateTimeGraph",b8,b4,65,9e),
	HX_("flashPlayerFramerate",1c,9e,c7,3e),
	HX_("visibleCount",fd,5e,e8,bf),
	HX_("activeCount",29,45,a8,a6),
	HX_("updateTime",b6,b6,b1,05),
	HX_("drawTime",31,76,66,61),
	HX_("drawCallsCount",9e,73,40,b2),
	HX_("_lastTime",e2,dc,db,27),
	HX_("_updateTimer",fd,d6,d7,5b),
	HX_("_update",a8,97,7c,f5),
	HX_("_updateMarker",82,af,a2,9c),
	HX_("_draw",e3,47,81,f5),
	HX_("_drawMarker",fd,bd,bd,ce),
	HX_("_drawCalls",32,23,c9,64),
	HX_("_drawCallsMarker",8c,7e,fb,1e),
	HX_("_visibleObject",12,3d,83,b2),
	HX_("_visibleObjectMarker",6c,40,96,6f),
	HX_("_activeObject",04,60,c9,57),
	HX_("_activeObjectMarker",de,24,6c,76),
	HX_("_paused",4d,52,fb,5d),
	HX_("_toggleSizeButton",a6,70,b9,01),
	HX_("start",62,74,0b,84),
	HX_("stop",02,f0,5b,4c),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateTexts",5d,b4,31,f3),
	HX_("divide",79,2f,12,bf),
	HX_("currentFps",30,8d,28,c7),
	HX_("intervalTime",f2,f7,28,85),
	HX_("currentMem",5c,d3,2d,c7),
	HX_("flixelUpdate",85,69,5e,27),
	HX_("flixelDraw",80,f8,df,4d),
	HX_("activeObjects",ae,b3,18,3a),
	HX_("visibleObjects",82,ea,f1,36),
	HX_("drawCalls",71,a7,26,09),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("toggleSize",75,e6,09,e4),
	HX_("updateSize",6a,8b,08,05),
	::String(null()) };

static void Stats_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_MARK_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_MARK_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_MARK_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stats_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_VISIT_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_VISIT_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_VISIT_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#endif

::hx::Class Stats_obj::__mClass;

static ::String Stats_obj_sStaticFields[] = {
	HX_("UPDATE_DELAY",6d,35,f7,07),
	HX_("INITIAL_WIDTH",8b,7c,50,0d),
	HX_("FPS_COLOR",0d,d1,6d,cd),
	HX_("MEMORY_COLOR",45,1e,bd,fc),
	HX_("DRAW_TIME_COLOR",ec,9b,c0,3b),
	HX_("UPDATE_TIME_COLOR",07,42,13,96),
	HX_("LABEL_COLOR",58,4d,57,fe),
	HX_("TEXT_SIZE",d3,dc,4f,6d),
	HX_("DECIMALS",c2,da,ef,6b),
	::String(null())
};

void Stats_obj::__register()
{
	Stats_obj _hx_dummy;
	Stats_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.stats.Stats",e8,2a,65,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stats_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stats_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stats_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stats_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stats_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stats_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stats_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Stats_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_33_boot)
HXDLIN(  33)		UPDATE_DELAY = 250;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_38_boot)
HXDLIN(  38)		INITIAL_WIDTH = 160;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_40_boot)
HXDLIN(  40)		FPS_COLOR = -6881536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_41_boot)
HXDLIN(  41)		MEMORY_COLOR = -16737025;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_42_boot)
HXDLIN(  42)		DRAW_TIME_COLOR = -5898236;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_43_boot)
HXDLIN(  43)		UPDATE_TIME_COLOR = -2305024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_45_boot)
HXDLIN(  45)		LABEL_COLOR = (int)-1426063361;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_46_boot)
HXDLIN(  46)		TEXT_SIZE = 11;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a2cdb8120663480d_47_boot)
HXDLIN(  47)		DECIMALS = 1;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
