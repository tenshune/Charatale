#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinderData
#include <flixel/path/FlxTypedPathfinderData.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2197318fd890c91_569_new,"flixel.path.FlxTypedPathfinderData","new",0xf7913c76,"flixel.path.FlxTypedPathfinderData.new","flixel/path/FlxPathfinder.hx",569,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_587_getPathIndicesTo,"flixel.path.FlxTypedPathfinderData","getPathIndicesTo",0xf3c26dd1,"flixel.path.FlxTypedPathfinderData.getPathIndicesTo","flixel/path/FlxPathfinder.hx",587,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_615_getPathIndices,"flixel.path.FlxTypedPathfinderData","getPathIndices",0x38418ab6,"flixel.path.FlxTypedPathfinderData.getPathIndices","flixel/path/FlxPathfinder.hx",615,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_620_hasValidStartEnd,"flixel.path.FlxTypedPathfinderData","hasValidStartEnd",0x4a9b7c25,"flixel.path.FlxTypedPathfinderData.hasValidStartEnd","flixel/path/FlxPathfinder.hx",620,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_627_destroy,"flixel.path.FlxTypedPathfinderData","destroy",0xefba5c10,"flixel.path.FlxTypedPathfinderData.destroy","flixel/path/FlxPathfinder.hx",627,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_642_isExcluded,"flixel.path.FlxTypedPathfinderData","isExcluded",0xe8c134fe,"flixel.path.FlxTypedPathfinderData.isExcluded","flixel/path/FlxPathfinder.hx",642,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_650_getX,"flixel.path.FlxTypedPathfinderData","getX",0xa2e32a2c,"flixel.path.FlxTypedPathfinderData.getX","flixel/path/FlxPathfinder.hx",650,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_658_getY,"flixel.path.FlxTypedPathfinderData","getY",0xa2e32a2d,"flixel.path.FlxTypedPathfinderData.getY","flixel/path/FlxPathfinder.hx",658,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_d2197318fd890c91_667_getTileCollisionsByIndex,"flixel.path.FlxTypedPathfinderData","getTileCollisionsByIndex",0x8a013ca0,"flixel.path.FlxTypedPathfinderData.getTileCollisionsByIndex","flixel/path/FlxPathfinder.hx",667,0x74454158)
namespace flixel{
namespace path{

void FlxTypedPathfinderData_obj::__construct( ::Dynamic map,int startIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_569_new)
HXLINE( 570)		this->map = map;
HXLINE( 571)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 571)		{
HXLINE( 571)			int _g1 = 0;
HXDLIN( 571)			int _g2 = ( ( ::flixel::tile::FlxBaseTilemap)(map) )->totalTiles;
HXDLIN( 571)			while((_g1 < _g2)){
HXLINE( 571)				_g1 = (_g1 + 1);
HXDLIN( 571)				int i = (_g1 - 1);
HXDLIN( 571)				_g->push(-1);
            			}
            		}
HXDLIN( 571)		this->distances = _g;
HXLINE( 572)		this->distances[startIndex] = 0;
HXLINE( 574)		::Array< int > _g3 = ::Array_obj< int >::__new(0);
HXDLIN( 574)		{
HXLINE( 574)			int _g4 = 0;
HXDLIN( 574)			int _g5 = ( ( ::flixel::tile::FlxBaseTilemap)(map) )->totalTiles;
HXDLIN( 574)			while((_g4 < _g5)){
HXLINE( 574)				_g4 = (_g4 + 1);
HXDLIN( 574)				int i = (_g4 - 1);
HXDLIN( 574)				_g3->push(-1);
            			}
            		}
HXDLIN( 574)		this->moves = _g3;
HXLINE( 576)		this->excluded = ::Array_obj< int >::__new(1)->init(0,startIndex);
HXLINE( 578)		this->startIndex = startIndex;
HXLINE( 579)		this->endIndex = endIndex;
            	}

Dynamic FlxTypedPathfinderData_obj::__CreateEmpty() { return new FlxTypedPathfinderData_obj; }

void *FlxTypedPathfinderData_obj::_hx_vtable = 0;

Dynamic FlxTypedPathfinderData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedPathfinderData_obj > _hx_result = new FlxTypedPathfinderData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxTypedPathfinderData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c5ba892;
}

::Array< int > FlxTypedPathfinderData_obj::getPathIndicesTo(int index){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_587_getPathIndicesTo)
HXLINE( 588)		if ((index == this->startIndex)) {
HXLINE( 589)			return ::Array_obj< int >::__new(2)->init(0,this->startIndex)->init(1,index);
            		}
HXLINE( 591)		if ((this->moves->__get(index) == -1)) {
HXLINE( 592)			return null();
            		}
HXLINE( 594)		::Array< int > path = ::Array_obj< int >::__new();
HXLINE( 597)		while((index != -1)){
HXLINE( 599)			path->unshift(index);
HXLINE( 600)			index = this->moves->__get(index);
            		}
HXLINE( 603)		if ((path->__get(0) != this->startIndex)) {
HXLINE( 604)			::flixel::FlxG_obj::log->advanced(HX_("getPathIndices ended up somewhere other than the start",7c,aa,6e,b9),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            		}
HXLINE( 606)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinderData_obj,getPathIndicesTo,return )

::Array< int > FlxTypedPathfinderData_obj::getPathIndices(){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_615_getPathIndices)
HXDLIN( 615)		return this->getPathIndicesTo(this->endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedPathfinderData_obj,getPathIndices,return )

bool FlxTypedPathfinderData_obj::hasValidStartEnd(){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_620_hasValidStartEnd)
HXDLIN( 620)		bool _hx_tmp;
HXDLIN( 620)		bool _hx_tmp1;
HXDLIN( 620)		if ((this->startIndex >= 0)) {
HXDLIN( 620)			_hx_tmp1 = (this->endIndex >= 0);
            		}
            		else {
HXDLIN( 620)			_hx_tmp1 = false;
            		}
HXDLIN( 620)		if (_hx_tmp1) {
HXDLIN( 620)			_hx_tmp = (this->startIndex < ( ( ::flixel::tile::FlxBaseTilemap)(this->map) )->totalTiles);
            		}
            		else {
HXDLIN( 620)			_hx_tmp = false;
            		}
HXDLIN( 620)		if (_hx_tmp) {
HXLINE( 623)			return (this->endIndex < ( ( ::flixel::tile::FlxBaseTilemap)(this->map) )->totalTiles);
            		}
            		else {
HXDLIN( 620)			return false;
            		}
HXDLIN( 620)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedPathfinderData_obj,hasValidStartEnd,return )

void FlxTypedPathfinderData_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_627_destroy)
HXLINE( 628)		this->map = null();
HXLINE( 629)		this->distances = null();
HXLINE( 630)		this->moves = null();
HXLINE( 631)		this->excluded = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedPathfinderData_obj,destroy,(void))

bool FlxTypedPathfinderData_obj::isExcluded(int index){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_642_isExcluded)
HXDLIN( 642)		return this->excluded->contains(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinderData_obj,isExcluded,return )

int FlxTypedPathfinderData_obj::getX(int tile){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_650_getX)
HXDLIN( 650)		return ::hx::Mod(tile,( ( ::flixel::tile::FlxBaseTilemap)(this->map) )->widthInTiles);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinderData_obj,getX,return )

int FlxTypedPathfinderData_obj::getY(int tile){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_658_getY)
HXDLIN( 658)		return ::Std_obj::_hx_int((( (Float)(tile) ) / ( (Float)(( ( ::flixel::tile::FlxBaseTilemap)(this->map) )->widthInTiles) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinderData_obj,getY,return )

int FlxTypedPathfinderData_obj::getTileCollisionsByIndex(int tile){
            	HX_STACKFRAME(&_hx_pos_d2197318fd890c91_667_getTileCollisionsByIndex)
HXDLIN( 667)		 ::Dynamic _hx_tmp = this->map;
HXDLIN( 667)		return ( ( ::flixel::tile::FlxBaseTilemap)(_hx_tmp) )->getTileCollisions(( ( ::flixel::tile::FlxBaseTilemap)(this->map) )->getTileByIndex(tile));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedPathfinderData_obj,getTileCollisionsByIndex,return )


::hx::ObjectPtr< FlxTypedPathfinderData_obj > FlxTypedPathfinderData_obj::__new( ::Dynamic map,int startIndex,int endIndex) {
	::hx::ObjectPtr< FlxTypedPathfinderData_obj > __this = new FlxTypedPathfinderData_obj();
	__this->__construct(map,startIndex,endIndex);
	return __this;
}

::hx::ObjectPtr< FlxTypedPathfinderData_obj > FlxTypedPathfinderData_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic map,int startIndex,int endIndex) {
	FlxTypedPathfinderData_obj *__this = (FlxTypedPathfinderData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedPathfinderData_obj), true, "flixel.path.FlxTypedPathfinderData"));
	*(void **)__this = FlxTypedPathfinderData_obj::_hx_vtable;
	__this->__construct(map,startIndex,endIndex);
	return __this;
}

FlxTypedPathfinderData_obj::FlxTypedPathfinderData_obj()
{
}

void FlxTypedPathfinderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedPathfinderData);
	HX_MARK_MEMBER_NAME(startIndex,"startIndex");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(distances,"distances");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(excluded,"excluded");
	HX_MARK_MEMBER_NAME(foundEnd,"foundEnd");
	HX_MARK_END_CLASS();
}

void FlxTypedPathfinderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startIndex,"startIndex");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(distances,"distances");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(excluded,"excluded");
	HX_VISIT_MEMBER_NAME(foundEnd,"foundEnd");
}

::hx::Val FlxTypedPathfinderData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"getX") ) { return ::hx::Val( getX_dyn() ); }
		if (HX_FIELD_EQ(inName,"getY") ) { return ::hx::Val( getY_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moves") ) { return ::hx::Val( moves ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return ::hx::Val( endIndex ); }
		if (HX_FIELD_EQ(inName,"excluded") ) { return ::hx::Val( excluded ); }
		if (HX_FIELD_EQ(inName,"foundEnd") ) { return ::hx::Val( foundEnd ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"distances") ) { return ::hx::Val( distances ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { return ::hx::Val( startIndex ); }
		if (HX_FIELD_EQ(inName,"isExcluded") ) { return ::hx::Val( isExcluded_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPathIndices") ) { return ::hx::Val( getPathIndices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getPathIndicesTo") ) { return ::hx::Val( getPathIndicesTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasValidStartEnd") ) { return ::hx::Val( hasValidStartEnd_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getTileCollisionsByIndex") ) { return ::hx::Val( getTileCollisionsByIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedPathfinderData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"excluded") ) { excluded=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foundEnd") ) { foundEnd=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"distances") ) { distances=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { startIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedPathfinderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("startIndex",50,73,2b,da));
	outFields->push(HX_("endIndex",37,2d,12,bc));
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("distances",9e,3b,67,0e));
	outFields->push(HX_("moves",42,cc,65,0c));
	outFields->push(HX_("excluded",4a,40,34,21));
	outFields->push(HX_("foundEnd",b9,0e,0b,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedPathfinderData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxTypedPathfinderData_obj,startIndex),HX_("startIndex",50,73,2b,da)},
	{::hx::fsInt,(int)offsetof(FlxTypedPathfinderData_obj,endIndex),HX_("endIndex",37,2d,12,bc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypedPathfinderData_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTypedPathfinderData_obj,distances),HX_("distances",9e,3b,67,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTypedPathfinderData_obj,moves),HX_("moves",42,cc,65,0c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTypedPathfinderData_obj,excluded),HX_("excluded",4a,40,34,21)},
	{::hx::fsBool,(int)offsetof(FlxTypedPathfinderData_obj,foundEnd),HX_("foundEnd",b9,0e,0b,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedPathfinderData_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedPathfinderData_obj_sMemberFields[] = {
	HX_("startIndex",50,73,2b,da),
	HX_("endIndex",37,2d,12,bc),
	HX_("map",9c,0a,53,00),
	HX_("distances",9e,3b,67,0e),
	HX_("moves",42,cc,65,0c),
	HX_("excluded",4a,40,34,21),
	HX_("foundEnd",b9,0e,0b,32),
	HX_("getPathIndicesTo",a7,2f,0e,93),
	HX_("getPathIndices",0c,0b,ac,47),
	HX_("hasValidStartEnd",fb,3d,e7,e9),
	HX_("destroy",fa,2c,86,24),
	HX_("isExcluded",54,52,e3,9b),
	HX_("getX",02,03,62,44),
	HX_("getY",03,03,62,44),
	HX_("getTileCollisionsByIndex",76,c4,43,42),
	::String(null()) };

::hx::Class FlxTypedPathfinderData_obj::__mClass;

void FlxTypedPathfinderData_obj::__register()
{
	FlxTypedPathfinderData_obj _hx_dummy;
	FlxTypedPathfinderData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.path.FlxTypedPathfinderData",84,89,78,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedPathfinderData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedPathfinderData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedPathfinderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedPathfinderData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace path
