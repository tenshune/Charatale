#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#include <flixel/system/debug/completion/CompletionHandler.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#include <flixel/system/debug/console/_ConsoleUtil/Interp.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4c828664754b74a_15_new,"flixel.system.debug.completion.CompletionHandler","new",0xfa133d96,"flixel.system.debug.completion.CompletionHandler.new","flixel/system/debug/completion/CompletionHandler.hx",15,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_38_getTextUntilCaret,"flixel.system.debug.completion.CompletionHandler","getTextUntilCaret",0x57018dfe,"flixel.system.debug.completion.CompletionHandler.getTextUntilCaret","flixel/system/debug/completion/CompletionHandler.hx",38,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_43_getCaretIndex,"flixel.system.debug.completion.CompletionHandler","getCaretIndex",0x5ae25f7b,"flixel.system.debug.completion.CompletionHandler.getCaretIndex","flixel/system/debug/completion/CompletionHandler.hx",43,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_47_onKeyUp,"flixel.system.debug.completion.CompletionHandler","onKeyUp",0x7f599871,"flixel.system.debug.completion.CompletionHandler.onKeyUp","flixel/system/debug/completion/CompletionHandler.hx",47,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_74_invokeCompletion,"flixel.system.debug.completion.CompletionHandler","invokeCompletion",0x74f655be,"flixel.system.debug.completion.CompletionHandler.invokeCompletion","flixel/system/debug/completion/CompletionHandler.hx",74,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_108_getGlobals,"flixel.system.debug.completion.CompletionHandler","getGlobals",0x3af6d144,"flixel.system.debug.completion.CompletionHandler.getGlobals","flixel/system/debug/completion/CompletionHandler.hx",108,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_115_getCharXPosition,"flixel.system.debug.completion.CompletionHandler","getCharXPosition",0x2e5e3e1f,"flixel.system.debug.completion.CompletionHandler.getCharXPosition","flixel/system/debug/completion/CompletionHandler.hx",115,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_125_getCompletedText,"flixel.system.debug.completion.CompletionHandler","getCompletedText",0xf1336e6c,"flixel.system.debug.completion.CompletionHandler.getCompletedText","flixel/system/debug/completion/CompletionHandler.hx",125,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_129_completed,"flixel.system.debug.completion.CompletionHandler","completed",0x0b4edb41,"flixel.system.debug.completion.CompletionHandler.completed","flixel/system/debug/completion/CompletionHandler.hx",129,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_139_selectionChanged,"flixel.system.debug.completion.CompletionHandler","selectionChanged",0xb4bbcb12,"flixel.system.debug.completion.CompletionHandler.selectionChanged","flixel/system/debug/completion/CompletionHandler.hx",139,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_155_getReadableType,"flixel.system.debug.completion.CompletionHandler","getReadableType",0x71f1aeb6,"flixel.system.debug.completion.CompletionHandler.getReadableType","flixel/system/debug/completion/CompletionHandler.hx",155,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_171_completionClosed,"flixel.system.debug.completion.CompletionHandler","completionClosed",0xa9f12ef2,"flixel.system.debug.completion.CompletionHandler.completionClosed","flixel/system/debug/completion/CompletionHandler.hx",171,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_181_getPathBeforeDot,"flixel.system.debug.completion.CompletionHandler","getPathBeforeDot",0x9fcc8f79,"flixel.system.debug.completion.CompletionHandler.getPathBeforeDot","flixel/system/debug/completion/CompletionHandler.hx",181,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_188_getWordAfterDot,"flixel.system.debug.completion.CompletionHandler","getWordAfterDot",0x4edfa1a3,"flixel.system.debug.completion.CompletionHandler.getWordAfterDot","flixel/system/debug/completion/CompletionHandler.hx",188,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_203_getLastWord,"flixel.system.debug.completion.CompletionHandler","getLastWord",0xa19a712c,"flixel.system.debug.completion.CompletionHandler.getLastWord","flixel/system/debug/completion/CompletionHandler.hx",203,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_17_boot,"flixel.system.debug.completion.CompletionHandler","boot",0xcedba63c,"flixel.system.debug.completion.CompletionHandler.boot","flixel/system/debug/completion/CompletionHandler.hx",17,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_18_boot,"flixel.system.debug.completion.CompletionHandler","boot",0xcedba63c,"flixel.system.debug.completion.CompletionHandler.boot","flixel/system/debug/completion/CompletionHandler.hx",18,0x776a5e1a)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{

void CompletionHandler_obj::__construct( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::text::TextField input){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_15_new)
HXLINE(  22)		this->watchingSelection = false;
HXLINE(  26)		this->completionList = completionList;
HXLINE(  27)		this->input = input;
HXLINE(  29)		completionList->completed = this->completed_dyn();
HXLINE(  30)		completionList->selectionChanged = this->selectionChanged_dyn();
HXLINE(  31)		completionList->closed = this->completionClosed_dyn();
HXLINE(  33)		input->addEventListener(HX_("keyUp",da,b9,fe,de),this->onKeyUp_dyn(),null(),null(),null());
            	}

Dynamic CompletionHandler_obj::__CreateEmpty() { return new CompletionHandler_obj; }

void *CompletionHandler_obj::_hx_vtable = 0;

Dynamic CompletionHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompletionHandler_obj > _hx_result = new CompletionHandler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CompletionHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b77950e;
}

::String CompletionHandler_obj::getTextUntilCaret(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_38_getTextUntilCaret)
HXDLIN(  38)		::String _hx_tmp = this->input->get_text();
HXDLIN(  38)		return _hx_tmp.substring(0,this->getCaretIndex());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getTextUntilCaret,return )

int CompletionHandler_obj::getCaretIndex(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_43_getCaretIndex)
HXDLIN(  43)		return this->input->get_caretIndex();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCaretIndex,return )

void CompletionHandler_obj::onKeyUp( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_47_onKeyUp)
HXLINE(  48)		::String text = this->getTextUntilCaret();
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		bool _hx_tmp1;
HXDLIN(  51)		if (!(::StringTools_obj::endsWith(text,HX_(")",29,00,00,00)))) {
HXLINE(  51)			_hx_tmp1 = ::StringTools_obj::endsWith(text,HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE(  51)			_hx_tmp1 = true;
            		}
HXDLIN(  51)		if (!(_hx_tmp1)) {
HXLINE(  51)			_hx_tmp = ::StringTools_obj::endsWith(text,HX_("'",27,00,00,00));
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  53)			this->completionList->close();
HXLINE(  54)			return;
            		}
HXLINE(  57)		switch((int)(e->keyCode)){
            			case (int)9: case (int)13: case (int)27: case (int)38: case (int)40: {
            			}
            			break;
            			case (int)37: case (int)39: {
HXLINE(  60)				this->completionList->close();
            			}
            			break;
            			default:{
HXLINE(  66)				::String _hx_tmp = this->getPathBeforeDot(text);
HXDLIN(  66)				this->invokeCompletion(_hx_tmp,(e->keyCode == 190));
HXLINE(  68)				if (this->completionList->get_visible()) {
HXLINE(  69)					 ::flixel::_hx_system::debug::completion::CompletionList _hx_tmp = this->completionList;
HXDLIN(  69)					_hx_tmp->set_filter(this->getWordAfterDot(text));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,onKeyUp,(void))

void CompletionHandler_obj::invokeCompletion(::String path,bool isPeriod){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_74_invokeCompletion)
HXLINE(  76)		::Array< ::String > items = null();
HXLINE(  78)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  80)			if ((path.length != 0)) {
HXLINE(  82)				 ::Dynamic output = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::runCommand(path);
HXLINE(  83)				items = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::getFields(output);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  86)				{
HXLINE(  86)					null();
            				}
HXLINE(  88)				if (isPeriod) {
HXLINE(  90)					this->completionList->close();
HXLINE(  91)					return;
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  95)		if (::hx::IsNull( items )) {
HXLINE(  96)			items = this->getGlobals();
            		}
HXLINE(  98)		if ((items->length > 0)) {
HXLINE(  99)			 ::flixel::_hx_system::debug::completion::CompletionList _hx_tmp = this->completionList;
HXDLIN(  99)			_hx_tmp->show(this->getCharXPosition(),items);
            		}
            		else {
HXLINE( 101)			this->completionList->close();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,invokeCompletion,(void))

::Array< ::String > CompletionHandler_obj::getGlobals(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_108_getGlobals)
HXDLIN( 108)		return ::flixel::util::FlxStringUtil_obj::sortAlphabetically(::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->getGlobals());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getGlobals,return )

Float CompletionHandler_obj::getCharXPosition(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_115_getCharXPosition)
HXLINE( 116)		Float pos = ((Float)0.0);
HXLINE( 117)		{
HXLINE( 117)			int _g = 0;
HXDLIN( 117)			int _g1 = this->getCaretIndex();
HXDLIN( 117)			while((_g < _g1)){
HXLINE( 117)				_g = (_g + 1);
HXDLIN( 117)				int i = (_g - 1);
HXLINE( 118)				pos = (pos + 6);
            			}
            		}
HXLINE( 119)		return pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCharXPosition,return )

::String CompletionHandler_obj::getCompletedText(::String text,::String selectedItem){
            	HX_GC_STACKFRAME(&_hx_pos_d4c828664754b74a_125_getCompletedText)
HXDLIN( 125)		return  ::EReg_obj::__alloc( HX_CTX ,(this->getWordAfterDot(text) + HX_("$",24,00,00,00)),HX_("g",67,00,00,00))->replace(text,selectedItem);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,getCompletedText,return )

void CompletionHandler_obj::completed(::String selectedItem){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_129_completed)
HXLINE( 130)		::String textUntilCaret = this->getTextUntilCaret();
HXLINE( 131)		::String insert = this->getCompletedText(textUntilCaret,selectedItem);
HXLINE( 132)		 ::openfl::text::TextField _hx_tmp = this->input;
HXDLIN( 132)		::String _hx_tmp1 = this->input->get_text();
HXDLIN( 132)		_hx_tmp->set_text((insert + _hx_tmp1.substr(this->getCaretIndex(),null())));
HXLINE( 133)		this->input->setSelection(insert.length,insert.length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,completed,(void))

void CompletionHandler_obj::selectionChanged(::String selectedItem){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_139_selectionChanged)
HXDLIN( 139)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 141)			::String lastWord = this->getLastWord(this->input->get_text());
HXLINE( 142)			::String command = this->getCompletedText(lastWord,selectedItem);
HXLINE( 143)			 ::Dynamic output = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::runCommand(command);
HXLINE( 145)			this->watchingSelection = true;
HXLINE( 146)			{
HXLINE( 146)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 146)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 146)				_hx_tmp->add(HX_("Entry Value",03,6d,c3,a1),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(output)));
            			}
HXLINE( 147)			{
HXLINE( 147)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this1 = ::flixel::FlxG_obj::watch;
HXDLIN( 147)				 ::Dynamic value = this->getReadableType(output);
HXDLIN( 147)				 ::flixel::_hx_system::debug::watch::Watch _hx_tmp1 = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 147)				_hx_tmp1->add(HX_("Entry Type",68,5d,1b,ed),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(value)));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 149)				{
HXLINE( 149)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,selectionChanged,(void))

::String CompletionHandler_obj::getReadableType( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_155_getReadableType)
HXDLIN( 155)		 ::ValueType _g = ::Type_obj::_hx_typeof(v);
HXDLIN( 155)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 157)				return null();
            			}
            			break;
            			case (int)1: {
HXLINE( 158)				return HX_("Int",cf,c4,37,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 159)				return HX_("Float",7c,35,c4,95);
            			}
            			break;
            			case (int)3: {
HXLINE( 160)				return HX_("Bool",4a,b0,f4,2b);
            			}
            			break;
            			case (int)4: {
HXLINE( 161)				return HX_("Object",df,f2,d3,49);
            			}
            			break;
            			case (int)5: {
HXLINE( 162)				return HX_("Function",38,67,04,ee);
            			}
            			break;
            			case (int)6: {
HXLINE( 164)				::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 164)				if (::hx::IsPointerEq( _g1,::hx::ArrayBase::__mClass )) {
HXLINE( 163)					return ((HX_("Array[",c2,ec,84,ec) + ::Std_obj::string( ::Dynamic(v->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)))) + HX_("]",5d,00,00,00));
            				}
            				else {
HXLINE( 164)					::hx::Class c = _g1;
HXDLIN( 164)					return ::flixel::util::FlxStringUtil_obj::getClassName(c,true);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 165)				::hx::Class e = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 165)				return ::flixel::util::FlxStringUtil_obj::getClassName(e,true);
            			}
            			break;
            			case (int)8: {
HXLINE( 166)				return HX_("Unknown",6a,4b,cc,ae);
            			}
            			break;
            		}
HXLINE( 155)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getReadableType,return )

void CompletionHandler_obj::completionClosed(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_171_completionClosed)
HXLINE( 172)		if (!(this->watchingSelection)) {
HXLINE( 173)			return;
            		}
HXLINE( 175)		{
HXLINE( 175)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 175)			::flixel::FlxG_obj::game->debugger->watch->remove(HX_("Entry Value",03,6d,c3,a1),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null()));
            		}
HXLINE( 176)		{
HXLINE( 176)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this1 = ::flixel::FlxG_obj::watch;
HXDLIN( 176)			::flixel::FlxG_obj::game->debugger->watch->remove(HX_("Entry Type",68,5d,1b,ed),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null()));
            		}
HXLINE( 177)		this->watchingSelection = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,completionClosed,(void))

::String CompletionHandler_obj::getPathBeforeDot(::String text){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_181_getPathBeforeDot)
HXLINE( 182)		::String lastWord = this->getLastWord(text);
HXLINE( 183)		int dotIndex = lastWord.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 184)		return lastWord.substr(0,dotIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getPathBeforeDot,return )

::String CompletionHandler_obj::getWordAfterDot(::String text){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_188_getWordAfterDot)
HXLINE( 189)		::String lastWord = this->getLastWord(text);
HXLINE( 191)		int index = lastWord.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 192)		if ((index < 0)) {
HXLINE( 193)			index = 0;
            		}
            		else {
HXLINE( 195)			index = (index + 1);
            		}
HXLINE( 197)		::String word = lastWord.substr(index,null());
HXLINE( 198)		if (::hx::IsNull( word )) {
HXLINE( 198)			return HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 198)			return word;
            		}
HXDLIN( 198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getWordAfterDot,return )

::String CompletionHandler_obj::getLastWord(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_d4c828664754b74a_203_getLastWord)
HXDLIN( 203)		return ( (::String)(::flixel::util::FlxArrayUtil_obj::last( ::EReg_obj::__alloc( HX_CTX ,HX_("([^.a-zA-Z0-9_\\[\\]\"']+)",90,0f,11,57),HX_("g",67,00,00,00))->split(text))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getLastWord,return )

::String CompletionHandler_obj::ENTRY_VALUE;

::String CompletionHandler_obj::ENTRY_TYPE;


::hx::ObjectPtr< CompletionHandler_obj > CompletionHandler_obj::__new( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::text::TextField input) {
	::hx::ObjectPtr< CompletionHandler_obj > __this = new CompletionHandler_obj();
	__this->__construct(completionList,input);
	return __this;
}

::hx::ObjectPtr< CompletionHandler_obj > CompletionHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::text::TextField input) {
	CompletionHandler_obj *__this = (CompletionHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompletionHandler_obj), true, "flixel.system.debug.completion.CompletionHandler"));
	*(void **)__this = CompletionHandler_obj::_hx_vtable;
	__this->__construct(completionList,input);
	return __this;
}

CompletionHandler_obj::CompletionHandler_obj()
{
}

void CompletionHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionHandler);
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(watchingSelection,"watchingSelection");
	HX_MARK_END_CLASS();
}

void CompletionHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(watchingSelection,"watchingSelection");
}

::hx::Val CompletionHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return ::hx::Val( completed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGlobals") ) { return ::hx::Val( getGlobals_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastWord") ) { return ::hx::Val( getLastWord_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return ::hx::Val( getCaretIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { return ::hx::Val( completionList ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getReadableType") ) { return ::hx::Val( getReadableType_dyn() ); }
		if (HX_FIELD_EQ(inName,"getWordAfterDot") ) { return ::hx::Val( getWordAfterDot_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invokeCompletion") ) { return ::hx::Val( invokeCompletion_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharXPosition") ) { return ::hx::Val( getCharXPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCompletedText") ) { return ::hx::Val( getCompletedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { return ::hx::Val( selectionChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"completionClosed") ) { return ::hx::Val( completionClosed_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPathBeforeDot") ) { return ::hx::Val( getPathBeforeDot_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { return ::hx::Val( watchingSelection ); }
		if (HX_FIELD_EQ(inName,"getTextUntilCaret") ) { return ::hx::Val( getTextUntilCaret_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompletionHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { watchingSelection=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("completionList",9a,d1,5d,23));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("watchingSelection",d9,ef,ce,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompletionHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::debug::completion::CompletionList */ ,(int)offsetof(CompletionHandler_obj,completionList),HX_("completionList",9a,d1,5d,23)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(CompletionHandler_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsBool,(int)offsetof(CompletionHandler_obj,watchingSelection),HX_("watchingSelection",d9,ef,ce,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CompletionHandler_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CompletionHandler_obj::ENTRY_VALUE,HX_("ENTRY_VALUE",64,b8,86,fc)},
	{::hx::fsString,(void *) &CompletionHandler_obj::ENTRY_TYPE,HX_("ENTRY_TYPE",07,bd,ab,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CompletionHandler_obj_sMemberFields[] = {
	HX_("completionList",9a,d1,5d,23),
	HX_("input",0a,c4,1d,be),
	HX_("watchingSelection",d9,ef,ce,5e),
	HX_("getTextUntilCaret",48,ae,e9,dc),
	HX_("getCaretIndex",c5,12,ce,39),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("invokeCompletion",b4,4c,06,fd),
	HX_("getGlobals",ba,8b,9a,63),
	HX_("getCharXPosition",15,35,6e,b6),
	HX_("getCompletedText",62,65,43,79),
	HX_("completed",8b,a1,38,4f),
	HX_("selectionChanged",08,c2,cb,3c),
	HX_("getReadableType",80,48,a8,a9),
	HX_("completionClosed",e8,25,01,32),
	HX_("getPathBeforeDot",6f,86,dc,27),
	HX_("getWordAfterDot",6d,3b,96,86),
	HX_("getLastWord",f6,dd,39,08),
	::String(null()) };

static void CompletionHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionHandler_obj::ENTRY_VALUE,"ENTRY_VALUE");
	HX_MARK_MEMBER_NAME(CompletionHandler_obj::ENTRY_TYPE,"ENTRY_TYPE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompletionHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionHandler_obj::ENTRY_VALUE,"ENTRY_VALUE");
	HX_VISIT_MEMBER_NAME(CompletionHandler_obj::ENTRY_TYPE,"ENTRY_TYPE");
};

#endif

::hx::Class CompletionHandler_obj::__mClass;

static ::String CompletionHandler_obj_sStaticFields[] = {
	HX_("ENTRY_VALUE",64,b8,86,fc),
	HX_("ENTRY_TYPE",07,bd,ab,b0),
	::String(null())
};

void CompletionHandler_obj::__register()
{
	CompletionHandler_obj _hx_dummy;
	CompletionHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.completion.CompletionHandler",a4,7a,5b,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompletionHandler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CompletionHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompletionHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompletionHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompletionHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletionHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletionHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CompletionHandler_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_17_boot)
HXDLIN(  17)		ENTRY_VALUE = HX_("Entry Value",03,6d,c3,a1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_18_boot)
HXDLIN(  18)		ENTRY_TYPE = HX_("Entry Type",68,5d,1b,ed);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
