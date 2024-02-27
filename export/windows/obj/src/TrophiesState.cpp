#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CoolUtils
#include <CoolUtils.h>
#endif
#ifndef INCLUDED_GlobalVariables
#include <GlobalVariables.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TrophiesState
#include <TrophiesState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
#endif
#ifndef INCLUDED_gameJoltAPI_Utils
#include <gameJoltAPI/Utils.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7aa01aa5595e1f80_20_new,"TrophiesState","new",0xafa9e635,"TrophiesState.new","TrophiesState.hx",20,0x0b1e96db)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa01aa5595e1f80_41_create,"TrophiesState","create",0xf4bee447,"TrophiesState.create","TrophiesState.hx",41,0x0b1e96db)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa01aa5595e1f80_96_update,"TrophiesState","update",0xffb50354,"TrophiesState.update","TrophiesState.hx",96,0x0b1e96db)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa01aa5595e1f80_167_Back,"TrophiesState","Back",0xe7e70ad2,"TrophiesState.Back","TrophiesState.hx",167,0x0b1e96db)
HX_LOCAL_STACK_FRAME(_hx_pos_7aa01aa5595e1f80_174_switchA,"TrophiesState","switchA",0x25859022,"TrophiesState.switchA","TrophiesState.hx",174,0x0b1e96db)

void TrophiesState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7aa01aa5595e1f80_20_new)
HXLINE(  37)		this->lang = HX_("",00,00,00,00);
HXLINE(  33)		this->selected = 0;
HXLINE(  31)		this->secret = false;
HXLINE(  30)		this->textToAnimate = HX_("",00,00,00,00);
HXLINE(  20)		super::__construct();
            	}

Dynamic TrophiesState_obj::__CreateEmpty() { return new TrophiesState_obj; }

void *TrophiesState_obj::_hx_vtable = 0;

Dynamic TrophiesState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrophiesState_obj > _hx_result = new TrophiesState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TrophiesState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7882cd1f) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7882cd1f;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void TrophiesState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_7aa01aa5595e1f80_41_create)
HXLINE(  42)		::gameJoltAPI::Utils_obj::set_game_id(::GlobalVariables_obj::gameID);
HXLINE(  43)		::gameJoltAPI::Utils_obj::set_gamePrivKey(::GlobalVariables_obj::gamePrivateKey);
HXLINE(  45)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  46)		this->save->bind(HX_("charatale",71,17,00,4d),null());
HXLINE(  48)		this->lang = ( (::String)(this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic)) );
HXLINE(  50)		this->textToAnimate = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("trophies/welcome",a1,c9,e3,5f)));
HXLINE(  52)		this->title =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,10,10,null());
HXLINE(  53)		this->add(this->title);
HXLINE(  55)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,40,110,null());
HXDLIN(  55)		this->troph1 = _hx_tmp->loadGraphic(::Paths_obj::trophieImg(HX_("logged",82,d6,68,5c)),null(),null(),null(),null(),null());
HXLINE(  56)		this->troph1->scale->set_x(((Float)0.2));
HXLINE(  57)		this->troph1->scale->set_y(((Float)0.2));
HXLINE(  58)		this->troph1->updateHitbox();
HXLINE(  60)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,170,110,null());
HXDLIN(  60)		this->troph2 = _hx_tmp1->loadGraphic(::Paths_obj::trophieImg(HX_("begin",29,ea,55,b0)),null(),null(),null(),null(),null());
HXLINE(  61)		this->troph2->scale->set_x(((Float)0.255));
HXLINE(  62)		this->troph2->scale->set_y(((Float)0.255));
HXLINE(  63)		this->troph2->updateHitbox();
HXLINE(  65)		 ::flixel::FlxSprite backdrop1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->troph1->x - ( (Float)(5) )),(this->troph1->y - ( (Float)(5) )),null());
HXLINE(  66)		int _hx_tmp2 = ::Math_obj::floor((this->troph1->get_width() + 10));
HXDLIN(  66)		backdrop1->makeGraphic(_hx_tmp2,::Math_obj::floor((this->troph1->get_height() + 10)),-1,null(),null());
HXLINE(  68)		 ::flixel::FlxSprite backdrop2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->troph2->x - ( (Float)(5) )),(this->troph2->y - ( (Float)(5) )),null());
HXLINE(  69)		int _hx_tmp3 = ::Math_obj::floor((this->troph2->get_width() + 10));
HXDLIN(  69)		backdrop2->makeGraphic(_hx_tmp3,::Math_obj::floor((this->troph2->get_height() + 10)),-1,null(),null());
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  71)		this->textBox = _hx_tmp4->loadGraphic(::Paths_obj::image(HX_("textBox",5e,13,ba,9e)),null(),null(),null(),null(),null());
HXLINE(  72)		{
HXLINE(  72)			 ::flixel::FlxSprite _this = this->textBox;
HXDLIN(  72)			int axes = 1;
HXDLIN(  72)			bool _hx_tmp5;
HXDLIN(  72)			if ((axes != 1)) {
HXLINE(  72)				_hx_tmp5 = (axes == 17);
            			}
            			else {
HXLINE(  72)				_hx_tmp5 = true;
            			}
HXDLIN(  72)			if (_hx_tmp5) {
HXLINE(  72)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  72)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  72)			bool _hx_tmp6;
HXDLIN(  72)			if ((axes != 16)) {
HXLINE(  72)				_hx_tmp6 = (axes == 17);
            			}
            			else {
HXLINE(  72)				_hx_tmp6 = true;
            			}
HXDLIN(  72)			if (_hx_tmp6) {
HXLINE(  72)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  72)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  73)		 ::flixel::FlxSprite _hx_tmp7 = this->textBox;
HXDLIN(  73)		int _hx_tmp8 = ::flixel::FlxG_obj::height;
HXDLIN(  73)		_hx_tmp7->set_y((( (Float)(_hx_tmp8) ) - this->textBox->get_height()));
HXLINE(  75)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,65,340,520,HX_("Hello, i am a text",e3,c2,85,38),26,null());
HXLINE(  77)		this->super::create();
HXLINE(  79)		this->add(backdrop1);
HXLINE(  80)		this->add(backdrop2);
HXLINE(  81)		this->add(this->troph1);
HXLINE(  82)		this->add(this->troph2);
HXLINE(  83)		this->add(this->textBox);
HXLINE(  84)		this->add(this->text);
HXLINE(  86)		::CoolUtils_obj::animInit();
HXLINE(  87)		this->text->set_text(HX_("",00,00,00,00));
HXLINE(  89)		this->dark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  90)		this->dark->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  91)		this->dark->set_alpha(( (Float)(1) ));
HXLINE(  92)		this->add(this->dark);
            	}


void TrophiesState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7aa01aa5595e1f80_96_update)
HXLINE(  99)		::String texts = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("trophies/welcome",a1,c9,e3,5f)));
HXLINE( 100)		::String texts1 = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("trophies/logged",63,f6,11,58)));
HXLINE( 101)		::String texts2 = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("trophies/begin",68,21,fd,86)));
HXLINE(  98)		::Array< ::String > texts3 = ::Array_obj< ::String >::__new(4)->init(0,texts)->init(1,texts1)->init(2,texts2)->init(3,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("trophies/secret",51,2e,f3,5f))));
HXLINE( 105)		 ::flixel::FlxSprite _hx_tmp = this->title;
HXDLIN( 105)		_hx_tmp->loadGraphic(::Paths_obj::langImg(this->lang.toLowerCase(),HX_("img/trophies",1a,f6,76,81)),null(),null(),null(),null(),null());
HXLINE( 107)		if ((this->dark->alpha > 0)) {
HXLINE( 109)			 ::flixel::FlxSprite fh = this->dark;
HXDLIN( 109)			fh->set_alpha((fh->alpha - ((Float)0.05)));
            		}
            		else {
HXLINE( 111)			if ((this->dark->alpha == 0)) {
HXLINE( 113)				::GlobalVariables_obj::dark = ( (Float)(0) );
            			}
            		}
HXLINE( 115)		this->super::update(elapsed);
HXLINE( 117)		::CoolUtils_obj::textAnimation(this->text,this->textToAnimate,elapsed,null(),null());
HXLINE( 119)		bool _hx_tmp1;
HXDLIN( 119)		bool _hx_tmp2;
HXDLIN( 119)		bool _hx_tmp3;
HXDLIN( 119)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 119)		if (_this->keyManager->checkStatusUnsafe(49,_this->status)) {
HXLINE( 119)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 119)			_hx_tmp3 = _this->keyManager->checkStatusUnsafe(53,_this->status);
            		}
            		else {
HXLINE( 119)			_hx_tmp3 = false;
            		}
HXDLIN( 119)		if (_hx_tmp3) {
HXLINE( 119)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 119)			_hx_tmp2 = _this->keyManager->checkStatusUnsafe(105,_this->status);
            		}
            		else {
HXLINE( 119)			_hx_tmp2 = false;
            		}
HXDLIN( 119)		if (_hx_tmp2) {
HXLINE( 119)			_hx_tmp1 = !(this->secret);
            		}
            		else {
HXLINE( 119)			_hx_tmp1 = false;
            		}
HXDLIN( 119)		if (_hx_tmp1) {
HXLINE( 120)			::CoolUtils_obj::animInit();
HXLINE( 121)			this->text->set_text(HX_("",00,00,00,00));
HXLINE( 122)			this->textToAnimate = texts3->__get(3);
HXLINE( 123)			this->selected = 3;
HXLINE( 124)			this->secret = true;
            		}
            		else {
HXLINE( 126)			bool _hx_tmp;
HXDLIN( 126)			bool _hx_tmp1;
HXDLIN( 126)			bool _hx_tmp2;
HXDLIN( 126)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 126)			if (!(_this->keyManager->checkStatusUnsafe(65,_this->status))) {
HXLINE( 126)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 126)				_hx_tmp2 = !(_this->keyManager->checkStatusUnsafe(83,_this->status));
            			}
            			else {
HXLINE( 126)				_hx_tmp2 = false;
            			}
HXDLIN( 126)			if (_hx_tmp2) {
HXLINE( 126)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 126)				_hx_tmp1 = !(_this->keyManager->checkStatusUnsafe(105,_this->status));
            			}
            			else {
HXLINE( 126)				_hx_tmp1 = false;
            			}
HXDLIN( 126)			if (_hx_tmp1) {
HXLINE( 126)				_hx_tmp = this->secret;
            			}
            			else {
HXLINE( 126)				_hx_tmp = false;
            			}
HXDLIN( 126)			if (_hx_tmp) {
HXLINE( 127)				::CoolUtils_obj::animInit();
HXLINE( 128)				this->text->set_text(HX_("",00,00,00,00));
HXLINE( 129)				this->textToAnimate = texts3->__get(0);
HXLINE( 130)				this->selected = 0;
HXLINE( 131)				this->secret = false;
            			}
            		}
HXLINE( 134)		::Array< ::Dynamic> trophs = ::Array_obj< ::Dynamic>::__new(2)->init(0,this->troph1)->init(1,this->troph2);
HXLINE( 135)		::Array< bool > trophsSave = ::Array_obj< bool >::__new(2)->init(0, ::Dynamic(this->save->data->__Field(HX_("logged",82,d6,68,5c),::hx::paccDynamic)))->init(1, ::Dynamic(this->save->data->__Field(HX_("begin",29,ea,55,b0),::hx::paccDynamic)));
HXLINE( 136)		int i = 0;
HXLINE( 137)		while(true){
HXLINE( 138)			if ((trophsSave->__get(i) == true)) {
HXLINE( 139)				if (::CoolUtils_obj::overlapSprite(trophs->__get(i).StaticCast<  ::flixel::FlxSprite >(),null(),null())) {
HXLINE( 141)					trophs->__get(i).StaticCast<  ::flixel::FlxSprite >()->set_alpha(((Float)0.8));
HXLINE( 142)					if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 144)						::CoolUtils_obj::animInit();
HXLINE( 145)						this->text->set_text(HX_("",00,00,00,00));
HXLINE( 146)						this->textToAnimate = texts3->__get((i + 1));
HXLINE( 147)						this->selected = (i + 1);
HXLINE( 148)						this->secret = false;
            					}
            				}
            				else {
HXLINE( 153)					trophs->__get(i).StaticCast<  ::flixel::FlxSprite >()->set_alpha(( (Float)(1) ));
            				}
            			}
            			else {
HXLINE( 156)				trophs->__get(i).StaticCast<  ::flixel::FlxSprite >()->set_color(5592405);
            			}
HXLINE( 158)			i = (i + 1);
HXLINE( 137)			if (!((i < trophs->length))) {
HXLINE( 137)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 161)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 161)		if (_this1->keyManager->checkStatusUnsafe(27,_this1->status)) {
HXLINE( 162)			this->Back();
            		}
            	}


void TrophiesState_obj::Back(){
            	HX_STACKFRAME(&_hx_pos_7aa01aa5595e1f80_167_Back)
HXLINE( 168)		::flixel::tweens::FlxTween_obj::tween(this->dark, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->switchA_dyn())));
HXLINE( 169)		::GlobalVariables_obj::dark = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrophiesState_obj,Back,(void))

void TrophiesState_obj::switchA( ::flixel::tweens::FlxTween t){
            	HX_GC_STACKFRAME(&_hx_pos_7aa01aa5595e1f80_174_switchA)
HXDLIN( 174)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::MainMenuState_obj::__alloc( HX_CTX ));
HXDLIN( 174)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 174)		bool _hx_tmp;
HXDLIN( 174)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 174)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 174)			_hx_tmp = true;
            		}
HXDLIN( 174)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_7aa01aa5595e1f80_174_switchA)
HXDLIN( 174)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 174)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 174)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 174)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TrophiesState_obj,switchA,(void))


::hx::ObjectPtr< TrophiesState_obj > TrophiesState_obj::__new() {
	::hx::ObjectPtr< TrophiesState_obj > __this = new TrophiesState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TrophiesState_obj > TrophiesState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TrophiesState_obj *__this = (TrophiesState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrophiesState_obj), true, "TrophiesState"));
	*(void **)__this = TrophiesState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TrophiesState_obj::TrophiesState_obj()
{
}

void TrophiesState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrophiesState);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(troph1,"troph1");
	HX_MARK_MEMBER_NAME(troph2,"troph2");
	HX_MARK_MEMBER_NAME(textBox,"textBox");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textToAnimate,"textToAnimate");
	HX_MARK_MEMBER_NAME(secret,"secret");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(dark,"dark");
	HX_MARK_MEMBER_NAME(lang,"lang");
	HX_MARK_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TrophiesState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(troph1,"troph1");
	HX_VISIT_MEMBER_NAME(troph2,"troph2");
	HX_VISIT_MEMBER_NAME(textBox,"textBox");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textToAnimate,"textToAnimate");
	HX_VISIT_MEMBER_NAME(secret,"secret");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(dark,"dark");
	HX_VISIT_MEMBER_NAME(lang,"lang");
	HX_VISIT_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TrophiesState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"dark") ) { return ::hx::Val( dark ); }
		if (HX_FIELD_EQ(inName,"lang") ) { return ::hx::Val( lang ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"Back") ) { return ::hx::Val( Back_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"troph1") ) { return ::hx::Val( troph1 ); }
		if (HX_FIELD_EQ(inName,"troph2") ) { return ::hx::Val( troph2 ); }
		if (HX_FIELD_EQ(inName,"secret") ) { return ::hx::Val( secret ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textBox") ) { return ::hx::Val( textBox ); }
		if (HX_FIELD_EQ(inName,"switchA") ) { return ::hx::Val( switchA_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textToAnimate") ) { return ::hx::Val( textToAnimate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TrophiesState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dark") ) { dark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang") ) { lang=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"troph1") ) { troph1=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"troph2") ) { troph2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secret") ) { secret=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textBox") ) { textBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textToAnimate") ) { textToAnimate=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrophiesState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("troph1",a8,02,c8,4e));
	outFields->push(HX_("troph2",a9,02,c8,4e));
	outFields->push(HX_("textBox",5e,13,ba,9e));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textToAnimate",f9,a7,73,61));
	outFields->push(HX_("secret",70,0e,4a,64));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("dark",76,54,63,42));
	outFields->push(HX_("lang",ee,05,ad,47));
	outFields->push(HX_("save",3d,8b,4d,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrophiesState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TrophiesState_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TrophiesState_obj,troph1),HX_("troph1",a8,02,c8,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TrophiesState_obj,troph2),HX_("troph2",a9,02,c8,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TrophiesState_obj,textBox),HX_("textBox",5e,13,ba,9e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(TrophiesState_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(TrophiesState_obj,textToAnimate),HX_("textToAnimate",f9,a7,73,61)},
	{::hx::fsBool,(int)offsetof(TrophiesState_obj,secret),HX_("secret",70,0e,4a,64)},
	{::hx::fsInt,(int)offsetof(TrophiesState_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TrophiesState_obj,dark),HX_("dark",76,54,63,42)},
	{::hx::fsString,(int)offsetof(TrophiesState_obj,lang),HX_("lang",ee,05,ad,47)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(TrophiesState_obj,save),HX_("save",3d,8b,4d,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrophiesState_obj_sStaticStorageInfo = 0;
#endif

static ::String TrophiesState_obj_sMemberFields[] = {
	HX_("title",98,15,3b,10),
	HX_("troph1",a8,02,c8,4e),
	HX_("troph2",a9,02,c8,4e),
	HX_("textBox",5e,13,ba,9e),
	HX_("text",ad,cc,f9,4c),
	HX_("textToAnimate",f9,a7,73,61),
	HX_("secret",70,0e,4a,64),
	HX_("selected",5b,2a,6d,b1),
	HX_("dark",76,54,63,42),
	HX_("lang",ee,05,ad,47),
	HX_("save",3d,8b,4d,4c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("Back",47,06,ea,2b),
	HX_("switchA",cd,6b,a7,04),
	::String(null()) };

::hx::Class TrophiesState_obj::__mClass;

void TrophiesState_obj::__register()
{
	TrophiesState_obj _hx_dummy;
	TrophiesState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TrophiesState",c3,a7,6b,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrophiesState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrophiesState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrophiesState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrophiesState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

