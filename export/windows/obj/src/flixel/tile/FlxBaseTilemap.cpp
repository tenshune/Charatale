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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_path_FlxDiagonalPathfinder
#include <flixel/path/FlxDiagonalPathfinder.h>
#endif
#ifndef INCLUDED_flixel_path_FlxPathSimplifier
#include <flixel/path/FlxPathSimplifier.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinder
#include <flixel/path/FlxTypedPathfinder.h>
#endif
#ifndef INCLUDED_flixel_path_FlxTypedPathfinderData
#include <flixel/path/FlxTypedPathfinderData.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36d94048d9e4941f_19_new,"flixel.tile.FlxBaseTilemap","new",0x601e788b,"flixel.tile.FlxBaseTilemap.new","flixel/tile/FlxBaseTilemap.hx",19,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_115_updateTile,"flixel.tile.FlxBaseTilemap","updateTile",0x4985390c,"flixel.tile.FlxBaseTilemap.updateTile","flixel/tile/FlxBaseTilemap.hx",115,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_120_cacheGraphics,"flixel.tile.FlxBaseTilemap","cacheGraphics",0x589e0d18,"flixel.tile.FlxBaseTilemap.cacheGraphics","flixel/tile/FlxBaseTilemap.hx",120,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_125_initTileObjects,"flixel.tile.FlxBaseTilemap","initTileObjects",0x1ec17ac1,"flixel.tile.FlxBaseTilemap.initTileObjects","flixel/tile/FlxBaseTilemap.hx",125,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_130_updateMap,"flixel.tile.FlxBaseTilemap","updateMap",0xe833827e,"flixel.tile.FlxBaseTilemap.updateMap","flixel/tile/FlxBaseTilemap.hx",130,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_135_computeDimensions,"flixel.tile.FlxBaseTilemap","computeDimensions",0xc850220f,"flixel.tile.FlxBaseTilemap.computeDimensions","flixel/tile/FlxBaseTilemap.hx",135,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_140_getTileIndexByCoords,"flixel.tile.FlxBaseTilemap","getTileIndexByCoords",0x5f0cf078,"flixel.tile.FlxBaseTilemap.getTileIndexByCoords","flixel/tile/FlxBaseTilemap.hx",140,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_146_getTileCoordsByIndex,"flixel.tile.FlxBaseTilemap","getTileCoordsByIndex",0x89a6db2e,"flixel.tile.FlxBaseTilemap.getTileCoordsByIndex","flixel/tile/FlxBaseTilemap.hx",146,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_164_ray,"flixel.tile.FlxBaseTilemap","ray",0x60217e15,"flixel.tile.FlxBaseTilemap.ray","flixel/tile/FlxBaseTilemap.hx",164,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_184_rayStep,"flixel.tile.FlxBaseTilemap","rayStep",0x5057c001,"flixel.tile.FlxBaseTilemap.rayStep","flixel/tile/FlxBaseTilemap.hx",184,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_204_calcRayEntry,"flixel.tile.FlxBaseTilemap","calcRayEntry",0xeee3ce52,"flixel.tile.FlxBaseTilemap.calcRayEntry","flixel/tile/FlxBaseTilemap.hx",204,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_230_calcRayExit,"flixel.tile.FlxBaseTilemap","calcRayExit",0xd7c5fd3e,"flixel.tile.FlxBaseTilemap.calcRayExit","flixel/tile/FlxBaseTilemap.hx",230,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_235_overlapsWithCallback,"flixel.tile.FlxBaseTilemap","overlapsWithCallback",0x90f43a8c,"flixel.tile.FlxBaseTilemap.overlapsWithCallback","flixel/tile/FlxBaseTilemap.hx",235,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_241_setDirty,"flixel.tile.FlxBaseTilemap","setDirty",0x31f19505,"flixel.tile.FlxBaseTilemap.setDirty","flixel/tile/FlxBaseTilemap.hx",241,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_254_destroy,"flixel.tile.FlxBaseTilemap","destroy",0x44ffc6a5,"flixel.tile.FlxBaseTilemap.destroy","flixel/tile/FlxBaseTilemap.hx",254,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_279_loadMapFromCSV,"flixel.tile.FlxBaseTilemap","loadMapFromCSV",0xbac5ecbb,"flixel.tile.FlxBaseTilemap.loadMapFromCSV","flixel/tile/FlxBaseTilemap.hx",279,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_358_loadMapFromArray,"flixel.tile.FlxBaseTilemap","loadMapFromArray",0x576cd9ce,"flixel.tile.FlxBaseTilemap.loadMapFromArray","flixel/tile/FlxBaseTilemap.hx",358,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_387_loadMapFrom2DArray,"flixel.tile.FlxBaseTilemap","loadMapFrom2DArray",0xb01a13fc,"flixel.tile.FlxBaseTilemap.loadMapFrom2DArray","flixel/tile/FlxBaseTilemap.hx",387,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_421_loadMapFromGraphic,"flixel.tile.FlxBaseTilemap","loadMapFromGraphic",0xe93ffe1d,"flixel.tile.FlxBaseTilemap.loadMapFromGraphic","flixel/tile/FlxBaseTilemap.hx",421,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_429_loadMapHelper,"flixel.tile.FlxBaseTilemap","loadMapHelper",0xc59c560f,"flixel.tile.FlxBaseTilemap.loadMapHelper","flixel/tile/FlxBaseTilemap.hx",429,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_459_postGraphicLoad,"flixel.tile.FlxBaseTilemap","postGraphicLoad",0x0dc00119,"flixel.tile.FlxBaseTilemap.postGraphicLoad","flixel/tile/FlxBaseTilemap.hx",459,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_468_applyAutoTile,"flixel.tile.FlxBaseTilemap","applyAutoTile",0xcc60c5b6,"flixel.tile.FlxBaseTilemap.applyAutoTile","flixel/tile/FlxBaseTilemap.hx",468,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_479_applyCustomRemap,"flixel.tile.FlxBaseTilemap","applyCustomRemap",0x2fd5c57f,"flixel.tile.FlxBaseTilemap.applyCustomRemap","flixel/tile/FlxBaseTilemap.hx",479,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_499_randomizeIndices,"flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",499,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_506_randomizeIndices,"flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",506,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_535_autoTile,"flixel.tile.FlxBaseTilemap","autoTile",0x7a0f9632,"flixel.tile.FlxBaseTilemap.autoTile","flixel/tile/FlxBaseTilemap.hx",535,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_606_autoTileFull,"flixel.tile.FlxBaseTilemap","autoTileFull",0x4139ace1,"flixel.tile.FlxBaseTilemap.autoTileFull","flixel/tile/FlxBaseTilemap.hx",606,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_653_setCustomTileMappings,"flixel.tile.FlxBaseTilemap","setCustomTileMappings",0x91d80f71,"flixel.tile.FlxBaseTilemap.setCustomTileMappings","flixel/tile/FlxBaseTilemap.hx",653,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_675_getTile,"flixel.tile.FlxBaseTilemap","getTile",0x3ff9148f,"flixel.tile.FlxBaseTilemap.getTile","flixel/tile/FlxBaseTilemap.hx",675,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_686_getTileByIndex,"flixel.tile.FlxBaseTilemap","getTileByIndex",0xf0387cec,"flixel.tile.FlxBaseTilemap.getTileByIndex","flixel/tile/FlxBaseTilemap.hx",686,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_697_getTileCollisions,"flixel.tile.FlxBaseTilemap","getTileCollisions",0x9ca1bd30,"flixel.tile.FlxBaseTilemap.getTileCollisions","flixel/tile/FlxBaseTilemap.hx",697,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_707_getTileInstances,"flixel.tile.FlxBaseTilemap","getTileInstances",0xa0cac4af,"flixel.tile.FlxBaseTilemap.getTileInstances","flixel/tile/FlxBaseTilemap.hx",707,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_738_setTile,"flixel.tile.FlxBaseTilemap","setTile",0x32faa59b,"flixel.tile.FlxBaseTilemap.setTile","flixel/tile/FlxBaseTilemap.hx",738,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_756_setTileByIndex,"flixel.tile.FlxBaseTilemap","setTileByIndex",0x10586560,"flixel.tile.FlxBaseTilemap.setTileByIndex","flixel/tile/FlxBaseTilemap.hx",756,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_816_setTileProperties,"flixel.tile.FlxBaseTilemap","setTileProperties",0x2905d56e,"flixel.tile.FlxBaseTilemap.setTileProperties","flixel/tile/FlxBaseTilemap.hx",816,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_856_getData,"flixel.tile.FlxBaseTilemap","getData",0x355f9f8b,"flixel.tile.FlxBaseTilemap.getData","flixel/tile/FlxBaseTilemap.hx",856,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_894_findPath,"flixel.tile.FlxBaseTilemap","findPath",0xe6d2ce73,"flixel.tile.FlxBaseTilemap.findPath","flixel/tile/FlxBaseTilemap.hx",894,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_916_findPathCustom,"flixel.tile.FlxBaseTilemap","findPathCustom",0x382ca284,"flixel.tile.FlxBaseTilemap.findPathCustom","flixel/tile/FlxBaseTilemap.hx",916,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_930_computePathDistance,"flixel.tile.FlxBaseTilemap","computePathDistance",0x34e53a3c,"flixel.tile.FlxBaseTilemap.computePathDistance","flixel/tile/FlxBaseTilemap.hx",930,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_952_computePathData,"flixel.tile.FlxBaseTilemap","computePathData",0xbfff2db1,"flixel.tile.FlxBaseTilemap.computePathData","flixel/tile/FlxBaseTilemap.hx",952,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_956_getDiagonalPathfinder,"flixel.tile.FlxBaseTilemap","getDiagonalPathfinder",0x3b7156c1,"flixel.tile.FlxBaseTilemap.getDiagonalPathfinder","flixel/tile/FlxBaseTilemap.hx",956,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_973_overlaps,"flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",973,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_976_overlaps,"flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",976,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_983_tilemapOverlapsCallback,"flixel.tile.FlxBaseTilemap","tilemapOverlapsCallback",0x40d17cea,"flixel.tile.FlxBaseTilemap.tilemapOverlapsCallback","flixel/tile/FlxBaseTilemap.hx",983,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1007_overlapsAt,"flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1007,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1010_overlapsAt,"flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1010,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1017_tilemapOverlapsAtCallback,"flixel.tile.FlxBaseTilemap","tilemapOverlapsAtCallback",0xbef90c3d,"flixel.tile.FlxBaseTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxBaseTilemap.hx",1017,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1036_overlapsPoint,"flixel.tile.FlxBaseTilemap","overlapsPoint",0x91c6718f,"flixel.tile.FlxBaseTilemap.overlapsPoint","flixel/tile/FlxBaseTilemap.hx",1036,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1050_tileAtPointAllowsCollisions,"flixel.tile.FlxBaseTilemap","tileAtPointAllowsCollisions",0x26e8ec45,"flixel.tile.FlxBaseTilemap.tileAtPointAllowsCollisions","flixel/tile/FlxBaseTilemap.hx",1050,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1064_getBounds,"flixel.tile.FlxBaseTilemap","getBounds",0x47c7aa16,"flixel.tile.FlxBaseTilemap.getBounds","flixel/tile/FlxBaseTilemap.hx",1064,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_26_boot,"flixel.tile.FlxBaseTilemap","boot",0xb2a401a7,"flixel.tile.FlxBaseTilemap.boot","flixel/tile/FlxBaseTilemap.hx",26,0x0139d8e5)
static const int _hx_array_data_6aa6d719_64[] = {
	(int)0,(int)0,(int)0,(int)0,(int)2,(int)2,(int)0,(int)3,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)11,(int)11,(int)0,(int)0,(int)13,(int)13,(int)0,(int)14,(int)0,(int)0,(int)0,(int)0,(int)18,(int)18,(int)0,(int)19,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)51,(int)51,(int)0,(int)0,(int)53,(int)53,(int)0,(int)54,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)62,(int)62,(int)0,(int)0,(int)64,(int)64,(int)0,(int)65,(int)0,(int)0,(int)0,(int)0,(int)69,(int)69,(int)0,(int)70,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)86,(int)86,(int)0,(int)0,(int)88,(int)88,(int)0,(int)89,(int)0,(int)0,(int)0,(int)0,(int)93,(int)93,(int)0,(int)94,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)159,(int)0,(int)0,(int)0,(int)162,(int)0,(int)163,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)172,(int)0,(int)0,(int)0,(int)175,(int)0,(int)176,(int)0,(int)0,(int)0,(int)0,(int)0,(int)181,(int)0,(int)182,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)199,(int)0,(int)0,(int)0,(int)202,(int)0,(int)203,(int)0,(int)0,(int)0,(int)0,(int)0,(int)208,(int)0,(int)209,
};
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_45_boot,"flixel.tile.FlxBaseTilemap","boot",0xb2a401a7,"flixel.tile.FlxBaseTilemap.boot","flixel/tile/FlxBaseTilemap.hx",45,0x0139d8e5)
namespace flixel{
namespace tile{

void FlxBaseTilemap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_19_new)
HXLINE( 108)		this->_collideIndex = 0;
HXLINE( 107)		this->_drawIndex = 0;
HXLINE( 100)		this->_startingIndex = 0;
HXLINE(  95)		this->_tileObjects = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  51)		this->totalTiles = 0;
HXLINE(  49)		this->heightInTiles = 0;
HXLINE(  47)		this->widthInTiles = 0;
HXLINE(  24)		this->_hx_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn();
HXLINE( 246)		super::__construct(null(),null(),null(),null());
HXLINE( 248)		this->flixelType = 3;
HXLINE( 249)		this->set_immovable(true);
HXLINE( 250)		this->set_moves(false);
            	}

Dynamic FlxBaseTilemap_obj::__CreateEmpty() { return new FlxBaseTilemap_obj; }

void *FlxBaseTilemap_obj::_hx_vtable = 0;

Dynamic FlxBaseTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseTilemap_obj > _hx_result = new FlxBaseTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseTilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x3d6253b5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3d6253b5;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxBaseTilemap_obj::updateTile(int index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_115_updateTile)
HXDLIN( 115)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateTile must be implemented",53,76,b0,30)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,updateTile,(void))

void FlxBaseTilemap_obj::cacheGraphics(int tileWidth,int tileHeight, ::Dynamic tileGraphic){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_120_cacheGraphics)
HXDLIN( 120)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("cacheGraphics must be implemented",a9,10,20,38)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,cacheGraphics,(void))

void FlxBaseTilemap_obj::initTileObjects(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_125_initTileObjects)
HXDLIN( 125)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("initTileObjects must be implemented",12,b8,a6,2f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,initTileObjects,(void))

void FlxBaseTilemap_obj::updateMap(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_130_updateMap)
HXDLIN( 130)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateMap must be implemented",8f,ae,0f,b7)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,updateMap,(void))

void FlxBaseTilemap_obj::computeDimensions(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_135_computeDimensions)
HXDLIN( 135)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("computeDimensions must be implemented",a0,79,f6,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,computeDimensions,(void))

int FlxBaseTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxBasePoint coord){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_140_getTileIndexByCoords)
HXDLIN( 140)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getTileIndexByCoords must be implemented",7f,57,93,9c)));
HXDLIN( 140)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileIndexByCoords,return )

 ::flixel::math::FlxBasePoint FlxBaseTilemap_obj::getTileCoordsByIndex(int index,::hx::Null< bool >  __o_midpoint){
            		bool midpoint = __o_midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_146_getTileCoordsByIndex)
HXDLIN( 146)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getTileCoordsByIndex must be implemented",35,21,39,05)));
HXDLIN( 146)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTileCoordsByIndex,return )

bool FlxBaseTilemap_obj::ray( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_164_ray)
HXDLIN( 164)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("ray must be implemented",e6,31,5e,58)));
HXDLIN( 164)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,ray,return )

bool FlxBaseTilemap_obj::rayStep( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result,::hx::Null< Float >  __o_resolution){
            		Float resolution = __o_resolution.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_184_rayStep)
HXDLIN( 184)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("rayStep must be implemented?",ad,87,6b,eb)));
HXDLIN( 184)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,rayStep,return )

 ::flixel::math::FlxBasePoint FlxBaseTilemap_obj::calcRayEntry( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_204_calcRayEntry)
HXLINE( 205)		 ::flixel::math::FlxRect bounds = this->getBounds(null());
HXLINE( 207)		bounds->width--;
HXLINE( 208)		bounds->height--;
HXLINE( 210)		return ::flixel::util::FlxCollision_obj::calcRectEntry(bounds,start,end,result);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,calcRayEntry,return )

 ::flixel::math::FlxBasePoint FlxBaseTilemap_obj::calcRayExit( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_230_calcRayExit)
HXDLIN( 230)		return this->calcRayEntry(end,start,result);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,calcRayExit,return )

bool FlxBaseTilemap_obj::overlapsWithCallback( ::flixel::FlxObject object, ::Dynamic callback,::hx::Null< bool >  __o_flipCallbackParams, ::flixel::math::FlxBasePoint position){
            		bool flipCallbackParams = __o_flipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_235_overlapsWithCallback)
HXDLIN( 235)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("overlapsWithCallback must be implemented",93,a3,ff,38)));
HXDLIN( 235)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,overlapsWithCallback,return )

void FlxBaseTilemap_obj::setDirty(::hx::Null< bool >  __o_dirty){
            		bool dirty = __o_dirty.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_241_setDirty)
HXDLIN( 241)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("setDirty must be implemented",0c,cc,e0,5f)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,setDirty,(void))

void FlxBaseTilemap_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_254_destroy)
HXLINE( 255)		this->_data = null();
HXLINE( 256)		this->super::destroy();
            	}


 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromCSV(::String mapData, ::Dynamic tileGraphic,::hx::Null< int >  __o_tileWidth,::hx::Null< int >  __o_tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  __o_startingIndex,::hx::Null< int >  __o_drawIndex,::hx::Null< int >  __o_collideIndex){
            		int tileWidth = __o_tileWidth.Default(0);
            		int tileHeight = __o_tileHeight.Default(0);
            		int startingIndex = __o_startingIndex.Default(0);
            		int drawIndex = __o_drawIndex.Default(1);
            		int collideIndex = __o_collideIndex.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_36d94048d9e4941f_279_loadMapFromCSV)
HXLINE( 281)		if (::openfl::utils::Assets_obj::exists(mapData,null())) {
HXLINE( 283)			mapData = ::openfl::utils::Assets_obj::getText(mapData);
            		}
HXLINE( 287)		this->_data = ::Array_obj< int >::__new();
HXLINE( 288)		::Array< ::String > columns;
HXLINE( 290)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("[ \t]*((\r\n)|\r|\n)[ \t]*",22,2c,8d,6d),HX_("g",67,00,00,00));
HXLINE( 291)		::Array< ::String > lines = regex->split(mapData);
HXLINE( 292)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 292)		{
HXLINE( 292)			int _g1 = 0;
HXDLIN( 292)			::Array< ::String > _g2 = lines;
HXDLIN( 292)			while((_g1 < _g2->length)){
HXLINE( 292)				::String v = _g2->__get(_g1);
HXDLIN( 292)				_g1 = (_g1 + 1);
HXDLIN( 292)				if ((v != HX_("",00,00,00,00))) {
HXLINE( 292)					_g->push(v);
            				}
            			}
            		}
HXDLIN( 292)		::Array< ::String > rows = _g;
HXLINE( 294)		this->heightInTiles = rows->length;
HXLINE( 295)		this->widthInTiles = 0;
HXLINE( 297)		int row = 0;
HXLINE( 298)		while((row < this->heightInTiles)){
HXLINE( 300)			::String rowString = rows->__get(row);
HXLINE( 301)			if (::StringTools_obj::endsWith(rowString,HX_(",",2c,00,00,00))) {
HXLINE( 302)				rowString = rowString.substr(0,(rowString.length - 1));
            			}
HXLINE( 303)			columns = rowString.split(HX_(",",2c,00,00,00));
HXLINE( 305)			if ((columns->length == 0)) {
HXLINE( 307)				this->heightInTiles--;
HXLINE( 308)				continue;
            			}
HXLINE( 310)			if ((this->widthInTiles == 0)) {
HXLINE( 312)				this->widthInTiles = columns->length;
            			}
HXLINE( 315)			int column = 0;
HXLINE( 316)			while((column < this->widthInTiles)){
HXLINE( 319)				::String columnString = columns->__get(column);
HXLINE( 320)				 ::Dynamic curTile = ::Std_obj::parseInt(columnString);
HXLINE( 322)				if (::hx::IsNull( curTile )) {
HXLINE( 323)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("String in row ",b2,a4,63,43) + row) + HX_(", column ",96,fc,25,5b)) + column) + HX_(" is not a valid integer: \"",44,67,cc,45)) + columnString) + HX_("\"",22,00,00,00))));
            				}
HXLINE( 325)				this->_data->push(curTile);
HXLINE( 326)				column = (column + 1);
            			}
HXLINE( 329)			row = (row + 1);
            		}
HXLINE( 332)		this->loadMapHelper(tileGraphic,tileWidth,tileHeight,autoTile,startingIndex,drawIndex,collideIndex);
HXLINE( 333)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFromCSV,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromArray(::Array< int > mapData,int widthInTiles,int heightInTiles, ::Dynamic tileGraphic,::hx::Null< int >  __o_tileWidth,::hx::Null< int >  __o_tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  __o_startingIndex,::hx::Null< int >  __o_drawIndex,::hx::Null< int >  __o_collideIndex){
            		int tileWidth = __o_tileWidth.Default(0);
            		int tileHeight = __o_tileHeight.Default(0);
            		int startingIndex = __o_startingIndex.Default(0);
            		int drawIndex = __o_drawIndex.Default(1);
            		int collideIndex = __o_collideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_358_loadMapFromArray)
HXLINE( 359)		this->widthInTiles = widthInTiles;
HXLINE( 360)		this->heightInTiles = heightInTiles;
HXLINE( 361)		this->_data = mapData->copy();
HXLINE( 363)		this->loadMapHelper(tileGraphic,tileWidth,tileHeight,autoTile,startingIndex,drawIndex,collideIndex);
HXLINE( 364)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxBaseTilemap_obj,loadMapFromArray,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFrom2DArray(::Array< ::Dynamic> mapData, ::Dynamic tileGraphic,::hx::Null< int >  __o_tileWidth,::hx::Null< int >  __o_tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  __o_startingIndex,::hx::Null< int >  __o_drawIndex,::hx::Null< int >  __o_collideIndex){
            		int tileWidth = __o_tileWidth.Default(0);
            		int tileHeight = __o_tileHeight.Default(0);
            		int startingIndex = __o_startingIndex.Default(0);
            		int drawIndex = __o_drawIndex.Default(1);
            		int collideIndex = __o_collideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_387_loadMapFrom2DArray)
HXLINE( 388)		this->widthInTiles = mapData->__get(0).StaticCast< ::Array< int > >()->length;
HXLINE( 389)		this->heightInTiles = mapData->length;
HXLINE( 390)		this->_data = ::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(mapData);
HXLINE( 392)		this->loadMapHelper(tileGraphic,tileWidth,tileHeight,autoTile,startingIndex,drawIndex,collideIndex);
HXLINE( 393)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFrom2DArray,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromGraphic( ::Dynamic mapGraphic,::hx::Null< bool >  __o_invert,::hx::Null< int >  __o_scale,::Array< int > colorMap, ::Dynamic tileGraphic,::hx::Null< int >  __o_tileWidth,::hx::Null< int >  __o_tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  __o_startingIndex,::hx::Null< int >  __o_drawIndex,::hx::Null< int >  __o_collideIndex){
            		bool invert = __o_invert.Default(false);
            		int scale = __o_scale.Default(1);
            		int tileWidth = __o_tileWidth.Default(0);
            		int tileHeight = __o_tileHeight.Default(0);
            		int startingIndex = __o_startingIndex.Default(0);
            		int drawIndex = __o_drawIndex.Default(1);
            		int collideIndex = __o_collideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_421_loadMapFromGraphic)
HXLINE( 422)		 ::openfl::display::BitmapData mapBitmap = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(mapGraphic);
HXLINE( 423)		::String mapData = ::flixel::util::FlxStringUtil_obj::bitmapToCSV(mapBitmap,invert,scale,colorMap);
HXLINE( 424)		return this->loadMapFromCSV(mapData,tileGraphic,tileWidth,tileHeight,autoTile,startingIndex,drawIndex,collideIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxBaseTilemap_obj,loadMapFromGraphic,return )

void FlxBaseTilemap_obj::loadMapHelper( ::Dynamic tileGraphic,::hx::Null< int >  __o_tileWidth,::hx::Null< int >  __o_tileHeight, ::flixel::tile::FlxTilemapAutoTiling autoTile,::hx::Null< int >  __o_startingIndex,::hx::Null< int >  __o_drawIndex,::hx::Null< int >  __o_collideIndex){
            		int tileWidth = __o_tileWidth.Default(0);
            		int tileHeight = __o_tileHeight.Default(0);
            		int startingIndex = __o_startingIndex.Default(0);
            		int drawIndex = __o_drawIndex.Default(1);
            		int collideIndex = __o_collideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_429_loadMapHelper)
HXLINE( 431)		{
HXLINE( 431)			int _g = 0;
HXDLIN( 431)			int _g1 = this->_data->length;
HXDLIN( 431)			while((_g < _g1)){
HXLINE( 431)				_g = (_g + 1);
HXDLIN( 431)				int i = (_g - 1);
HXLINE( 433)				if ((this->_data->__get(i) < 0)) {
HXLINE( 434)					this->_data[i] = 0;
            				}
            			}
            		}
HXLINE( 437)		this->totalTiles = this->_data->length;
HXLINE( 438)		 ::flixel::tile::FlxTilemapAutoTiling _hx_tmp;
HXDLIN( 438)		if (::hx::IsNull( autoTile )) {
HXLINE( 438)			_hx_tmp = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn();
            		}
            		else {
HXLINE( 438)			_hx_tmp = autoTile;
            		}
HXDLIN( 438)		this->_hx_auto = _hx_tmp;
HXLINE( 439)		int _hx_tmp1;
HXDLIN( 439)		if ((startingIndex <= 0)) {
HXLINE( 439)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 439)			_hx_tmp1 = startingIndex;
            		}
HXDLIN( 439)		this->_startingIndex = _hx_tmp1;
HXLINE( 441)		if (::hx::IsPointerNotEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 443)			this->_startingIndex = 1;
HXLINE( 444)			drawIndex = 1;
HXLINE( 445)			collideIndex = 1;
            		}
HXLINE( 448)		this->_drawIndex = drawIndex;
HXLINE( 449)		this->_collideIndex = collideIndex;
HXLINE( 451)		this->applyAutoTile();
HXLINE( 452)		this->applyCustomRemap();
HXLINE( 453)		this->randomizeIndices();
HXLINE( 454)		this->cacheGraphics(tileWidth,tileHeight,tileGraphic);
HXLINE( 455)		this->postGraphicLoad();
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxBaseTilemap_obj,loadMapHelper,(void))

void FlxBaseTilemap_obj::postGraphicLoad(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_459_postGraphicLoad)
HXLINE( 460)		this->initTileObjects();
HXLINE( 461)		this->computeDimensions();
HXLINE( 462)		this->updateMap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,postGraphicLoad,(void))

void FlxBaseTilemap_obj::applyAutoTile(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_468_applyAutoTile)
HXDLIN( 468)		if (::hx::IsPointerNotEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 470)			int i = 0;
HXLINE( 471)			while((i < this->totalTiles)){
HXLINE( 473)				i = (i + 1);
HXDLIN( 473)				this->autoTile((i - 1));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyAutoTile,(void))

void FlxBaseTilemap_obj::applyCustomRemap(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_479_applyCustomRemap)
HXLINE( 480)		int i = 0;
HXLINE( 482)		if (::hx::IsNotNull( this->customTileRemap )) {
HXLINE( 484)			while((i < this->totalTiles)){
HXLINE( 486)				int oldIndex = this->_data->__get(i);
HXLINE( 487)				int newIndex = oldIndex;
HXLINE( 488)				if ((oldIndex < this->customTileRemap->length)) {
HXLINE( 490)					newIndex = this->customTileRemap->__get(oldIndex);
            				}
HXLINE( 492)				this->_data[i] = newIndex;
HXLINE( 493)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyCustomRemap,(void))

void FlxBaseTilemap_obj::randomizeIndices(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_499_randomizeIndices)
HXLINE( 500)		int i = 0;
HXLINE( 502)		if (::hx::IsNotNull( this->_randomIndices )) {
HXLINE( 504)			 ::Dynamic randLambda;
HXDLIN( 504)			if (::hx::IsNotNull( this->_randomLambda )) {
HXLINE( 504)				randLambda = this->_randomLambda;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				Float _hx_run(){
            					HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_506_randomizeIndices)
HXLINE( 506)					return ::flixel::FlxG_obj::random->_hx_float(null(),null(),null());
            				}
            				HX_END_LOCAL_FUNC0(return)

HXLINE( 504)				randLambda =  ::Dynamic(new _hx_Closure_0());
            			}
HXLINE( 509)			while((i < this->totalTiles)){
HXLINE( 511)				int oldIndex = this->_data->__get(i);
HXLINE( 512)				int j = 0;
HXLINE( 513)				int newIndex = oldIndex;
HXLINE( 514)				{
HXLINE( 514)					int _g = 0;
HXDLIN( 514)					::Array< int > _g1 = this->_randomIndices;
HXDLIN( 514)					while((_g < _g1->length)){
HXLINE( 514)						int rand = _g1->__get(_g);
HXDLIN( 514)						_g = (_g + 1);
HXLINE( 516)						if ((oldIndex == rand)) {
HXLINE( 518)							Float k = ( (Float)(randLambda()) );
HXDLIN( 518)							int k1 = ::Std_obj::_hx_int((k * ( (Float)(this->_randomChoices->__get(j).StaticCast< ::Array< int > >()->length) )));
HXLINE( 519)							newIndex = this->_randomChoices->__get(j).StaticCast< ::Array< int > >()->__get(k1);
            						}
HXLINE( 521)						j = (j + 1);
            					}
            				}
HXLINE( 523)				this->_data[i] = newIndex;
HXLINE( 524)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,randomizeIndices,(void))

void FlxBaseTilemap_obj::autoTile(int index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_535_autoTile)
HXLINE( 536)		if ((this->_data->__get(index) == 0)) {
HXLINE( 538)			return;
            		}
HXLINE( 541)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::FULL_dyn() )) {
HXLINE( 543)			this->autoTileFull(index);
HXLINE( 544)			return;
            		}
HXLINE( 547)		this->_data[index] = 0;
HXLINE( 550)		bool _hx_tmp;
HXDLIN( 550)		if (((index - this->widthInTiles) >= 0)) {
HXLINE( 550)			_hx_tmp = (this->_data->__get((index - this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 550)			_hx_tmp = true;
            		}
HXDLIN( 550)		if (_hx_tmp) {
HXLINE( 552)			::Array< int > base = this->_data;
HXDLIN( 552)			int index1 = index;
HXDLIN( 552)			base[index1] = (base->__get(index1) + 1);
            		}
HXLINE( 555)		bool _hx_tmp1;
HXDLIN( 555)		if ((::hx::Mod(index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 555)			_hx_tmp1 = (this->_data->__get((index + 1)) > 0);
            		}
            		else {
HXLINE( 555)			_hx_tmp1 = true;
            		}
HXDLIN( 555)		if (_hx_tmp1) {
HXLINE( 557)			::Array< int > base = this->_data;
HXDLIN( 557)			int index1 = index;
HXDLIN( 557)			base[index1] = (base->__get(index1) + 2);
            		}
HXLINE( 560)		bool _hx_tmp2;
HXDLIN( 560)		int _hx_tmp3 = ::Std_obj::_hx_int(( (Float)((index + this->widthInTiles)) ));
HXDLIN( 560)		if ((_hx_tmp3 < this->totalTiles)) {
HXLINE( 560)			_hx_tmp2 = (this->_data->__get((index + this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 560)			_hx_tmp2 = true;
            		}
HXDLIN( 560)		if (_hx_tmp2) {
HXLINE( 562)			::Array< int > base = this->_data;
HXDLIN( 562)			int index1 = index;
HXDLIN( 562)			base[index1] = (base->__get(index1) + 4);
            		}
HXLINE( 565)		bool _hx_tmp4;
HXDLIN( 565)		if ((::hx::Mod(index,this->widthInTiles) > 0)) {
HXLINE( 565)			_hx_tmp4 = (this->_data->__get((index - 1)) > 0);
            		}
            		else {
HXLINE( 565)			_hx_tmp4 = true;
            		}
HXDLIN( 565)		if (_hx_tmp4) {
HXLINE( 567)			::Array< int > base = this->_data;
HXDLIN( 567)			int index1 = index;
HXDLIN( 567)			base[index1] = (base->__get(index1) + 8);
            		}
HXLINE( 571)		bool _hx_tmp5;
HXDLIN( 571)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::ALT_dyn() )) {
HXLINE( 571)			_hx_tmp5 = (this->_data->__get(index) == 15);
            		}
            		else {
HXLINE( 571)			_hx_tmp5 = false;
            		}
HXDLIN( 571)		if (_hx_tmp5) {
HXLINE( 574)			bool _hx_tmp;
HXDLIN( 574)			bool _hx_tmp1;
HXDLIN( 574)			if ((::hx::Mod(index,this->widthInTiles) > 0)) {
HXLINE( 574)				int _hx_tmp = ::Std_obj::_hx_int(( (Float)((index + this->widthInTiles)) ));
HXDLIN( 574)				_hx_tmp1 = (_hx_tmp < this->totalTiles);
            			}
            			else {
HXLINE( 574)				_hx_tmp1 = false;
            			}
HXDLIN( 574)			if (_hx_tmp1) {
HXLINE( 574)				_hx_tmp = (this->_data->__get(((index + this->widthInTiles) - 1)) <= 0);
            			}
            			else {
HXLINE( 574)				_hx_tmp = false;
            			}
HXDLIN( 574)			if (_hx_tmp) {
HXLINE( 576)				this->_data[index] = 1;
            			}
HXLINE( 579)			bool _hx_tmp2;
HXDLIN( 579)			bool _hx_tmp3;
HXDLIN( 579)			if ((::hx::Mod(index,this->widthInTiles) > 0)) {
HXLINE( 579)				_hx_tmp3 = ((index - this->widthInTiles) >= 0);
            			}
            			else {
HXLINE( 579)				_hx_tmp3 = false;
            			}
HXDLIN( 579)			if (_hx_tmp3) {
HXLINE( 579)				_hx_tmp2 = (this->_data->__get(((index - this->widthInTiles) - 1)) <= 0);
            			}
            			else {
HXLINE( 579)				_hx_tmp2 = false;
            			}
HXDLIN( 579)			if (_hx_tmp2) {
HXLINE( 581)				this->_data[index] = 2;
            			}
HXLINE( 584)			bool _hx_tmp4;
HXDLIN( 584)			bool _hx_tmp5;
HXDLIN( 584)			if ((::hx::Mod(index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 584)				_hx_tmp5 = ((index - this->widthInTiles) >= 0);
            			}
            			else {
HXLINE( 584)				_hx_tmp5 = false;
            			}
HXDLIN( 584)			if (_hx_tmp5) {
HXLINE( 584)				_hx_tmp4 = (this->_data->__get(((index - this->widthInTiles) + 1)) <= 0);
            			}
            			else {
HXLINE( 584)				_hx_tmp4 = false;
            			}
HXDLIN( 584)			if (_hx_tmp4) {
HXLINE( 586)				this->_data[index] = 4;
            			}
HXLINE( 589)			bool _hx_tmp6;
HXDLIN( 589)			bool _hx_tmp7;
HXDLIN( 589)			if ((::hx::Mod(index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 590)				int _hx_tmp = ::Std_obj::_hx_int(( (Float)((index + this->widthInTiles)) ));
HXLINE( 589)				_hx_tmp7 = (_hx_tmp < this->totalTiles);
            			}
            			else {
HXLINE( 589)				_hx_tmp7 = false;
            			}
HXDLIN( 589)			if (_hx_tmp7) {
HXLINE( 589)				_hx_tmp6 = (this->_data->__get(((index + this->widthInTiles) + 1)) <= 0);
            			}
            			else {
HXLINE( 589)				_hx_tmp6 = false;
            			}
HXDLIN( 589)			if (_hx_tmp6) {
HXLINE( 593)				this->_data[index] = 8;
            			}
            		}
HXLINE( 597)		::Array< int > base = this->_data;
HXDLIN( 597)		int index1 = index;
HXDLIN( 597)		base[index1] = (base->__get(index1) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTile,(void))

void FlxBaseTilemap_obj::autoTileFull(int index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_606_autoTileFull)
HXLINE( 607)		this->_data[index] = 0;
HXLINE( 609)		bool wallUp = ((index - this->widthInTiles) < 0);
HXLINE( 610)		bool wallRight = (::hx::Mod(index,this->widthInTiles) >= (this->widthInTiles - 1));
HXLINE( 611)		int wallDown = ::Std_obj::_hx_int(( (Float)((index + this->widthInTiles)) ));
HXDLIN( 611)		bool wallDown1 = (wallDown >= this->totalTiles);
HXLINE( 612)		bool wallLeft = (::hx::Mod(index,this->widthInTiles) <= 0);
HXLINE( 614)		bool up;
HXDLIN( 614)		if (!(wallUp)) {
HXLINE( 614)			up = (this->_data->__get((index - this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 614)			up = true;
            		}
HXLINE( 615)		bool upRight;
HXDLIN( 615)		bool upRight1;
HXDLIN( 615)		if (!(wallUp)) {
HXLINE( 615)			upRight1 = wallRight;
            		}
            		else {
HXLINE( 615)			upRight1 = true;
            		}
HXDLIN( 615)		if (!(upRight1)) {
HXLINE( 615)			upRight = (this->_data->__get(((index - this->widthInTiles) + 1)) > 0);
            		}
            		else {
HXLINE( 615)			upRight = true;
            		}
HXLINE( 616)		bool right;
HXDLIN( 616)		if (!(wallRight)) {
HXLINE( 616)			right = (this->_data->__get((index + 1)) > 0);
            		}
            		else {
HXLINE( 616)			right = true;
            		}
HXLINE( 617)		bool rightDown;
HXDLIN( 617)		bool rightDown1;
HXDLIN( 617)		if (!(wallRight)) {
HXLINE( 617)			rightDown1 = wallDown1;
            		}
            		else {
HXLINE( 617)			rightDown1 = true;
            		}
HXDLIN( 617)		if (!(rightDown1)) {
HXLINE( 617)			rightDown = (this->_data->__get(((index + this->widthInTiles) + 1)) > 0);
            		}
            		else {
HXLINE( 617)			rightDown = true;
            		}
HXLINE( 618)		bool down;
HXDLIN( 618)		if (!(wallDown1)) {
HXLINE( 618)			down = (this->_data->__get((index + this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 618)			down = true;
            		}
HXLINE( 619)		bool downLeft;
HXDLIN( 619)		bool downLeft1;
HXDLIN( 619)		if (!(wallDown1)) {
HXLINE( 619)			downLeft1 = wallLeft;
            		}
            		else {
HXLINE( 619)			downLeft1 = true;
            		}
HXDLIN( 619)		if (!(downLeft1)) {
HXLINE( 619)			downLeft = (this->_data->__get(((index + this->widthInTiles) - 1)) > 0);
            		}
            		else {
HXLINE( 619)			downLeft = true;
            		}
HXLINE( 620)		bool left;
HXDLIN( 620)		if (!(wallLeft)) {
HXLINE( 620)			left = (this->_data->__get((index - 1)) > 0);
            		}
            		else {
HXLINE( 620)			left = true;
            		}
HXLINE( 621)		bool leftUp;
HXDLIN( 621)		bool leftUp1;
HXDLIN( 621)		if (!(wallLeft)) {
HXLINE( 621)			leftUp1 = wallUp;
            		}
            		else {
HXLINE( 621)			leftUp1 = true;
            		}
HXDLIN( 621)		if (!(leftUp1)) {
HXLINE( 621)			leftUp = (this->_data->__get(((index - this->widthInTiles) - 1)) > 0);
            		}
            		else {
HXLINE( 621)			leftUp = true;
            		}
HXLINE( 623)		if (up) {
HXLINE( 624)			::Array< int > base = this->_data;
HXDLIN( 624)			int index1 = index;
HXDLIN( 624)			base[index1] = (base->__get(index1) + 1);
            		}
HXLINE( 625)		bool _hx_tmp;
HXDLIN( 625)		bool _hx_tmp1;
HXDLIN( 625)		if (upRight) {
HXLINE( 625)			_hx_tmp1 = up;
            		}
            		else {
HXLINE( 625)			_hx_tmp1 = false;
            		}
HXDLIN( 625)		if (_hx_tmp1) {
HXLINE( 625)			_hx_tmp = right;
            		}
            		else {
HXLINE( 625)			_hx_tmp = false;
            		}
HXDLIN( 625)		if (_hx_tmp) {
HXLINE( 626)			::Array< int > base = this->_data;
HXDLIN( 626)			int index1 = index;
HXDLIN( 626)			base[index1] = (base->__get(index1) + 2);
            		}
HXLINE( 627)		if (right) {
HXLINE( 628)			::Array< int > base = this->_data;
HXDLIN( 628)			int index1 = index;
HXDLIN( 628)			base[index1] = (base->__get(index1) + 4);
            		}
HXLINE( 629)		bool _hx_tmp2;
HXDLIN( 629)		bool _hx_tmp3;
HXDLIN( 629)		if (rightDown) {
HXLINE( 629)			_hx_tmp3 = right;
            		}
            		else {
HXLINE( 629)			_hx_tmp3 = false;
            		}
HXDLIN( 629)		if (_hx_tmp3) {
HXLINE( 629)			_hx_tmp2 = down;
            		}
            		else {
HXLINE( 629)			_hx_tmp2 = false;
            		}
HXDLIN( 629)		if (_hx_tmp2) {
HXLINE( 630)			::Array< int > base = this->_data;
HXDLIN( 630)			int index1 = index;
HXDLIN( 630)			base[index1] = (base->__get(index1) + 8);
            		}
HXLINE( 631)		if (down) {
HXLINE( 632)			::Array< int > base = this->_data;
HXDLIN( 632)			int index1 = index;
HXDLIN( 632)			base[index1] = (base->__get(index1) + 16);
            		}
HXLINE( 633)		bool _hx_tmp4;
HXDLIN( 633)		bool _hx_tmp5;
HXDLIN( 633)		if (downLeft) {
HXLINE( 633)			_hx_tmp5 = down;
            		}
            		else {
HXLINE( 633)			_hx_tmp5 = false;
            		}
HXDLIN( 633)		if (_hx_tmp5) {
HXLINE( 633)			_hx_tmp4 = left;
            		}
            		else {
HXLINE( 633)			_hx_tmp4 = false;
            		}
HXDLIN( 633)		if (_hx_tmp4) {
HXLINE( 634)			::Array< int > base = this->_data;
HXDLIN( 634)			int index1 = index;
HXDLIN( 634)			base[index1] = (base->__get(index1) + 32);
            		}
HXLINE( 635)		if (left) {
HXLINE( 636)			::Array< int > base = this->_data;
HXDLIN( 636)			int index1 = index;
HXDLIN( 636)			base[index1] = (base->__get(index1) + 64);
            		}
HXLINE( 637)		bool _hx_tmp6;
HXDLIN( 637)		bool _hx_tmp7;
HXDLIN( 637)		if (leftUp) {
HXLINE( 637)			_hx_tmp7 = left;
            		}
            		else {
HXLINE( 637)			_hx_tmp7 = false;
            		}
HXDLIN( 637)		if (_hx_tmp7) {
HXLINE( 637)			_hx_tmp6 = up;
            		}
            		else {
HXLINE( 637)			_hx_tmp6 = false;
            		}
HXDLIN( 637)		if (_hx_tmp6) {
HXLINE( 638)			::Array< int > base = this->_data;
HXDLIN( 638)			int index1 = index;
HXDLIN( 638)			base[index1] = (base->__get(index1) + 128);
            		}
HXLINE( 640)		::Array< int > base = this->_data;
HXDLIN( 640)		int index1 = index;
HXDLIN( 640)		base[index1] = (base->__get(index1) - (::flixel::tile::FlxBaseTilemap_obj::offsetAutoTile->__get(this->_data->__get(index)) - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTileFull,(void))

void FlxBaseTilemap_obj::setCustomTileMappings(::Array< int > mappings,::Array< int > randomIndices,::Array< ::Dynamic> randomChoices, ::Dynamic randomLambda){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_653_setCustomTileMappings)
HXLINE( 654)		this->customTileRemap = mappings;
HXLINE( 655)		this->_randomIndices = randomIndices;
HXLINE( 656)		this->_randomChoices = randomChoices;
HXLINE( 657)		this->_randomLambda = randomLambda;
HXLINE( 660)		bool _hx_tmp;
HXDLIN( 660)		if (::hx::IsNotNull( this->_randomIndices )) {
HXLINE( 660)			if (::hx::IsNotNull( this->_randomChoices )) {
HXLINE( 660)				_hx_tmp = (this->_randomChoices->length == 0);
            			}
            			else {
HXLINE( 660)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 660)			_hx_tmp = false;
            		}
HXDLIN( 660)		if (_hx_tmp) {
HXLINE( 662)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("You must provide valid 'randomChoices' if you wish to randomize tilemap indices, please read documentation of 'setCustomTileMappings' function.",b3,ce,50,22)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setCustomTileMappings,(void))

int FlxBaseTilemap_obj::getTile(int x,int y){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_675_getTile)
HXDLIN( 675)		return this->_data->__get(((y * this->widthInTiles) + x));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTile,return )

int FlxBaseTilemap_obj::getTileByIndex(int index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_686_getTileByIndex)
HXDLIN( 686)		return this->_data->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileByIndex,return )

int FlxBaseTilemap_obj::getTileCollisions(int index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_697_getTileCollisions)
HXDLIN( 697)		return ( ( ::flixel::FlxObject)(this->_tileObjects->__get(index)) )->allowCollisions;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileCollisions,return )

::Array< int > FlxBaseTilemap_obj::getTileInstances(int index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_707_getTileInstances)
HXLINE( 708)		::Array< int > array = null();
HXLINE( 709)		int i = 0;
HXLINE( 710)		int l = (this->widthInTiles * this->heightInTiles);
HXLINE( 712)		while((i < l)){
HXLINE( 714)			if ((this->_data->__get(i) == index)) {
HXLINE( 716)				if (::hx::IsNull( array )) {
HXLINE( 718)					array = ::Array_obj< int >::__new(0);
            				}
HXLINE( 720)				array->push(i);
            			}
HXLINE( 722)			i = (i + 1);
            		}
HXLINE( 725)		return array;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileInstances,return )

bool FlxBaseTilemap_obj::setTile(int x,int y,int tile,::hx::Null< bool >  __o_updateGraphics){
            		bool updateGraphics = __o_updateGraphics.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_738_setTile)
HXLINE( 739)		bool _hx_tmp;
HXDLIN( 739)		if ((x < this->widthInTiles)) {
HXLINE( 739)			_hx_tmp = (y >= this->heightInTiles);
            		}
            		else {
HXLINE( 739)			_hx_tmp = true;
            		}
HXDLIN( 739)		if (_hx_tmp) {
HXLINE( 741)			return false;
            		}
HXLINE( 744)		return this->setTileByIndex(((y * this->widthInTiles) + x),tile,updateGraphics);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setTile,return )

bool FlxBaseTilemap_obj::setTileByIndex(int index,int tile,::hx::Null< bool >  __o_updateGraphics){
            		bool updateGraphics = __o_updateGraphics.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_756_setTileByIndex)
HXLINE( 757)		if ((index >= this->_data->length)) {
HXLINE( 759)			return false;
            		}
HXLINE( 762)		bool ok = true;
HXLINE( 763)		this->_data[index] = tile;
HXLINE( 765)		if (!(updateGraphics)) {
HXLINE( 767)			return ok;
            		}
HXLINE( 770)		this->setDirty(null());
HXLINE( 772)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 774)			this->updateTile(this->_data->__get(index));
HXLINE( 775)			return ok;
            		}
HXLINE( 779)		int i;
HXLINE( 780)		int row = (::Std_obj::_hx_int((( (Float)(index) ) / ( (Float)(this->widthInTiles) ))) - 1);
HXLINE( 781)		int rowLength = (row + 3);
HXLINE( 782)		int column = (::hx::Mod(index,this->widthInTiles) - 1);
HXLINE( 783)		int columnHeight = (column + 3);
HXLINE( 785)		while((row < rowLength)){
HXLINE( 787)			column = (columnHeight - 3);
HXLINE( 789)			while((column < columnHeight)){
HXLINE( 791)				bool _hx_tmp;
HXDLIN( 791)				bool _hx_tmp1;
HXDLIN( 791)				bool _hx_tmp2;
HXDLIN( 791)				if ((row >= 0)) {
HXLINE( 791)					_hx_tmp2 = (row < this->heightInTiles);
            				}
            				else {
HXLINE( 791)					_hx_tmp2 = false;
            				}
HXDLIN( 791)				if (_hx_tmp2) {
HXLINE( 791)					_hx_tmp1 = (column >= 0);
            				}
            				else {
HXLINE( 791)					_hx_tmp1 = false;
            				}
HXDLIN( 791)				if (_hx_tmp1) {
HXLINE( 791)					_hx_tmp = (column < this->widthInTiles);
            				}
            				else {
HXLINE( 791)					_hx_tmp = false;
            				}
HXDLIN( 791)				if (_hx_tmp) {
HXLINE( 793)					i = ((row * this->widthInTiles) + column);
HXLINE( 794)					this->autoTile(i);
HXLINE( 795)					this->updateTile(this->_data->__get(i));
            				}
HXLINE( 797)				column = (column + 1);
            			}
HXLINE( 799)			row = (row + 1);
            		}
HXLINE( 802)		return ok;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,setTileByIndex,return )

void FlxBaseTilemap_obj::setTileProperties(int tile,::hx::Null< int >  __o_allowCollisions, ::Dynamic callback,::hx::Class callbackFilter,::hx::Null< int >  __o_range){
            		int allowCollisions = __o_allowCollisions.Default(4369);
            		int range = __o_range.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_816_setTileProperties)
HXLINE( 817)		if ((range <= 0)) {
HXLINE( 819)			range = 1;
            		}
HXLINE( 822)		int maxIndex = this->_tileObjects->get_length();
HXLINE( 823)		int end = (tile + range);
HXLINE( 824)		if ((maxIndex == 0)) {
HXLINE( 826)			::String rangeDisplay;
HXDLIN( 826)			if ((range == 1)) {
HXLINE( 826)				rangeDisplay = (HX_("tile ",32,fd,34,10) + tile);
            			}
            			else {
HXLINE( 826)				rangeDisplay = (((HX_("tiles ",fb,d6,28,1e) + tile) + HX_("-",2d,00,00,00)) + (end - 1));
            			}
HXLINE( 827)			::flixel::FlxG_obj::log->advanced((((HX_("Cannot setTileProperties of ",cf,3d,52,94) + rangeDisplay) + HX_(" when tilemap does not contain any tiles.",c5,3c,2f,55)) + HX_(" This may be due to an invalid graphic.",a9,75,60,06)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 829)			return;
            		}
HXLINE( 832)		if ((end > maxIndex)) {
HXLINE( 834)			::String rangeDisplay;
HXDLIN( 834)			if ((range == 1)) {
HXLINE( 834)				rangeDisplay = (HX_("tile ",32,fd,34,10) + tile);
            			}
            			else {
HXLINE( 834)				rangeDisplay = (((HX_("tiles ",fb,d6,28,1e) + tile) + HX_("-",2d,00,00,00)) + (end - 1));
            			}
HXLINE( 835)			::flixel::FlxG_obj::log->advanced(((((HX_("Cannot setTileProperties of ",cf,3d,52,94) + rangeDisplay) + HX_(" when there are only ",66,4c,3f,59)) + end) + HX_(" tiles.",29,af,d7,50)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 836)			return;
            		}
HXLINE( 839)		{
HXLINE( 839)			int _g = tile;
HXDLIN( 839)			int _g1 = end;
HXDLIN( 839)			while((_g < _g1)){
HXLINE( 839)				_g = (_g + 1);
HXDLIN( 839)				int i = (_g - 1);
HXLINE( 841)				 ::Dynamic tileData = this->_tileObjects->__get(i);
HXLINE( 842)				( ( ::flixel::FlxObject)(tileData) )->set_allowCollisions(allowCollisions);
HXLINE( 843)				tileData->__SetField(HX_("callbackFunction",fd,cd,91,7e),callback,::hx::paccDynamic);
HXLINE( 844)				tileData->__SetField(HX_("filter",b8,1f,35,85),callbackFilter,::hx::paccDynamic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,setTileProperties,(void))

::Array< int > FlxBaseTilemap_obj::getData(::hx::Null< bool >  __o_simple){
            		bool simple = __o_simple.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_856_getData)
HXLINE( 857)		if (!(simple)) {
HXLINE( 859)			return this->_data;
            		}
HXLINE( 862)		int i = 0;
HXLINE( 863)		int l = this->_data->length;
HXLINE( 864)		::Array< int > data = ::Array_obj< int >::__new();
HXLINE( 865)		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
HXLINE( 867)		while((i < l)){
HXLINE( 869)			int _hx_tmp;
HXDLIN( 869)			if ((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(i))) )->allowCollisions > 0)) {
HXLINE( 869)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 869)				_hx_tmp = 0;
            			}
HXDLIN( 869)			data[i] = _hx_tmp;
HXLINE( 870)			i = (i + 1);
            		}
HXLINE( 873)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getData,return )

::Array< ::Dynamic> FlxBaseTilemap_obj::findPath( ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::path::FlxPathSimplifier __o_simplify,::hx::Null< int >  __o_diagonalPolicy){
            		 ::flixel::path::FlxPathSimplifier simplify = __o_simplify;
            		if (::hx::IsNull(__o_simplify)) simplify = ::flixel::path::FlxPathSimplifier_obj::LINE_dyn();
            		int diagonalPolicy = __o_diagonalPolicy.Default(2);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_894_findPath)
HXDLIN( 894)		::flixel::tile::FlxBaseTilemap_obj::diagonalPathfinder->diagonalPolicy = diagonalPolicy;
HXDLIN( 894)		return ( ( ::flixel::path::FlxTypedPathfinder)(::flixel::tile::FlxBaseTilemap_obj::diagonalPathfinder) )->findPath(::hx::ObjectPtr<OBJ_>(this),start,end,simplify);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,findPath,return )

::Array< ::Dynamic> FlxBaseTilemap_obj::findPathCustom( ::flixel::path::FlxTypedPathfinder pathfinder, ::flixel::math::FlxBasePoint start, ::flixel::math::FlxBasePoint end, ::flixel::path::FlxPathSimplifier __o_simplify){
            		 ::flixel::path::FlxPathSimplifier simplify = __o_simplify;
            		if (::hx::IsNull(__o_simplify)) simplify = ::flixel::path::FlxPathSimplifier_obj::LINE_dyn();
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_916_findPathCustom)
HXDLIN( 916)		return pathfinder->findPath(::hx::ObjectPtr<OBJ_>(this),start,end,simplify);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,findPathCustom,return )

::Array< int > FlxBaseTilemap_obj::computePathDistance(int startIndex,int endIndex,::hx::Null< int >  __o_diagonalPolicy,::hx::Null< bool >  __o_stopOnEnd){
            		int diagonalPolicy = __o_diagonalPolicy.Default(2);
            		bool stopOnEnd = __o_stopOnEnd.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_930_computePathDistance)
HXLINE( 931)		 ::flixel::path::FlxTypedPathfinderData data = this->computePathData(startIndex,endIndex,diagonalPolicy,stopOnEnd);
HXLINE( 932)		if (::hx::IsNotNull( data )) {
HXLINE( 933)			return data->distances;
            		}
HXLINE( 935)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathDistance,return )

 ::flixel::path::FlxTypedPathfinderData FlxBaseTilemap_obj::computePathData(int startIndex,int endIndex,::hx::Null< int >  __o_diagonalPolicy,::hx::Null< bool >  __o_stopOnEnd){
            		int diagonalPolicy = __o_diagonalPolicy.Default(2);
            		bool stopOnEnd = __o_stopOnEnd.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_952_computePathData)
HXDLIN( 952)		::flixel::tile::FlxBaseTilemap_obj::diagonalPathfinder->diagonalPolicy = diagonalPolicy;
HXDLIN( 952)		 ::flixel::path::FlxTypedPathfinder _this = ( ( ::flixel::path::FlxTypedPathfinder)(::flixel::tile::FlxBaseTilemap_obj::diagonalPathfinder) );
HXDLIN( 952)		return _this->compute(_this->createData(::hx::ObjectPtr<OBJ_>(this),startIndex,endIndex),stopOnEnd).StaticCast<  ::flixel::path::FlxTypedPathfinderData >();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathData,return )

 ::flixel::path::FlxTypedPathfinder FlxBaseTilemap_obj::getDiagonalPathfinder(int diagonalPolicy){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_956_getDiagonalPathfinder)
HXLINE( 957)		::flixel::tile::FlxBaseTilemap_obj::diagonalPathfinder->diagonalPolicy = diagonalPolicy;
HXLINE( 958)		return ::flixel::tile::FlxBaseTilemap_obj::diagonalPathfinder;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getDiagonalPathfinder,return )

bool FlxBaseTilemap_obj::overlaps( ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_973_overlaps)
HXLINE( 974)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(objectOrGroup);
HXLINE( 975)		if (::hx::IsNotNull( group )) {
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0,Float,y,Float,x, ::Dynamic,_g,bool,inScreenSpace1, ::flixel::FlxCamera,camera1) HXARGC(1)
            			bool _hx_run( ::flixel::FlxBasic objectOrGroup){
            				HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_976_overlaps)
HXLINE( 976)				return ( (bool)(_g(objectOrGroup,x,y,inScreenSpace1,camera1)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 976)			 ::Dynamic _g = this->tilemapOverlapsCallback_dyn();
HXDLIN( 976)			Float x = ( (Float)(0) );
HXDLIN( 976)			Float y = ( (Float)(0) );
HXDLIN( 976)			bool inScreenSpace1 = inScreenSpace;
HXDLIN( 976)			 ::flixel::FlxCamera camera1 = camera;
HXDLIN( 976)			return group->any( ::Dynamic(new _hx_Closure_0(y,x,_g,inScreenSpace1,camera1)));
            		}
HXLINE( 978)		 ::flixel::FlxCamera camera1 = null();
HXDLIN( 978)		bool _hx_tmp;
HXDLIN( 978)		if ((objectOrGroup->flixelType != 1)) {
HXLINE( 978)			_hx_tmp = (objectOrGroup->flixelType == 3);
            		}
            		else {
HXLINE( 978)			_hx_tmp = true;
            		}
HXDLIN( 978)		if (_hx_tmp) {
HXLINE( 978)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(objectOrGroup) ),null(),null(),null());
            		}
            		else {
HXLINE( 978)			return this->overlaps(objectOrGroup,false,camera1);
            		}
HXDLIN( 978)		return false;
            	}


bool FlxBaseTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic objectOrGroup,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		Float x = __o_x.Default(((Float)0.0));
            		Float y = __o_y.Default(((Float)0.0));
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_983_tilemapOverlapsCallback)
HXDLIN( 983)		bool _hx_tmp;
HXDLIN( 983)		if ((objectOrGroup->flixelType != 1)) {
HXDLIN( 983)			_hx_tmp = (objectOrGroup->flixelType == 3);
            		}
            		else {
HXDLIN( 983)			_hx_tmp = true;
            		}
HXDLIN( 983)		if (_hx_tmp) {
HXLINE( 985)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(objectOrGroup) ),null(),null(),null());
            		}
            		else {
HXLINE( 989)			return this->overlaps(objectOrGroup,inScreenSpace,camera);
            		}
HXLINE( 983)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsCallback,return )

bool FlxBaseTilemap_obj::overlapsAt(Float x,Float y, ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1007_overlapsAt)
HXLINE(1008)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(objectOrGroup);
HXLINE(1009)		if (::hx::IsNotNull( group )) {
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0,Float,y1,Float,x1, ::Dynamic,_g,bool,inScreenSpace1, ::flixel::FlxCamera,camera1) HXARGC(1)
            			bool _hx_run( ::flixel::FlxBasic objectOrGroup){
            				HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1010_overlapsAt)
HXLINE(1010)				return ( (bool)(_g(objectOrGroup,x1,y1,inScreenSpace1,camera1)) );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(1010)			 ::Dynamic _g = this->tilemapOverlapsAtCallback_dyn();
HXDLIN(1010)			Float x1 = x;
HXDLIN(1010)			Float y1 = y;
HXDLIN(1010)			bool inScreenSpace1 = inScreenSpace;
HXDLIN(1010)			 ::flixel::FlxCamera camera1 = camera;
HXDLIN(1010)			return group->any( ::Dynamic(new _hx_Closure_0(y1,x1,_g,inScreenSpace1,camera1)));
            		}
HXLINE(1012)		bool _hx_tmp;
HXDLIN(1012)		if ((objectOrGroup->flixelType != 1)) {
HXLINE(1012)			_hx_tmp = (objectOrGroup->flixelType == 3);
            		}
            		else {
HXLINE(1012)			_hx_tmp = true;
            		}
HXDLIN(1012)		if (_hx_tmp) {
HXLINE(1012)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN(1012)			this1->set_x(x);
HXDLIN(1012)			this1->set_y(y);
HXDLIN(1012)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(objectOrGroup) ),null(),false,this1);
            		}
            		else {
HXLINE(1012)			return this->overlapsAt(x,y,objectOrGroup,inScreenSpace,camera);
            		}
HXDLIN(1012)		return false;
            	}


bool FlxBaseTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic objectOrGroup,Float x,Float y,bool inScreenSpace, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1017_tilemapOverlapsAtCallback)
HXDLIN(1017)		bool _hx_tmp;
HXDLIN(1017)		if ((objectOrGroup->flixelType != 1)) {
HXDLIN(1017)			_hx_tmp = (objectOrGroup->flixelType == 3);
            		}
            		else {
HXDLIN(1017)			_hx_tmp = true;
            		}
HXDLIN(1017)		if (_hx_tmp) {
HXLINE(1019)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN(1019)			this1->set_x(x);
HXDLIN(1019)			this1->set_y(y);
HXDLIN(1019)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(objectOrGroup) ),null(),false,this1);
            		}
            		else {
HXLINE(1023)			return this->overlapsAt(x,y,objectOrGroup,inScreenSpace,camera);
            		}
HXLINE(1017)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxBaseTilemap_obj::overlapsPoint( ::flixel::math::FlxBasePoint worldPoint,::hx::Null< bool >  __o_inScreenSpace, ::flixel::FlxCamera camera){
            		bool inScreenSpace = __o_inScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1036_overlapsPoint)
HXLINE(1037)		if (inScreenSpace) {
HXLINE(1039)			if (::hx::IsNull( camera )) {
HXLINE(1040)				camera = ::flixel::FlxG_obj::camera;
            			}
HXLINE(1042)			{
HXLINE(1042)				 ::flixel::math::FlxBasePoint point = camera->scroll;
HXDLIN(1042)				{
HXLINE(1042)					Float y = point->y;
HXDLIN(1042)					worldPoint->set_x((worldPoint->x - point->x));
HXDLIN(1042)					worldPoint->set_y((worldPoint->y - y));
            				}
HXDLIN(1042)				if (point->_weak) {
HXLINE(1042)					point->put();
            				}
            			}
HXLINE(1043)			if (worldPoint->_weak) {
HXLINE(1043)				worldPoint->put();
            			}
            		}
HXLINE(1046)		return this->tileAtPointAllowsCollisions(worldPoint);
            	}


bool FlxBaseTilemap_obj::tileAtPointAllowsCollisions( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1050_tileAtPointAllowsCollisions)
HXLINE(1051)		int tileIndex = this->getTileIndexByCoords(point);
HXLINE(1052)		bool _hx_tmp;
HXDLIN(1052)		if ((tileIndex >= 0)) {
HXLINE(1052)			_hx_tmp = (tileIndex >= this->_data->length);
            		}
            		else {
HXLINE(1052)			_hx_tmp = true;
            		}
HXDLIN(1052)		if (_hx_tmp) {
HXLINE(1053)			return false;
            		}
HXLINE(1054)		return (( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(tileIndex))) )->allowCollisions > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,tileAtPointAllowsCollisions,return )

 ::flixel::math::FlxRect FlxBaseTilemap_obj::getBounds( ::flixel::math::FlxRect bounds){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1064_getBounds)
HXLINE(1065)		if (::hx::IsNull( bounds )) {
HXLINE(1066)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1066)			_this->x = ( (Float)(0) );
HXDLIN(1066)			_this->y = ( (Float)(0) );
HXDLIN(1066)			_this->width = ( (Float)(0) );
HXDLIN(1066)			_this->height = ( (Float)(0) );
HXDLIN(1066)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1066)			rect->_inPool = false;
HXDLIN(1066)			bounds = rect;
            		}
HXLINE(1068)		Float X = this->x;
HXDLIN(1068)		Float Y = this->y;
HXDLIN(1068)		Float Width = this->get_width();
HXDLIN(1068)		Float Height = this->get_height();
HXDLIN(1068)		bounds->x = X;
HXDLIN(1068)		bounds->y = Y;
HXDLIN(1068)		bounds->width = Width;
HXDLIN(1068)		bounds->height = Height;
HXDLIN(1068)		return bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getBounds,return )

::Array< int > FlxBaseTilemap_obj::offsetAutoTile;

 ::flixel::path::FlxDiagonalPathfinder FlxBaseTilemap_obj::diagonalPathfinder;


::hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__new() {
	::hx::ObjectPtr< FlxBaseTilemap_obj > __this = new FlxBaseTilemap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBaseTilemap_obj *__this = (FlxBaseTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseTilemap_obj), true, "flixel.tile.FlxBaseTilemap"));
	*(void **)__this = FlxBaseTilemap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseTilemap_obj::FlxBaseTilemap_obj()
{
}

void FlxBaseTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseTilemap);
	HX_MARK_MEMBER_NAME(_hx_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_MARK_MEMBER_NAME(_collideIndex,"_collideIndex");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBaseTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_VISIT_MEMBER_NAME(_collideIndex,"_collideIndex");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBaseTilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ::hx::Val( ray_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return ::hx::Val( _hx_auto ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayStep") ) { return ::hx::Val( rayStep_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return ::hx::Val( getTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return ::hx::Val( setTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"getData") ) { return ::hx::Val( getData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return ::hx::Val( setDirty_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return ::hx::Val( autoTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return ::hx::Val( findPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return ::hx::Val( updateMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return ::hx::Val( totalTiles ); }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { return ::hx::Val( _drawIndex ); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return ::hx::Val( updateTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"calcRayExit") ) { return ::hx::Val( calcRayExit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return ::hx::Val( widthInTiles ); }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return ::hx::Val( _tileObjects ); }
		if (HX_FIELD_EQ(inName,"calcRayEntry") ) { return ::hx::Val( calcRayEntry_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoTileFull") ) { return ::hx::Val( autoTileFull_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return ::hx::Val( heightInTiles ); }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return ::hx::Val( _randomLambda ); }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { return ::hx::Val( _collideIndex ); }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return ::hx::Val( cacheGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMapHelper") ) { return ::hx::Val( loadMapHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyAutoTile") ) { return ::hx::Val( applyAutoTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return ::hx::Val( _randomIndices ); }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return ::hx::Val( _randomChoices ); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return ::hx::Val( _startingIndex ); }
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return ::hx::Val( loadMapFromCSV_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return ::hx::Val( getTileByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return ::hx::Val( setTileByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"findPathCustom") ) { return ::hx::Val( findPathCustom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return ::hx::Val( customTileRemap ); }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return ::hx::Val( initTileObjects_dyn() ); }
		if (HX_FIELD_EQ(inName,"postGraphicLoad") ) { return ::hx::Val( postGraphicLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"computePathData") ) { return ::hx::Val( computePathData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return ::hx::Val( loadMapFromArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyCustomRemap") ) { return ::hx::Val( applyCustomRemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"randomizeIndices") ) { return ::hx::Val( randomizeIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return ::hx::Val( getTileInstances_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return ::hx::Val( computeDimensions_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return ::hx::Val( getTileCollisions_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return ::hx::Val( setTileProperties_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return ::hx::Val( loadMapFrom2DArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMapFromGraphic") ) { return ::hx::Val( loadMapFromGraphic_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return ::hx::Val( computePathDistance_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return ::hx::Val( getTileIndexByCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return ::hx::Val( getTileCoordsByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return ::hx::Val( setCustomTileMappings_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDiagonalPathfinder") ) { return ::hx::Val( getDiagonalPathfinder_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return ::hx::Val( tilemapOverlapsCallback_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return ::hx::Val( tilemapOverlapsAtCallback_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"tileAtPointAllowsCollisions") ) { return ::hx::Val( tileAtPointAllowsCollisions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBaseTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"offsetAutoTile") ) { outValue = ( offsetAutoTile ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"diagonalPathfinder") ) { outValue = ( diagonalPathfinder ); return true; }
	}
	return false;
}

::hx::Val FlxBaseTilemap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _hx_auto=inValue.Cast<  ::flixel::tile::FlxTilemapAutoTiling >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { _drawIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { _collideIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBaseTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"offsetAutoTile") ) { offsetAutoTile=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"diagonalPathfinder") ) { diagonalPathfinder=ioValue.Cast<  ::flixel::path::FlxDiagonalPathfinder >(); return true; }
	}
	return false;
}

void FlxBaseTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("auto",6f,df,76,40));
	outFields->push(HX_("widthInTiles",fa,b1,71,d4));
	outFields->push(HX_("heightInTiles",39,ce,1a,97));
	outFields->push(HX_("totalTiles",21,f3,d5,16));
	outFields->push(HX_("customTileRemap",ca,70,d3,8a));
	outFields->push(HX_("_randomIndices",a5,d3,07,36));
	outFields->push(HX_("_randomChoices",70,42,cb,2b));
	outFields->push(HX_("_tileObjects",47,55,bd,87));
	outFields->push(HX_("_startingIndex",73,a1,49,3d));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_drawIndex",2f,4c,c2,e1));
	outFields->push(HX_("_collideIndex",93,05,8a,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseTilemap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tile::FlxTilemapAutoTiling */ ,(int)offsetof(FlxBaseTilemap_obj,_hx_auto),HX_("auto",6f,df,76,40)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,widthInTiles),HX_("widthInTiles",fa,b1,71,d4)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,heightInTiles),HX_("heightInTiles",39,ce,1a,97)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,totalTiles),HX_("totalTiles",21,f3,d5,16)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,customTileRemap),HX_("customTileRemap",ca,70,d3,8a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,_randomIndices),HX_("_randomIndices",a5,d3,07,36)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxBaseTilemap_obj,_randomChoices),HX_("_randomChoices",70,42,cb,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBaseTilemap_obj,_randomLambda),HX_("_randomLambda",49,40,18,0b)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxBaseTilemap_obj,_tileObjects),HX_("_tileObjects",47,55,bd,87)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_startingIndex),HX_("_startingIndex",73,a1,49,3d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_drawIndex),HX_("_drawIndex",2f,4c,c2,e1)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_collideIndex),HX_("_collideIndex",93,05,8a,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBaseTilemap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &FlxBaseTilemap_obj::offsetAutoTile,HX_("offsetAutoTile",f0,58,a2,c6)},
	{::hx::fsObject /*  ::flixel::path::FlxDiagonalPathfinder */ ,(void *) &FlxBaseTilemap_obj::diagonalPathfinder,HX_("diagonalPathfinder",a0,c5,8f,53)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBaseTilemap_obj_sMemberFields[] = {
	HX_("auto",6f,df,76,40),
	HX_("widthInTiles",fa,b1,71,d4),
	HX_("heightInTiles",39,ce,1a,97),
	HX_("totalTiles",21,f3,d5,16),
	HX_("customTileRemap",ca,70,d3,8a),
	HX_("_randomIndices",a5,d3,07,36),
	HX_("_randomChoices",70,42,cb,2b),
	HX_("_randomLambda",49,40,18,0b),
	HX_("_tileObjects",47,55,bd,87),
	HX_("_startingIndex",73,a1,49,3d),
	HX_("_data",09,72,74,f5),
	HX_("_drawIndex",2f,4c,c2,e1),
	HX_("_collideIndex",93,05,8a,b4),
	HX_("updateTile",d7,b5,b1,05),
	HX_("cacheGraphics",2d,61,95,fc),
	HX_("initTileObjects",16,be,45,2e),
	HX_("updateMap",13,e8,df,82),
	HX_("computeDimensions",a4,a4,eb,f3),
	HX_("getTileIndexByCoords",03,79,8b,76),
	HX_("getTileCoordsByIndex",b9,63,25,a1),
	HX_("ray",ea,d5,56,00),
	HX_("rayStep",56,26,de,2f),
	HX_("calcRayEntry",dd,53,c1,6c),
	HX_("calcRayExit",13,b2,86,c2),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("setDirty",10,b9,04,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("loadMapFromCSV",06,2b,38,8f),
	HX_("loadMapFromArray",d9,80,a3,db),
	HX_("loadMapFrom2DArray",c7,d3,90,ac),
	HX_("loadMapFromGraphic",e8,bd,b6,e5),
	HX_("loadMapHelper",24,aa,93,69),
	HX_("postGraphicLoad",6e,44,44,1d),
	HX_("applyAutoTile",cb,19,58,70),
	HX_("applyCustomRemap",8a,6c,0c,b4),
	HX_("randomizeIndices",f6,8d,4c,14),
	HX_("autoTile",3d,ba,22,30),
	HX_("autoTileFull",6c,32,17,bf),
	HX_("setCustomTileMappings",86,00,11,09),
	HX_("getTile",e4,7a,7f,1f),
	HX_("getTileByIndex",37,bb,aa,c4),
	HX_("getTileCollisions",c5,3f,3d,c8),
	HX_("getTileInstances",ba,6b,01,25),
	HX_("setTile",f0,0b,81,12),
	HX_("setTileByIndex",ab,a3,ca,e4),
	HX_("setTileProperties",03,58,a1,54),
	HX_("getData",e0,05,e6,14),
	HX_("findPath",7e,f2,e5,9c),
	HX_("findPathCustom",cf,e0,9e,0c),
	HX_("computePathDistance",11,4c,56,20),
	HX_("computePathData",06,71,83,cf),
	HX_("getDiagonalPathfinder",d6,47,aa,b2),
	HX_("overlaps",0c,d3,2a,45),
	HX_("tilemapOverlapsCallback",3f,9d,f8,ac),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("tilemapOverlapsAtCallback",d2,ab,68,db),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("tileAtPointAllowsCollisions",1a,5b,2f,f6),
	HX_("getBounds",ab,0f,74,e2),
	::String(null()) };

static void FlxBaseTilemap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::offsetAutoTile,"offsetAutoTile");
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::diagonalPathfinder,"diagonalPathfinder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseTilemap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::offsetAutoTile,"offsetAutoTile");
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::diagonalPathfinder,"diagonalPathfinder");
};

#endif

::hx::Class FlxBaseTilemap_obj::__mClass;

static ::String FlxBaseTilemap_obj_sStaticFields[] = {
	HX_("offsetAutoTile",f0,58,a2,c6),
	HX_("diagonalPathfinder",a0,c5,8f,53),
	::String(null())
};

void FlxBaseTilemap_obj::__register()
{
	FlxBaseTilemap_obj _hx_dummy;
	FlxBaseTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxBaseTilemap",19,d7,a6,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBaseTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBaseTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBaseTilemap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBaseTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseTilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseTilemap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBaseTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_26_boot)
HXDLIN(  26)		offsetAutoTile = ::Array_obj< int >::fromData( _hx_array_data_6aa6d719_64,256);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_36d94048d9e4941f_45_boot)
HXDLIN(  45)		diagonalPathfinder =  ::flixel::path::FlxDiagonalPathfinder_obj::__alloc( HX_CTX ,null());
            	}
}

} // end namespace flixel
} // end namespace tile
