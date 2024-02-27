#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_path_FlxDiagonalPathfinder
#include <flixel/path/FlxDiagonalPathfinder.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinder
#include <flixel/path/FlxTypedPathfinder.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinderData
#include <flixel/path/FlxTypedPathfinderData.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_
#include <flixel/util/_FlxDirectionFlags/FlxDirectionFlags_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_26d2f08d7c116d18_421_new,"flixel.path.FlxDiagonalPathfinder","new",0xac1c604d,"flixel.path.FlxDiagonalPathfinder.new","flixel/path/FlxPathfinder.hx",421,0x74454158)
HX_DEFINE_STACK_FRAME(_hx_pos_26d2f08d7c116d18_420_new,"flixel.path.FlxDiagonalPathfinder","new",0xac1c604d,"flixel.path.FlxDiagonalPathfinder.new","flixel/path/FlxPathfinder.hx",420,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_26d2f08d7c116d18_441_getNeighbors,"flixel.path.FlxDiagonalPathfinder","getNeighbors",0xdcef063e,"flixel.path.FlxDiagonalPathfinder.getNeighbors","flixel/path/FlxPathfinder.hx",441,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_26d2f08d7c116d18_427_getNeighbors,"flixel.path.FlxDiagonalPathfinder","getNeighbors",0xdcef063e,"flixel.path.FlxDiagonalPathfinder.getNeighbors","flixel/path/FlxPathfinder.hx",427,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_26d2f08d7c116d18_477_getInBoundDirections,"flixel.path.FlxDiagonalPathfinder","getInBoundDirections",0x493c04ca,"flixel.path.FlxDiagonalPathfinder.getInBoundDirections","flixel/path/FlxPathfinder.hx",477,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_26d2f08d7c116d18_499_canGo,"flixel.path.FlxDiagonalPathfinder","canGo",0xdc1afb85,"flixel.path.FlxDiagonalPathfinder.canGo","flixel/path/FlxPathfinder.hx",499,0x74454158)
HX_LOCAL_STACK_FRAME(_hx_pos_26d2f08d7c116d18_503_getDistance,"flixel.path.FlxDiagonalPathfinder","getDistance",0x68db1ad8,"flixel.path.FlxDiagonalPathfinder.getDistance","flixel/path/FlxPathfinder.hx",503,0x74454158)
namespace flixel{
namespace path{

void FlxDiagonalPathfinder_obj::__construct(::hx::Null< int >  __o_diagonalPolicy){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(3)
            		 ::flixel::path::FlxTypedPathfinderData _hx_run( ::flixel::tile::FlxBaseTilemap map,int startIndex,int endIndex){
            			HX_GC_STACKFRAME(&_hx_pos_26d2f08d7c116d18_421_new)
HXLINE( 421)			return  ::flixel::path::FlxTypedPathfinderData_obj::__alloc( HX_CTX ,map,startIndex,endIndex);
            		}
            		HX_END_LOCAL_FUNC3(return)

            		int diagonalPolicy = __o_diagonalPolicy.Default(0);
            	HX_STACKFRAME(&_hx_pos_26d2f08d7c116d18_420_new)
HXLINE( 421)		super::__construct( ::Dynamic(new _hx_Closure_0()));
HXLINE( 423)		this->diagonalPolicy = diagonalPolicy;
            	}

Dynamic FlxDiagonalPathfinder_obj::__CreateEmpty() { return new FlxDiagonalPathfinder_obj; }

void *FlxDiagonalPathfinder_obj::_hx_vtable = 0;

Dynamic FlxDiagonalPathfinder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDiagonalPathfinder_obj > _hx_result = new FlxDiagonalPathfinder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxDiagonalPathfinder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f6c6248) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2f6c6248;
	} else {
		return inClassId==(int)0x4c3b328d;
	}
}

::Array< int > FlxDiagonalPathfinder_obj::getNeighbors( ::Dynamic _tmp_data,int from){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::flixel::path::FlxDiagonalPathfinder,_gthis,::Array< int >,neighbors, ::flixel::path::FlxTypedPathfinderData,data) HXARGC(3)
            		bool _hx_run(bool condition,int to,int dir){
            			HX_STACKFRAME(&_hx_pos_26d2f08d7c116d18_441_getNeighbors)
HXLINE( 442)			bool condition1;
HXDLIN( 442)			if (condition) {
HXLINE( 442)				if (!(data->excluded->contains(to))) {
HXLINE( 442)					condition1 = _gthis->canGo(data,to,dir);
            				}
            				else {
HXLINE( 442)					condition1 = false;
            				}
            			}
            			else {
HXLINE( 442)				condition1 = false;
            			}
HXLINE( 443)			if (condition1) {
HXLINE( 444)				neighbors->push(to);
            			}
HXLINE( 446)			return condition1;
            		}
            		HX_END_LOCAL_FUNC3(return)

            	HX_STACKFRAME(&_hx_pos_26d2f08d7c116d18_427_getNeighbors)
HXDLIN( 427)		 ::flixel::path::FlxTypedPathfinderData data = ( ( ::flixel::path::FlxTypedPathfinderData)(_tmp_data) );
HXDLIN( 427)		 ::flixel::path::FlxDiagonalPathfinder _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 428)		::Array< int > neighbors = ::Array_obj< int >::__new(0);
HXLINE( 429)		int inBound = this->getInBoundDirections(data,from);
HXLINE( 430)		int dir = 256;
HXDLIN( 430)		bool up = ((inBound & dir) == dir);
HXLINE( 431)		int dir1 = 4096;
HXDLIN( 431)		bool down = ((inBound & dir1) == dir1);
HXLINE( 432)		int dir2 = 1;
HXDLIN( 432)		bool left = ((inBound & dir2) == dir2);
HXLINE( 433)		int dir3 = 16;
HXDLIN( 433)		bool right = ((inBound & dir3) == dir3);
HXLINE( 440)		 ::Dynamic addIf =  ::Dynamic(new _hx_Closure_0(_gthis,neighbors,data));
HXLINE( 449)		int columns = ( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles;
HXLINE( 452)		up = ( (bool)(addIf(up,(from - columns),256)) );
HXLINE( 453)		down = ( (bool)(addIf(down,(from + columns),4096)) );
HXLINE( 454)		left = ( (bool)(addIf(left,(from - 1),1)) );
HXLINE( 455)		right = ( (bool)(addIf(right,(from + 1),16)) );
HXLINE( 458)		if ((this->diagonalPolicy != 0)) {
HXLINE( 461)			bool _hx_tmp;
HXDLIN( 461)			if (up) {
HXLINE( 461)				_hx_tmp = left;
            			}
            			else {
HXLINE( 461)				_hx_tmp = false;
            			}
HXDLIN( 461)			addIf(_hx_tmp,((from - columns) - 1),(256 | 1));
HXLINE( 462)			bool _hx_tmp1;
HXDLIN( 462)			if (up) {
HXLINE( 462)				_hx_tmp1 = right;
            			}
            			else {
HXLINE( 462)				_hx_tmp1 = false;
            			}
HXDLIN( 462)			addIf(_hx_tmp1,((from - columns) + 1),(256 | 16));
HXLINE( 463)			bool _hx_tmp2;
HXDLIN( 463)			if (down) {
HXLINE( 463)				_hx_tmp2 = left;
            			}
            			else {
HXLINE( 463)				_hx_tmp2 = false;
            			}
HXDLIN( 463)			addIf(_hx_tmp2,((from + columns) - 1),(4096 | 1));
HXLINE( 464)			bool _hx_tmp3;
HXDLIN( 464)			if (down) {
HXLINE( 464)				_hx_tmp3 = right;
            			}
            			else {
HXLINE( 464)				_hx_tmp3 = false;
            			}
HXDLIN( 464)			addIf(_hx_tmp3,((from + columns) + 1),(4096 | 16));
            		}
HXLINE( 467)		return neighbors;
            	}


int FlxDiagonalPathfinder_obj::getInBoundDirections( ::flixel::path::FlxTypedPathfinderData data,int from){
            	HX_STACKFRAME(&_hx_pos_26d2f08d7c116d18_477_getInBoundDirections)
HXLINE( 478)		int x = ::hx::Mod(from,( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles);
HXLINE( 479)		int y = ::Std_obj::_hx_int((( (Float)(from) ) / ( (Float)(( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles) )));
HXLINE( 480)		return ::flixel::util::_FlxDirectionFlags::FlxDirectionFlags_Impl__obj::fromBools((x > 0),(x < (( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles - 1)),(y > 0),(y < (( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->heightInTiles - 1)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDiagonalPathfinder_obj,getInBoundDirections,return )

bool FlxDiagonalPathfinder_obj::canGo( ::flixel::path::FlxTypedPathfinderData data,int to,::hx::Null< int >  __o_dir){
            		int dir = __o_dir.Default(4369);
            	HX_STACKFRAME(&_hx_pos_26d2f08d7c116d18_499_canGo)
HXDLIN( 499)		data->numChecks++;
HXDLIN( 499)		 ::flixel::tile::FlxBaseTilemap data1 = ( ( ::flixel::tile::FlxBaseTilemap)(data->map) );
HXDLIN( 499)		return (data1->getTileCollisions(( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->getTileByIndex(to)) == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxDiagonalPathfinder_obj,canGo,return )

int FlxDiagonalPathfinder_obj::getDistance( ::Dynamic _tmp_data,int from,int to){
            	HX_STACKFRAME(&_hx_pos_26d2f08d7c116d18_503_getDistance)
HXLINE( 504)		 ::flixel::path::FlxTypedPathfinderData data = ( ( ::flixel::path::FlxTypedPathfinderData)(_tmp_data) );
HXDLIN( 504)		bool _hx_tmp;
HXDLIN( 504)		bool _hx_tmp1;
HXDLIN( 504)		if ((this->diagonalPolicy != 0)) {
HXLINE( 504)			_hx_tmp1 = (::hx::Mod(from,( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles) != ::hx::Mod(to,( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles));
            		}
            		else {
HXLINE( 504)			_hx_tmp1 = false;
            		}
HXDLIN( 504)		if (_hx_tmp1) {
HXLINE( 504)			int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(from) ) / ( (Float)(( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles) )));
HXDLIN( 504)			_hx_tmp = (_hx_tmp1 != ::Std_obj::_hx_int((( (Float)(to) ) / ( (Float)(( ( ::flixel::tile::FlxBaseTilemap)(data->map) )->widthInTiles) ))));
            		}
            		else {
HXLINE( 504)			_hx_tmp = false;
            		}
HXDLIN( 504)		if (_hx_tmp) {
HXLINE( 506)			switch((int)(this->diagonalPolicy)){
            				case (int)0: {
HXLINE( 510)					return 0;
            				}
            				break;
            				case (int)1: {
HXLINE( 509)					return 1;
            				}
            				break;
            				case (int)2: {
HXLINE( 508)					return 2;
            				}
            				break;
            			}
            		}
HXLINE( 514)		return 1;
            	}



::hx::ObjectPtr< FlxDiagonalPathfinder_obj > FlxDiagonalPathfinder_obj::__new(::hx::Null< int >  __o_diagonalPolicy) {
	::hx::ObjectPtr< FlxDiagonalPathfinder_obj > __this = new FlxDiagonalPathfinder_obj();
	__this->__construct(__o_diagonalPolicy);
	return __this;
}

::hx::ObjectPtr< FlxDiagonalPathfinder_obj > FlxDiagonalPathfinder_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_diagonalPolicy) {
	FlxDiagonalPathfinder_obj *__this = (FlxDiagonalPathfinder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDiagonalPathfinder_obj), true, "flixel.path.FlxDiagonalPathfinder"));
	*(void **)__this = FlxDiagonalPathfinder_obj::_hx_vtable;
	__this->__construct(__o_diagonalPolicy);
	return __this;
}

FlxDiagonalPathfinder_obj::FlxDiagonalPathfinder_obj()
{
}

::hx::Val FlxDiagonalPathfinder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"canGo") ) { return ::hx::Val( canGo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return ::hx::Val( getDistance_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNeighbors") ) { return ::hx::Val( getNeighbors_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diagonalPolicy") ) { return ::hx::Val( diagonalPolicy ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getInBoundDirections") ) { return ::hx::Val( getInBoundDirections_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxDiagonalPathfinder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"diagonalPolicy") ) { diagonalPolicy=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDiagonalPathfinder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("diagonalPolicy",c7,7a,98,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxDiagonalPathfinder_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxDiagonalPathfinder_obj,diagonalPolicy),HX_("diagonalPolicy",c7,7a,98,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxDiagonalPathfinder_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxDiagonalPathfinder_obj_sMemberFields[] = {
	HX_("diagonalPolicy",c7,7a,98,d3),
	HX_("getNeighbors",cb,7b,d0,a3),
	HX_("getInBoundDirections",57,4f,11,dd),
	HX_("canGo",58,d6,1c,41),
	HX_("getDistance",eb,55,ed,91),
	::String(null()) };

::hx::Class FlxDiagonalPathfinder_obj::__mClass;

void FlxDiagonalPathfinder_obj::__register()
{
	FlxDiagonalPathfinder_obj _hx_dummy;
	FlxDiagonalPathfinder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.path.FlxDiagonalPathfinder",db,35,61,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxDiagonalPathfinder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxDiagonalPathfinder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDiagonalPathfinder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDiagonalPathfinder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace path
