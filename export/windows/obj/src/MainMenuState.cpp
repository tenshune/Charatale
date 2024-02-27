#include <hxcpp.h>

#ifndef INCLUDED_ChooseName
#include <ChooseName.h>
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
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_mapStates_theRuins_Zone1
#include <mapStates/theRuins/Zone1.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_17_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",17,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_41_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",41,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_108_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",108,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_171_onTimerComplete,"MainMenuState","onTimerComplete",0x34aa9eea,"MainMenuState.onTimerComplete","MainMenuState.hx",171,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_177_onTimerComplete2,"MainMenuState","onTimerComplete2",0xe0a06e08,"MainMenuState.onTimerComplete2","MainMenuState.hx",177,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_185_goTo,"MainMenuState","goTo",0xaa8fc1f8,"MainMenuState.goTo","MainMenuState.hx",185,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_211_switchP,"MainMenuState","switchP",0x8fcbf6c7,"MainMenuState.switchP","MainMenuState.hx",211,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_215_switchO,"MainMenuState","switchO",0x8fcbf6c6,"MainMenuState.switchO","MainMenuState.hx",215,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_220_switchT,"MainMenuState","switchT",0x8fcbf6cb,"MainMenuState.switchT","MainMenuState.hx",220,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_225_switchG,"MainMenuState","switchG",0x8fcbf6be,"MainMenuState.switchG","MainMenuState.hx",225,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_226_switchG,"MainMenuState","switchG",0x8fcbf6be,"MainMenuState.switchG","MainMenuState.hx",226,0x0e5db805)

void MainMenuState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_17_new)
HXLINE(  39)		this->lang = HX_("",00,00,00,00);
HXLINE(  33)		this->timer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE(  31)		this->canSelect = true;
HXLINE(  30)		this->selected = 0;
HXLINE(  17)		super::__construct();
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6915cded) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x6915cded;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_41_create)
HXLINE(  42)		bool secret = false;
HXLINE(  43)		int randomNumber = (::Std_obj::random(2000) + 1);
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if ((randomNumber != 1509)) {
HXLINE(  45)			_hx_tmp = (randomNumber == 915);
            		}
            		else {
HXLINE(  45)			_hx_tmp = true;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			secret = true;
            		}
HXLINE(  50)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  51)		this->save->bind(HX_("charatale",71,17,00,4d),null());
HXLINE(  53)		if (::hx::IsNull( this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic) )) {
HXLINE(  54)			this->save->data->__SetField(HX_("lang",ee,05,ad,47),HX_("English",10,8f,83,c6),::hx::paccDynamic);
HXLINE(  55)			this->save->flush(null());
            		}
HXLINE(  58)		this->lang = ( (::String)(this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic)) );
HXLINE(  60)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-70,10,null());
HXDLIN(  60)		this->logo = _hx_tmp1->loadGraphic(::Paths_obj::image(HX_("logo",6b,9f,b7,47)),null(),null(),null(),null(),null());
HXLINE(  61)		this->logo->scale->set_x(((Float)0.75));
HXLINE(  62)		this->logo->scale->set_y(((Float)0.75));
HXLINE(  63)		this->add(this->logo);
HXLINE(  65)		this->newGame =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,110,460,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("newgame",52,74,52,09))),null(),null());
HXLINE(  66)		 ::flixel::text::FlxText _hx_tmp2 = this->newGame;
HXDLIN(  66)		_hx_tmp2->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),80,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  67)		this->add(this->newGame);
HXLINE(  69)		this->continueOp =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,195,380,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("continue",67,e0,c8,31))),null(),null());
HXLINE(  70)		 ::flixel::text::FlxText _hx_tmp3 = this->continueOp;
HXDLIN(  70)		_hx_tmp3->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),80,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  71)		this->add(this->continueOp);
HXLINE(  73)		this->optionsOp =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,280,325,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("options",5e,33,fe,df))),null(),null());
HXLINE(  74)		 ::flixel::text::FlxText _hx_tmp4 = this->optionsOp;
HXDLIN(  74)		_hx_tmp4->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),80,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  75)		this->add(this->optionsOp);
HXLINE(  77)		this->trophies =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,365,325,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang.toLowerCase(),HX_("trophies",4e,d3,f6,92))),null(),null());
HXLINE(  78)		 ::flixel::text::FlxText _hx_tmp5 = this->trophies;
HXDLIN(  78)		_hx_tmp5->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),80,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  79)		this->add(this->trophies);
HXLINE(  81)		 ::flixel::FlxSprite _hx_tmp6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,465,260,null());
HXDLIN(  81)		this->dustChara = _hx_tmp6->loadGraphic(::Paths_obj::image(HX_("DustChara",d9,4c,99,14)),null(),null(),null(),null(),null());
HXLINE(  82)		this->dustChara->scale->set_x(((Float)5.5));
HXLINE(  83)		this->dustChara->scale->set_y(((Float)5.5));
HXLINE(  84)		this->add(this->dustChara);
HXLINE(  86)		 ::flixel::FlxSprite _hx_tmp7 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,480,280,null());
HXDLIN(  86)		this->soul = _hx_tmp7->loadGraphic(::Paths_obj::image(HX_("Soul",13,56,31,37)),null(),null(),null(),null(),null());
HXLINE(  87)		this->soul->scale->set_x(( (Float)(8) ));
HXLINE(  88)		this->soul->scale->set_y(( (Float)(8) ));
HXLINE(  89)		this->add(this->soul);
HXLINE(  91)		if ((secret == false)) {
HXLINE(  92)			this->dustChara->set_visible(false);
HXLINE(  93)			this->timer->start(1,this->onTimerComplete_dyn(),null());
            		}
            		else {
HXLINE(  95)			this->soul->set_visible(false);
            		}
HXLINE(  98)		::haxe::Log_obj::trace(randomNumber,::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),98,HX_("MainMenuState",59,88,5e,20),HX_("create",fc,66,0f,7c)));
HXLINE( 100)		this->super::create();
HXLINE( 102)		this->dark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 103)		this->dark->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 104)		this->dark->set_alpha(::GlobalVariables_obj::dark);
HXLINE( 105)		this->add(this->dark);
            	}


void MainMenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_108_update)
HXLINE( 109)		 ::flixel::text::FlxText _hx_tmp = this->newGame;
HXDLIN( 109)		::String _hx_tmp1 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 109)		int _hx_tmp2;
HXDLIN( 109)		if ((this->selected == 0)) {
HXLINE( 109)			_hx_tmp2 = 16774912;
            		}
            		else {
HXLINE( 109)			_hx_tmp2 = 16777215;
            		}
HXDLIN( 109)		_hx_tmp->setFormat(_hx_tmp1,80,_hx_tmp2,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 112)		 ::flixel::text::FlxText _hx_tmp3 = this->continueOp;
HXDLIN( 112)		::String _hx_tmp4 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 112)		int _hx_tmp5;
HXDLIN( 112)		if ((this->selected == 1)) {
HXLINE( 112)			_hx_tmp5 = 16774912;
            		}
            		else {
HXLINE( 112)			_hx_tmp5 = 16777215;
            		}
HXDLIN( 112)		_hx_tmp3->setFormat(_hx_tmp4,80,_hx_tmp5,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 115)		 ::flixel::text::FlxText _hx_tmp6 = this->optionsOp;
HXDLIN( 115)		::String _hx_tmp7 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 115)		int _hx_tmp8;
HXDLIN( 115)		if ((this->selected == 2)) {
HXLINE( 115)			_hx_tmp8 = 16774912;
            		}
            		else {
HXLINE( 115)			_hx_tmp8 = 16777215;
            		}
HXDLIN( 115)		_hx_tmp6->setFormat(_hx_tmp7,80,_hx_tmp8,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 118)		 ::flixel::text::FlxText _hx_tmp9 = this->trophies;
HXDLIN( 118)		::String _hx_tmp10 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 118)		int _hx_tmp11;
HXDLIN( 118)		if ((this->selected == 3)) {
HXLINE( 118)			_hx_tmp11 = 16774912;
            		}
            		else {
HXLINE( 118)			_hx_tmp11 = 16777215;
            		}
HXDLIN( 118)		_hx_tmp9->setFormat(_hx_tmp10,80,_hx_tmp11,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 121)		if (this->canSelect) {
HXLINE( 122)			if (::CoolUtils_obj::overlapText(this->newGame)) {
HXLINE( 123)				this->selected = 0;
            			}
            			else {
HXLINE( 125)				bool _hx_tmp;
HXDLIN( 125)				if (::CoolUtils_obj::overlapText(this->continueOp)) {
HXLINE( 125)					_hx_tmp = ::hx::IsNotNull( this->save->data->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 125)					_hx_tmp = false;
            				}
HXDLIN( 125)				if (_hx_tmp) {
HXLINE( 126)					this->selected = 1;
            				}
            				else {
HXLINE( 128)					if (::CoolUtils_obj::overlapText(this->optionsOp)) {
HXLINE( 130)						this->selected = 2;
            					}
            					else {
HXLINE( 132)						if (::CoolUtils_obj::overlapText(this->trophies)) {
HXLINE( 134)							this->selected = 3;
            						}
            					}
            				}
            			}
            		}
HXLINE( 138)		bool _hx_tmp12;
HXDLIN( 138)		if ((this->selected == 0)) {
HXLINE( 138)			_hx_tmp12 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            		}
            		else {
HXLINE( 138)			_hx_tmp12 = false;
            		}
HXDLIN( 138)		if (_hx_tmp12) {
HXLINE( 139)			this->goTo(HX_("playstate",9d,33,c2,11));
            		}
            		else {
HXLINE( 141)			bool _hx_tmp;
HXDLIN( 141)			bool _hx_tmp1;
HXDLIN( 141)			if ((this->selected == 1)) {
HXLINE( 141)				_hx_tmp1 = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            			}
            			else {
HXLINE( 141)				_hx_tmp1 = false;
            			}
HXDLIN( 141)			if (_hx_tmp1) {
HXLINE( 141)				_hx_tmp = ::hx::IsNotNull( this->save->data->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 141)				_hx_tmp = false;
            			}
HXDLIN( 141)			if (_hx_tmp) {
HXLINE( 142)				this->goTo(HX_("continue",67,e0,c8,31));
            			}
            			else {
HXLINE( 144)				bool _hx_tmp;
HXDLIN( 144)				if ((this->selected == 2)) {
HXLINE( 144)					_hx_tmp = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            				}
            				else {
HXLINE( 144)					_hx_tmp = false;
            				}
HXDLIN( 144)				if (_hx_tmp) {
HXLINE( 145)					this->goTo(HX_("options",5e,33,fe,df));
            				}
            				else {
HXLINE( 147)					bool _hx_tmp;
HXDLIN( 147)					if ((this->selected == 3)) {
HXLINE( 147)						_hx_tmp = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            					}
            					else {
HXLINE( 147)						_hx_tmp = false;
            					}
HXDLIN( 147)					if (_hx_tmp) {
HXLINE( 148)						this->goTo(HX_("trophies",4e,d3,f6,92));
            					}
            				}
            			}
            		}
HXLINE( 151)		this->super::update(elapsed);
HXLINE( 153)		if (::hx::IsNull( this->save->data->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic) )) {
HXLINE( 154)			if (this->canSelect) {
HXLINE( 155)				this->continueOp->set_alpha(((Float)0.5));
            			}
            		}
            		else {
HXLINE( 158)			if (this->canSelect) {
HXLINE( 160)				this->continueOp->set_alpha(( (Float)(1) ));
            			}
            		}
HXLINE( 164)		if ((this->dark->alpha > 0)) {
HXLINE( 165)			 ::flixel::FlxSprite fh = this->dark;
HXDLIN( 165)			fh->set_alpha((fh->alpha - ((Float)0.05)));
            		}
            		else {
HXLINE( 166)			if ((this->dark->alpha == 0)) {
HXLINE( 167)				::GlobalVariables_obj::dark = ( (Float)(0) );
            			}
            		}
            	}


void MainMenuState_obj::onTimerComplete( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_171_onTimerComplete)
HXLINE( 172)		::flixel::tweens::FlxTween_obj::tween(this->soul->scale, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),((Float)9.5))),((Float)0.05), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 173)		::flixel::tweens::FlxTween_obj::tween(this->soul->scale, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),((Float)9.5))),((Float)0.05), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 174)		timer->start(((Float)0.1),this->onTimerComplete2_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,onTimerComplete,(void))

void MainMenuState_obj::onTimerComplete2( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_177_onTimerComplete2)
HXLINE( 178)		::flixel::tweens::FlxTween_obj::tween(this->soul->scale, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),8)),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 179)		::flixel::tweens::FlxTween_obj::tween(this->soul->scale, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),8)),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 180)		timer->start(1,this->onTimerComplete_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,onTimerComplete2,(void))

void MainMenuState_obj::goTo(::String state){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_185_goTo)
HXLINE( 186)		 ::flixel::util::FlxTimer tim =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE( 187)		this->canSelect = false;
HXLINE( 188)		::flixel::tweens::FlxTween_obj::tween(this->newGame, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 189)		::flixel::tweens::FlxTween_obj::tween(this->continueOp, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 190)		::flixel::tweens::FlxTween_obj::tween(this->optionsOp, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.1), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 191)		::flixel::tweens::FlxTween_obj::tween(this->trophies, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 192)		::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),-200)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 193)		::flixel::tweens::FlxTween_obj::tween(this->soul, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),800)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 194)		::flixel::tweens::FlxTween_obj::tween(this->dustChara, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),800)),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())));
HXLINE( 195)		if ((state == HX_("playstate",9d,33,c2,11))) {
HXLINE( 196)			tim->start(((Float)1.5),this->switchP_dyn(),null());
            		}
            		else {
HXLINE( 197)			if ((state == HX_("continue",67,e0,c8,31))) {
HXLINE( 198)				if (::hx::IsEq( this->save->data->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic),0 )) {
HXLINE( 199)					this->stateTo = HX_("Zone1",65,b4,c2,1b);
HXLINE( 200)					tim->start(5,this->switchG_dyn(),null());
            				}
            			}
            			else {
HXLINE( 202)				if ((state == HX_("options",5e,33,fe,df))) {
HXLINE( 203)					tim->start(((Float)1.5),this->switchO_dyn(),null());
            				}
            				else {
HXLINE( 204)					if ((state == HX_("trophies",4e,d3,f6,92))) {
HXLINE( 205)						tim->start(((Float)1.5),this->switchT_dyn(),null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,goTo,(void))

void MainMenuState_obj::switchP( ::flixel::util::FlxTimer tim){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_211_switchP)
HXDLIN( 211)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::ChooseName_obj::__alloc( HX_CTX ));
HXDLIN( 211)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 211)		bool _hx_tmp;
HXDLIN( 211)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 211)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 211)			_hx_tmp = true;
            		}
HXDLIN( 211)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_211_switchP)
HXDLIN( 211)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 211)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 211)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 211)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,switchP,(void))

void MainMenuState_obj::switchO( ::flixel::util::FlxTimer tim){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_215_switchO)
HXDLIN( 215)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::OptionsState_obj::__alloc( HX_CTX ));
HXDLIN( 215)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 215)		bool _hx_tmp;
HXDLIN( 215)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 215)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 215)			_hx_tmp = true;
            		}
HXDLIN( 215)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_215_switchO)
HXDLIN( 215)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 215)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 215)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 215)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,switchO,(void))

void MainMenuState_obj::switchT( ::flixel::util::FlxTimer tim){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_220_switchT)
HXDLIN( 220)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::TrophiesState_obj::__alloc( HX_CTX ));
HXDLIN( 220)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 220)		bool _hx_tmp;
HXDLIN( 220)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 220)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 220)			_hx_tmp = true;
            		}
HXDLIN( 220)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_220_switchT)
HXDLIN( 220)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 220)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 220)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 220)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,switchT,(void))

void MainMenuState_obj::switchG( ::flixel::util::FlxTimer tim){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_225_switchG)
HXDLIN( 225)		if ((this->stateTo == HX_("Zone1",65,b4,c2,1b))) {
HXLINE( 226)			 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::mapStates::theRuins::Zone1_obj::__alloc( HX_CTX ));
HXDLIN( 226)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 226)			bool _hx_tmp;
HXDLIN( 226)			if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE( 226)				_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            			}
            			else {
HXLINE( 226)				_hx_tmp = true;
            			}
HXDLIN( 226)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_226_switchG)
HXLINE( 226)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE( 226)						::flixel::FlxG_obj::game->_nextState = nextState;
            					}
            					else {
HXLINE( 226)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 226)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,switchG,(void))


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new() {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(newGame,"newGame");
	HX_MARK_MEMBER_NAME(continueOp,"continueOp");
	HX_MARK_MEMBER_NAME(optionsOp,"optionsOp");
	HX_MARK_MEMBER_NAME(trophies,"trophies");
	HX_MARK_MEMBER_NAME(dustChara,"dustChara");
	HX_MARK_MEMBER_NAME(soul,"soul");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(canSelect,"canSelect");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(save,"save");
	HX_MARK_MEMBER_NAME(dark,"dark");
	HX_MARK_MEMBER_NAME(lang,"lang");
	HX_MARK_MEMBER_NAME(stateTo,"stateTo");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(newGame,"newGame");
	HX_VISIT_MEMBER_NAME(continueOp,"continueOp");
	HX_VISIT_MEMBER_NAME(optionsOp,"optionsOp");
	HX_VISIT_MEMBER_NAME(trophies,"trophies");
	HX_VISIT_MEMBER_NAME(dustChara,"dustChara");
	HX_VISIT_MEMBER_NAME(soul,"soul");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(canSelect,"canSelect");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(save,"save");
	HX_VISIT_MEMBER_NAME(dark,"dark");
	HX_VISIT_MEMBER_NAME(lang,"lang");
	HX_VISIT_MEMBER_NAME(stateTo,"stateTo");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		if (HX_FIELD_EQ(inName,"soul") ) { return ::hx::Val( soul ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"dark") ) { return ::hx::Val( dark ); }
		if (HX_FIELD_EQ(inName,"lang") ) { return ::hx::Val( lang ); }
		if (HX_FIELD_EQ(inName,"goTo") ) { return ::hx::Val( goTo_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { return ::hx::Val( newGame ); }
		if (HX_FIELD_EQ(inName,"stateTo") ) { return ::hx::Val( stateTo ); }
		if (HX_FIELD_EQ(inName,"switchP") ) { return ::hx::Val( switchP_dyn() ); }
		if (HX_FIELD_EQ(inName,"switchO") ) { return ::hx::Val( switchO_dyn() ); }
		if (HX_FIELD_EQ(inName,"switchT") ) { return ::hx::Val( switchT_dyn() ); }
		if (HX_FIELD_EQ(inName,"switchG") ) { return ::hx::Val( switchG_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"trophies") ) { return ::hx::Val( trophies ); }
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"optionsOp") ) { return ::hx::Val( optionsOp ); }
		if (HX_FIELD_EQ(inName,"dustChara") ) { return ::hx::Val( dustChara ); }
		if (HX_FIELD_EQ(inName,"canSelect") ) { return ::hx::Val( canSelect ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"continueOp") ) { return ::hx::Val( continueOp ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTimerComplete") ) { return ::hx::Val( onTimerComplete_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onTimerComplete2") ) { return ::hx::Val( onTimerComplete2_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soul") ) { soul=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dark") ) { dark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang") ) { lang=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newGame") ) { newGame=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stateTo") ) { stateTo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"trophies") ) { trophies=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"optionsOp") ) { optionsOp=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dustChara") ) { dustChara=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canSelect") ) { canSelect=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"continueOp") ) { continueOp=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("newGame",72,a0,2b,f4));
	outFields->push(HX_("continueOp",68,4d,0f,de));
	outFields->push(HX_("optionsOp",1f,8c,78,82));
	outFields->push(HX_("trophies",4e,d3,f6,92));
	outFields->push(HX_("dustChara",f9,6c,c6,72));
	outFields->push(HX_("soul",f3,29,58,4c));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("canSelect",2c,6f,79,bc));
	outFields->push(HX_("timer",c5,bf,35,10));
	outFields->push(HX_("save",3d,8b,4d,4c));
	outFields->push(HX_("dark",76,54,63,42));
	outFields->push(HX_("lang",ee,05,ad,47));
	outFields->push(HX_("stateTo",ec,25,62,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGame),HX_("newGame",72,a0,2b,f4)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,continueOp),HX_("continueOp",68,4d,0f,de)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,optionsOp),HX_("optionsOp",1f,8c,78,82)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,trophies),HX_("trophies",4e,d3,f6,92)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,dustChara),HX_("dustChara",f9,6c,c6,72)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,soul),HX_("soul",f3,29,58,4c)},
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,canSelect),HX_("canSelect",2c,6f,79,bc)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(MainMenuState_obj,timer),HX_("timer",c5,bf,35,10)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(MainMenuState_obj,save),HX_("save",3d,8b,4d,4c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,dark),HX_("dark",76,54,63,42)},
	{::hx::fsString,(int)offsetof(MainMenuState_obj,lang),HX_("lang",ee,05,ad,47)},
	{::hx::fsString,(int)offsetof(MainMenuState_obj,stateTo),HX_("stateTo",ec,25,62,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("logo",6b,9f,b7,47),
	HX_("newGame",72,a0,2b,f4),
	HX_("continueOp",68,4d,0f,de),
	HX_("optionsOp",1f,8c,78,82),
	HX_("trophies",4e,d3,f6,92),
	HX_("dustChara",f9,6c,c6,72),
	HX_("soul",f3,29,58,4c),
	HX_("selected",5b,2a,6d,b1),
	HX_("canSelect",2c,6f,79,bc),
	HX_("timer",c5,bf,35,10),
	HX_("save",3d,8b,4d,4c),
	HX_("dark",76,54,63,42),
	HX_("lang",ee,05,ad,47),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("onTimerComplete",ff,b0,50,1f),
	HX_("onTimerComplete2",53,2e,4a,47),
	HX_("stateTo",ec,25,62,36),
	HX_("goTo",c3,7d,69,44),
	HX_("switchP",dc,6b,a7,04),
	HX_("switchO",db,6b,a7,04),
	HX_("switchT",e0,6b,a7,04),
	HX_("switchG",d3,6b,a7,04),
	::String(null()) };

::hx::Class MainMenuState_obj::__mClass;

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

