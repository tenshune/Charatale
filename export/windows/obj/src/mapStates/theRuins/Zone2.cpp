#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CoolUtils
#include <CoolUtils.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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
#ifndef INCLUDED_mapStates_theRuins_Zone2
#include <mapStates/theRuins/Zone2.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_player_CameraFuncs
#include <player/CameraFuncs.h>
#endif
#ifndef INCLUDED_player_Movement
#include <player/Movement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5818b182cd2d641d_16_new,"mapStates.theRuins.Zone2","new",0x1a181f34,"mapStates.theRuins.Zone2.new","mapStates/theRuins/Zone2.hx",16,0x672c1a9c)
HX_LOCAL_STACK_FRAME(_hx_pos_5818b182cd2d641d_49_create,"mapStates.theRuins.Zone2","create",0xef9114a8,"mapStates.theRuins.Zone2.create","mapStates/theRuins/Zone2.hx",49,0x672c1a9c)
HX_LOCAL_STACK_FRAME(_hx_pos_5818b182cd2d641d_135_handleDialog,"mapStates.theRuins.Zone2","handleDialog",0x7b4c613c,"mapStates.theRuins.Zone2.handleDialog","mapStates/theRuins/Zone2.hx",135,0x672c1a9c)
HX_LOCAL_STACK_FRAME(_hx_pos_5818b182cd2d641d_144_update,"mapStates.theRuins.Zone2","update",0xfa8733b5,"mapStates.theRuins.Zone2.update","mapStates/theRuins/Zone2.hx",144,0x672c1a9c)
HX_LOCAL_STACK_FRAME(_hx_pos_5818b182cd2d641d_208_textChange,"mapStates.theRuins.Zone2","textChange",0x11ab05a9,"mapStates.theRuins.Zone2.textChange","mapStates/theRuins/Zone2.hx",208,0x672c1a9c)
HX_LOCAL_STACK_FRAME(_hx_pos_5818b182cd2d641d_214_createAndAddFlxSprite,"mapStates.theRuins.Zone2","createAndAddFlxSprite",0xdb073565,"mapStates.theRuins.Zone2.createAndAddFlxSprite","mapStates/theRuins/Zone2.hx",214,0x672c1a9c)
HX_LOCAL_STACK_FRAME(_hx_pos_5818b182cd2d641d_224_moveAgain,"mapStates.theRuins.Zone2","moveAgain",0x9abd2a63,"mapStates.theRuins.Zone2.moveAgain","mapStates/theRuins/Zone2.hx",224,0x672c1a9c)
namespace mapStates{
namespace theRuins{

void Zone2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5818b182cd2d641d_16_new)
HXLINE( 131)		this->dial = 0;
HXLINE(  44)		this->dialInt = false;
HXLINE(  42)		this->inter = ((Float)0.05);
HXLINE(  41)		this->textSound = HX_("SND_TXT1",d7,cf,03,52);
HXLINE(  37)		this->textToAnimate = HX_("",00,00,00,00);
HXLINE(  32)		this->canMove = true;
HXLINE(  16)		super::__construct();
            	}

Dynamic Zone2_obj::__CreateEmpty() { return new Zone2_obj; }

void *Zone2_obj::_hx_vtable = 0;

Dynamic Zone2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Zone2_obj > _hx_result = new Zone2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Zone2_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6db6d34e) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x6db6d34e;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void Zone2_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_5818b182cd2d641d_49_create)
HXLINE(  51)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  52)		this->save->bind(HX_("charatale",71,17,00,4d),null());
HXLINE(  54)		this->lang = ( (::String)(this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic)) );
HXLINE(  56)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  56)		this->zone = _hx_tmp->loadGraphic(::Paths_obj::mapImg(HX_("zone 2",3e,a1,06,fa),HX_("the ruins",1c,7c,99,f6)),null(),null(),null(),null(),null());
HXLINE(  57)		this->zone->scale->set_x(( (Float)(2) ));
HXLINE(  58)		this->zone->scale->set_y(( (Float)(2) ));
HXLINE(  59)		this->zone->updateHitbox();
HXLINE(  60)		{
HXLINE(  60)			 ::flixel::FlxSprite _this = this->zone;
HXDLIN(  60)			int axes = 17;
HXDLIN(  60)			bool _hx_tmp1;
HXDLIN(  60)			if ((axes != 1)) {
HXLINE(  60)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  60)				_hx_tmp1 = true;
            			}
HXDLIN(  60)			if (_hx_tmp1) {
HXLINE(  60)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  60)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  60)			bool _hx_tmp2;
HXDLIN(  60)			if ((axes != 16)) {
HXLINE(  60)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  60)				_hx_tmp2 = true;
            			}
HXDLIN(  60)			if (_hx_tmp2) {
HXLINE(  60)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  60)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  61)		this->add(this->zone);
HXLINE(  63)		this->chara =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),(( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )),null());
HXLINE(  64)		 ::flixel::FlxSprite _hx_tmp3 = this->chara;
HXDLIN(  64)		_hx_tmp3->set_frames(::Paths_obj::getSparrowAtlas(HX_("Chara",ab,0c,e1,d8)));
HXLINE(  65)		this->chara->animation->addByPrefix(HX_("Down",82,24,47,2d),HX_("Down",82,24,47,2d),4,null(),null(),null());
HXLINE(  66)		this->chara->animation->addByPrefix(HX_("DownRight",fa,bf,4c,a1),HX_("Down",82,24,47,2d),4,null(),null(),null());
HXLINE(  67)		this->chara->animation->addByPrefix(HX_("DownLeft",a9,c1,49,56),HX_("Down",82,24,47,2d),4,null(),null(),null());
HXLINE(  68)		this->chara->animation->addByPrefix(HX_("Left",27,34,89,32),HX_("Left",27,34,89,32),4,null(),null(),null());
HXLINE(  69)		this->chara->animation->addByPrefix(HX_("Up",7b,4a,00,00),HX_("Up",7b,4a,00,00),4,null(),null(),null());
HXLINE(  70)		this->chara->animation->addByPrefix(HX_("UpRight",61,53,2a,13),HX_("Up",7b,4a,00,00),4,null(),null(),null());
HXLINE(  71)		this->chara->animation->addByPrefix(HX_("UpLeft",22,d8,bf,ab),HX_("Up",7b,4a,00,00),4,null(),null(),null());
HXLINE(  72)		this->chara->animation->addByPrefix(HX_("Right",bc,7b,91,7c),HX_("Right",bc,7b,91,7c),4,null(),null(),null());
HXLINE(  73)		this->chara->scale->set_x(( (Float)(2) ));
HXLINE(  74)		this->chara->scale->set_y(( (Float)(2) ));
HXLINE(  75)		this->chara->updateHitbox();
HXLINE(  76)		 ::flixel::FlxSprite fh = this->chara;
HXDLIN(  76)		fh->set_x((fh->x - ( (Float)(40) )));
HXLINE(  77)		this->add(this->chara);
HXLINE(  79)		this->asriel =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(this->zone->get_height() - ( (Float)(130) )),null());
HXLINE(  80)		 ::flixel::FlxSprite _hx_tmp4 = this->asriel;
HXDLIN(  80)		_hx_tmp4->set_frames(::Paths_obj::getSparrowAtlas(HX_("asriel",d0,0d,5d,4b)));
HXLINE(  81)		this->asriel->animation->addByPrefix(HX_("Down",82,24,47,2d),HX_("Down",82,24,47,2d),0,true,null(),null());
HXLINE(  82)		this->asriel->animation->addByPrefix(HX_("Up",7b,4a,00,00),HX_("Up",7b,4a,00,00),4,null(),null(),null());
HXLINE(  83)		this->asriel->scale->set_x(( (Float)(2) ));
HXLINE(  84)		this->asriel->scale->set_y(( (Float)(2) ));
HXLINE(  85)		this->asriel->updateHitbox();
HXLINE(  86)		{
HXLINE(  86)			 ::flixel::FlxSprite _this1 = this->asriel;
HXDLIN(  86)			int axes1 = 1;
HXDLIN(  86)			bool _hx_tmp5;
HXDLIN(  86)			if ((axes1 != 1)) {
HXLINE(  86)				_hx_tmp5 = (axes1 == 17);
            			}
            			else {
HXLINE(  86)				_hx_tmp5 = true;
            			}
HXDLIN(  86)			if (_hx_tmp5) {
HXLINE(  86)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  86)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  86)			bool _hx_tmp6;
HXDLIN(  86)			if ((axes1 != 16)) {
HXLINE(  86)				_hx_tmp6 = (axes1 == 17);
            			}
            			else {
HXLINE(  86)				_hx_tmp6 = true;
            			}
HXDLIN(  86)			if (_hx_tmp6) {
HXLINE(  86)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  86)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  87)		this->add(this->asriel);
HXLINE(  89)		this->charaCol =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(35) )),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(50) )),null());
HXLINE(  90)		this->charaCol->makeGraphic(40,25,-16711936,null(),null());
HXLINE(  91)		this->charaCol->set_visible(false);
HXLINE(  92)		 ::flixel::FlxSprite _hx_tmp7 = this->charaCol;
HXDLIN(  92)		_hx_tmp7->set_y(( (Float)(((::Math_obj::floor(this->zone->get_height()) * 2) - 100)) ));
HXLINE(  93)		this->add(this->charaCol);
HXLINE(  95)		this->col1 = this->createAndAddFlxSprite(0,0,1000,70,null());
HXLINE(  96)		this->col2 = this->createAndAddFlxSprite(0,70,275,80,null());
HXLINE(  97)		this->col3 = this->createAndAddFlxSprite(365,70,275,80,null());
HXLINE(  98)		this->col4 = this->createAndAddFlxSprite(0,0,10,10000,null());
HXLINE(  99)		this->col5 = this->createAndAddFlxSprite((::flixel::FlxG_obj::width - 10),0,10,10000,null());
HXLINE( 100)		this->col6 = this->createAndAddFlxSprite(0,((::Math_obj::floor(this->zone->get_height()) * 2) - 40),1000,15,null());
HXLINE( 102)		 ::flixel::FlxSprite _hx_tmp8 = this->chara;
HXDLIN( 102)		Float _hx_tmp9 = (this->zone->x - ( (Float)(35) ));
HXDLIN( 102)		Float _hx_tmp10 = this->zone->y;
HXDLIN( 102)		Float _hx_tmp11 = this->zone->x;
HXDLIN( 102)		Float _hx_tmp12 = ((_hx_tmp11 + this->zone->get_width()) + 35);
HXDLIN( 102)		Float _hx_tmp13 = this->zone->y;
HXDLIN( 102)		::player::CameraFuncs_obj::follow(_hx_tmp8,_hx_tmp9,_hx_tmp10,_hx_tmp12,(_hx_tmp13 + (this->zone->get_height() * ( (Float)(2) ))));
HXLINE( 104)		this->super::create();
HXLINE( 106)		 ::flixel::FlxSprite _hx_tmp14 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 106)		this->textBox = _hx_tmp14->loadGraphic(::Paths_obj::image(HX_("charTextBox",28,03,3f,c6)),null(),null(),null(),null(),null());
HXLINE( 107)		{
HXLINE( 107)			 ::flixel::FlxSprite _this2 = this->textBox;
HXDLIN( 107)			int axes2 = 1;
HXDLIN( 107)			bool _hx_tmp15;
HXDLIN( 107)			if ((axes2 != 1)) {
HXLINE( 107)				_hx_tmp15 = (axes2 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp15 = true;
            			}
HXDLIN( 107)			if (_hx_tmp15) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 107)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 107)			bool _hx_tmp16;
HXDLIN( 107)			if ((axes2 != 16)) {
HXLINE( 107)				_hx_tmp16 = (axes2 == 17);
            			}
            			else {
HXLINE( 107)				_hx_tmp16 = true;
            			}
HXDLIN( 107)			if (_hx_tmp16) {
HXLINE( 107)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 107)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 108)		 ::flixel::FlxSprite _hx_tmp17 = this->textBox;
HXDLIN( 108)		int _hx_tmp18 = ::flixel::FlxG_obj::camera->height;
HXDLIN( 108)		_hx_tmp17->set_y(((( (Float)(_hx_tmp18) ) - this->textBox->get_height()) + 200));
HXLINE( 109)		this->textBox->set_alpha(( (Float)(0) ));
HXLINE( 110)		this->add(this->textBox);
HXLINE( 112)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,200,(this->textBox->y + 20),400,HX_("",00,00,00,00),24,null());
HXLINE( 113)		this->text->set_alpha(( (Float)(0) ));
HXLINE( 114)		this->add(this->text);
HXLINE( 116)		Float _hx_tmp19 = (this->textBox->x + 30);
HXDLIN( 116)		Float _hx_tmp20 = this->textBox->y;
HXDLIN( 116)		 ::flixel::FlxSprite _hx_tmp21 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp19,(_hx_tmp20 + ((this->textBox->get_height() / ( (Float)(2) )) - ( (Float)(30) ))),null());
HXDLIN( 116)		this->portrait = _hx_tmp21->loadGraphic(::Paths_obj::portImage(HX_("tired",fc,8a,39,10),HX_("chara",cb,9c,b3,45)),null(),null(),null(),null(),null());
HXLINE( 117)		this->portrait->scale->set_x(((Float)1.25));
HXLINE( 118)		this->portrait->scale->set_y(((Float)1.25));
HXLINE( 119)		this->portrait->set_alpha(( (Float)(0) ));
HXLINE( 120)		this->add(this->portrait);
HXLINE( 122)		this->dark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 123)		 ::flixel::FlxSprite _hx_tmp22 = this->dark;
HXDLIN( 123)		int _hx_tmp23 = ::flixel::FlxG_obj::width;
HXDLIN( 123)		_hx_tmp22->makeGraphic(_hx_tmp23,::Math_obj::floor((this->zone->get_height() * ( (Float)(2) ))),-16777216,null(),null());
HXLINE( 124)		this->dark->set_alpha(( (Float)(1) ));
HXLINE( 125)		this->add(this->dark);
HXLINE( 127)		::CoolUtils_obj::animInit();
HXLINE( 128)		this->text->set_text(HX_("",00,00,00,00));
            	}


void Zone2_obj::handleDialog(int key,int nextKey,::String graphic,::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_5818b182cd2d641d_135_handleDialog)
HXDLIN( 135)		bool _hx_tmp;
HXDLIN( 135)		::String _hx_tmp1 = this->text->text;
HXDLIN( 135)		if ((_hx_tmp1 == ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,(HX_("dialogues/2/",31,f8,73,27) + key))))) {
HXDLIN( 135)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 135)			_hx_tmp = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXDLIN( 135)			_hx_tmp = false;
            		}
HXDLIN( 135)		if (_hx_tmp) {
HXLINE( 137)			::CoolUtils_obj::animInit();
HXLINE( 138)			this->text->set_text(HX_("",00,00,00,00));
HXLINE( 139)			this->textToAnimate = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,(HX_("dialogues/2/",31,f8,73,27) + nextKey)));
HXLINE( 140)			 ::flixel::FlxSprite _hx_tmp = this->portrait;
HXDLIN( 140)			_hx_tmp->loadGraphic(::Paths_obj::portImage(graphic,_hx_char),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Zone2_obj,handleDialog,(void))

void Zone2_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5818b182cd2d641d_144_update)
HXLINE( 145)		if ((this->dark->alpha > 0)) {
HXLINE( 147)			 ::flixel::FlxSprite fh = this->dark;
HXDLIN( 147)			fh->set_alpha((fh->alpha - ((Float)0.05)));
            		}
HXLINE( 150)		if (this->canMove) {
HXLINE( 152)			::player::Movement_obj::keyboardMove(this->charaCol,null(),null());
HXLINE( 153)			::player::Movement_obj::keyboardMove(this->chara,true,null());
            		}
HXLINE( 156)		::Array< ::Dynamic> cols = ::Array_obj< ::Dynamic>::__new(6)->init(0,this->col1)->init(1,this->col2)->init(2,this->col3)->init(3,this->col4)->init(4,this->col5)->init(5,this->col6);
HXLINE( 159)		int i = 0;
HXLINE( 160)		while(true){
HXLINE( 162)			if (this->canMove) {
HXLINE( 164)				::CoolUtils_obj::collide(this->charaCol,cols->__get(i).StaticCast<  ::flixel::FlxSprite >(),null(),null());
            			}
HXLINE( 166)			cols->__get(i).StaticCast<  ::flixel::FlxSprite >()->set_visible(false);
HXLINE( 167)			i = (i + 1);
HXLINE( 160)			if (!((i < cols->length))) {
HXLINE( 160)				goto _hx_goto_3;
            			}
            		}
            		_hx_goto_3:;
HXLINE( 171)		::CoolUtils_obj::textAnimation(this->text,this->textToAnimate,elapsed,this->textSound,this->inter);
HXLINE( 173)		this->chara->set_x(this->charaCol->x);
HXLINE( 174)		this->chara->set_y((this->charaCol->y - ( (Float)(35) )));
HXLINE( 176)		this->super::update(elapsed);
HXLINE( 178)		bool _hx_tmp;
HXDLIN( 178)		bool _hx_tmp1;
HXDLIN( 178)		bool _hx_tmp2;
HXDLIN( 178)		if ((this->chara->x >= 10)) {
HXLINE( 178)			_hx_tmp2 = (this->chara->x <= 590);
            		}
            		else {
HXLINE( 178)			_hx_tmp2 = false;
            		}
HXDLIN( 178)		if (_hx_tmp2) {
HXLINE( 178)			_hx_tmp1 = (this->chara->y <= 448);
            		}
            		else {
HXLINE( 178)			_hx_tmp1 = false;
            		}
HXDLIN( 178)		if (_hx_tmp1) {
HXLINE( 178)			_hx_tmp = !(this->dialInt);
            		}
            		else {
HXLINE( 178)			_hx_tmp = false;
            		}
HXDLIN( 178)		if (_hx_tmp) {
HXLINE( 179)			this->canMove = false;
HXLINE( 180)			this->chara->animation->stop();
HXLINE( 181)			this->dialInt = true;
HXLINE( 182)			 ::flixel::FlxSprite _hx_tmp = this->portrait;
HXDLIN( 182)			_hx_tmp->loadGraphic(::Paths_obj::portImage(HX_("sad",16,98,57,00),HX_("asriel",d0,0d,5d,4b)),null(),null(),null(),null(),null());
HXLINE( 183)			::flixel::tweens::FlxTween_obj::tween(this->textBox, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d),this->textChange_dyn())));
HXLINE( 184)			::flixel::tweens::FlxTween_obj::tween(this->text, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 185)			::flixel::tweens::FlxTween_obj::tween(this->portrait, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
            		}
HXLINE( 188)		this->handleDialog(1,2,HX_("worried",30,ba,6f,a5),HX_("chara",cb,9c,b3,45));
HXLINE( 189)		this->handleDialog(2,3,HX_("happy",20,65,1f,22),HX_("asriel",d0,0d,5d,4b));
HXLINE( 190)		this->handleDialog(3,4,HX_("worried",30,ba,6f,a5),HX_("chara",cb,9c,b3,45));
HXLINE( 191)		this->handleDialog(4,5,HX_("happy",20,65,1f,22),HX_("asriel",d0,0d,5d,4b));
HXLINE( 192)		this->handleDialog(5,6,HX_("worried",30,ba,6f,a5),HX_("chara",cb,9c,b3,45));
HXLINE( 194)		bool _hx_tmp3;
HXDLIN( 194)		::String _hx_tmp4 = this->text->text;
HXDLIN( 194)		if ((_hx_tmp4 == ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("dialogues/2/6",e5,32,05,5e))))) {
HXLINE( 194)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 194)			_hx_tmp3 = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXLINE( 194)			_hx_tmp3 = false;
            		}
HXDLIN( 194)		if (_hx_tmp3) {
HXLINE( 195)			::flixel::tweens::FlxTween_obj::tween(this->textBox, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d),this->moveAgain_dyn())));
HXLINE( 196)			::flixel::tweens::FlxTween_obj::tween(this->text, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 197)			::flixel::tweens::FlxTween_obj::tween(this->portrait, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
            		}
            		else {
HXLINE( 200)			bool _hx_tmp;
HXDLIN( 200)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 200)			if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 200)				_hx_tmp = (this->text->text != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 200)				_hx_tmp = false;
            			}
HXDLIN( 200)			if (_hx_tmp) {
HXLINE( 201)				::CoolUtils_obj::animInit();
HXLINE( 202)				this->textToAnimate = HX_("",00,00,00,00);
HXLINE( 203)				 ::flixel::text::FlxText _hx_tmp = this->text;
HXDLIN( 203)				_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,(HX_("dialogues/2/",31,f8,73,27) + this->dial))));
            			}
            		}
            	}


void Zone2_obj::textChange( ::flixel::tweens::FlxTween t){
            	HX_STACKFRAME(&_hx_pos_5818b182cd2d641d_208_textChange)
HXLINE( 209)		this->textToAnimate = ::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("dialogues/2/1",e0,32,05,5e)));
HXLINE( 210)		this->dial = 1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Zone2_obj,textChange,(void))

 ::flixel::FlxSprite Zone2_obj::createAndAddFlxSprite(int x,int y,int width,int height, ::Dynamic __o_color){
            		 ::Dynamic color = __o_color;
            		if (::hx::IsNull(__o_color)) color = -65536;
            	HX_GC_STACKFRAME(&_hx_pos_5818b182cd2d641d_214_createAndAddFlxSprite)
HXLINE( 215)		 ::flixel::FlxSprite sprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,x,y,null());
HXLINE( 216)		sprite->makeGraphic(width,height,color,null(),null());
HXLINE( 217)		sprite->updateHitbox();
HXLINE( 218)		this->add(sprite);
HXLINE( 219)		return sprite;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Zone2_obj,createAndAddFlxSprite,return )

void Zone2_obj::moveAgain( ::flixel::tweens::FlxTween t){
            	HX_STACKFRAME(&_hx_pos_5818b182cd2d641d_224_moveAgain)
HXDLIN( 224)		this->canMove = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Zone2_obj,moveAgain,(void))


::hx::ObjectPtr< Zone2_obj > Zone2_obj::__new() {
	::hx::ObjectPtr< Zone2_obj > __this = new Zone2_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Zone2_obj > Zone2_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Zone2_obj *__this = (Zone2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Zone2_obj), true, "mapStates.theRuins.Zone2"));
	*(void **)__this = Zone2_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Zone2_obj::Zone2_obj()
{
}

void Zone2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Zone2);
	HX_MARK_MEMBER_NAME(zone,"zone");
	HX_MARK_MEMBER_NAME(chara,"chara");
	HX_MARK_MEMBER_NAME(charaCol,"charaCol");
	HX_MARK_MEMBER_NAME(asriel,"asriel");
	HX_MARK_MEMBER_NAME(col1,"col1");
	HX_MARK_MEMBER_NAME(col2,"col2");
	HX_MARK_MEMBER_NAME(col3,"col3");
	HX_MARK_MEMBER_NAME(col4,"col4");
	HX_MARK_MEMBER_NAME(col5,"col5");
	HX_MARK_MEMBER_NAME(col6,"col6");
	HX_MARK_MEMBER_NAME(canMove,"canMove");
	HX_MARK_MEMBER_NAME(portrait,"portrait");
	HX_MARK_MEMBER_NAME(textBox,"textBox");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textToAnimate,"textToAnimate");
	HX_MARK_MEMBER_NAME(dark,"dark");
	HX_MARK_MEMBER_NAME(textSound,"textSound");
	HX_MARK_MEMBER_NAME(inter,"inter");
	HX_MARK_MEMBER_NAME(dialInt,"dialInt");
	HX_MARK_MEMBER_NAME(save,"save");
	HX_MARK_MEMBER_NAME(lang,"lang");
	HX_MARK_MEMBER_NAME(dial,"dial");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Zone2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zone,"zone");
	HX_VISIT_MEMBER_NAME(chara,"chara");
	HX_VISIT_MEMBER_NAME(charaCol,"charaCol");
	HX_VISIT_MEMBER_NAME(asriel,"asriel");
	HX_VISIT_MEMBER_NAME(col1,"col1");
	HX_VISIT_MEMBER_NAME(col2,"col2");
	HX_VISIT_MEMBER_NAME(col3,"col3");
	HX_VISIT_MEMBER_NAME(col4,"col4");
	HX_VISIT_MEMBER_NAME(col5,"col5");
	HX_VISIT_MEMBER_NAME(col6,"col6");
	HX_VISIT_MEMBER_NAME(canMove,"canMove");
	HX_VISIT_MEMBER_NAME(portrait,"portrait");
	HX_VISIT_MEMBER_NAME(textBox,"textBox");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textToAnimate,"textToAnimate");
	HX_VISIT_MEMBER_NAME(dark,"dark");
	HX_VISIT_MEMBER_NAME(textSound,"textSound");
	HX_VISIT_MEMBER_NAME(inter,"inter");
	HX_VISIT_MEMBER_NAME(dialInt,"dialInt");
	HX_VISIT_MEMBER_NAME(save,"save");
	HX_VISIT_MEMBER_NAME(lang,"lang");
	HX_VISIT_MEMBER_NAME(dial,"dial");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Zone2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zone") ) { return ::hx::Val( zone ); }
		if (HX_FIELD_EQ(inName,"col1") ) { return ::hx::Val( col1 ); }
		if (HX_FIELD_EQ(inName,"col2") ) { return ::hx::Val( col2 ); }
		if (HX_FIELD_EQ(inName,"col3") ) { return ::hx::Val( col3 ); }
		if (HX_FIELD_EQ(inName,"col4") ) { return ::hx::Val( col4 ); }
		if (HX_FIELD_EQ(inName,"col5") ) { return ::hx::Val( col5 ); }
		if (HX_FIELD_EQ(inName,"col6") ) { return ::hx::Val( col6 ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"dark") ) { return ::hx::Val( dark ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"lang") ) { return ::hx::Val( lang ); }
		if (HX_FIELD_EQ(inName,"dial") ) { return ::hx::Val( dial ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chara") ) { return ::hx::Val( chara ); }
		if (HX_FIELD_EQ(inName,"inter") ) { return ::hx::Val( inter ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"asriel") ) { return ::hx::Val( asriel ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canMove") ) { return ::hx::Val( canMove ); }
		if (HX_FIELD_EQ(inName,"textBox") ) { return ::hx::Val( textBox ); }
		if (HX_FIELD_EQ(inName,"dialInt") ) { return ::hx::Val( dialInt ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charaCol") ) { return ::hx::Val( charaCol ); }
		if (HX_FIELD_EQ(inName,"portrait") ) { return ::hx::Val( portrait ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textSound") ) { return ::hx::Val( textSound ); }
		if (HX_FIELD_EQ(inName,"moveAgain") ) { return ::hx::Val( moveAgain_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textChange") ) { return ::hx::Val( textChange_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleDialog") ) { return ::hx::Val( handleDialog_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textToAnimate") ) { return ::hx::Val( textToAnimate ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAndAddFlxSprite") ) { return ::hx::Val( createAndAddFlxSprite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Zone2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zone") ) { zone=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col1") ) { col1=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col2") ) { col2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col3") ) { col3=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col4") ) { col4=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col5") ) { col5=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col6") ) { col6=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dark") ) { dark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang") ) { lang=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dial") ) { dial=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chara") ) { chara=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inter") ) { inter=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"asriel") ) { asriel=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canMove") ) { canMove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBox") ) { textBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialInt") ) { dialInt=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charaCol") ) { charaCol=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portrait") ) { portrait=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textSound") ) { textSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textToAnimate") ) { textToAnimate=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Zone2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("zone",2c,a2,f8,50));
	outFields->push(HX_("chara",cb,9c,b3,45));
	outFields->push(HX_("charaCol",35,6c,d7,af));
	outFields->push(HX_("asriel",d0,0d,5d,4b));
	outFields->push(HX_("col1",f1,b7,c4,41));
	outFields->push(HX_("col2",f2,b7,c4,41));
	outFields->push(HX_("col3",f3,b7,c4,41));
	outFields->push(HX_("col4",f4,b7,c4,41));
	outFields->push(HX_("col5",f5,b7,c4,41));
	outFields->push(HX_("col6",f6,b7,c4,41));
	outFields->push(HX_("canMove",41,cb,b8,66));
	outFields->push(HX_("portrait",5b,21,af,b8));
	outFields->push(HX_("textBox",5e,13,ba,9e));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textToAnimate",f9,a7,73,61));
	outFields->push(HX_("dark",76,54,63,42));
	outFields->push(HX_("textSound",e2,1c,ba,19));
	outFields->push(HX_("inter",1c,bf,20,be));
	outFields->push(HX_("dialInt",1f,5b,54,5b));
	outFields->push(HX_("save",3d,8b,4d,4c));
	outFields->push(HX_("lang",ee,05,ad,47));
	outFields->push(HX_("dial",b0,57,69,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Zone2_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,zone),HX_("zone",2c,a2,f8,50)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,chara),HX_("chara",cb,9c,b3,45)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,charaCol),HX_("charaCol",35,6c,d7,af)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,asriel),HX_("asriel",d0,0d,5d,4b)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,col1),HX_("col1",f1,b7,c4,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,col2),HX_("col2",f2,b7,c4,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,col3),HX_("col3",f3,b7,c4,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,col4),HX_("col4",f4,b7,c4,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,col5),HX_("col5",f5,b7,c4,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,col6),HX_("col6",f6,b7,c4,41)},
	{::hx::fsBool,(int)offsetof(Zone2_obj,canMove),HX_("canMove",41,cb,b8,66)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,portrait),HX_("portrait",5b,21,af,b8)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,textBox),HX_("textBox",5e,13,ba,9e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Zone2_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Zone2_obj,textToAnimate),HX_("textToAnimate",f9,a7,73,61)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Zone2_obj,dark),HX_("dark",76,54,63,42)},
	{::hx::fsString,(int)offsetof(Zone2_obj,textSound),HX_("textSound",e2,1c,ba,19)},
	{::hx::fsFloat,(int)offsetof(Zone2_obj,inter),HX_("inter",1c,bf,20,be)},
	{::hx::fsBool,(int)offsetof(Zone2_obj,dialInt),HX_("dialInt",1f,5b,54,5b)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(Zone2_obj,save),HX_("save",3d,8b,4d,4c)},
	{::hx::fsString,(int)offsetof(Zone2_obj,lang),HX_("lang",ee,05,ad,47)},
	{::hx::fsInt,(int)offsetof(Zone2_obj,dial),HX_("dial",b0,57,69,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Zone2_obj_sStaticStorageInfo = 0;
#endif

static ::String Zone2_obj_sMemberFields[] = {
	HX_("zone",2c,a2,f8,50),
	HX_("chara",cb,9c,b3,45),
	HX_("charaCol",35,6c,d7,af),
	HX_("asriel",d0,0d,5d,4b),
	HX_("col1",f1,b7,c4,41),
	HX_("col2",f2,b7,c4,41),
	HX_("col3",f3,b7,c4,41),
	HX_("col4",f4,b7,c4,41),
	HX_("col5",f5,b7,c4,41),
	HX_("col6",f6,b7,c4,41),
	HX_("canMove",41,cb,b8,66),
	HX_("portrait",5b,21,af,b8),
	HX_("textBox",5e,13,ba,9e),
	HX_("text",ad,cc,f9,4c),
	HX_("textToAnimate",f9,a7,73,61),
	HX_("dark",76,54,63,42),
	HX_("textSound",e2,1c,ba,19),
	HX_("inter",1c,bf,20,be),
	HX_("dialInt",1f,5b,54,5b),
	HX_("save",3d,8b,4d,4c),
	HX_("lang",ee,05,ad,47),
	HX_("create",fc,66,0f,7c),
	HX_("dial",b0,57,69,42),
	HX_("handleDialog",90,2a,5f,ff),
	HX_("update",09,86,05,87),
	HX_("textChange",fd,11,63,ee),
	HX_("createAndAddFlxSprite",91,a1,42,d5),
	HX_("moveAgain",8f,04,04,dc),
	::String(null()) };

::hx::Class Zone2_obj::__mClass;

void Zone2_obj::__register()
{
	Zone2_obj _hx_dummy;
	Zone2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("mapStates.theRuins.Zone2",42,b5,6b,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Zone2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Zone2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Zone2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Zone2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mapStates
} // end namespace theRuins
