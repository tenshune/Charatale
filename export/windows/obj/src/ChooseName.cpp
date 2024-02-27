#include <hxcpp.h>

#ifndef INCLUDED_ChooseName
#include <ChooseName.h>
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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_typeLimit__NextState_NextState_Impl_
#include <flixel/util/typeLimit/_NextState/NextState_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_20_new,"ChooseName","new",0x50ce6ed4,"ChooseName.new","ChooseName.hx",20,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_61_create,"ChooseName","create",0xf0384908,"ChooseName.create","ChooseName.hx",61,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_175_update,"ChooseName","update",0xfb2e6815,"ChooseName.update","ChooseName.hx",175,0x04f4471c)
static const int _hx_array_data_3099b4e2_6[] = {
	(int)6,(int)13,(int)20,(int)32,(int)39,(int)46,
};
static const int _hx_array_data_3099b4e2_7[] = {
	(int)25,(int)51,
};
static const int _hx_array_data_3099b4e2_8[] = {
	(int)0,(int)7,(int)14,(int)26,(int)33,(int)40,
};
static const int _hx_array_data_3099b4e2_9[] = {
	(int)21,(int)47,
};
static const int _hx_array_data_3099b4e2_10[] = {
	(int)19,(int)20,
};
static const int _hx_array_data_3099b4e2_11[] = {
	(int)31,(int)32,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_368_Back,"ChooseName","Back",0x46ba0d53,"ChooseName.Back","ChooseName.hx",368,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_375_switchA,"ChooseName","switchA",0x34445441,"ChooseName.switchA","ChooseName.hx",375,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_379_conGame,"ChooseName","conGame",0x2b52d1c8,"ChooseName.conGame","ChooseName.hx",379,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_386_switchB,"ChooseName","switchB",0x34445442,"ChooseName.switchB","ChooseName.hx",386,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_389_switchB,"ChooseName","switchB",0x34445442,"ChooseName.switchB","ChooseName.hx",389,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_392_doneNaming,"ChooseName","doneNaming",0x0189ce76,"ChooseName.doneNaming","ChooseName.hx",392,0x04f4471c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7feeaeeeb2c3568_564_notDone,"ChooseName","notDone",0x673563a9,"ChooseName.notDone","ChooseName.hx",564,0x04f4471c)

void ChooseName_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_20_new)
HXLINE( 172)		this->shakeIntensity = ((Float)0.002);
HXLINE(  50)		this->canSelect = true;
HXLINE(  40)		this->nameDone = false;
HXLINE(  34)		this->nameStr = HX_("",00,00,00,00);
HXLINE(  31)		this->sel = -1;
HXLINE(  30)		this->selected = 0;
HXLINE(  28)		this->yPos2 = 280;
HXLINE(  27)		this->lettersM = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		this->yPos = 150;
HXLINE(  25)		this->xPos = 65;
HXLINE(  24)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)		super::__construct();
            	}

Dynamic ChooseName_obj::__CreateEmpty() { return new ChooseName_obj; }

void *ChooseName_obj::_hx_vtable = 0;

Dynamic ChooseName_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChooseName_obj > _hx_result = new ChooseName_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ChooseName_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x485cd7a2) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x485cd7a2;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ChooseName_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_61_create)
HXLINE(  62)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  63)		this->save->bind(HX_("charatale",71,17,00,4d),null());
HXLINE(  64)		this->lang = ( (::String)(this->save->data->__Field(HX_("lang",ee,05,ad,47),::hx::paccDynamic)) );
HXLINE(  66)		int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  66)		this->nameit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,50,_hx_tmp,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/namethem",1f,50,77,4e))),40,null());
HXLINE(  67)		 ::flixel::text::FlxText _hx_tmp1 = this->nameit;
HXDLIN(  67)		_hx_tmp1->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),30,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  68)		{
HXLINE(  68)			 ::flixel::text::FlxText _this = this->nameit;
HXDLIN(  68)			int axes = 17;
HXDLIN(  68)			bool _hx_tmp2;
HXDLIN(  68)			if ((axes != 1)) {
HXLINE(  68)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  68)				_hx_tmp2 = true;
            			}
HXDLIN(  68)			if (_hx_tmp2) {
HXLINE(  68)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  68)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  68)			bool _hx_tmp3;
HXDLIN(  68)			if ((axes != 16)) {
HXLINE(  68)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE(  68)				_hx_tmp3 = true;
            			}
HXDLIN(  68)			if (_hx_tmp3) {
HXLINE(  68)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  68)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  69)		this->nameit->set_y(( (Float)(50) ));
HXLINE(  70)		this->add(this->nameit);
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			while((_g < 26)){
HXLINE(  72)				_g = (_g + 1);
HXDLIN(  72)				int i = (_g - 1);
HXLINE(  74)				::String letter = ::String::fromCharCode((65 + i));
HXLINE(  75)				 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->xPos,this->yPos,40,letter,null(),null());
HXLINE(  76)				text->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  77)				this->letters->push(text);
HXLINE(  78)				this->add(text);
HXLINE(  80)				if ((::hx::Mod(i,7) == 6)) {
HXLINE(  82)					this->xPos = 65;
HXLINE(  83)					 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  83)					_hx_tmp->yPos = (_hx_tmp->yPos + 30);
            				}
            				else {
HXLINE(  87)					 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  87)					_hx_tmp->xPos = (_hx_tmp->xPos + 80);
            				}
            			}
            		}
HXLINE(  90)		this->xPos = 65;
HXLINE(  91)		{
HXLINE(  91)			int _g1 = 0;
HXDLIN(  91)			while((_g1 < 26)){
HXLINE(  91)				_g1 = (_g1 + 1);
HXDLIN(  91)				int i = (_g1 - 1);
HXLINE(  93)				::String letter = ::String::fromCharCode((65 + i)).toLowerCase();
HXLINE(  94)				 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->xPos,this->yPos2,40,letter,null(),null());
HXLINE(  95)				text->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  96)				this->letters->push(text);
HXLINE(  97)				this->add(text);
HXLINE(  99)				if ((::hx::Mod(i,7) == 6)) {
HXLINE( 101)					this->xPos = 65;
HXLINE( 102)					 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 102)					_hx_tmp->yPos2 = (_hx_tmp->yPos2 + 30);
            				}
            				else {
HXLINE( 106)					 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 106)					_hx_tmp->xPos = (_hx_tmp->xPos + 80);
            				}
            			}
            		}
HXLINE( 110)		 ::flixel::text::FlxText _hx_tmp4 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,300,HX_("Chara",ab,0c,e1,d8),null(),null());
HXDLIN( 110)		this->name = _hx_tmp4->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),50,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 111)		{
HXLINE( 111)			 ::flixel::text::FlxText _this1 = this->name;
HXDLIN( 111)			int axes1 = 17;
HXDLIN( 111)			bool _hx_tmp5;
HXDLIN( 111)			if ((axes1 != 1)) {
HXLINE( 111)				_hx_tmp5 = (axes1 == 17);
            			}
            			else {
HXLINE( 111)				_hx_tmp5 = true;
            			}
HXDLIN( 111)			if (_hx_tmp5) {
HXLINE( 111)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 111)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 111)			bool _hx_tmp6;
HXDLIN( 111)			if ((axes1 != 16)) {
HXLINE( 111)				_hx_tmp6 = (axes1 == 17);
            			}
            			else {
HXLINE( 111)				_hx_tmp6 = true;
            			}
HXDLIN( 111)			if (_hx_tmp6) {
HXLINE( 111)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 111)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 112)		 ::flixel::text::FlxText fh = this->name;
HXDLIN( 112)		fh->set_y((fh->y - ( (Float)(125) )));
HXLINE( 113)		this->add(this->name);
HXLINE( 115)		int _hx_tmp7 = (::flixel::FlxG_obj::height - 60);
HXDLIN( 115)		this->quit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,70,_hx_tmp7,300,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/quit",47,7d,df,a2))),null(),null());
HXLINE( 116)		 ::flixel::text::FlxText _hx_tmp8 = this->quit;
HXDLIN( 116)		_hx_tmp8->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 117)		this->add(this->quit);
HXLINE( 119)		int _hx_tmp9 = (::flixel::FlxG_obj::height - 60);
HXDLIN( 119)		this->backspace =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,_hx_tmp9,300,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/backspace",c7,74,cb,ae))),null(),null());
HXLINE( 120)		 ::flixel::text::FlxText _hx_tmp10 = this->backspace;
HXDLIN( 120)		_hx_tmp10->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 121)		{
HXLINE( 121)			 ::flixel::text::FlxText _this2 = this->backspace;
HXDLIN( 121)			int axes2 = 1;
HXDLIN( 121)			bool _hx_tmp11;
HXDLIN( 121)			if ((axes2 != 1)) {
HXLINE( 121)				_hx_tmp11 = (axes2 == 17);
            			}
            			else {
HXLINE( 121)				_hx_tmp11 = true;
            			}
HXDLIN( 121)			if (_hx_tmp11) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 121)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 121)			bool _hx_tmp12;
HXDLIN( 121)			if ((axes2 != 16)) {
HXLINE( 121)				_hx_tmp12 = (axes2 == 17);
            			}
            			else {
HXLINE( 121)				_hx_tmp12 = true;
            			}
HXDLIN( 121)			if (_hx_tmp12) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 121)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 122)		this->add(this->backspace);
HXLINE( 124)		int _hx_tmp13 = (::flixel::FlxG_obj::height - 60);
HXDLIN( 124)		this->done =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,265,_hx_tmp13,300,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/done",fa,2d,43,9a))),null(),null());
HXLINE( 125)		 ::flixel::text::FlxText _hx_tmp14 = this->done;
HXDLIN( 125)		_hx_tmp14->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 126)		this->add(this->done);
HXLINE( 128)		this->super::create();
HXLINE( 130)		int _hx_tmp15 = ::flixel::FlxG_obj::width;
HXDLIN( 130)		this->warning =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,50,_hx_tmp15,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/warning",e4,57,6c,26))),40,null());
HXLINE( 131)		 ::flixel::text::FlxText _hx_tmp16 = this->warning;
HXDLIN( 131)		_hx_tmp16->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),30,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 132)		{
HXLINE( 132)			 ::flixel::text::FlxText _this3 = this->warning;
HXDLIN( 132)			int axes3 = 17;
HXDLIN( 132)			bool _hx_tmp17;
HXDLIN( 132)			if ((axes3 != 1)) {
HXLINE( 132)				_hx_tmp17 = (axes3 == 17);
            			}
            			else {
HXLINE( 132)				_hx_tmp17 = true;
            			}
HXDLIN( 132)			if (_hx_tmp17) {
HXLINE( 132)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 132)				_this3->set_x(((( (Float)(_hx_tmp) ) - _this3->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 132)			bool _hx_tmp18;
HXDLIN( 132)			if ((axes3 != 16)) {
HXLINE( 132)				_hx_tmp18 = (axes3 == 17);
            			}
            			else {
HXLINE( 132)				_hx_tmp18 = true;
            			}
HXDLIN( 132)			if (_hx_tmp18) {
HXLINE( 132)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 132)				_this3->set_y(((( (Float)(_hx_tmp) ) - _this3->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 133)		this->warning->set_y(( (Float)(30) ));
HXLINE( 134)		this->warning->set_alpha(( (Float)(0) ));
HXLINE( 135)		this->add(this->warning);
HXLINE( 137)		int _hx_tmp19 = ::flixel::FlxG_obj::width;
HXDLIN( 137)		this->sure =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,50,_hx_tmp19,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/choose",4f,e6,6d,a6))),40,null());
HXLINE( 138)		 ::flixel::text::FlxText _hx_tmp20 = this->sure;
HXDLIN( 138)		_hx_tmp20->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),45,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 139)		{
HXLINE( 139)			 ::flixel::text::FlxText _this4 = this->sure;
HXDLIN( 139)			int axes4 = 17;
HXDLIN( 139)			bool _hx_tmp21;
HXDLIN( 139)			if ((axes4 != 1)) {
HXLINE( 139)				_hx_tmp21 = (axes4 == 17);
            			}
            			else {
HXLINE( 139)				_hx_tmp21 = true;
            			}
HXDLIN( 139)			if (_hx_tmp21) {
HXLINE( 139)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 139)				_this4->set_x(((( (Float)(_hx_tmp) ) - _this4->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 139)			bool _hx_tmp22;
HXDLIN( 139)			if ((axes4 != 16)) {
HXLINE( 139)				_hx_tmp22 = (axes4 == 17);
            			}
            			else {
HXLINE( 139)				_hx_tmp22 = true;
            			}
HXDLIN( 139)			if (_hx_tmp22) {
HXLINE( 139)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 139)				_this4->set_y(((( (Float)(_hx_tmp) ) - _this4->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 140)		this->sure->set_y(( (Float)(30) ));
HXLINE( 141)		this->sure->set_alpha(( (Float)(0) ));
HXLINE( 142)		this->add(this->sure);
HXLINE( 144)		this->secret =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,50,::flixel::FlxG_obj::width,HX_("secret",70,0e,4a,64),40,null());
HXLINE( 145)		 ::flixel::text::FlxText _hx_tmp23 = this->secret;
HXDLIN( 145)		_hx_tmp23->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 146)		{
HXLINE( 146)			 ::flixel::text::FlxText _this5 = this->secret;
HXDLIN( 146)			int axes5 = 17;
HXDLIN( 146)			bool _hx_tmp24;
HXDLIN( 146)			if ((axes5 != 1)) {
HXLINE( 146)				_hx_tmp24 = (axes5 == 17);
            			}
            			else {
HXLINE( 146)				_hx_tmp24 = true;
            			}
HXDLIN( 146)			if (_hx_tmp24) {
HXLINE( 146)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 146)				_this5->set_x(((( (Float)(_hx_tmp) ) - _this5->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 146)			bool _hx_tmp25;
HXDLIN( 146)			if ((axes5 != 16)) {
HXLINE( 146)				_hx_tmp25 = (axes5 == 17);
            			}
            			else {
HXLINE( 146)				_hx_tmp25 = true;
            			}
HXDLIN( 146)			if (_hx_tmp25) {
HXLINE( 146)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 146)				_this5->set_y(((( (Float)(_hx_tmp) ) - _this5->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 147)		this->secret->set_y(( (Float)(30) ));
HXLINE( 148)		this->secret->set_alpha(( (Float)(0) ));
HXLINE( 149)		this->add(this->secret);
HXLINE( 151)		int _hx_tmp26 = (::flixel::FlxG_obj::height - 60);
HXDLIN( 151)		int _hx_tmp27 = ::flixel::FlxG_obj::width;
HXDLIN( 151)		this->no =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,_hx_tmp26,_hx_tmp27,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/no",b9,cf,40,b3))),null(),null());
HXLINE( 152)		 ::flixel::text::FlxText _hx_tmp28 = this->no;
HXDLIN( 152)		_hx_tmp28->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 153)		this->no->set_alpha(( (Float)(0) ));
HXLINE( 154)		this->add(this->no);
HXLINE( 156)		int _hx_tmp29 = (::flixel::FlxG_obj::height - 60);
HXDLIN( 156)		int _hx_tmp30 = ::flixel::FlxG_obj::width;
HXDLIN( 156)		this->yes =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-30,_hx_tmp29,_hx_tmp30,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/yes",af,42,7d,25))),null(),null());
HXLINE( 157)		 ::flixel::text::FlxText _hx_tmp31 = this->yes;
HXDLIN( 157)		_hx_tmp31->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 158)		this->yes->set_alpha(( (Float)(0) ));
HXLINE( 159)		this->add(this->yes);
HXLINE( 161)		int _hx_tmp32 = (::flixel::FlxG_obj::height - 60);
HXDLIN( 161)		int _hx_tmp33 = ::flixel::FlxG_obj::width;
HXDLIN( 161)		this->back =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,30,_hx_tmp32,_hx_tmp33,::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/back",9f,17,e6,98))),null(),null());
HXLINE( 162)		 ::flixel::text::FlxText _hx_tmp34 = this->back;
HXDLIN( 162)		_hx_tmp34->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),40,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 163)		this->back->set_alpha(( (Float)(0) ));
HXLINE( 164)		this->add(this->back);
HXLINE( 166)		this->dark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE( 167)		this->dark->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 168)		this->dark->set_alpha(( (Float)(1) ));
HXLINE( 169)		this->add(this->dark);
            	}


void ChooseName_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_175_update)
HXLINE( 176)		if ((this->dark->alpha > 0)) {
HXLINE( 178)			 ::flixel::FlxSprite fh = this->dark;
HXDLIN( 178)			fh->set_alpha((fh->alpha - ((Float)0.05)));
            		}
            		else {
HXLINE( 180)			if ((this->dark->alpha == 0)) {
HXLINE( 182)				::GlobalVariables_obj::dark = ( (Float)(0) );
            			}
            		}
HXLINE( 185)		::flixel::FlxG_obj::cameras->shake(this->shakeIntensity,((Float)0.1),null(),null(),null());
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			int _g1 = this->letters->length;
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 193)				if ((this->selected == i)) {
HXLINE( 195)					 ::flixel::text::FlxText _hx_tmp = this->letters->__get(i).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 195)					_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-256,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 196)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 196)					if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 197)						 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 197)						_hx_tmp->nameStr = (_hx_tmp->nameStr + this->letters->__get(i).StaticCast<  ::flixel::text::FlxText >()->text);
            					}
            				}
            				else {
HXLINE( 202)					 ::flixel::text::FlxText _hx_tmp = this->letters->__get(i).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 202)					_hx_tmp->setFormat(::Paths_obj::font(HX_("determination",e3,fc,46,ec)),35,-1,HX_("center",d5,25,db,05),null(),null(),null());
            				}
            			}
            		}
HXLINE( 206)		 ::flixel::text::FlxText _hx_tmp = this->quit;
HXDLIN( 206)		::String _hx_tmp1 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 206)		int _hx_tmp2;
HXDLIN( 206)		if ((this->selected == 52)) {
HXLINE( 206)			_hx_tmp2 = -256;
            		}
            		else {
HXLINE( 206)			_hx_tmp2 = -1;
            		}
HXDLIN( 206)		_hx_tmp->setFormat(_hx_tmp1,40,_hx_tmp2,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 207)		bool _hx_tmp3;
HXDLIN( 207)		if ((this->selected == 52)) {
HXLINE( 207)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 207)			_hx_tmp3 = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXLINE( 207)			_hx_tmp3 = false;
            		}
HXDLIN( 207)		if (_hx_tmp3) {
HXLINE( 207)			this->Back();
HXDLIN( 207)			this->nameDone = true;
            		}
HXLINE( 208)		 ::flixel::text::FlxText _hx_tmp4 = this->backspace;
HXDLIN( 208)		::String _hx_tmp5 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 208)		int _hx_tmp6;
HXDLIN( 208)		if ((this->selected == 53)) {
HXLINE( 208)			_hx_tmp6 = -256;
            		}
            		else {
HXLINE( 208)			_hx_tmp6 = -1;
            		}
HXDLIN( 208)		_hx_tmp4->setFormat(_hx_tmp5,40,_hx_tmp6,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 209)		bool _hx_tmp7;
HXDLIN( 209)		if ((this->selected == 53)) {
HXLINE( 209)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 209)			_hx_tmp7 = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXLINE( 209)			_hx_tmp7 = false;
            		}
HXDLIN( 209)		if (_hx_tmp7) {
HXLINE( 209)			this->nameStr = this->nameStr.substring(0,(this->nameStr.length - 1));
            		}
HXLINE( 210)		 ::flixel::text::FlxText _hx_tmp8 = this->done;
HXDLIN( 210)		::String _hx_tmp9 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 210)		int _hx_tmp10;
HXDLIN( 210)		if ((this->selected == 54)) {
HXLINE( 210)			_hx_tmp10 = -256;
            		}
            		else {
HXLINE( 210)			_hx_tmp10 = -1;
            		}
HXDLIN( 210)		_hx_tmp8->setFormat(_hx_tmp9,40,_hx_tmp10,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 211)		bool _hx_tmp11;
HXDLIN( 211)		bool _hx_tmp12;
HXDLIN( 211)		bool _hx_tmp13;
HXDLIN( 211)		bool _hx_tmp14;
HXDLIN( 211)		if ((this->selected == 54)) {
HXLINE( 211)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 211)			_hx_tmp14 = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXLINE( 211)			_hx_tmp14 = false;
            		}
HXDLIN( 211)		if (_hx_tmp14) {
HXLINE( 211)			_hx_tmp13 = (this->nameStr.length >= 3);
            		}
            		else {
HXLINE( 211)			_hx_tmp13 = false;
            		}
HXDLIN( 211)		if (_hx_tmp13) {
HXLINE( 211)			_hx_tmp12 = (this->no->alpha == 0);
            		}
            		else {
HXLINE( 211)			_hx_tmp12 = false;
            		}
HXDLIN( 211)		if (_hx_tmp12) {
HXLINE( 211)			_hx_tmp11 = (this->back->alpha == 0);
            		}
            		else {
HXLINE( 211)			_hx_tmp11 = false;
            		}
HXDLIN( 211)		if (_hx_tmp11) {
HXLINE( 211)			this->doneNaming();
            		}
HXLINE( 213)		this->name->set_text(this->nameStr);
HXLINE( 215)		if (!(this->nameDone)) {
HXLINE( 216)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 216)			if (_this->keyManager->checkStatusUnsafe(39,_this->status)) {
HXLINE( 218)				if ((::Array_obj< int >::fromData( _hx_array_data_3099b4e2_6,6)->indexOf(this->selected,null()) != -1)) {
HXLINE( 220)					 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 220)					_hx_tmp->selected = (_hx_tmp->selected - 6);
            				}
            				else {
HXLINE( 222)					if ((::Array_obj< int >::fromData( _hx_array_data_3099b4e2_7,2)->indexOf(this->selected,null()) != -1)) {
HXLINE( 224)						 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 224)						_hx_tmp->selected = (_hx_tmp->selected - 4);
            					}
            					else {
HXLINE( 226)						if ((this->selected == 54)) {
HXLINE( 228)							this->selected = 52;
            						}
            						else {
HXLINE( 232)							this->selected++;
            						}
            					}
            				}
            			}
            			else {
HXLINE( 235)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 235)				if (_this->keyManager->checkStatusUnsafe(37,_this->status)) {
HXLINE( 237)					if ((::Array_obj< int >::fromData( _hx_array_data_3099b4e2_8,6)->indexOf(this->selected,null()) != -1)) {
HXLINE( 239)						 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)						_hx_tmp->selected = (_hx_tmp->selected + 6);
            					}
            					else {
HXLINE( 241)						if ((::Array_obj< int >::fromData( _hx_array_data_3099b4e2_9,2)->indexOf(this->selected,null()) != -1)) {
HXLINE( 243)							 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 243)							_hx_tmp->selected = (_hx_tmp->selected + 4);
            						}
            						else {
HXLINE( 245)							if ((this->selected == 52)) {
HXLINE( 247)								this->selected = 54;
            							}
            							else {
HXLINE( 251)								this->selected--;
            							}
            						}
            					}
            				}
            			}
HXLINE( 255)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 255)			if (_this1->keyManager->checkStatusUnsafe(40,_this1->status)) {
HXLINE( 257)				bool _hx_tmp;
HXDLIN( 257)				if ((this->selected >= 21)) {
HXLINE( 257)					_hx_tmp = (this->selected <= 25);
            				}
            				else {
HXLINE( 257)					_hx_tmp = false;
            				}
HXDLIN( 257)				if (_hx_tmp) {
HXLINE( 259)					 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)					_hx_tmp->selected = (_hx_tmp->selected + 5);
            				}
            				else {
HXLINE( 261)					if ((::Array_obj< int >::fromData( _hx_array_data_3099b4e2_10,2)->indexOf(this->selected,null()) != -1)) {
HXLINE( 263)						 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)						_hx_tmp->selected = (_hx_tmp->selected + 12);
            					}
            					else {
HXLINE( 265)						bool _hx_tmp;
HXDLIN( 265)						if ((this->selected != 45)) {
HXLINE( 265)							_hx_tmp = (this->selected == 46);
            						}
            						else {
HXLINE( 265)							_hx_tmp = true;
            						}
HXDLIN( 265)						if (_hx_tmp) {
HXLINE( 267)							this->selected = 54;
            						}
            						else {
HXLINE( 269)							bool _hx_tmp;
HXDLIN( 269)							if ((this->selected >= 47)) {
HXLINE( 269)								_hx_tmp = (this->selected <= 48);
            							}
            							else {
HXLINE( 269)								_hx_tmp = false;
            							}
HXDLIN( 269)							if (_hx_tmp) {
HXLINE( 271)								this->selected = 52;
            							}
            							else {
HXLINE( 273)								bool _hx_tmp;
HXDLIN( 273)								if ((this->selected >= 49)) {
HXLINE( 273)									_hx_tmp = (this->selected <= 51);
            								}
            								else {
HXLINE( 273)									_hx_tmp = false;
            								}
HXDLIN( 273)								if (_hx_tmp) {
HXLINE( 275)									this->selected = 53;
            								}
            								else {
HXLINE( 277)									if ((this->selected == 52)) {
HXLINE( 279)										this->selected = 0;
            									}
            									else {
HXLINE( 281)										if ((this->selected == 54)) {
HXLINE( 283)											this->selected = 6;
            										}
            										else {
HXLINE( 285)											if ((this->selected == 53)) {
HXLINE( 287)												this->selected = 3;
            											}
            											else {
HXLINE( 291)												 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 291)												_hx_tmp->selected = (_hx_tmp->selected + 7);
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 294)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 294)				if (_this->keyManager->checkStatusUnsafe(38,_this->status)) {
HXLINE( 296)					bool _hx_tmp;
HXDLIN( 296)					if ((this->selected >= 26)) {
HXLINE( 296)						_hx_tmp = (this->selected <= 30);
            					}
            					else {
HXLINE( 296)						_hx_tmp = false;
            					}
HXDLIN( 296)					if (_hx_tmp) {
HXLINE( 298)						 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 298)						_hx_tmp->selected = (_hx_tmp->selected - 5);
            					}
            					else {
HXLINE( 300)						if ((::Array_obj< int >::fromData( _hx_array_data_3099b4e2_11,2)->indexOf(this->selected,null()) != -1)) {
HXLINE( 302)							 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 302)							_hx_tmp->selected = (_hx_tmp->selected - 12);
            						}
            						else {
HXLINE( 304)							bool _hx_tmp;
HXDLIN( 304)							if ((this->selected >= 0)) {
HXLINE( 304)								_hx_tmp = (this->selected <= 1);
            							}
            							else {
HXLINE( 304)								_hx_tmp = false;
            							}
HXDLIN( 304)							if (_hx_tmp) {
HXLINE( 306)								this->selected = 52;
            							}
            							else {
HXLINE( 308)								bool _hx_tmp;
HXDLIN( 308)								if ((this->selected >= 2)) {
HXLINE( 308)									_hx_tmp = (this->selected <= 4);
            								}
            								else {
HXLINE( 308)									_hx_tmp = false;
            								}
HXDLIN( 308)								if (_hx_tmp) {
HXLINE( 310)									this->selected = 53;
            								}
            								else {
HXLINE( 312)									if ((this->selected == 52)) {
HXLINE( 314)										this->selected = 47;
            									}
            									else {
HXLINE( 316)										if ((this->selected == 54)) {
HXLINE( 318)											this->selected = 46;
            										}
            										else {
HXLINE( 320)											bool _hx_tmp;
HXDLIN( 320)											if ((this->selected != 6)) {
HXLINE( 320)												_hx_tmp = (this->selected == 5);
            											}
            											else {
HXLINE( 320)												_hx_tmp = true;
            											}
HXDLIN( 320)											if (_hx_tmp) {
HXLINE( 322)												this->selected = 54;
            											}
            											else {
HXLINE( 324)												if ((this->selected == 53)) {
HXLINE( 326)													this->selected = 50;
            												}
            												else {
HXLINE( 330)													 ::ChooseName _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 330)													_hx_tmp->selected = (_hx_tmp->selected - 7);
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 335)		this->super::update(elapsed);
HXLINE( 337)		 ::flixel::text::FlxText _hx_tmp15 = this->yes;
HXDLIN( 337)		::String _hx_tmp16 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 337)		int _hx_tmp17;
HXDLIN( 337)		if ((this->sel == 1)) {
HXLINE( 337)			_hx_tmp17 = -256;
            		}
            		else {
HXLINE( 337)			_hx_tmp17 = -1;
            		}
HXDLIN( 337)		_hx_tmp15->setFormat(_hx_tmp16,40,_hx_tmp17,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 338)		 ::flixel::text::FlxText _hx_tmp18 = this->no;
HXDLIN( 338)		::String _hx_tmp19 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 338)		int _hx_tmp20;
HXDLIN( 338)		if ((this->sel == 0)) {
HXLINE( 338)			_hx_tmp20 = -256;
            		}
            		else {
HXLINE( 338)			_hx_tmp20 = -1;
            		}
HXDLIN( 338)		_hx_tmp18->setFormat(_hx_tmp19,40,_hx_tmp20,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 339)		 ::flixel::text::FlxText _hx_tmp21 = this->back;
HXDLIN( 339)		::String _hx_tmp22 = ::Paths_obj::font(HX_("determination",e3,fc,46,ec));
HXDLIN( 339)		int _hx_tmp23;
HXDLIN( 339)		if ((this->sel == 0)) {
HXLINE( 339)			_hx_tmp23 = -256;
            		}
            		else {
HXLINE( 339)			_hx_tmp23 = -1;
            		}
HXDLIN( 339)		_hx_tmp21->setFormat(_hx_tmp22,40,_hx_tmp23,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 341)		bool _hx_tmp24;
HXDLIN( 341)		bool _hx_tmp25;
HXDLIN( 341)		bool _hx_tmp26;
HXDLIN( 341)		if (this->nameDone) {
HXLINE( 341)			_hx_tmp26 = (this->nameit->alpha == 0);
            		}
            		else {
HXLINE( 341)			_hx_tmp26 = false;
            		}
HXDLIN( 341)		if (_hx_tmp26) {
HXLINE( 341)			_hx_tmp25 = (this->sel == 0);
            		}
            		else {
HXLINE( 341)			_hx_tmp25 = false;
            		}
HXDLIN( 341)		if (_hx_tmp25) {
HXLINE( 341)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 341)			_hx_tmp24 = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXLINE( 341)			_hx_tmp24 = false;
            		}
HXDLIN( 341)		if (_hx_tmp24) {
HXLINE( 342)			this->notDone();
            		}
HXLINE( 344)		bool _hx_tmp27;
HXDLIN( 344)		bool _hx_tmp28;
HXDLIN( 344)		bool _hx_tmp29;
HXDLIN( 344)		if (this->nameDone) {
HXLINE( 344)			_hx_tmp29 = (this->nameit->alpha == 0);
            		}
            		else {
HXLINE( 344)			_hx_tmp29 = false;
            		}
HXDLIN( 344)		if (_hx_tmp29) {
HXLINE( 344)			_hx_tmp28 = (this->sel == 1);
            		}
            		else {
HXLINE( 344)			_hx_tmp28 = false;
            		}
HXDLIN( 344)		if (_hx_tmp28) {
HXLINE( 344)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 344)			_hx_tmp27 = _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		else {
HXLINE( 344)			_hx_tmp27 = false;
            		}
HXDLIN( 344)		if (_hx_tmp27) {
HXLINE( 346)			this->conGame();
            		}
HXLINE( 349)		if (this->canSelect) {
HXLINE( 350)			bool _hx_tmp;
HXDLIN( 350)			if (this->nameDone) {
HXLINE( 350)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 350)				_hx_tmp = _this->keyManager->checkStatusUnsafe(39,_this->status);
            			}
            			else {
HXLINE( 350)				_hx_tmp = false;
            			}
HXDLIN( 350)			if (_hx_tmp) {
HXLINE( 352)				this->sel++;
            			}
            			else {
HXLINE( 354)				bool _hx_tmp;
HXDLIN( 354)				if (this->nameDone) {
HXLINE( 354)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 354)					_hx_tmp = _this->keyManager->checkStatusUnsafe(37,_this->status);
            				}
            				else {
HXLINE( 354)					_hx_tmp = false;
            				}
HXDLIN( 354)				if (_hx_tmp) {
HXLINE( 356)					this->sel--;
            				}
            			}
            		}
HXLINE( 360)		bool _hx_tmp30;
HXDLIN( 360)		if (this->nameDone) {
HXLINE( 360)			_hx_tmp30 = (this->sel < 0);
            		}
            		else {
HXLINE( 360)			_hx_tmp30 = false;
            		}
HXDLIN( 360)		if (_hx_tmp30) {
HXLINE( 361)			this->sel = 1;
            		}
            		else {
HXLINE( 362)			bool _hx_tmp;
HXDLIN( 362)			if (this->nameDone) {
HXLINE( 362)				_hx_tmp = (this->sel > 1);
            			}
            			else {
HXLINE( 362)				_hx_tmp = false;
            			}
HXDLIN( 362)			if (_hx_tmp) {
HXLINE( 363)				this->sel = 0;
            			}
            		}
            	}


void ChooseName_obj::Back(){
            	HX_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_368_Back)
HXLINE( 369)		::flixel::tweens::FlxTween_obj::tween(this->dark, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->switchA_dyn())));
HXLINE( 370)		::GlobalVariables_obj::dark = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChooseName_obj,Back,(void))

void ChooseName_obj::switchA( ::flixel::tweens::FlxTween t){
            	HX_GC_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_375_switchA)
HXDLIN( 375)		 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::MainMenuState_obj::__alloc( HX_CTX ));
HXDLIN( 375)		 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 375)		bool _hx_tmp;
HXDLIN( 375)		if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXDLIN( 375)			_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            		}
            		else {
HXDLIN( 375)			_hx_tmp = true;
            		}
HXDLIN( 375)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_375_switchA)
HXDLIN( 375)				if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXDLIN( 375)					::flixel::FlxG_obj::game->_nextState = nextState;
            				}
            				else {
HXDLIN( 375)					::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 375)			::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChooseName_obj,switchA,(void))

void ChooseName_obj::conGame(){
            	HX_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_379_conGame)
HXLINE( 380)		::flixel::tweens::FlxTween_obj::tween(this->dark, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeIn_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->switchB_dyn())));
HXLINE( 381)		this->save->data->__SetField(HX_("name",4b,72,ff,48),this->name->text,::hx::paccDynamic);
HXLINE( 382)		::GlobalVariables_obj::dark = ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChooseName_obj,conGame,(void))

void ChooseName_obj::switchB( ::flixel::tweens::FlxTween t){
            	HX_GC_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_386_switchB)
HXLINE( 387)		this->save->data->__SetField(HX_("save",3d,8b,4d,4c),0,::hx::paccDynamic);
HXLINE( 388)		::GlobalVariables_obj::bZone = HX_("",00,00,00,00);
HXLINE( 389)		{
HXLINE( 389)			 ::Dynamic nextState = ::flixel::util::typeLimit::_NextState::NextState_Impl__obj::fromState( ::mapStates::theRuins::Zone1_obj::__alloc( HX_CTX ));
HXDLIN( 389)			 ::flixel::FlxState stateOnCall = ::flixel::FlxG_obj::game->_state;
HXDLIN( 389)			bool _hx_tmp;
HXDLIN( 389)			if (::Std_obj::isOfType(nextState,::hx::ClassOf< ::flixel::FlxState >())) {
HXLINE( 389)				_hx_tmp = ::flixel::FlxG_obj::canSwitchTo(( ( ::flixel::FlxState)(nextState) ));
            			}
            			else {
HXLINE( 389)				_hx_tmp = true;
            			}
HXDLIN( 389)			if (_hx_tmp) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,nextState, ::flixel::FlxState,stateOnCall) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_389_switchB)
HXLINE( 389)					if (::hx::IsInstanceEq( ::flixel::FlxG_obj::game->_state,stateOnCall )) {
HXLINE( 389)						::flixel::FlxG_obj::game->_nextState = nextState;
            					}
            					else {
HXLINE( 389)						::flixel::FlxG_obj::log->advanced(HX_("`onOutroComplete` was called after the state was switched. This will be ignored",46,b2,58,c7),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 389)				::flixel::FlxG_obj::game->_state->startOutro( ::Dynamic(new _hx_Closure_0(nextState,stateOnCall)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChooseName_obj,switchB,(void))

void ChooseName_obj::doneNaming(){
            	HX_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_392_doneNaming)
HXLINE( 393)		{
HXLINE( 393)			int _g = 0;
HXDLIN( 393)			int _g1 = this->letters->length;
HXDLIN( 393)			while((_g < _g1)){
HXLINE( 393)				_g = (_g + 1);
HXDLIN( 393)				int i = (_g - 1);
HXLINE( 394)				::flixel::tweens::FlxTween_obj::tween(this->letters->__get(i).StaticCast<  ::flixel::text::FlxText >(), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
            			}
            		}
HXLINE( 396)		this->nameDone = true;
HXLINE( 397)		::flixel::tweens::FlxTween_obj::tween(this->nameit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 398)		::flixel::tweens::FlxTween_obj::tween(this->quit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 399)		::flixel::tweens::FlxTween_obj::tween(this->backspace, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 400)		::flixel::tweens::FlxTween_obj::tween(this->done, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 402)		::flixel::tweens::FlxTween_obj::tween(this->name, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("y",79,00,00,00),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(30) )))
            			->setFixed(1,HX_("scale.x",94,2d,07,65),((Float)2.6))
            			->setFixed(2,HX_("scale.y",95,2d,07,65),((Float)2.6))),((Float)1.2), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 403)		::flixel::tweens::FlxTween_obj::tween(this->name, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("angle",d3,43,e2,22),3)),((Float)0.05), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("type",ba,f2,08,4d),4)));
HXLINE( 405)		this->canSelect = true;
HXLINE( 407)		if ((this->nameStr.toLowerCase() == HX_("chara",cb,9c,b3,45))) {
HXLINE( 408)			::flixel::tweens::FlxTween_obj::tween(this->warning, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 409)			this->shakeIntensity = ((Float)0.006);
            		}
            		else {
HXLINE( 411)			if ((this->nameStr.toLowerCase() == HX_("toriel",d9,96,8a,96))) {
HXLINE( 412)				 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 412)				_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/toriel",1d,6a,30,e2))));
HXLINE( 413)				this->canSelect = false;
HXLINE( 414)				::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 415)				this->shakeIntensity = ((Float)0.003);
            			}
            			else {
HXLINE( 417)				if ((this->nameStr.toLowerCase() == HX_("frisk",75,8f,89,06))) {
HXLINE( 419)					 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 419)					_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/frisk",b1,d0,bc,c7))));
HXLINE( 420)					::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 421)					this->shakeIntensity = ((Float)0.003);
            				}
            				else {
HXLINE( 423)					if ((this->nameStr.toLowerCase() == HX_("sans",53,84,4d,4c))) {
HXLINE( 425)						 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 425)						_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/sans",97,3e,dd,88))));
HXLINE( 426)						this->canSelect = false;
HXLINE( 427)						::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 428)						this->shakeIntensity = ((Float)0.003);
            					}
            					else {
HXLINE( 430)						if ((this->nameStr.toLowerCase() == HX_("papyrus",56,a5,34,c7))) {
HXLINE( 432)							 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 432)							_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/papyrus",92,ad,a7,ac))));
HXLINE( 433)							this->canSelect = false;
HXLINE( 434)							::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 435)							this->shakeIntensity = ((Float)0.003);
            						}
            						else {
HXLINE( 437)							if ((this->nameStr.toLowerCase() == HX_("daddy",9c,ed,7b,d4))) {
HXLINE( 439)								 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 439)								_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/daddy",d8,2e,af,95))));
HXLINE( 440)								::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 441)								this->shakeIntensity = ((Float)0.003);
            							}
            							else {
HXLINE( 443)								if ((this->nameStr.toLowerCase() == HX_("mommy",f7,fe,5e,0c))) {
HXLINE( 445)									 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 445)									_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/mommy",33,40,92,cd))));
HXLINE( 446)									::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 447)									this->shakeIntensity = ((Float)0.003);
            								}
            								else {
HXLINE( 449)									if ((this->nameStr.toLowerCase() == HX_("skill",91,95,1e,7e))) {
HXLINE( 451)										 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 451)										_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/skill",cd,d6,51,3f))));
HXLINE( 452)										::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            											->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 453)										this->shakeIntensity = ((Float)0.003);
            									}
            									else {
HXLINE( 455)										bool _hx_tmp;
HXDLIN( 455)										if ((this->nameStr.toLowerCase() != HX_("alan",98,fa,6f,40))) {
HXLINE( 455)											_hx_tmp = (this->nameStr.toLowerCase() == HX_("alex",1e,fe,6f,40));
            										}
            										else {
HXLINE( 455)											_hx_tmp = true;
            										}
HXDLIN( 455)										if (_hx_tmp) {
HXLINE( 457)											 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 457)											_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/friends",91,c0,d8,c3))));
HXLINE( 458)											::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            												->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 459)											this->shakeIntensity = ((Float)0.003);
            										}
            										else {
HXLINE( 461)											if ((this->nameStr.toLowerCase() == HX_("lukas",34,23,ee,7c))) {
HXLINE( 463)												 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 463)												_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/lukas",70,64,21,3e))));
HXLINE( 464)												::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            													->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 465)												this->shakeIntensity = ((Float)0.003);
            											}
            											else {
HXLINE( 467)												if ((this->nameStr.toLowerCase() == HX_("logan",71,d2,f3,78))) {
HXLINE( 469)													 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 469)													_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/logan",ad,13,27,3a))));
HXLINE( 470)													::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            														->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 471)													this->shakeIntensity = ((Float)0.003);
            												}
            												else {
HXLINE( 473)													if ((this->nameStr.toLowerCase() == HX_("tracer",4d,26,7d,45))) {
HXLINE( 475)														 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 475)														_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/tracer",91,f9,22,91))));
HXLINE( 476)														this->canSelect = false;
HXLINE( 477)														::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            															->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 478)														this->shakeIntensity = ((Float)0.003);
            													}
            													else {
HXLINE( 480)														bool _hx_tmp;
HXDLIN( 480)														if ((this->nameStr.toLowerCase() != HX_("toby",12,50,01,4d))) {
HXLINE( 480)															_hx_tmp = (this->nameStr.toLowerCase() == HX_("tobyfox",3d,4e,e4,f6));
            														}
            														else {
HXLINE( 480)															_hx_tmp = true;
            														}
HXDLIN( 480)														if (_hx_tmp) {
HXLINE( 482)															 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 482)															_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/the creator",39,92,a2,cf))));
HXLINE( 483)															::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 484)															this->shakeIntensity = ((Float)0.003);
            														}
            														else {
HXLINE( 486)															if ((this->nameStr.toLowerCase() == HX_("batman",e5,6b,d7,55))) {
HXLINE( 488)																 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 488)																_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/batman",29,3f,7d,a1))));
HXLINE( 489)																::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																	->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 490)																this->shakeIntensity = ((Float)0.003);
            															}
            															else {
HXLINE( 492)																if ((this->nameStr.toLowerCase() == HX_("alphys",3d,e0,3b,42))) {
HXLINE( 494)																	 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 494)																	_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/alphys",81,b3,e1,8d))));
HXLINE( 495)																	this->canSelect = false;
HXLINE( 496)																	::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																		->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 497)																	this->shakeIntensity = ((Float)0.003);
            																}
            																else {
HXLINE( 499)																	if ((this->nameStr.toLowerCase() == HX_("undyne",e5,8d,4a,60))) {
HXLINE( 501)																		 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 501)																		_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/undyne",29,61,f0,ab))));
HXLINE( 502)																		this->canSelect = false;
HXLINE( 503)																		::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 504)																		this->shakeIntensity = ((Float)0.003);
            																	}
            																	else {
HXLINE( 506)																		bool _hx_tmp;
HXDLIN( 506)																		if ((this->nameStr.toLowerCase() != HX_("dummie",4d,47,f1,a1))) {
HXLINE( 506)																			_hx_tmp = (this->nameStr.toLowerCase() == HX_("dummy",28,0e,bb,e1));
            																		}
            																		else {
HXLINE( 506)																			_hx_tmp = true;
            																		}
HXDLIN( 506)																		if (_hx_tmp) {
HXLINE( 508)																			 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 508)																			_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/dumm",75,37,02,7f))));
HXLINE( 509)																			this->canSelect = false;
HXLINE( 510)																			::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 511)																			this->shakeIntensity = ((Float)0.003);
            																		}
            																		else {
HXLINE( 513)																			if ((this->nameStr.toLowerCase() == HX_("naps",f6,74,ff,48))) {
HXLINE( 515)																				 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 515)																				_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/naps",3a,2f,8f,85))));
HXLINE( 516)																				::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 517)																				this->shakeIntensity = ((Float)0.003);
            																			}
            																			else {
HXLINE( 519)																				bool _hx_tmp;
HXDLIN( 519)																				if ((this->nameStr.toLowerCase() != HX_("spiderman",95,d7,a7,45))) {
HXLINE( 519)																					_hx_tmp = (this->nameStr.toLowerCase() == HX_("peter",0c,e3,fb,bf));
            																				}
            																				else {
HXLINE( 519)																					_hx_tmp = true;
            																				}
HXDLIN( 519)																				if (_hx_tmp) {
HXLINE( 521)																					 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 521)																					_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/spider",69,eb,44,09))));
HXLINE( 522)																					::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																						->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 523)																					this->shakeIntensity = ((Float)0.003);
            																				}
            																				else {
HXLINE( 525)																					if ((this->nameStr.toLowerCase() == HX_("angelfoxiano",07,c9,88,52))) {
HXLINE( 527)																						 ::flixel::text::FlxText _hx_tmp = this->secret;
HXDLIN( 527)																						_hx_tmp->set_text(::openfl::utils::Assets_obj::getText(::Paths_obj::lang(this->lang,HX_("choose/secrets/angel",fd,7e,15,e4))));
HXLINE( 528)																						::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																							->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 529)																						this->canSelect = false;
HXLINE( 530)																						this->shakeIntensity = ((Float)0.003);
            																					}
            																					else {
HXLINE( 532)																						bool _hx_tmp;
HXDLIN( 532)																						if ((this->nameStr.toLowerCase() != HX_("tem",dc,5d,58,00))) {
HXLINE( 532)																							_hx_tmp = (this->nameStr.toLowerCase() == HX_("temmie",2d,c5,3d,d1));
            																						}
            																						else {
HXLINE( 532)																							_hx_tmp = true;
            																						}
HXDLIN( 532)																						if (_hx_tmp) {
HXLINE( 534)																							this->secret->set_text(HX_("HoI!!11!!!",7f,08,2b,c0));
HXLINE( 535)																							::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																								->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 536)																							this->shakeIntensity = ((Float)0.003);
            																						}
            																						else {
HXLINE( 538)																							bool _hx_tmp;
HXDLIN( 538)																							if ((this->nameStr.toLowerCase() == HX_("xkiphu",27,1d,70,dc))) {
HXLINE( 538)																								_hx_tmp = (this->lang.toLowerCase() == HX_("spanish",b4,90,00,99));
            																							}
            																							else {
HXLINE( 538)																								_hx_tmp = false;
            																							}
HXDLIN( 538)																							if (_hx_tmp) {
HXLINE( 540)																								this->secret->set_text(HX_("Que esa MONDA Sapa hijuepu-",8d,47,4b,39));
HXLINE( 541)																								::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																									->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 542)																								this->shakeIntensity = ((Float)0.003);
            																							}
            																							else {
HXLINE( 544)																								bool _hx_tmp;
HXDLIN( 544)																								if ((this->nameStr.toLowerCase() == HX_("markiplier",5e,33,2a,67))) {
HXLINE( 544)																									_hx_tmp = (this->lang.toLowerCase() == HX_("english",30,67,32,f9));
            																								}
            																								else {
HXLINE( 544)																									_hx_tmp = false;
            																								}
HXDLIN( 544)																								if (_hx_tmp) {
HXLINE( 546)																									this->secret->set_text(HX_("Hello my name is Markiplier.",a9,b4,ab,82));
HXLINE( 547)																									::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            																										->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 548)																									this->shakeIntensity = ((Float)0.003);
            																								}
            																								else {
HXLINE( 550)																									::flixel::tweens::FlxTween_obj::tween(this->sure, ::Dynamic(::hx::Anon_obj::Create(1)
            																										->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.7),null());
HXLINE( 551)																									this->shakeIntensity = ((Float)0.0045);
            																								}
            																							}
            																						}
            																					}
            																				}
            																			}
            																		}
            																	}
            																}
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 554)		this->sel = 0;
HXLINE( 556)		if (this->canSelect) {
HXLINE( 557)			::flixel::tweens::FlxTween_obj::tween(this->no, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 558)			::flixel::tweens::FlxTween_obj::tween(this->yes, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
            		}
            		else {
HXLINE( 560)			::flixel::tweens::FlxTween_obj::tween(this->back, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChooseName_obj,doneNaming,(void))

void ChooseName_obj::notDone(){
            	HX_STACKFRAME(&_hx_pos_b7feeaeeeb2c3568_564_notDone)
HXLINE( 565)		{
HXLINE( 565)			int _g = 0;
HXDLIN( 565)			int _g1 = this->letters->length;
HXDLIN( 565)			while((_g < _g1)){
HXLINE( 565)				_g = (_g + 1);
HXDLIN( 565)				int i = (_g - 1);
HXLINE( 567)				::flixel::tweens::FlxTween_obj::tween(this->letters->__get(i).StaticCast<  ::flixel::text::FlxText >(), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
            			}
            		}
HXLINE( 569)		this->nameDone = true;
HXLINE( 570)		::flixel::tweens::FlxTween_obj::tween(this->nameit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 571)		::flixel::tweens::FlxTween_obj::tween(this->quit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 572)		::flixel::tweens::FlxTween_obj::tween(this->backspace, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 573)		::flixel::tweens::FlxTween_obj::tween(this->done, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 575)		::flixel::tweens::FlxTween_obj::tween(this->name, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("y",79,00,00,00),((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(150) )))
            			->setFixed(1,HX_("scale.x",94,2d,07,65),1)
            			->setFixed(2,HX_("scale.y",95,2d,07,65),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())));
HXLINE( 577)		::flixel::tweens::FlxTween_obj::tween(this->warning, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4),null());
HXLINE( 578)		::flixel::tweens::FlxTween_obj::tween(this->secret, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4),null());
HXLINE( 579)		::flixel::tweens::FlxTween_obj::tween(this->sure, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4),null());
HXLINE( 581)		::flixel::tweens::FlxTween_obj::tween(this->name, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("angle",d3,43,e2,22),0)),((Float)0.05), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("type",ba,f2,08,4d),4)));
HXLINE( 583)		::flixel::tweens::FlxTween_obj::tween(this->no, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 584)		::flixel::tweens::FlxTween_obj::tween(this->yes, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 585)		::flixel::tweens::FlxTween_obj::tween(this->back, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5),null());
HXLINE( 587)		this->nameDone = false;
HXLINE( 588)		this->shakeIntensity = ((Float)0.002);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ChooseName_obj,notDone,(void))


::hx::ObjectPtr< ChooseName_obj > ChooseName_obj::__new() {
	::hx::ObjectPtr< ChooseName_obj > __this = new ChooseName_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ChooseName_obj > ChooseName_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ChooseName_obj *__this = (ChooseName_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChooseName_obj), true, "ChooseName"));
	*(void **)__this = ChooseName_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ChooseName_obj::ChooseName_obj()
{
}

void ChooseName_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChooseName);
	HX_MARK_MEMBER_NAME(nameit,"nameit");
	HX_MARK_MEMBER_NAME(letters,"letters");
	HX_MARK_MEMBER_NAME(xPos,"xPos");
	HX_MARK_MEMBER_NAME(yPos,"yPos");
	HX_MARK_MEMBER_NAME(lettersM,"lettersM");
	HX_MARK_MEMBER_NAME(yPos2,"yPos2");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(sel,"sel");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(nameStr,"nameStr");
	HX_MARK_MEMBER_NAME(quit,"quit");
	HX_MARK_MEMBER_NAME(backspace,"backspace");
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_MEMBER_NAME(nameDone,"nameDone");
	HX_MARK_MEMBER_NAME(dark,"dark");
	HX_MARK_MEMBER_NAME(warning,"warning");
	HX_MARK_MEMBER_NAME(sure,"sure");
	HX_MARK_MEMBER_NAME(secret,"secret");
	HX_MARK_MEMBER_NAME(canSelect,"canSelect");
	HX_MARK_MEMBER_NAME(no,"no");
	HX_MARK_MEMBER_NAME(yes,"yes");
	HX_MARK_MEMBER_NAME(back,"back");
	HX_MARK_MEMBER_NAME(save,"save");
	HX_MARK_MEMBER_NAME(lang,"lang");
	HX_MARK_MEMBER_NAME(shakeIntensity,"shakeIntensity");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChooseName_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nameit,"nameit");
	HX_VISIT_MEMBER_NAME(letters,"letters");
	HX_VISIT_MEMBER_NAME(xPos,"xPos");
	HX_VISIT_MEMBER_NAME(yPos,"yPos");
	HX_VISIT_MEMBER_NAME(lettersM,"lettersM");
	HX_VISIT_MEMBER_NAME(yPos2,"yPos2");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(sel,"sel");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(nameStr,"nameStr");
	HX_VISIT_MEMBER_NAME(quit,"quit");
	HX_VISIT_MEMBER_NAME(backspace,"backspace");
	HX_VISIT_MEMBER_NAME(done,"done");
	HX_VISIT_MEMBER_NAME(nameDone,"nameDone");
	HX_VISIT_MEMBER_NAME(dark,"dark");
	HX_VISIT_MEMBER_NAME(warning,"warning");
	HX_VISIT_MEMBER_NAME(sure,"sure");
	HX_VISIT_MEMBER_NAME(secret,"secret");
	HX_VISIT_MEMBER_NAME(canSelect,"canSelect");
	HX_VISIT_MEMBER_NAME(no,"no");
	HX_VISIT_MEMBER_NAME(yes,"yes");
	HX_VISIT_MEMBER_NAME(back,"back");
	HX_VISIT_MEMBER_NAME(save,"save");
	HX_VISIT_MEMBER_NAME(lang,"lang");
	HX_VISIT_MEMBER_NAME(shakeIntensity,"shakeIntensity");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChooseName_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"no") ) { return ::hx::Val( no ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sel") ) { return ::hx::Val( sel ); }
		if (HX_FIELD_EQ(inName,"yes") ) { return ::hx::Val( yes ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xPos") ) { return ::hx::Val( xPos ); }
		if (HX_FIELD_EQ(inName,"yPos") ) { return ::hx::Val( yPos ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"quit") ) { return ::hx::Val( quit ); }
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done ); }
		if (HX_FIELD_EQ(inName,"dark") ) { return ::hx::Val( dark ); }
		if (HX_FIELD_EQ(inName,"sure") ) { return ::hx::Val( sure ); }
		if (HX_FIELD_EQ(inName,"back") ) { return ::hx::Val( back ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		if (HX_FIELD_EQ(inName,"lang") ) { return ::hx::Val( lang ); }
		if (HX_FIELD_EQ(inName,"Back") ) { return ::hx::Val( Back_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"yPos2") ) { return ::hx::Val( yPos2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nameit") ) { return ::hx::Val( nameit ); }
		if (HX_FIELD_EQ(inName,"secret") ) { return ::hx::Val( secret ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { return ::hx::Val( letters ); }
		if (HX_FIELD_EQ(inName,"nameStr") ) { return ::hx::Val( nameStr ); }
		if (HX_FIELD_EQ(inName,"warning") ) { return ::hx::Val( warning ); }
		if (HX_FIELD_EQ(inName,"switchA") ) { return ::hx::Val( switchA_dyn() ); }
		if (HX_FIELD_EQ(inName,"conGame") ) { return ::hx::Val( conGame_dyn() ); }
		if (HX_FIELD_EQ(inName,"switchB") ) { return ::hx::Val( switchB_dyn() ); }
		if (HX_FIELD_EQ(inName,"notDone") ) { return ::hx::Val( notDone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lettersM") ) { return ::hx::Val( lettersM ); }
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		if (HX_FIELD_EQ(inName,"nameDone") ) { return ::hx::Val( nameDone ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backspace") ) { return ::hx::Val( backspace ); }
		if (HX_FIELD_EQ(inName,"canSelect") ) { return ::hx::Val( canSelect ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doneNaming") ) { return ::hx::Val( doneNaming_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shakeIntensity") ) { return ::hx::Val( shakeIntensity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChooseName_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"no") ) { no=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sel") ) { sel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yes") ) { yes=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xPos") ) { xPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yPos") ) { yPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quit") ) { quit=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dark") ) { dark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sure") ) { sure=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"back") ) { back=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lang") ) { lang=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"yPos2") ) { yPos2=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nameit") ) { nameit=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secret") ) { secret=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { letters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameStr") ) { nameStr=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"warning") ) { warning=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lettersM") ) { lettersM=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameDone") ) { nameDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backspace") ) { backspace=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canSelect") ) { canSelect=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shakeIntensity") ) { shakeIntensity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChooseName_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("nameit",f6,36,79,1d));
	outFields->push(HX_("letters",cd,9c,8e,04));
	outFields->push(HX_("xPos",fc,af,8e,4f));
	outFields->push(HX_("yPos",9b,e6,37,50));
	outFields->push(HX_("lettersM",e0,96,3a,f8));
	outFields->push(HX_("yPos2",37,e1,b1,e0));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("sel",9a,9b,57,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("nameStr",26,2f,86,ac));
	outFields->push(HX_("quit",cf,3f,0a,4b));
	outFields->push(HX_("backspace",3f,85,ea,ca));
	outFields->push(HX_("done",82,f0,6d,42));
	outFields->push(HX_("nameDone",6d,10,f5,3e));
	outFields->push(HX_("dark",76,54,63,42));
	outFields->push(HX_("warning",5c,da,cb,09));
	outFields->push(HX_("sure",d5,b4,5c,4c));
	outFields->push(HX_("secret",70,0e,4a,64));
	outFields->push(HX_("canSelect",2c,6f,79,bc));
	outFields->push(HX_("no",41,60,00,00));
	outFields->push(HX_("yes",27,29,5c,00));
	outFields->push(HX_("back",27,da,10,41));
	outFields->push(HX_("save",3d,8b,4d,4c));
	outFields->push(HX_("lang",ee,05,ad,47));
	outFields->push(HX_("shakeIntensity",0d,bf,a0,04));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChooseName_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,nameit),HX_("nameit",f6,36,79,1d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ChooseName_obj,letters),HX_("letters",cd,9c,8e,04)},
	{::hx::fsInt,(int)offsetof(ChooseName_obj,xPos),HX_("xPos",fc,af,8e,4f)},
	{::hx::fsInt,(int)offsetof(ChooseName_obj,yPos),HX_("yPos",9b,e6,37,50)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ChooseName_obj,lettersM),HX_("lettersM",e0,96,3a,f8)},
	{::hx::fsInt,(int)offsetof(ChooseName_obj,yPos2),HX_("yPos2",37,e1,b1,e0)},
	{::hx::fsInt,(int)offsetof(ChooseName_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsInt,(int)offsetof(ChooseName_obj,sel),HX_("sel",9a,9b,57,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(ChooseName_obj,nameStr),HX_("nameStr",26,2f,86,ac)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,quit),HX_("quit",cf,3f,0a,4b)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,backspace),HX_("backspace",3f,85,ea,ca)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,done),HX_("done",82,f0,6d,42)},
	{::hx::fsBool,(int)offsetof(ChooseName_obj,nameDone),HX_("nameDone",6d,10,f5,3e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ChooseName_obj,dark),HX_("dark",76,54,63,42)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,warning),HX_("warning",5c,da,cb,09)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,sure),HX_("sure",d5,b4,5c,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,secret),HX_("secret",70,0e,4a,64)},
	{::hx::fsBool,(int)offsetof(ChooseName_obj,canSelect),HX_("canSelect",2c,6f,79,bc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,no),HX_("no",41,60,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,yes),HX_("yes",27,29,5c,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ChooseName_obj,back),HX_("back",27,da,10,41)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(ChooseName_obj,save),HX_("save",3d,8b,4d,4c)},
	{::hx::fsString,(int)offsetof(ChooseName_obj,lang),HX_("lang",ee,05,ad,47)},
	{::hx::fsFloat,(int)offsetof(ChooseName_obj,shakeIntensity),HX_("shakeIntensity",0d,bf,a0,04)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChooseName_obj_sStaticStorageInfo = 0;
#endif

static ::String ChooseName_obj_sMemberFields[] = {
	HX_("nameit",f6,36,79,1d),
	HX_("letters",cd,9c,8e,04),
	HX_("xPos",fc,af,8e,4f),
	HX_("yPos",9b,e6,37,50),
	HX_("lettersM",e0,96,3a,f8),
	HX_("yPos2",37,e1,b1,e0),
	HX_("selected",5b,2a,6d,b1),
	HX_("sel",9a,9b,57,00),
	HX_("name",4b,72,ff,48),
	HX_("nameStr",26,2f,86,ac),
	HX_("quit",cf,3f,0a,4b),
	HX_("backspace",3f,85,ea,ca),
	HX_("done",82,f0,6d,42),
	HX_("nameDone",6d,10,f5,3e),
	HX_("dark",76,54,63,42),
	HX_("warning",5c,da,cb,09),
	HX_("sure",d5,b4,5c,4c),
	HX_("secret",70,0e,4a,64),
	HX_("canSelect",2c,6f,79,bc),
	HX_("no",41,60,00,00),
	HX_("yes",27,29,5c,00),
	HX_("back",27,da,10,41),
	HX_("save",3d,8b,4d,4c),
	HX_("lang",ee,05,ad,47),
	HX_("create",fc,66,0f,7c),
	HX_("shakeIntensity",0d,bf,a0,04),
	HX_("update",09,86,05,87),
	HX_("Back",47,06,ea,2b),
	HX_("switchA",cd,6b,a7,04),
	HX_("conGame",54,e9,b5,fb),
	HX_("switchB",ce,6b,a7,04),
	HX_("doneNaming",6a,f6,78,e1),
	HX_("notDone",35,7b,98,37),
	::String(null()) };

::hx::Class ChooseName_obj::__mClass;

void ChooseName_obj::__register()
{
	ChooseName_obj _hx_dummy;
	ChooseName_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ChooseName",e2,b4,99,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChooseName_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChooseName_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChooseName_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChooseName_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

