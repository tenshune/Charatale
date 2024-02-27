#include <hxcpp.h>

#ifndef INCLUDED_GamejoltLogin
#include <GamejoltLogin.h>
#endif
#ifndef INCLUDED_GlobalVariables
#include <GlobalVariables.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_03f5e745aacd5817_14_new,"OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",14,0x342db2ab)
static const ::String _hx_array_data_0f8009f3_1[] = {
	HX_("English",10,8f,83,c6),HX_("Spanish",94,b8,51,66),
};
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_35_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",35,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_81_update,"OptionsState","update",0xf1464724,"OptionsState.update","OptionsState.hx",81,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_165_Back,"OptionsState","Back",0xc7d0baa2,"OptionsState.Back","OptionsState.hx",165,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_172_switchA,"OptionsState","switchA",0x930fa252,"OptionsState.switchA","OptionsState.hx",172,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_176_GJ,"OptionsState","GJ",0x342d95be,"OptionsState.GJ","OptionsState.hx",176,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_183_switchG,"OptionsState","switchG",0x930fa258,"OptionsState.switchG","OptionsState.hx",183,0x342db2ab)

void OptionsState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_14_new)
HXLINE(  30)		this->langSel = 0;
HXLINE(  29)		this->selected = 0;
HXLINE(  23)		this->langs = ::Array_obj< ::String >::fromData( _hx_array_data_0f8009f3_1,2);
HXLINE(  14)		super::__construct();
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2aabc417) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2aabc417;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_35_create)
HXLINE(  36)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  37)		this->save->bind(HX_("charatale",71,17,00,4d),null());
HXLINE(  39)		if (::hx::IsEq( this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic),HX_("English",10,8f,83,c6) )) {
HXLINE(  40)			this->langSel = 0;
            		}
            		else {
HXLINE(  41)			if (::hx::IsEq( this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic),HX_("Spanish",94,b8,51,66) )) {
HXLINE(  42)				this->langSel = 1;
            			}
            		}
HXLINE(  45)		this->options =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-50,10,null());
HXLINE(  46)		this->options->scale->set_x(((Float)0.75));
HXLINE(  47)		this->options->scale->set_y(((Float)0.75));
HXLINE(  48)		this->add(this->options);
HXLINE(  50)		this->langT =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,100,300,HX_("Languages",fb,ac,11,f7),null(),null());
HXLINE(  51)		 ::flixel::text::FlxText _hx_tmp = this->langT;
HXDLIN(  51)		_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),45,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  52)		this->add(this->langT);
HXLINE(  54)		this->langOp =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,150,300,this->langs->__get(this->langSel),null(),null());
HXLINE(  55)		 ::flixel::text::FlxText _hx_tmp1 = this->langOp;
HXDLIN(  55)		_hx_tmp1->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  56)		this->add(this->langOp);
HXLINE(  58)		this->gamejolt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,210,300,HX_("GameJolt",bf,f3,3c,8c),null(),null());
HXLINE(  59)		 ::flixel::text::FlxText _hx_tmp2 = this->gamejolt;
HXDLIN(  59)		_hx_tmp2->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),50,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  60)		this->add(this->gamejolt);
HXLINE(  63)		this->leftSel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,60,((Float)152.5),50,HX_("<",3c,00,00,00),null(),null());
HXLINE(  64)		 ::flixel::text::FlxText _hx_tmp3 = this->leftSel;
HXDLIN(  64)		_hx_tmp3->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),30,-256,null(),null(),null(),null());
HXLINE(  65)		this->add(this->leftSel);
HXLINE(  68)		this->rightSel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,218,((Float)152.5),50,HX_(">",3e,00,00,00),null(),null());
HXLINE(  69)		 ::flixel::text::FlxText _hx_tmp4 = this->rightSel;
HXDLIN(  69)		_hx_tmp4->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),30,-256,null(),null(),null(),null());
HXLINE(  70)		this->add(this->rightSel);
HXLINE(  72)		this->super::create();
HXLINE(  74)		this->dark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  75)		this->dark->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  76)		this->dark->set_alpha(( (Float)(1) ));
HXLINE(  77)		this->add(this->dark);
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_81_update)
HXLINE(  82)		if ((this->dark->alpha > 0)) {
HXLINE(  84)			 ::flixel::FlxSprite fh = this->dark;
HXDLIN(  84)			fh->set_alpha((fh->alpha - ((Float)0.05)));
            		}
            		else {
HXLINE(  86)			if ((this->dark->alpha == 0)) {
HXLINE(  88)				::GlobalVariables_obj::dark = ( (Float)(0) );
            			}
            		}
HXLINE(  91)		if ((this->selected == 0)) {
HXLINE(  93)			 ::flixel::text::FlxText _hx_tmp = this->langOp;
HXDLIN(  93)			_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-256,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  95)			this->leftSel->set_visible(true);
HXLINE(  96)			this->rightSel->set_visible(true);
HXLINE(  97)			this->leftSel->set_x(( (Float)(60) ));
HXLINE(  98)			this->leftSel->set_y(((Float)152.5));
HXLINE(  99)			this->rightSel->set_x(( (Float)(218) ));
HXLINE( 100)			this->rightSel->set_y(((Float)152.5));
HXLINE( 102)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 102)			if (_this->keyManager->checkStatusUnsafe(39,_this->status)) {
HXLINE( 103)				this->langSel++;
            			}
            			else {
HXLINE( 104)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 104)				if (_this->keyManager->checkStatusUnsafe(37,_this->status)) {
HXLINE( 105)					this->langSel--;
            				}
            			}
HXLINE( 108)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 108)			if (_this1->keyManager->checkStatusUnsafe(13,_this1->status)) {
HXLINE( 109)				this->save->data->__SetField(HX_("lang",ee,05,ad,47),this->langs->__get(this->langSel),::hx::paccDynamic);
            			}
            		}
            		else {
HXLINE( 112)			 ::flixel::text::FlxText _hx_tmp = this->langOp;
HXDLIN( 112)			_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-1,HX_("center",d5,25,db,05),null(),null(),null());
            		}
HXLINE( 115)		if ((this->selected == 1)) {
HXLINE( 116)			 ::flixel::text::FlxText _hx_tmp = this->gamejolt;
HXDLIN( 116)			_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),50,-256,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 117)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 117)			if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 118)				this->GJ();
            			}
HXLINE( 120)			this->leftSel->set_visible(false);
HXLINE( 121)			this->rightSel->set_visible(false);
            		}
            		else {
HXLINE( 123)			 ::flixel::text::FlxText _hx_tmp = this->gamejolt;
HXDLIN( 123)			_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),50,-1,HX_("center",d5,25,db,05),null(),null(),null());
            		}
HXLINE( 126)		int maxSel = 1;
HXLINE( 127)		int maxLangs = 2;
HXLINE( 128)		::String lan = ( (::String)(this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic)) );
HXLINE( 130)		::String langS = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(lan.toLowerCase(),HX_("options/langs/eng",23,d3,96,05)));
HXLINE( 129)		::Array< ::String > langS1 = ::Array_obj< ::String >::__new(2)->init(0,langS)->init(1,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(lan.toLowerCase(),HX_("options/langs/esp",87,d7,96,05))));
HXLINE( 134)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 134)		if (_this->keyManager->checkStatusUnsafe(40,_this->status)) {
HXLINE( 135)			this->selected++;
            		}
            		else {
HXLINE( 136)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 136)			if (_this->keyManager->checkStatusUnsafe(38,_this->status)) {
HXLINE( 137)				this->selected--;
            			}
            		}
HXLINE( 140)		if ((this->selected > maxSel)) {
HXLINE( 141)			this->selected = 0;
            		}
            		else {
HXLINE( 142)			if ((this->selected < 0)) {
HXLINE( 143)				this->selected = maxSel;
            			}
            		}
HXLINE( 146)		if ((this->langSel > (maxLangs - 1))) {
HXLINE( 147)			this->langSel = 0;
            		}
            		else {
HXLINE( 148)			if ((this->langSel < 0)) {
HXLINE( 149)				this->langSel = (maxLangs - 1);
            			}
            		}
HXLINE( 151)		this->langOp->set_text(langS1->__get(this->langSel));
HXLINE( 152)		 ::flixel::text::FlxText _hx_tmp = this->langT;
HXDLIN( 152)		_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(lan.toLowerCase(),HX_("options/lang",7f,21,b7,87))));
HXLINE( 154)		 ::flixel::FlxSprite _hx_tmp1 = this->options;
HXDLIN( 154)		_hx_tmp1->loadGraphic(::Paths_obj::langImg(lan.toLowerCase(),HX_("img/options",12,6e,51,fa)),null(),null(),null(),null(),null());
HXLINE( 156)		this->super::update(elapsed);
HXLINE( 158)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 158)		if (_this1->keyManager->checkStatusUnsafe(27,_this1->status)) {
HXLINE( 160)			this->Back();
            		}
            	}


void OptionsState_obj::Back(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_165_Back)
HXLINE( 166)		::flixel::tweens::FlxTween_obj::tween(this->dark, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->switchA_dyn())));
HXLINE( 167)		::GlobalVariables_obj::dark = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,Back,(void))

void OptionsState_obj::switchA( ::flixel::tweens::FlxTween t){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_172_switchA)
HXDLIN( 172)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::MainMenuState_obj::__alloc( HX_CTX ));
HXDLIN( 172)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 172)		bool _hx_tmp;
HXDLIN( 172)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 172)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 172)			_hx_tmp = true;
            		}
HXDLIN( 172)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_172_switchA)
HXDLIN( 172)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 172)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 172)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 172)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,switchA,(void))

void OptionsState_obj::GJ(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_176_GJ)
HXLINE( 177)		::flixel::tweens::FlxTween_obj::tween(this->dark, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->switchG_dyn())));
HXLINE( 178)		::GlobalVariables_obj::dark = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,GJ,(void))

void OptionsState_obj::switchG( ::flixel::tweens::FlxTween t){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_183_switchG)
HXDLIN( 183)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::GamejoltLogin_obj::__alloc( HX_CTX ));
HXDLIN( 183)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 183)		bool _hx_tmp;
HXDLIN( 183)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 183)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 183)			_hx_tmp = true;
            		}
HXDLIN( 183)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_183_switchG)
HXDLIN( 183)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 183)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 183)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 183)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,switchG,(void))


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new() {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(dark,"dark");
	HX_MARK_MEMBER_NAME(langT,"langT");
	HX_MARK_MEMBER_NAME(langOp,"langOp");
	HX_MARK_MEMBER_NAME(langs,"langs");
	HX_MARK_MEMBER_NAME(gamejolt,"gamejolt");
	HX_MARK_MEMBER_NAME(leftSel,"leftSel");
	HX_MARK_MEMBER_NAME(rightSel,"rightSel");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(langSel,"langSel");
	HX_MARK_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(dark,"dark");
	HX_VISIT_MEMBER_NAME(langT,"langT");
	HX_VISIT_MEMBER_NAME(langOp,"langOp");
	HX_VISIT_MEMBER_NAME(langs,"langs");
	HX_VISIT_MEMBER_NAME(gamejolt,"gamejolt");
	HX_VISIT_MEMBER_NAME(leftSel,"leftSel");
	HX_VISIT_MEMBER_NAME(rightSel,"rightSel");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(langSel,"langSel");
	HX_VISIT_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"GJ") ) { return ::hx::Val( GJ_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dark") ) { return ::hx::Val( dark ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"Back") ) { return ::hx::Val( Back_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"langT") ) { return ::hx::Val( langT ); }
		if (HX_FIELD_EQ(inName,"langs") ) { return ::hx::Val( langs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"langOp") ) { return ::hx::Val( langOp ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"leftSel") ) { return ::hx::Val( leftSel ); }
		if (HX_FIELD_EQ(inName,"langSel") ) { return ::hx::Val( langSel ); }
		if (HX_FIELD_EQ(inName,"switchA") ) { return ::hx::Val( switchA_dyn() ); }
		if (HX_FIELD_EQ(inName,"switchG") ) { return ::hx::Val( switchG_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamejolt") ) { return ::hx::Val( gamejolt ); }
		if (HX_FIELD_EQ(inName,"rightSel") ) { return ::hx::Val( rightSel ); }
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dark") ) { dark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"langT") ) { langT=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"langs") ) { langs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"langOp") ) { langOp=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftSel") ) { leftSel=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"langSel") ) { langSel=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamejolt") ) { gamejolt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightSel") ) { rightSel=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("dark",76,54,63,42));
	outFields->push(HX_("langT",a6,2a,b8,6f));
	outFields->push(HX_("langOp",af,22,6d,51));
	outFields->push(HX_("langs",c5,2a,b8,6f));
	outFields->push(HX_("gamejolt",7f,0b,b2,c7));
	outFields->push(HX_("leftSel",d3,c9,e4,f4));
	outFields->push(HX_("rightSel",1e,19,1f,e4));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("langSel",4c,36,14,ee));
	outFields->push(HX_("save",3d,8b,4d,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsState_obj,dark),HX_("dark",76,54,63,42)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,langT),HX_("langT",a6,2a,b8,6f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,langOp),HX_("langOp",af,22,6d,51)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,langs),HX_("langs",c5,2a,b8,6f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,gamejolt),HX_("gamejolt",7f,0b,b2,c7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,leftSel),HX_("leftSel",d3,c9,e4,f4)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,rightSel),HX_("rightSel",1e,19,1f,e4)},
	{::hx::fsInt,(int)offsetof(OptionsState_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsInt,(int)offsetof(OptionsState_obj,langSel),HX_("langSel",4c,36,14,ee)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(OptionsState_obj,save),HX_("save",3d,8b,4d,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionsState_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("dark",76,54,63,42),
	HX_("langT",a6,2a,b8,6f),
	HX_("langOp",af,22,6d,51),
	HX_("langs",c5,2a,b8,6f),
	HX_("gamejolt",7f,0b,b2,c7),
	HX_("leftSel",d3,c9,e4,f4),
	HX_("rightSel",1e,19,1f,e4),
	HX_("selected",5b,2a,6d,b1),
	HX_("langSel",4c,36,14,ee),
	HX_("save",3d,8b,4d,4c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("Back",47,06,ea,2b),
	HX_("switchA",cd,6b,a7,04),
	HX_("GJ",23,3e,00,00),
	HX_("switchG",d3,6b,a7,04),
	::String(null()) };

::hx::Class OptionsState_obj::__mClass;

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsState",f3,09,80,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

