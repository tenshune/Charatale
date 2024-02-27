#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPath
#include <flixel/path/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTypedTilemap
#include <flixel/tile/FlxTypedTilemap.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60725c8fd849460b_191_new,"flixel.system.debug.watch.Tracker","new",0xf6eed663,"flixel.system.debug.watch.Tracker.new","flixel/system/debug/watch/Tracker.hx",191,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_214_destroy,"flixel.system.debug.watch.Tracker","destroy",0x264ff07d,"flixel.system.debug.watch.Tracker.destroy","flixel/system/debug/watch/Tracker.hx",214,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_223_findProfileByClass,"flixel.system.debug.watch.Tracker","findProfileByClass",0x1c23782e,"flixel.system.debug.watch.Tracker.findProfileByClass","flixel/system/debug/watch/Tracker.hx",223,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_233_initWatchEntries,"flixel.system.debug.watch.Tracker","initWatchEntries",0xac4e4a0e,"flixel.system.debug.watch.Tracker.initWatchEntries","flixel/system/debug/watch/Tracker.hx",233,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_241_addExtensions,"flixel.system.debug.watch.Tracker","addExtensions",0x13338d58,"flixel.system.debug.watch.Tracker.addExtensions","flixel/system/debug/watch/Tracker.hx",241,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_260_addVariables,"flixel.system.debug.watch.Tracker","addVariables",0x5f6aa5f3,"flixel.system.debug.watch.Tracker.addVariables","flixel/system/debug/watch/Tracker.hx",260,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_55_addProfile,"flixel.system.debug.watch.Tracker","addProfile",0x17dc8565,"flixel.system.debug.watch.Tracker.addProfile","flixel/system/debug/watch/Tracker.hx",55,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_63_findProfile,"flixel.system.debug.watch.Tracker","findProfile",0x9e194af3,"flixel.system.debug.watch.Tracker.findProfile","flixel/system/debug/watch/Tracker.hx",63,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_76_onStateSwitch,"flixel.system.debug.watch.Tracker","onStateSwitch",0xc2667bc9,"flixel.system.debug.watch.Tracker.onStateSwitch","flixel/system/debug/watch/Tracker.hx",76,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_81_initProfiles,"flixel.system.debug.watch.Tracker","initProfiles",0x6f40e3f7,"flixel.system.debug.watch.Tracker.initProfiles","flixel/system/debug/watch/Tracker.hx",81,0x14368dcf)
static const ::String _hx_array_data_fdcd68f1_14[] = {
	HX_("width",06,b6,62,ca),HX_("height",e7,07,4c,02),HX_("worldBounds.x",b1,ea,53,fe),HX_("worldBounds.y",b2,ea,53,fe),HX_("worldBounds.width",bf,b0,ca,83),HX_("worldBounds.height",0e,6f,df,83),HX_("worldDivisions",f4,19,32,a0),HX_("updateFramerate",44,b6,d6,9d),HX_("drawFramerate",e9,f8,72,ad),HX_("elapsed",3c,98,c0,ba),HX_("maxElapsed",f8,11,e5,24),HX_("autoPause",07,15,63,9b),HX_("fixedTimestep",6d,87,bc,49),HX_("timeScale",3d,a3,bf,2d),
};
static const ::String _hx_array_data_fdcd68f1_15[] = {
	HX_("x",78,00,00,00),HX_("y",79,00,00,00),
};
static const ::String _hx_array_data_fdcd68f1_16[] = {
	HX_("width",06,b6,62,ca),HX_("height",e7,07,4c,02),
};
static const ::String _hx_array_data_fdcd68f1_17[] = {
	HX_("active",c6,41,46,16),HX_("visible",72,78,24,a3),HX_("alive",cd,63,91,21),HX_("exists",dc,1d,e0,bf),
};
static const ::String _hx_array_data_fdcd68f1_18[] = {
	HX_("velocity",1d,02,fe,1e),HX_("acceleration",40,00,61,9a),HX_("drag",f4,2b,70,42),HX_("angle",d3,43,e2,22),HX_("immovable",0a,27,70,27),
};
static const ::String _hx_array_data_fdcd68f1_19[] = {
	HX_("auto",6f,df,76,40),HX_("widthInTiles",fa,b1,71,d4),HX_("heightInTiles",39,ce,1a,97),HX_("totalTiles",21,f3,d5,16),HX_("scale",8a,ce,ce,78),
};
static const ::String _hx_array_data_fdcd68f1_20[] = {
	HX_("frameWidth",99,ea,88,ad),HX_("frameHeight",f4,d3,93,e0),HX_("alpha",5e,a7,96,21),HX_("origin",e6,19,01,4b),HX_("offset",93,97,3f,60),HX_("scale",8a,ce,ce,78),
};
static const ::String _hx_array_data_fdcd68f1_21[] = {
	HX_("status",32,e7,fb,05),HX_("labelAlphas",69,3c,3c,8d),
};
static const ::String _hx_array_data_fdcd68f1_22[] = {
	HX_("min",92,11,53,00),HX_("max",a4,0a,53,00),HX_("range",bd,a5,1f,e4),HX_("pct",21,53,55,00),HX_("pxPerPercent",90,c3,28,3b),HX_("value",71,7f,b8,31),
};
static const ::String _hx_array_data_fdcd68f1_23[] = {
	HX_("text",ad,cc,f9,4c),HX_("size",c1,a0,53,4c),HX_("font",cf,5d,c0,43),HX_("embedded",8a,19,62,de),HX_("bold",85,81,1b,41),HX_("italic",f0,2e,64,06),HX_("wordWrap",b4,14,db,00),HX_("borderSize",cd,ff,ed,06),HX_("borderStyle",a5,70,96,10),
};
static const ::String _hx_array_data_fdcd68f1_24[] = {
	HX_("length",e6,94,07,9f),HX_("members.length",db,fb,d2,52),HX_("maxSize",85,f9,83,cc),
};
static const ::String _hx_array_data_fdcd68f1_25[] = {
	HX_("persistentUpdate",c0,3b,6b,50),HX_("persistentDraw",fb,35,c6,c2),HX_("destroySubStates",88,5a,28,5e),HX_("bgColor",5e,81,83,f7),
};
static const ::String _hx_array_data_fdcd68f1_26[] = {
	HX_("style",31,a5,1d,84),HX_("followLerp",88,dc,83,d9),HX_("followLead",ad,cd,83,d9),HX_("deadzone",d0,12,55,6d),HX_("bounds",75,86,1d,66),HX_("zoom",13,a3,f8,50),HX_("alpha",5e,a7,96,21),HX_("angle",d3,43,e2,22),
};
static const ::String _hx_array_data_fdcd68f1_27[] = {
	HX_("active",c6,41,46,16),HX_("duration",54,0f,8e,14),HX_("type",ba,f2,08,4d),HX_("percent",c5,aa,da,78),HX_("finished",72,93,0e,95),HX_("scale",8a,ce,ce,78),HX_("backward",e3,db,18,27),HX_("executions",db,f9,36,3c),HX_("startDelay",c1,af,3d,f3),HX_("loopDelay",7f,f6,d2,04),
};
static const ::String _hx_array_data_fdcd68f1_28[] = {
	HX_("speed",87,97,69,81),HX_("angle",d3,43,e2,22),HX_("autoCenter",a4,36,a6,71),HX_("nodeIndex",b0,79,4a,62),HX_("active",c6,41,46,16),HX_("finished",72,93,0e,95),
};
static const ::String _hx_array_data_fdcd68f1_29[] = {
	HX_("time",0d,cc,fc,4c),HX_("loops",8f,f1,f9,78),HX_("active",c6,41,46,16),HX_("finished",72,93,0e,95),HX_("timeLeft",b4,8a,11,e8),HX_("elapsedTime",69,5e,cd,c6),HX_("loopsLeft",36,99,1c,04),HX_("elapsedLoops",b3,6f,a9,95),HX_("progress",ad,f7,2a,86),
};
static const ::String _hx_array_data_fdcd68f1_30[] = {
	HX_("frameIndex",a5,cf,3a,a1),HX_("frameName",18,31,80,36),HX_("name",4b,72,ff,48),HX_("paused",ae,40,84,ef),HX_("finished",72,93,0e,95),HX_("frames",a6,af,85,ac),
};
static const ::String _hx_array_data_fdcd68f1_31[] = {
	HX_("emitting",c1,90,7b,58),HX_("frequency",9c,82,ea,bb),HX_("bounce",88,85,1d,66),
};
static const ::String _hx_array_data_fdcd68f1_32[] = {
	HX_("screenX",6c,c3,36,2a),HX_("screenY",6d,c3,36,2a),HX_("wheel",9b,34,ba,c9),HX_("visible",72,78,24,a3),HX_("useSystemCursor",0c,3e,de,f9),HX_("pressed",a2,d2,e6,39),HX_("justPressed",d6,0d,a7,f2),HX_("justReleased",09,1b,5b,66),HX_("pressedMiddle",97,bf,58,17),HX_("justPressedMiddle",cb,59,d3,c4),HX_("justReleasedMiddle",3e,cf,55,d7),HX_("pressedRight",da,dd,81,58),HX_("justPressedRight",26,86,9a,c0),HX_("justReleasedRight",13,c0,4a,68),
};
static const ::String _hx_array_data_fdcd68f1_33[] = {
	HX_("id",db,5b,00,00),HX_("deadZone",f0,3e,2e,58),HX_("hat",5b,3f,4f,00),HX_("ball",ff,e1,10,41),HX_("dpadUp",aa,eb,fa,b8),HX_("dpadDown",71,af,0f,13),HX_("dpadLeft",16,bf,51,18),HX_("dpadRight",ed,81,42,a6),
};
static const ::String _hx_array_data_fdcd68f1_34[] = {
	HX_("ID",db,3f,00,00),HX_("startPosition",2b,03,b6,cf),HX_("endPosition",a4,33,b9,82),HX_("distance",35,93,f9,6b),HX_("angle",d3,43,e2,22),HX_("duration",54,0f,8e,14),
};
static const ::String _hx_array_data_fdcd68f1_35[] = {
	HX_("z",7a,00,00,00),HX_("scaleX",8e,ea,25,3c),HX_("scaleY",8f,ea,25,3c),HX_("mouseX",93,4a,0e,cc),HX_("mouseY",94,4a,0e,cc),HX_("rotationX",5a,59,ef,6c),HX_("rotationY",5b,59,ef,6c),HX_("visible",72,78,24,a3),
};
static const ::String _hx_array_data_fdcd68f1_36[] = {
	HX_("a",61,00,00,00),HX_("b",62,00,00,00),HX_("c",63,00,00,00),HX_("d",64,00,00,00),HX_("tx",84,65,00,00),HX_("ty",85,65,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_49_boot,"flixel.system.debug.watch.Tracker","boot",0x1225c0cf,"flixel.system.debug.watch.Tracker.boot","flixel/system/debug/watch/Tracker.hx",49,0x14368dcf)
HX_LOCAL_STACK_FRAME(_hx_pos_60725c8fd849460b_51_boot,"flixel.system.debug.watch.Tracker","boot",0x1225c0cf,"flixel.system.debug.watch.Tracker.boot","flixel/system/debug/watch/Tracker.hx",51,0x14368dcf)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void Tracker_obj::__construct( ::flixel::_hx_system::debug::watch::TrackerProfile Profile, ::Dynamic ObjectOrClass,::String WindowTitle){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_191_new)
HXLINE( 192)		super::__construct(true);
HXLINE( 194)		::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXLINE( 195)		this->_object = ObjectOrClass;
HXLINE( 196)		::flixel::_hx_system::debug::watch::Tracker_obj::objectsBeingTracked->push(this->_object);
HXLINE( 198)		this->initWatchEntries(Profile);
HXLINE( 200)		 ::openfl::text::TextField _hx_tmp = this->_title;
HXDLIN( 200)		::String _hx_tmp1;
HXDLIN( 200)		if (::hx::IsNull( WindowTitle )) {
HXLINE( 200)			_hx_tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(this->_object,true);
            		}
            		else {
HXLINE( 200)			_hx_tmp1 = WindowTitle;
            		}
HXDLIN( 200)		_hx_tmp->set_text(_hx_tmp1);
HXLINE( 201)		this->set_visible(true);
HXLINE( 203)		this->resize(( (Float)(200) ),(this->entriesContainer->get_height() + 30));
HXLINE( 206)		this->set_x(( (Float)((::flixel::_hx_system::debug::watch::Tracker_obj::_numTrackerWindows * 80)) ));
HXLINE( 207)		this->set_y(( (Float)(((::flixel::_hx_system::debug::watch::Tracker_obj::_numTrackerWindows * 25) + 20)) ));
HXLINE( 208)		::flixel::_hx_system::debug::watch::Tracker_obj::_numTrackerWindows++;
HXLINE( 210)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->close_dyn());
            	}

Dynamic Tracker_obj::__CreateEmpty() { return new Tracker_obj; }

void *Tracker_obj::_hx_vtable = 0;

Dynamic Tracker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tracker_obj > _hx_result = new Tracker_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Tracker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39123ef8) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x39123ef8;
		}
	} else {
		if (inClassId<=(int)0x62db3391) {
			if (inClassId<=(int)0x5ad89704) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x5ad89704;
			} else {
				return inClassId==(int)0x62db3391;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Tracker_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_214_destroy)
HXLINE( 215)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->close_dyn());
HXLINE( 216)		::flixel::_hx_system::debug::watch::Tracker_obj::_numTrackerWindows--;
HXLINE( 217)		::flixel::_hx_system::debug::watch::Tracker_obj::objectsBeingTracked->remove(this->_object);
HXLINE( 218)		this->_object = null();
HXLINE( 219)		this->super::destroy();
            	}


 ::flixel::_hx_system::debug::watch::TrackerProfile Tracker_obj::findProfileByClass(::hx::Class ObjectClass){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_223_findProfileByClass)
HXLINE( 224)		{
HXLINE( 224)			int _g = 0;
HXDLIN( 224)			::Array< ::Dynamic> _g1 = ::flixel::_hx_system::debug::watch::Tracker_obj::profiles;
HXDLIN( 224)			while((_g < _g1->length)){
HXLINE( 224)				 ::flixel::_hx_system::debug::watch::TrackerProfile profile = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::TrackerProfile >();
HXDLIN( 224)				_g = (_g + 1);
HXLINE( 225)				if (::hx::IsPointerEq( profile->objectClass,ObjectClass )) {
HXLINE( 226)					return profile;
            				}
            			}
            		}
HXLINE( 228)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfileByClass,return )

void Tracker_obj::initWatchEntries( ::flixel::_hx_system::debug::watch::TrackerProfile Profile){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_233_initWatchEntries)
HXDLIN( 233)		if (::hx::IsNotNull( Profile )) {
HXLINE( 235)			this->addExtensions(Profile);
HXLINE( 236)			this->addVariables(Profile->variables);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,initWatchEntries,(void))

void Tracker_obj::addExtensions( ::flixel::_hx_system::debug::watch::TrackerProfile Profile){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_241_addExtensions)
HXLINE( 242)		if (::hx::IsNull( Profile->extensions )) {
HXLINE( 243)			return;
            		}
HXLINE( 245)		{
HXLINE( 245)			int _g = 0;
HXDLIN( 245)			::Array< ::Dynamic> _g1 = Profile->extensions;
HXDLIN( 245)			while((_g < _g1->length)){
HXLINE( 245)				::hx::Class extension = _g1->__get(_g).StaticCast< ::hx::Class >();
HXDLIN( 245)				_g = (_g + 1);
HXLINE( 247)				if (::hx::IsNull( extension )) {
HXLINE( 248)					continue;
            				}
HXLINE( 250)				 ::flixel::_hx_system::debug::watch::TrackerProfile extensionProfile = this->findProfileByClass(extension);
HXLINE( 251)				if (::hx::IsNotNull( extensionProfile )) {
HXLINE( 253)					this->addVariables(extensionProfile->variables);
HXLINE( 254)					this->addExtensions(extensionProfile);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addExtensions,(void))

void Tracker_obj::addVariables(::Array< ::String > Variables){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_260_addVariables)
HXLINE( 261)		if (::hx::IsNull( Variables )) {
HXLINE( 262)			return;
            		}
HXLINE( 264)		{
HXLINE( 264)			int _g = 0;
HXDLIN( 264)			while((_g < Variables->length)){
HXLINE( 264)				::String variable = Variables->__get(_g);
HXDLIN( 264)				_g = (_g + 1);
HXLINE( 265)				this->add(variable,::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(this->_object,variable));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addVariables,(void))

::Array< ::Dynamic> Tracker_obj::profiles;

::cpp::VirtualArray Tracker_obj::objectsBeingTracked;

int Tracker_obj::_numTrackerWindows;

void Tracker_obj::addProfile( ::flixel::_hx_system::debug::watch::TrackerProfile Profile){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_55_addProfile)
HXDLIN(  55)		if (::hx::IsNotNull( Profile )) {
HXLINE(  57)			::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXLINE(  58)			::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addProfile,(void))

 ::flixel::_hx_system::debug::watch::TrackerProfile Tracker_obj::findProfile( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_63_findProfile)
HXLINE(  64)		::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXLINE(  66)		 ::flixel::_hx_system::debug::watch::TrackerProfile lastMatchingProfile = null();
HXLINE(  67)		{
HXLINE(  67)			int _g = 0;
HXDLIN(  67)			::Array< ::Dynamic> _g1 = ::flixel::_hx_system::debug::watch::Tracker_obj::profiles;
HXDLIN(  67)			while((_g < _g1->length)){
HXLINE(  67)				 ::flixel::_hx_system::debug::watch::TrackerProfile profile = _g1->__get(_g).StaticCast<  ::flixel::_hx_system::debug::watch::TrackerProfile >();
HXDLIN(  67)				_g = (_g + 1);
HXLINE(  68)				bool _hx_tmp;
HXDLIN(  68)				if (!(::Std_obj::isOfType(Object,profile->objectClass))) {
HXLINE(  68)					_hx_tmp = ::hx::IsPointerEq( Object,profile->objectClass );
            				}
            				else {
HXLINE(  68)					_hx_tmp = true;
            				}
HXDLIN(  68)				if (_hx_tmp) {
HXLINE(  69)					lastMatchingProfile = profile;
            				}
            			}
            		}
HXLINE(  71)		return lastMatchingProfile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfile,return )

void Tracker_obj::onStateSwitch(){
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_76_onStateSwitch)
HXDLIN(  76)		::flixel::_hx_system::debug::watch::Tracker_obj::_numTrackerWindows = 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,onStateSwitch,(void))

void Tracker_obj::initProfiles(){
            	HX_GC_STACKFRAME(&_hx_pos_60725c8fd849460b_81_initProfiles)
HXDLIN(  81)		if (::hx::IsNull( ::flixel::_hx_system::debug::watch::Tracker_obj::profiles )) {
HXLINE(  83)			::flixel::_hx_system::debug::watch::Tracker_obj::profiles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  85)			{
HXLINE(  85)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::FlxG >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_14,14),null());
HXDLIN(  85)				if (::hx::IsNotNull( Profile )) {
HXLINE(  85)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  85)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile);
            				}
            			}
HXLINE(  90)			{
HXLINE(  90)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile1 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::math::FlxBasePoint >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_15,2),null());
HXDLIN(  90)				if (::hx::IsNotNull( Profile1 )) {
HXLINE(  90)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  90)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile1);
            				}
            			}
HXLINE(  91)			{
HXLINE(  91)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile2 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::math::FlxRect >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_16,2),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::math::FlxBasePoint >()));
HXDLIN(  91)				if (::hx::IsNotNull( Profile2 )) {
HXLINE(  91)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  91)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile2);
            				}
            			}
HXLINE(  93)			{
HXLINE(  93)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile3 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::FlxBasic >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_17,4),null());
HXDLIN(  93)				if (::hx::IsNotNull( Profile3 )) {
HXLINE(  93)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  93)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile3);
            				}
            			}
HXLINE(  94)			{
HXLINE(  94)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile4 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::FlxObject >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_18,5),::Array_obj< ::Dynamic>::__new(2)->init(0,::hx::ClassOf< ::flixel::math::FlxRect >())->init(1,::hx::ClassOf< ::flixel::FlxBasic >()));
HXDLIN(  94)				if (::hx::IsNotNull( Profile4 )) {
HXLINE(  94)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  94)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile4);
            				}
            			}
HXLINE(  95)			{
HXLINE(  95)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile5 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::tile::FlxTilemap >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_19,5),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxObject >()));
HXDLIN(  95)				if (::hx::IsNotNull( Profile5 )) {
HXLINE(  95)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  95)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile5);
            				}
            			}
HXLINE(  96)			{
HXLINE(  96)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile6 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::FlxSprite >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_20,6),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxObject >()));
HXDLIN(  96)				if (::hx::IsNotNull( Profile6 )) {
HXLINE(  96)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  96)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile6);
            				}
            			}
HXLINE(  97)			{
HXLINE(  97)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile7 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::ui::FlxTypedButton >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_21,2),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxSprite >()));
HXDLIN(  97)				if (::hx::IsNotNull( Profile7 )) {
HXLINE(  97)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  97)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile7);
            				}
            			}
HXLINE(  98)			{
HXLINE(  98)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile8 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::ui::FlxBar >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_22,6),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxSprite >()));
HXDLIN(  98)				if (::hx::IsNotNull( Profile8 )) {
HXLINE(  98)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  98)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile8);
            				}
            			}
HXLINE(  99)			{
HXLINE(  99)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile9 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::text::FlxText >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_23,9),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxSprite >()));
HXDLIN(  99)				if (::hx::IsNotNull( Profile9 )) {
HXLINE(  99)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN(  99)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile9);
            				}
            			}
HXLINE( 111)			{
HXLINE( 111)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile10 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::group::FlxTypedGroup >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_24,3),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxBasic >()));
HXDLIN( 111)				if (::hx::IsNotNull( Profile10 )) {
HXLINE( 111)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 111)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile10);
            				}
            			}
HXLINE( 112)			{
HXLINE( 112)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile11 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::group::FlxTypedSpriteGroup >(),null(),::Array_obj< ::Dynamic>::__new(2)->init(0,::hx::ClassOf< ::flixel::FlxSprite >())->init(1,::hx::ClassOf< ::flixel::group::FlxTypedGroup >()));
HXDLIN( 112)				if (::hx::IsNotNull( Profile11 )) {
HXLINE( 112)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 112)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile11);
            				}
            			}
HXLINE( 113)			{
HXLINE( 113)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile12 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::FlxState >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_25,4),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::group::FlxTypedGroup >()));
HXDLIN( 113)				if (::hx::IsNotNull( Profile12 )) {
HXLINE( 113)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 113)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile12);
            				}
            			}
HXLINE( 115)			{
HXLINE( 115)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile13 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::FlxCamera >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_26,8),::Array_obj< ::Dynamic>::__new(2)->init(0,::hx::ClassOf< ::flixel::FlxBasic >())->init(1,::hx::ClassOf< ::flixel::math::FlxRect >()));
HXDLIN( 115)				if (::hx::IsNotNull( Profile13 )) {
HXLINE( 115)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 115)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile13);
            				}
            			}
HXLINE( 126)			{
HXLINE( 126)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile14 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::tweens::FlxTween >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_27,10),null());
HXDLIN( 126)				if (::hx::IsNotNull( Profile14 )) {
HXLINE( 126)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 126)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile14);
            				}
            			}
HXLINE( 130)			{
HXLINE( 130)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile15 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::path::FlxPath >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_28,6),null());
HXDLIN( 130)				if (::hx::IsNotNull( Profile15 )) {
HXLINE( 130)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 130)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile15);
            				}
            			}
HXLINE( 131)			{
HXLINE( 131)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile16 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::util::FlxTimer >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_29,9),null());
HXDLIN( 131)				if (::hx::IsNotNull( Profile16 )) {
HXLINE( 131)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 131)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile16);
            				}
            			}
HXLINE( 143)			{
HXLINE( 143)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile17 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::animation::FlxAnimationController >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_30,6),null());
HXDLIN( 143)				if (::hx::IsNotNull( Profile17 )) {
HXLINE( 143)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 143)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile17);
            				}
            			}
HXLINE( 145)			{
HXLINE( 145)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile18 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::effects::particles::FlxTypedEmitter >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_31,3),::Array_obj< ::Dynamic>::__new(2)->init(0,::hx::ClassOf< ::flixel::group::FlxTypedGroup >())->init(1,::hx::ClassOf< ::flixel::math::FlxRect >()));
HXDLIN( 145)				if (::hx::IsNotNull( Profile18 )) {
HXLINE( 145)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 145)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile18);
            				}
            			}
HXLINE( 149)			{
HXLINE( 149)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile19 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::input::mouse::FlxMouse >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_32,14),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::math::FlxBasePoint >()));
HXDLIN( 149)				if (::hx::IsNotNull( Profile19 )) {
HXLINE( 149)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 149)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile19);
            				}
            			}
HXLINE( 174)			{
HXLINE( 174)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile20 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::input::gamepad::FlxGamepad >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_33,8),null());
HXDLIN( 174)				if (::hx::IsNotNull( Profile20 )) {
HXLINE( 174)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 174)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile20);
            				}
            			}
HXLINE( 178)			{
HXLINE( 178)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile21 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::input::FlxSwipe >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_34,6),null());
HXDLIN( 178)				if (::hx::IsNotNull( Profile21 )) {
HXLINE( 178)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 178)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile21);
            				}
            			}
HXLINE( 181)			{
HXLINE( 181)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile22 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::openfl::display::DisplayObject >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_35,8),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::math::FlxRect >()));
HXDLIN( 181)				if (::hx::IsNotNull( Profile22 )) {
HXLINE( 181)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 181)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile22);
            				}
            			}
HXLINE( 182)			{
HXLINE( 182)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile23 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::openfl::geom::Point >(),null(),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::math::FlxBasePoint >()));
HXDLIN( 182)				if (::hx::IsNotNull( Profile23 )) {
HXLINE( 182)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 182)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile23);
            				}
            			}
HXLINE( 183)			{
HXLINE( 183)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile24 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::openfl::geom::Rectangle >(),null(),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::math::FlxRect >()));
HXDLIN( 183)				if (::hx::IsNotNull( Profile24 )) {
HXLINE( 183)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 183)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile24);
            				}
            			}
HXLINE( 184)			{
HXLINE( 184)				 ::flixel::_hx_system::debug::watch::TrackerProfile Profile25 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::openfl::geom::Matrix >(),::Array_obj< ::String >::fromData( _hx_array_data_fdcd68f1_36,6),null());
HXDLIN( 184)				if (::hx::IsNotNull( Profile25 )) {
HXLINE( 184)					::flixel::_hx_system::debug::watch::Tracker_obj::initProfiles();
HXDLIN( 184)					::flixel::_hx_system::debug::watch::Tracker_obj::profiles->push(Profile25);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,initProfiles,(void))


::hx::ObjectPtr< Tracker_obj > Tracker_obj::__new( ::flixel::_hx_system::debug::watch::TrackerProfile Profile, ::Dynamic ObjectOrClass,::String WindowTitle) {
	::hx::ObjectPtr< Tracker_obj > __this = new Tracker_obj();
	__this->__construct(Profile,ObjectOrClass,WindowTitle);
	return __this;
}

::hx::ObjectPtr< Tracker_obj > Tracker_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::watch::TrackerProfile Profile, ::Dynamic ObjectOrClass,::String WindowTitle) {
	Tracker_obj *__this = (Tracker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tracker_obj), true, "flixel.system.debug.watch.Tracker"));
	*(void **)__this = Tracker_obj::_hx_vtable;
	__this->__construct(Profile,ObjectOrClass,WindowTitle);
	return __this;
}

Tracker_obj::Tracker_obj()
{
}

void Tracker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tracker);
	HX_MARK_MEMBER_NAME(_object,"_object");
	 ::flixel::_hx_system::debug::watch::Watch_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tracker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	 ::flixel::_hx_system::debug::watch::Watch_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tracker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return ::hx::Val( _object ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addVariables") ) { return ::hx::Val( addVariables_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExtensions") ) { return ::hx::Val( addExtensions_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initWatchEntries") ) { return ::hx::Val( initWatchEntries_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"findProfileByClass") ) { return ::hx::Val( findProfileByClass_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tracker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { outValue = ( profiles ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addProfile") ) { outValue = addProfile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findProfile") ) { outValue = findProfile_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initProfiles") ) { outValue = initProfiles_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { outValue = onStateSwitch_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { outValue = ( _numTrackerWindows ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { outValue = ( objectsBeingTracked ); return true; }
	}
	return false;
}

::hx::Val Tracker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tracker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { profiles=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { _numTrackerWindows=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { objectsBeingTracked=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void Tracker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_object",5e,90,b6,83));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tracker_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Tracker_obj,_object),HX_("_object",5e,90,b6,83)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Tracker_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Tracker_obj::profiles,HX_("profiles",2a,bb,d6,ec)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Tracker_obj::objectsBeingTracked,HX_("objectsBeingTracked",5f,25,3a,d9)},
	{::hx::fsInt,(void *) &Tracker_obj::_numTrackerWindows,HX_("_numTrackerWindows",52,53,be,06)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Tracker_obj_sMemberFields[] = {
	HX_("_object",5e,90,b6,83),
	HX_("destroy",fa,2c,86,24),
	HX_("findProfileByClass",d1,42,d7,f5),
	HX_("initWatchEntries",f1,15,cd,8f),
	HX_("addExtensions",95,c5,b9,f3),
	HX_("addVariables",56,04,b7,81),
	::String(null()) };

static void Tracker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_MARK_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_MARK_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tracker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_VISIT_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_VISIT_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#endif

::hx::Class Tracker_obj::__mClass;

static ::String Tracker_obj_sStaticFields[] = {
	HX_("profiles",2a,bb,d6,ec),
	HX_("objectsBeingTracked",5f,25,3a,d9),
	HX_("_numTrackerWindows",52,53,be,06),
	HX_("addProfile",08,75,d3,5a),
	HX_("findProfile",f0,09,34,f3),
	HX_("onStateSwitch",06,b4,ec,a2),
	HX_("initProfiles",5a,42,8d,91),
	::String(null())
};

void Tracker_obj::__register()
{
	Tracker_obj _hx_dummy;
	Tracker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.watch.Tracker",f1,68,cd,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tracker_obj::__GetStatic;
	__mClass->mSetStaticField = &Tracker_obj::__SetStatic;
	__mClass->mMarkFunc = Tracker_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tracker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tracker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tracker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tracker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tracker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tracker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Tracker_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_49_boot)
HXDLIN(  49)		objectsBeingTracked = ::cpp::VirtualArray_obj::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_60725c8fd849460b_51_boot)
HXDLIN(  51)		_numTrackerWindows = 0;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
