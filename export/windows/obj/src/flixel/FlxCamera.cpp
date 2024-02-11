#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1aae230bd422321_45_new,"flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",45,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_606_startQuadBatch,"flixel.FlxCamera","startQuadBatch",0xe17326fa,"flixel.FlxCamera.startQuadBatch","flixel/FlxCamera.hx",606,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_667_startTrianglesBatch,"flixel.FlxCamera","startTrianglesBatch",0xb3a3b828,"flixel.FlxCamera.startTrianglesBatch","flixel/FlxCamera.hx",667,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_690_getNewDrawTrianglesItem,"flixel.FlxCamera","getNewDrawTrianglesItem",0xcd894887,"flixel.FlxCamera.getNewDrawTrianglesItem","flixel/FlxCamera.hx",690,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_735_clearDrawStack,"flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",735,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_768_render,"flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",768,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_780_drawPixels,"flixel.FlxCamera","drawPixels",0x80c6bc1a,"flixel.FlxCamera.drawPixels","flixel/FlxCamera.hx",780,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_812_copyPixels,"flixel.FlxCamera","copyPixels",0xf4c7a68b,"flixel.FlxCamera.copyPixels","flixel/FlxCamera.hx",812,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_856_drawTriangles,"flixel.FlxCamera","drawTriangles",0x78d375de,"flixel.FlxCamera.drawTriangles","flixel/FlxCamera.hx",856,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_952_transformRect,"flixel.FlxCamera","transformRect",0x135ffe87,"flixel.FlxCamera.transformRect","flixel/FlxCamera.hx",952,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_975_transformPoint,"flixel.FlxCamera","transformPoint",0xc072398d,"flixel.FlxCamera.transformPoint","flixel/FlxCamera.hx",975,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_993_transformVector,"flixel.FlxCamera","transformVector",0x43afc0e6,"flixel.FlxCamera.transformVector","flixel/FlxCamera.hx",993,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1008_transformObject,"flixel.FlxCamera","transformObject",0xc1918ee2,"flixel.FlxCamera.transformObject","flixel/FlxCamera.hx",1008,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1086_destroy,"flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",1086,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1145_update,"flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",1145,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1169_updateScroll,"flixel.FlxCamera","updateScroll",0x3fd094ff,"flixel.FlxCamera.updateScroll","flixel/FlxCamera.hx",1169,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1181_bindScrollPos,"flixel.FlxCamera","bindScrollPos",0xa221ffe1,"flixel.FlxCamera.bindScrollPos","flixel/FlxCamera.hx",1181,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1198_updateFollow,"flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",1198,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1289_updateFlash,"flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",1289,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1300_updateFade,"flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",1300,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1325_completeFade,"flixel.FlxCamera","completeFade",0xb02048de,"flixel.FlxCamera.completeFade","flixel/FlxCamera.hx",1325,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1333_updateShake,"flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",1333,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1373_updateFlashSpritePosition,"flixel.FlxCamera","updateFlashSpritePosition",0x5aef376c,"flixel.FlxCamera.updateFlashSpritePosition","flixel/FlxCamera.hx",1373,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1385_updateFlashOffset,"flixel.FlxCamera","updateFlashOffset",0x0e9fbb31,"flixel.FlxCamera.updateFlashOffset","flixel/FlxCamera.hx",1385,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1399_updateScrollRect,"flixel.FlxCamera","updateScrollRect",0xbf58f9c3,"flixel.FlxCamera.updateScrollRect","flixel/FlxCamera.hx",1399,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1424_updateInternalSpritePositions,"flixel.FlxCamera","updateInternalSpritePositions",0x7d5baef6,"flixel.FlxCamera.updateInternalSpritePositions","flixel/FlxCamera.hx",1424,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1466_follow,"flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",1466,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1517_snapToTarget,"flixel.FlxCamera","snapToTarget",0x8eeb1d9f,"flixel.FlxCamera.snapToTarget","flixel/FlxCamera.hx",1517,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1528_focusOn,"flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",1528,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1542_flash,"flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",1542,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1564_fade,"flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",1564,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1590_shake,"flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",1590,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1607_stopFX,"flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",1607,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1621_setFilters,"flixel.FlxCamera","setFilters",0x0e7f1802,"flixel.FlxCamera.setFilters","flixel/FlxCamera.hx",1621,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1631_copyFrom,"flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",1631,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1662_fill,"flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",1662,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1694_drawFX,"flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",1694,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1731_checkResize,"flixel.FlxCamera","checkResize",0x465b6af3,"flixel.FlxCamera.checkResize","flixel/FlxCamera.hx",1731,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1752_updateBlitMatrix,"flixel.FlxCamera","updateBlitMatrix",0x8e139648,"flixel.FlxCamera.updateBlitMatrix","flixel/FlxCamera.hx",1752,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1767_setSize,"flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1767,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1780_setPosition,"flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1780,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1795_setScrollBoundsRect,"flixel.FlxCamera","setScrollBoundsRect",0xd34a357f,"flixel.FlxCamera.setScrollBoundsRect","flixel/FlxCamera.hx",1795,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1814_setScrollBounds,"flixel.FlxCamera","setScrollBounds",0x4d9242bb,"flixel.FlxCamera.setScrollBounds","flixel/FlxCamera.hx",1814,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1830_setScale,"flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1830,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1867_onResize,"flixel.FlxCamera","onResize",0xa8186dfc,"flixel.FlxCamera.onResize","flixel/FlxCamera.hx",1867,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1883_getViewRect,"flixel.FlxCamera","getViewRect",0x0a8b42f6,"flixel.FlxCamera.getViewRect","flixel/FlxCamera.hx",1883,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1896_getViewMarginRect,"flixel.FlxCamera","getViewMarginRect",0x3b39b7c4,"flixel.FlxCamera.getViewMarginRect","flixel/FlxCamera.hx",1896,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1909_containsPoint,"flixel.FlxCamera","containsPoint",0x2d56eb88,"flixel.FlxCamera.containsPoint","flixel/FlxCamera.hx",1909,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1921_containsRect,"flixel.FlxCamera","containsRect",0x9ec4e4ec,"flixel.FlxCamera.containsRect","flixel/FlxCamera.hx",1921,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1930_set_followLerp,"flixel.FlxCamera","set_followLerp",0xf2f9b78e,"flixel.FlxCamera.set_followLerp","flixel/FlxCamera.hx",1930,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1934_set_width,"flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1934,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1949_set_height,"flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1949,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1964_set_zoom,"flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1964,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1971_set_alpha,"flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1971,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1985_set_angle,"flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1985,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_1992_set_color,"flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1992,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2026_set_antialiasing,"flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",2026,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2036_set_x,"flixel.FlxCamera","set_x",0x9f099e32,"flixel.FlxCamera.set_x","flixel/FlxCamera.hx",2036,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2043_set_y,"flixel.FlxCamera","set_y",0x9f099e33,"flixel.FlxCamera.set_y","flixel/FlxCamera.hx",2043,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2050_set_visible,"flixel.FlxCamera","set_visible",0x8f5a1dac,"flixel.FlxCamera.set_visible","flixel/FlxCamera.hx",2050,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2059_calcOffsetX,"flixel.FlxCamera","calcOffsetX",0xcf19c367,"flixel.FlxCamera.calcOffsetX","flixel/FlxCamera.hx",2059,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2062_calcOffsetY,"flixel.FlxCamera","calcOffsetY",0xcf19c368,"flixel.FlxCamera.calcOffsetY","flixel/FlxCamera.hx",2062,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2066_calcMarginX,"flixel.FlxCamera","calcMarginX",0x5d09726c,"flixel.FlxCamera.calcMarginX","flixel/FlxCamera.hx",2066,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2071_calcMarginY,"flixel.FlxCamera","calcMarginY",0x5d09726d,"flixel.FlxCamera.calcMarginY","flixel/FlxCamera.hx",2071,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2086_get_viewMarginLeft,"flixel.FlxCamera","get_viewMarginLeft",0x7c07fdac,"flixel.FlxCamera.get_viewMarginLeft","flixel/FlxCamera.hx",2086,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2091_get_viewMarginTop,"flixel.FlxCamera","get_viewMarginTop",0x089dac90,"flixel.FlxCamera.get_viewMarginTop","flixel/FlxCamera.hx",2091,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2096_get_viewMarginRight,"flixel.FlxCamera","get_viewMarginRight",0x82030697,"flixel.FlxCamera.get_viewMarginRight","flixel/FlxCamera.hx",2096,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2101_get_viewMarginBottom,"flixel.FlxCamera","get_viewMarginBottom",0x57f54fd0,"flixel.FlxCamera.get_viewMarginBottom","flixel/FlxCamera.hx",2101,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2106_get_viewWidth,"flixel.FlxCamera","get_viewWidth",0x66c62b0f,"flixel.FlxCamera.get_viewWidth","flixel/FlxCamera.hx",2106,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2111_get_viewHeight,"flixel.FlxCamera","get_viewHeight",0x3ceefabe,"flixel.FlxCamera.get_viewHeight","flixel/FlxCamera.hx",2111,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2116_get_viewX,"flixel.FlxCamera","get_viewX",0xaccffd01,"flixel.FlxCamera.get_viewX","flixel/FlxCamera.hx",2116,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2121_get_viewY,"flixel.FlxCamera","get_viewY",0xaccffd02,"flixel.FlxCamera.get_viewY","flixel/FlxCamera.hx",2121,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2126_get_viewLeft,"flixel.FlxCamera","get_viewLeft",0x3293c71e,"flixel.FlxCamera.get_viewLeft","flixel/FlxCamera.hx",2126,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2131_get_viewTop,"flixel.FlxCamera","get_viewTop",0x7e87575e,"flixel.FlxCamera.get_viewTop","flixel/FlxCamera.hx",2131,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2136_get_viewRight,"flixel.FlxCamera","get_viewRight",0x85c780e5,"flixel.FlxCamera.get_viewRight","flixel/FlxCamera.hx",2136,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2141_get_viewBottom,"flixel.FlxCamera","get_viewBottom",0xa01bd9c2,"flixel.FlxCamera.get_viewBottom","flixel/FlxCamera.hx",2141,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2148_get_viewOffsetX,"flixel.FlxCamera","get_viewOffsetX",0xeb5692ae,"flixel.FlxCamera.get_viewOffsetX","flixel/FlxCamera.hx",2148,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2153_set_viewOffsetX,"flixel.FlxCamera","set_viewOffsetX",0xe7220fba,"flixel.FlxCamera.set_viewOffsetX","flixel/FlxCamera.hx",2153,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2158_get_viewOffsetY,"flixel.FlxCamera","get_viewOffsetY",0xeb5692af,"flixel.FlxCamera.get_viewOffsetY","flixel/FlxCamera.hx",2158,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2163_set_viewOffsetY,"flixel.FlxCamera","set_viewOffsetY",0xe7220fbb,"flixel.FlxCamera.set_viewOffsetY","flixel/FlxCamera.hx",2163,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2168_get_viewOffsetWidth,"flixel.FlxCamera","get_viewOffsetWidth",0xb10d9b3c,"flixel.FlxCamera.get_viewOffsetWidth","flixel/FlxCamera.hx",2168,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2173_get_viewOffsetHeight,"flixel.FlxCamera","get_viewOffsetHeight",0xf129b1f1,"flixel.FlxCamera.get_viewOffsetHeight","flixel/FlxCamera.hx",2173,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2178_get__filters,"flixel.FlxCamera","get__filters",0xf0c0c54e,"flixel.FlxCamera.get__filters","flixel/FlxCamera.hx",2178,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2183_set__filters,"flixel.FlxCamera","set__filters",0x05b9e8c2,"flixel.FlxCamera.set__filters","flixel/FlxCamera.hx",2183,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2192_get_camera,"flixel.FlxCamera","get_camera",0x5a6d0837,"flixel.FlxCamera.get_camera","flixel/FlxCamera.hx",2192,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2196_set_camera,"flixel.FlxCamera","set_camera",0x5deaa6ab,"flixel.FlxCamera.set_camera","flixel/FlxCamera.hx",2196,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2200_get_cameras,"flixel.FlxCamera","get_cameras",0xc4fa285c,"flixel.FlxCamera.get_cameras","flixel/FlxCamera.hx",2200,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2204_set_cameras,"flixel.FlxCamera","set_cameras",0xcf672f68,"flixel.FlxCamera.set_cameras","flixel/FlxCamera.hx",2204,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2076_get_defaultCameras,"flixel.FlxCamera","get_defaultCameras",0xe32986ff,"flixel.FlxCamera.get_defaultCameras","flixel/FlxCamera.hx",2076,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_2081_set_defaultCameras,"flixel.FlxCamera","set_defaultCameras",0xbfd8b973,"flixel.FlxCamera.set_defaultCameras","flixel/FlxCamera.hx",2081,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_45_boot,"flixel.FlxCamera","boot",0xa2d9e93b,"flixel.FlxCamera.boot","flixel/FlxCamera.hx",45,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_50_boot,"flixel.FlxCamera","boot",0xa2d9e93b,"flixel.FlxCamera.boot","flixel/FlxCamera.hx",50,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_589_boot,"flixel.FlxCamera","boot",0xa2d9e93b,"flixel.FlxCamera.boot","flixel/FlxCamera.hx",589,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_594_boot,"flixel.FlxCamera","boot",0xa2d9e93b,"flixel.FlxCamera.boot","flixel/FlxCamera.hx",594,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_600_boot,"flixel.FlxCamera","boot",0xa2d9e93b,"flixel.FlxCamera.boot","flixel/FlxCamera.hx",600,0xe7aeb95a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1aae230bd422321_602_boot,"flixel.FlxCamera","boot",0xa2d9e93b,"flixel.FlxCamera.boot","flixel/FlxCamera.hx",602,0xe7aeb95a)
namespace flixel{

void FlxCamera_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_Zoom){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		Float Zoom = __o_Zoom.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_d1aae230bd422321_45_new)
HXLINE( 554)		this->_helperPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 552)		this->_helperMatrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 532)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 532)		_this->x = ( (Float)(0) );
HXDLIN( 532)		_this->y = ( (Float)(0) );
HXDLIN( 532)		_this->width = ( (Float)(0) );
HXDLIN( 532)		_this->height = ( (Float)(0) );
HXDLIN( 532)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 532)		rect->_inPool = false;
HXDLIN( 532)		this->_bounds = rect;
HXLINE( 527)		this->_scrollRect =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 506)		this->initialZoom = ((Float)1);
HXLINE( 498)		this->filters = null();
HXLINE( 493)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 493)		point->_inPool = false;
HXDLIN( 493)		this->_point = point;
HXLINE( 488)		this->_fxShakeAxes = 17;
HXLINE( 478)		this->_fxShakeDuration = ((Float)0);
HXLINE( 473)		this->_fxShakeIntensity = ((Float)0);
HXLINE( 468)		this->_fxFadeAlpha = ((Float)0);
HXLINE( 462)		this->_fxFadeComplete = null();
HXLINE( 457)		this->_fxFadeIn = false;
HXLINE( 451)		this->_fxFadeDuration = ((Float)0);
HXLINE( 446)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 446)		point1->_inPool = false;
HXDLIN( 446)		this->_scrollTarget = point1;
HXLINE( 436)		this->_fxFadeColor = 0;
HXLINE( 431)		this->_fxFlashAlpha = ((Float)0);
HXLINE( 426)		this->_fxFlashComplete = null();
HXLINE( 421)		this->_fxFlashDuration = ((Float)0);
HXLINE( 416)		this->_fxFlashColor = 0;
HXLINE( 411)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 411)		point2->_inPool = false;
HXDLIN( 411)		this->_flashOffset = point2;
HXLINE( 402)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 387)		this->filtersEnabled = true;
HXLINE( 382)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 382)		point3->_inPool = false;
HXDLIN( 382)		this->followLead = point3;
HXLINE( 377)		this->antialiasing = false;
HXLINE( 371)		this->color = -1;
HXLINE( 366)		this->angle = ((Float)0);
HXLINE( 361)		this->alpha = ((Float)1);
HXLINE( 356)		this->_useBlitMatrix = false;
HXLINE( 351)		this->_blitMatrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 239)		this->height = 0;
HXLINE( 234)		this->width = 0;
HXLINE( 229)		this->pixelPerfectShake = null();
HXLINE( 215)		this->flashSprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 205)		this->useBgAlphaBlending = false;
HXLINE( 170)		 ::flixel::math::FlxBasePoint point4 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 170)		point4->_inPool = false;
HXDLIN( 170)		this->scroll = point4;
HXLINE( 134)		this->followLerp = (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::updateFramerate) ));
HXLINE( 126)		 ::flixel::math::FlxBasePoint point5 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 126)		point5->_inPool = false;
HXDLIN( 126)		this->targetOffset = point5;
HXLINE( 101)		this->scaleY = ((Float)0);
HXLINE(  95)		this->scaleX = ((Float)0);
HXLINE(  89)		this->y = ((Float)0);
HXLINE(  82)		this->x = ((Float)0);
HXLINE(1033)		super::__construct();
HXLINE(1035)		this->set_x(X);
HXLINE(1036)		this->set_y(Y);
HXLINE(1039)		int _hx_tmp;
HXDLIN(1039)		if ((Width <= 0)) {
HXLINE(1039)			_hx_tmp = ::flixel::FlxG_obj::width;
            		}
            		else {
HXLINE(1039)			_hx_tmp = Width;
            		}
HXDLIN(1039)		this->set_width(_hx_tmp);
HXLINE(1040)		int _hx_tmp1;
HXDLIN(1040)		if ((Height <= 0)) {
HXLINE(1040)			_hx_tmp1 = ::flixel::FlxG_obj::height;
            		}
            		else {
HXLINE(1040)			_hx_tmp1 = Height;
            		}
HXDLIN(1040)		this->set_height(_hx_tmp1);
HXLINE(1041)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,this->width,this->height);
HXLINE(1043)		this->flashSprite->addChild(this->_scrollRect);
HXLINE(1044)		 ::openfl::display::Sprite _hx_tmp2 = this->_scrollRect;
HXDLIN(1044)		_hx_tmp2->set_scrollRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null()));
HXLINE(1046)		this->pixelPerfectRender = ::flixel::FlxG_obj::renderBlit;
HXLINE(1048)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1050)			this->screen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(1051)			this->buffer =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->width,this->height,true,0);
HXLINE(1052)			this->screen->set_pixels(this->buffer);
HXLINE(1053)			{
HXLINE(1053)				 ::flixel::math::FlxBasePoint this1 = this->screen->origin;
HXDLIN(1053)				this1->set_x(( (Float)(0) ));
HXDLIN(1053)				this1->set_y(( (Float)(0) ));
            			}
HXLINE(1054)			this->_flashBitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,this->buffer,null(),null());
HXLINE(1055)			this->_scrollRect->addChild(this->_flashBitmap);
HXLINE(1056)			this->_fill =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->width,this->height,true,0);
            		}
            		else {
HXLINE(1060)			this->canvas =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(1061)			this->_scrollRect->addChild(this->canvas);
            		}
HXLINE(1069)		this->set_color(-1);
HXLINE(1071)		Float _hx_tmp3;
HXDLIN(1071)		if ((Zoom == 0)) {
HXLINE(1071)			_hx_tmp3 = ::flixel::FlxCamera_obj::defaultZoom;
            		}
            		else {
HXLINE(1071)			_hx_tmp3 = Zoom;
            		}
HXDLIN(1071)		this->initialZoom = _hx_tmp3;
HXLINE(1072)		this->set_zoom(Zoom);
HXLINE(1074)		this->updateScrollRect();
HXLINE(1075)		this->updateFlashOffset();
HXLINE(1076)		this->updateFlashSpritePosition();
HXLINE(1077)		this->updateInternalSpritePositions();
HXLINE(1079)		this->bgColor = ::flixel::FlxG_obj::cameras->get_bgColor();
            	}

Dynamic FlxCamera_obj::__CreateEmpty() { return new FlxCamera_obj; }

void *FlxCamera_obj::_hx_vtable = 0;

Dynamic FlxCamera_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxCamera_obj > _hx_result = new FlxCamera_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxCamera_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ff7ce3b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ff7ce3b;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

 ::flixel::graphics::tile::FlxDrawQuadsItem FlxCamera_obj::startQuadBatch( ::flixel::graphics::FlxGraphic graphic,bool colored,::hx::Null< bool >  __o_hasColorOffsets, ::Dynamic blend,::hx::Null< bool >  __o_smooth, ::flixel::graphics::tile::FlxGraphicsShader shader){
            		bool hasColorOffsets = __o_hasColorOffsets.Default(false);
            		bool smooth = __o_smooth.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d1aae230bd422321_606_startQuadBatch)
HXLINE( 610)		 ::flixel::graphics::tile::FlxDrawQuadsItem itemToReturn = null();
HXLINE( 611)		int blendInt = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(blend);
HXLINE( 613)		bool _hx_tmp;
HXDLIN( 613)		bool _hx_tmp1;
HXDLIN( 613)		bool _hx_tmp2;
HXDLIN( 613)		bool _hx_tmp3;
HXDLIN( 613)		bool _hx_tmp4;
HXDLIN( 613)		bool _hx_tmp5;
HXDLIN( 613)		bool _hx_tmp6;
HXDLIN( 613)		bool _hx_tmp7;
HXDLIN( 613)		if (::hx::IsNotNull( this->_currentDrawItem )) {
HXLINE( 613)			_hx_tmp7 = ::hx::IsPointerEq( this->_currentDrawItem->type,::flixel::graphics::tile::FlxDrawItemType_obj::TILES_dyn() );
            		}
            		else {
HXLINE( 613)			_hx_tmp7 = false;
            		}
HXDLIN( 613)		if (_hx_tmp7) {
HXLINE( 613)			_hx_tmp6 = ::hx::IsInstanceEq( this->_headTiles->graphics,graphic );
            		}
            		else {
HXLINE( 613)			_hx_tmp6 = false;
            		}
HXDLIN( 613)		if (_hx_tmp6) {
HXLINE( 613)			_hx_tmp5 = (this->_headTiles->colored == colored);
            		}
            		else {
HXLINE( 613)			_hx_tmp5 = false;
            		}
HXDLIN( 613)		if (_hx_tmp5) {
HXLINE( 613)			_hx_tmp4 = (this->_headTiles->hasColorOffsets == hasColorOffsets);
            		}
            		else {
HXLINE( 613)			_hx_tmp4 = false;
            		}
HXDLIN( 613)		if (_hx_tmp4) {
HXLINE( 613)			_hx_tmp3 = (this->_headTiles->blending == blendInt);
            		}
            		else {
HXLINE( 613)			_hx_tmp3 = false;
            		}
HXDLIN( 613)		if (_hx_tmp3) {
HXLINE( 613)			_hx_tmp2 = ::hx::IsEq( this->_headTiles->blend,blend );
            		}
            		else {
HXLINE( 613)			_hx_tmp2 = false;
            		}
HXDLIN( 613)		if (_hx_tmp2) {
HXLINE( 613)			_hx_tmp1 = (this->_headTiles->antialiasing == smooth);
            		}
            		else {
HXLINE( 613)			_hx_tmp1 = false;
            		}
HXDLIN( 613)		if (_hx_tmp1) {
HXLINE( 613)			_hx_tmp = ::hx::IsInstanceEq( this->_headTiles->shader,shader );
            		}
            		else {
HXLINE( 613)			_hx_tmp = false;
            		}
HXDLIN( 613)		if (_hx_tmp) {
HXLINE( 623)			return this->_headTiles;
            		}
HXLINE( 626)		if (::hx::IsNotNull( ::flixel::FlxCamera_obj::_storageTilesHead )) {
HXLINE( 628)			itemToReturn = ::flixel::FlxCamera_obj::_storageTilesHead;
HXLINE( 629)			 ::flixel::graphics::tile::FlxDrawQuadsItem newHead = ( ( ::flixel::graphics::tile::FlxDrawQuadsItem)(::flixel::FlxCamera_obj::_storageTilesHead->nextTyped) );
HXLINE( 630)			itemToReturn->reset();
HXLINE( 631)			::flixel::FlxCamera_obj::_storageTilesHead = newHead;
            		}
            		else {
HXLINE( 635)			itemToReturn =  ::flixel::graphics::tile::FlxDrawQuadsItem_obj::__alloc( HX_CTX );
            		}
HXLINE( 638)		itemToReturn->graphics = graphic;
HXLINE( 639)		itemToReturn->antialiasing = smooth;
HXLINE( 640)		itemToReturn->colored = colored;
HXLINE( 641)		itemToReturn->hasColorOffsets = hasColorOffsets;
HXLINE( 642)		itemToReturn->blending = blendInt;
HXLINE( 643)		itemToReturn->blend = blend;
HXLINE( 644)		itemToReturn->shader = shader;
HXLINE( 646)		itemToReturn->nextTyped = this->_headTiles;
HXLINE( 647)		this->_headTiles = itemToReturn;
HXLINE( 649)		if (::hx::IsNull( this->_headOfDrawStack )) {
HXLINE( 651)			this->_headOfDrawStack = itemToReturn;
            		}
HXLINE( 654)		if (::hx::IsNotNull( this->_currentDrawItem )) {
HXLINE( 656)			this->_currentDrawItem->next = itemToReturn;
            		}
HXLINE( 659)		this->_currentDrawItem = itemToReturn;
HXLINE( 661)		return itemToReturn;
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxCamera_obj,startQuadBatch,return )

 ::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::startTrianglesBatch( ::flixel::graphics::FlxGraphic graphic,::hx::Null< bool >  __o_smoothing,::hx::Null< bool >  __o_isColored, ::Dynamic blend, ::Dynamic hasColorOffsets, ::flixel::graphics::tile::FlxGraphicsShader shader){
            		bool smoothing = __o_smoothing.Default(false);
            		bool isColored = __o_isColored.Default(false);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_667_startTrianglesBatch)
HXLINE( 668)		int blendInt = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(blend);
HXLINE( 670)		bool _hx_tmp;
HXDLIN( 670)		bool _hx_tmp1;
HXDLIN( 670)		bool _hx_tmp2;
HXDLIN( 670)		bool _hx_tmp3;
HXDLIN( 670)		bool _hx_tmp4;
HXDLIN( 670)		bool _hx_tmp5;
HXDLIN( 670)		bool _hx_tmp6;
HXDLIN( 670)		if (::hx::IsNotNull( this->_currentDrawItem )) {
HXLINE( 670)			_hx_tmp6 = ::hx::IsPointerEq( this->_currentDrawItem->type,::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES_dyn() );
            		}
            		else {
HXLINE( 670)			_hx_tmp6 = false;
            		}
HXDLIN( 670)		if (_hx_tmp6) {
HXLINE( 670)			_hx_tmp5 = ::hx::IsInstanceEq( this->_headTriangles->graphics,graphic );
            		}
            		else {
HXLINE( 670)			_hx_tmp5 = false;
            		}
HXDLIN( 670)		if (_hx_tmp5) {
HXLINE( 670)			_hx_tmp4 = (this->_headTriangles->antialiasing == smoothing);
            		}
            		else {
HXLINE( 670)			_hx_tmp4 = false;
            		}
HXDLIN( 670)		if (_hx_tmp4) {
HXLINE( 670)			_hx_tmp3 = (this->_headTriangles->colored == isColored);
            		}
            		else {
HXLINE( 670)			_hx_tmp3 = false;
            		}
HXDLIN( 670)		if (_hx_tmp3) {
HXLINE( 670)			_hx_tmp2 = (this->_headTriangles->blending == blendInt);
            		}
            		else {
HXLINE( 670)			_hx_tmp2 = false;
            		}
HXDLIN( 670)		if (_hx_tmp2) {
HXLINE( 670)			_hx_tmp1 = ::hx::IsEq( this->_headTriangles->hasColorOffsets,hasColorOffsets );
            		}
            		else {
HXLINE( 670)			_hx_tmp1 = false;
            		}
HXDLIN( 670)		if (_hx_tmp1) {
HXLINE( 670)			_hx_tmp = ::hx::IsInstanceEq( this->_headTriangles->shader,shader );
            		}
            		else {
HXLINE( 670)			_hx_tmp = false;
            		}
HXDLIN( 670)		if (_hx_tmp) {
HXLINE( 682)			return this->_headTriangles;
            		}
HXLINE( 685)		return this->getNewDrawTrianglesItem(graphic,smoothing,isColored,blend,hasColorOffsets,shader);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxCamera_obj,startTrianglesBatch,return )

 ::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::getNewDrawTrianglesItem( ::flixel::graphics::FlxGraphic graphic,::hx::Null< bool >  __o_smoothing,::hx::Null< bool >  __o_isColored, ::Dynamic blend, ::Dynamic hasColorOffsets, ::flixel::graphics::tile::FlxGraphicsShader shader){
            		bool smoothing = __o_smoothing.Default(false);
            		bool isColored = __o_isColored.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d1aae230bd422321_690_getNewDrawTrianglesItem)
HXLINE( 691)		 ::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();
HXLINE( 692)		int blendInt = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(blend);
HXLINE( 694)		if (::hx::IsNotNull( ::flixel::FlxCamera_obj::_storageTrianglesHead )) {
HXLINE( 696)			itemToReturn = ::flixel::FlxCamera_obj::_storageTrianglesHead;
HXLINE( 697)			 ::flixel::graphics::tile::FlxDrawTrianglesItem newHead = ( ( ::flixel::graphics::tile::FlxDrawTrianglesItem)(::flixel::FlxCamera_obj::_storageTrianglesHead->nextTyped) );
HXLINE( 698)			itemToReturn->reset();
HXLINE( 699)			::flixel::FlxCamera_obj::_storageTrianglesHead = newHead;
            		}
            		else {
HXLINE( 703)			itemToReturn =  ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::__alloc( HX_CTX );
            		}
HXLINE( 706)		itemToReturn->graphics = graphic;
HXLINE( 707)		itemToReturn->antialiasing = smoothing;
HXLINE( 708)		itemToReturn->colored = isColored;
HXLINE( 709)		itemToReturn->blending = blendInt;
HXLINE( 711)		itemToReturn->hasColorOffsets = ( (bool)(hasColorOffsets) );
HXLINE( 712)		itemToReturn->shader = shader;
HXLINE( 715)		itemToReturn->nextTyped = this->_headTriangles;
HXLINE( 716)		this->_headTriangles = itemToReturn;
HXLINE( 718)		if (::hx::IsNull( this->_headOfDrawStack )) {
HXLINE( 720)			this->_headOfDrawStack = itemToReturn;
            		}
HXLINE( 723)		if (::hx::IsNotNull( this->_currentDrawItem )) {
HXLINE( 725)			this->_currentDrawItem->next = itemToReturn;
            		}
HXLINE( 728)		this->_currentDrawItem = itemToReturn;
HXLINE( 730)		return itemToReturn;
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxCamera_obj,getNewDrawTrianglesItem,return )

void FlxCamera_obj::clearDrawStack(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_735_clearDrawStack)
HXLINE( 736)		 ::flixel::graphics::tile::FlxDrawQuadsItem currTiles = this->_headTiles;
HXLINE( 737)		 ::flixel::graphics::tile::FlxDrawQuadsItem newTilesHead;
HXLINE( 739)		while(::hx::IsNotNull( currTiles )){
HXLINE( 741)			newTilesHead = ( ( ::flixel::graphics::tile::FlxDrawQuadsItem)(currTiles->nextTyped) );
HXLINE( 742)			currTiles->reset();
HXLINE( 743)			currTiles->nextTyped = ::flixel::FlxCamera_obj::_storageTilesHead;
HXLINE( 744)			::flixel::FlxCamera_obj::_storageTilesHead = currTiles;
HXLINE( 745)			currTiles = newTilesHead;
            		}
HXLINE( 748)		 ::flixel::graphics::tile::FlxDrawTrianglesItem currTriangles = this->_headTriangles;
HXLINE( 749)		 ::flixel::graphics::tile::FlxDrawTrianglesItem newTrianglesHead;
HXLINE( 751)		while(::hx::IsNotNull( currTriangles )){
HXLINE( 753)			newTrianglesHead = ( ( ::flixel::graphics::tile::FlxDrawTrianglesItem)(currTriangles->nextTyped) );
HXLINE( 754)			currTriangles->reset();
HXLINE( 755)			currTriangles->nextTyped = ::flixel::FlxCamera_obj::_storageTrianglesHead;
HXLINE( 756)			::flixel::FlxCamera_obj::_storageTrianglesHead = currTriangles;
HXLINE( 757)			currTriangles = newTrianglesHead;
            		}
HXLINE( 760)		this->_currentDrawItem = null();
HXLINE( 761)		this->_headOfDrawStack = null();
HXLINE( 762)		this->_headTiles = null();
HXLINE( 763)		this->_headTriangles = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

void FlxCamera_obj::render(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_768_render)
HXLINE( 769)		 ::flixel::graphics::tile::FlxDrawBaseItem currItem = this->_headOfDrawStack;
HXLINE( 770)		while(::hx::IsNotNull( currItem )){
HXLINE( 772)			currItem->render(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 773)			currItem = currItem->next;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

void FlxCamera_obj::drawPixels( ::flixel::graphics::frames::FlxFrame frame, ::openfl::display::BitmapData pixels, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform, ::Dynamic blend, ::Dynamic __o_smoothing, ::flixel::graphics::tile::FlxGraphicsShader shader){
            		 ::Dynamic smoothing = __o_smoothing;
            		if (::hx::IsNull(__o_smoothing)) smoothing = false;
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_780_drawPixels)
HXDLIN( 780)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 782)			this->_helperMatrix->copyFrom(matrix);
HXLINE( 784)			if (this->_useBlitMatrix) {
HXLINE( 786)				this->_helperMatrix->concat(this->_blitMatrix);
HXLINE( 787)				bool _hx_tmp;
HXDLIN( 787)				if (!(( (bool)(smoothing) ))) {
HXLINE( 787)					_hx_tmp = this->antialiasing;
            				}
            				else {
HXLINE( 787)					_hx_tmp = true;
            				}
HXDLIN( 787)				this->buffer->draw(pixels,this->_helperMatrix,null(),null(),null(),_hx_tmp);
            			}
            			else {
HXLINE( 791)				this->_helperMatrix->translate(-(this->viewMarginX),-(this->viewMarginY));
HXLINE( 792)				bool _hx_tmp;
HXDLIN( 792)				if (!(( (bool)(smoothing) ))) {
HXLINE( 792)					_hx_tmp = this->antialiasing;
            				}
            				else {
HXLINE( 792)					_hx_tmp = true;
            				}
HXDLIN( 792)				this->buffer->draw(pixels,this->_helperMatrix,null(),blend,null(),_hx_tmp);
            			}
            		}
            		else {
HXLINE( 797)			bool isColored;
HXDLIN( 797)			if (::hx::IsNotNull( transform )) {
HXLINE( 797)				isColored = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(transform);
            			}
            			else {
HXLINE( 797)				isColored = false;
            			}
HXLINE( 798)			bool hasColorOffsets;
HXDLIN( 798)			if (::hx::IsNotNull( transform )) {
HXLINE( 798)				hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(transform);
            			}
            			else {
HXLINE( 798)				hasColorOffsets = false;
            			}
HXLINE( 803)			 ::flixel::graphics::tile::FlxDrawQuadsItem drawItem = this->startQuadBatch(frame->parent,isColored,hasColorOffsets,blend,smoothing,shader);
HXLINE( 805)			drawItem->addQuad(frame,matrix,transform);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxCamera_obj,drawPixels,(void))

void FlxCamera_obj::copyPixels( ::flixel::graphics::frames::FlxFrame frame, ::openfl::display::BitmapData pixels, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint, ::openfl::geom::ColorTransform transform, ::Dynamic blend, ::Dynamic __o_smoothing, ::flixel::graphics::tile::FlxGraphicsShader shader){
            		 ::Dynamic smoothing = __o_smoothing;
            		if (::hx::IsNull(__o_smoothing)) smoothing = false;
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_812_copyPixels)
HXDLIN( 812)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 814)			if (::hx::IsNotNull( pixels )) {
HXLINE( 816)				if (this->_useBlitMatrix) {
HXLINE( 818)					this->_helperMatrix->identity();
HXLINE( 819)					this->_helperMatrix->translate(destPoint->x,destPoint->y);
HXLINE( 820)					this->_helperMatrix->concat(this->_blitMatrix);
HXLINE( 821)					bool _hx_tmp;
HXDLIN( 821)					if (!(( (bool)(smoothing) ))) {
HXLINE( 821)						_hx_tmp = this->antialiasing;
            					}
            					else {
HXLINE( 821)						_hx_tmp = true;
            					}
HXDLIN( 821)					this->buffer->draw(pixels,this->_helperMatrix,null(),null(),null(),_hx_tmp);
            				}
            				else {
HXLINE( 825)					Float destPoint1 = destPoint->x;
HXDLIN( 825)					int _hx_tmp = ::Std_obj::_hx_int(this->viewMarginX);
HXDLIN( 825)					this->_helperPoint->x = (destPoint1 - ( (Float)(_hx_tmp) ));
HXLINE( 826)					Float destPoint2 = destPoint->y;
HXDLIN( 826)					int _hx_tmp1 = ::Std_obj::_hx_int(this->viewMarginY);
HXDLIN( 826)					this->_helperPoint->y = (destPoint2 - ( (Float)(_hx_tmp1) ));
HXLINE( 827)					this->buffer->copyPixels(pixels,sourceRect,this->_helperPoint,null(),null(),true);
            				}
            			}
            			else {
HXLINE( 830)				if (::hx::IsNotNull( frame )) {
HXLINE( 833)					frame->paint(this->buffer,destPoint,true,null());
            				}
            			}
            		}
            		else {
HXLINE( 838)			this->_helperMatrix->identity();
HXLINE( 839)			this->_helperMatrix->translate((destPoint->x + frame->offset->x),(destPoint->y + frame->offset->y));
HXLINE( 841)			bool isColored;
HXDLIN( 841)			if (::hx::IsNotNull( transform )) {
HXLINE( 841)				isColored = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(transform);
            			}
            			else {
HXLINE( 841)				isColored = false;
            			}
HXLINE( 842)			bool hasColorOffsets;
HXDLIN( 842)			if (::hx::IsNotNull( transform )) {
HXLINE( 842)				hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(transform);
            			}
            			else {
HXLINE( 842)				hasColorOffsets = false;
            			}
HXLINE( 845)			 ::flixel::graphics::tile::FlxDrawQuadsItem drawItem = this->startQuadBatch(frame->parent,isColored,hasColorOffsets,blend,smoothing,shader);
HXLINE( 849)			drawItem->addQuad(frame,this->_helperMatrix,transform);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxCamera_obj,copyPixels,(void))

void FlxCamera_obj::drawTriangles( ::flixel::graphics::FlxGraphic graphic, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::openfl::_Vector::IntVector colors, ::flixel::math::FlxBasePoint position, ::Dynamic blend,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smoothing, ::openfl::geom::ColorTransform transform, ::flixel::graphics::tile::FlxGraphicsShader shader){
            		bool repeat = __o_repeat.Default(false);
            		bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_856_drawTriangles)
HXDLIN( 856)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 858)			if (::hx::IsNull( position )) {
HXLINE( 859)				 ::flixel::math::FlxBasePoint this1 = ::flixel::FlxCamera_obj::renderPoint;
HXDLIN( 859)				this1->set_x(( (Float)(0) ));
HXDLIN( 859)				this1->set_y(( (Float)(0) ));
HXDLIN( 859)				position = this1;
            			}
HXLINE( 861)			{
HXLINE( 861)				 ::flixel::math::FlxRect _this = this->_bounds;
HXDLIN( 861)				_this->x = ( (Float)(0) );
HXDLIN( 861)				_this->y = ( (Float)(0) );
HXDLIN( 861)				_this->width = ( (Float)(this->width) );
HXDLIN( 861)				_this->height = ( (Float)(this->height) );
            			}
HXLINE( 863)			int verticesLength = vertices->get_length();
HXLINE( 864)			int currentVertexPosition = 0;
HXLINE( 866)			Float tempX;
HXDLIN( 866)			Float tempY;
HXLINE( 867)			int i = 0;
HXLINE( 868)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxCamera_obj::renderRect;
HXDLIN( 868)			_this1->x = ( (Float)(0) );
HXDLIN( 868)			_this1->y = ( (Float)(0) );
HXDLIN( 868)			_this1->width = ( (Float)(0) );
HXDLIN( 868)			_this1->height = ( (Float)(0) );
HXDLIN( 868)			 ::flixel::math::FlxRect bounds = _this1;
HXLINE( 869)			{
HXLINE( 869)				::Dynamic this1 = ::flixel::FlxCamera_obj::drawVertices;
HXDLIN( 869)				int deleteCount = ::flixel::FlxCamera_obj::drawVertices->get_length();
HXDLIN( 869)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 869)				this1->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN( 869)				{
HXLINE( 869)					int _g_current = 0;
HXDLIN( 869)					::cpp::VirtualArray _g_args = this2;
HXDLIN( 869)					while((_g_current < _g_args->get_length())){
HXLINE( 869)						_g_current = (_g_current + 1);
HXDLIN( 869)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 869)						( ( ::openfl::_Vector::FloatVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 869)						::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            					}
            				}
HXDLIN( 869)				( ( ::openfl::_Vector::FloatVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount);
            			}
HXLINE( 871)			while((i < verticesLength)){
HXLINE( 873)				Float position1 = position->x;
HXDLIN( 873)				tempX = (position1 + vertices->get(i));
HXLINE( 874)				Float position2 = position->y;
HXDLIN( 874)				tempY = (position2 + vertices->get((i + 1)));
HXLINE( 876)				{
HXLINE( 876)					currentVertexPosition = (currentVertexPosition + 1);
HXDLIN( 876)					::flixel::FlxCamera_obj::drawVertices->set((currentVertexPosition - 1),tempX);
            				}
HXLINE( 877)				{
HXLINE( 877)					currentVertexPosition = (currentVertexPosition + 1);
HXDLIN( 877)					::flixel::FlxCamera_obj::drawVertices->set((currentVertexPosition - 1),tempY);
            				}
HXLINE( 879)				if ((i == 0)) {
HXLINE( 881)					bounds->x = tempX;
HXDLIN( 881)					bounds->y = tempY;
HXDLIN( 881)					bounds->width = ( (Float)(0) );
HXDLIN( 881)					bounds->height = ( (Float)(0) );
            				}
            				else {
HXLINE( 885)					if ((tempX < bounds->x)) {
HXLINE( 885)						 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 885)						bounds1->width = (bounds1->width + (bounds->x - tempX));
HXDLIN( 885)						bounds->x = tempX;
            					}
HXDLIN( 885)					if ((tempY < bounds->y)) {
HXLINE( 885)						 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 885)						bounds1->height = (bounds1->height + (bounds->y - tempY));
HXDLIN( 885)						bounds->y = tempY;
            					}
HXDLIN( 885)					if ((tempX > (bounds->x + bounds->width))) {
HXLINE( 885)						bounds->width = (tempX - bounds->x);
            					}
HXDLIN( 885)					if ((tempY > (bounds->y + bounds->height))) {
HXLINE( 885)						bounds->height = (tempY - bounds->y);
            					}
            				}
HXLINE( 888)				i = (i + 2);
            			}
HXLINE( 891)			if (position->_weak) {
HXLINE( 891)				position->put();
            			}
HXLINE( 893)			 ::flixel::math::FlxRect _this2 = this->_bounds;
HXDLIN( 893)			bool result;
HXDLIN( 893)			bool result1;
HXDLIN( 893)			bool result2;
HXDLIN( 893)			if (((bounds->x + bounds->width) > _this2->x)) {
HXLINE( 893)				result2 = (bounds->x < (_this2->x + _this2->width));
            			}
            			else {
HXLINE( 893)				result2 = false;
            			}
HXDLIN( 893)			if (result2) {
HXLINE( 893)				result1 = ((bounds->y + bounds->height) > _this2->y);
            			}
            			else {
HXLINE( 893)				result1 = false;
            			}
HXDLIN( 893)			if (result1) {
HXLINE( 893)				result = (bounds->y < (_this2->y + _this2->height));
            			}
            			else {
HXLINE( 893)				result = false;
            			}
HXDLIN( 893)			if (bounds->_weak) {
HXLINE( 893)				if (!(bounds->_inPool)) {
HXLINE( 893)					bounds->_inPool = true;
HXDLIN( 893)					bounds->_weak = false;
HXDLIN( 893)					::flixel::math::FlxRect_obj::_pool->putUnsafe(bounds);
            				}
            			}
HXDLIN( 893)			if (!(result)) {
HXLINE( 895)				::Dynamic this1 = ::flixel::FlxCamera_obj::drawVertices;
HXDLIN( 895)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 895)				this1->__SetField(HX_("__tempIndex",3e,e8,54,22),(::flixel::FlxCamera_obj::drawVertices->get_length() - verticesLength),::hx::paccDynamic);
HXDLIN( 895)				{
HXLINE( 895)					int _g_current = 0;
HXDLIN( 895)					::cpp::VirtualArray _g_args = this2;
HXDLIN( 895)					while((_g_current < _g_args->get_length())){
HXLINE( 895)						_g_current = (_g_current + 1);
HXDLIN( 895)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 895)						( ( ::openfl::_Vector::FloatVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 895)						::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            					}
            				}
HXDLIN( 895)				( ( ::openfl::_Vector::FloatVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),verticesLength);
            			}
            			else {
HXLINE( 899)				::flixel::FlxCamera_obj::trianglesSprite->get_graphics()->clear();
HXLINE( 900)				::flixel::FlxCamera_obj::trianglesSprite->get_graphics()->beginBitmapFill(graphic->bitmap,null(),repeat,smoothing);
HXLINE( 901)				::flixel::FlxCamera_obj::trianglesSprite->get_graphics()->drawTriangles(::flixel::FlxCamera_obj::drawVertices,indices,uvtData,null());
HXLINE( 902)				::flixel::FlxCamera_obj::trianglesSprite->get_graphics()->endFill();
HXLINE( 905)				if (this->_useBlitMatrix) {
HXLINE( 906)					this->_helperMatrix->copyFrom(this->_blitMatrix);
            				}
            				else {
HXLINE( 909)					this->_helperMatrix->identity();
HXLINE( 910)					this->_helperMatrix->translate(-(this->viewMarginX),-(this->viewMarginY));
            				}
HXLINE( 913)				this->buffer->draw(::flixel::FlxCamera_obj::trianglesSprite,this->_helperMatrix,null(),null(),null(),null());
            			}
HXLINE( 927)			if (!(bounds->_inPool)) {
HXLINE( 927)				bounds->_inPool = true;
HXDLIN( 927)				bounds->_weak = false;
HXDLIN( 927)				::flixel::math::FlxRect_obj::_pool->putUnsafe(bounds);
            			}
            		}
            		else {
HXLINE( 931)			{
HXLINE( 931)				 ::flixel::math::FlxRect _this = this->_bounds;
HXDLIN( 931)				_this->x = ( (Float)(0) );
HXDLIN( 931)				_this->y = ( (Float)(0) );
HXDLIN( 931)				_this->width = ( (Float)(this->width) );
HXDLIN( 931)				_this->height = ( (Float)(this->height) );
            			}
HXLINE( 932)			bool isColored;
HXDLIN( 932)			if (::hx::IsNotNull( colors )) {
HXLINE( 932)				isColored = (colors->get_length() != 0);
            			}
            			else {
HXLINE( 932)				isColored = false;
            			}
HXLINE( 935)			bool hasColorOffsets;
HXDLIN( 935)			if (::hx::IsNotNull( transform )) {
HXLINE( 935)				hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(transform);
            			}
            			else {
HXLINE( 935)				hasColorOffsets = false;
            			}
HXLINE( 936)			if (!(isColored)) {
HXLINE( 936)				if (::hx::IsNotNull( transform )) {
HXLINE( 936)					isColored = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(transform);
            				}
            				else {
HXLINE( 936)					isColored = false;
            				}
            			}
            			else {
HXLINE( 936)				isColored = true;
            			}
HXLINE( 937)			 ::flixel::graphics::tile::FlxDrawTrianglesItem drawItem = this->startTrianglesBatch(graphic,smoothing,isColored,blend,hasColorOffsets,shader);
HXLINE( 938)			drawItem->addTriangles(vertices,indices,uvtData,colors,position,this->_bounds,transform);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxCamera_obj,drawTriangles,(void))

 ::flixel::math::FlxRect FlxCamera_obj::transformRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_952_transformRect)
HXLINE( 953)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 955)			{
HXLINE( 955)				 ::flixel::math::FlxRect rect1 = rect;
HXDLIN( 955)				rect1->x = (rect1->x + -(this->viewMarginX));
HXDLIN( 955)				 ::flixel::math::FlxRect rect2 = rect;
HXDLIN( 955)				rect2->y = (rect2->y + -(this->viewMarginY));
            			}
HXLINE( 957)			if (this->_useBlitMatrix) {
HXLINE( 959)				 ::flixel::math::FlxRect rect1 = rect;
HXDLIN( 959)				rect1->x = (rect1->x * this->zoom);
HXLINE( 960)				 ::flixel::math::FlxRect rect2 = rect;
HXDLIN( 960)				rect2->y = (rect2->y * this->zoom);
HXLINE( 961)				 ::flixel::math::FlxRect rect3 = rect;
HXDLIN( 961)				rect3->width = (rect3->width * this->zoom);
HXLINE( 962)				 ::flixel::math::FlxRect rect4 = rect;
HXDLIN( 962)				rect4->height = (rect4->height * this->zoom);
            			}
            		}
HXLINE( 966)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,transformRect,return )

 ::flixel::math::FlxBasePoint FlxCamera_obj::transformPoint( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_975_transformPoint)
HXLINE( 976)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 978)			{
HXLINE( 978)				Float y = this->viewMarginY;
HXDLIN( 978)				point->set_x((point->x - this->viewMarginX));
HXDLIN( 978)				point->set_y((point->y - y));
            			}
HXLINE( 980)			if (this->_useBlitMatrix) {
HXLINE( 981)				Float x = this->zoom;
HXDLIN( 981)				 ::Dynamic y = null();
HXDLIN( 981)				if (::hx::IsNull( y )) {
HXLINE( 981)					y = x;
            				}
HXDLIN( 981)				point->set_x((point->x * x));
HXDLIN( 981)				point->set_y((point->y * ( (Float)(y) )));
            			}
            		}
HXLINE( 984)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,transformPoint,return )

 ::flixel::math::FlxBasePoint FlxCamera_obj::transformVector( ::flixel::math::FlxBasePoint vector){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_993_transformVector)
HXLINE( 994)		bool _hx_tmp;
HXDLIN( 994)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 994)			_hx_tmp = this->_useBlitMatrix;
            		}
            		else {
HXLINE( 994)			_hx_tmp = false;
            		}
HXDLIN( 994)		if (_hx_tmp) {
HXLINE( 995)			Float x = this->zoom;
HXDLIN( 995)			 ::Dynamic y = null();
HXDLIN( 995)			if (::hx::IsNull( y )) {
HXLINE( 995)				y = x;
            			}
HXDLIN( 995)			vector->set_x((vector->x * x));
HXDLIN( 995)			vector->set_y((vector->y * ( (Float)(y) )));
            		}
HXLINE( 997)		return vector;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,transformVector,return )

 ::openfl::display::DisplayObject FlxCamera_obj::transformObject( ::openfl::display::DisplayObject object){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1008_transformObject)
HXLINE(1009)		Float _hx_tmp = object->get_scaleX();
HXDLIN(1009)		object->set_scaleX((_hx_tmp * this->totalScaleX));
HXLINE(1010)		Float _hx_tmp1 = object->get_scaleY();
HXDLIN(1010)		object->set_scaleY((_hx_tmp1 * this->totalScaleY));
HXLINE(1012)		Float _hx_tmp2 = object->get_x();
HXDLIN(1012)		object->set_x((_hx_tmp2 - (this->scroll->x * this->totalScaleX)));
HXLINE(1013)		Float _hx_tmp3 = object->get_y();
HXDLIN(1013)		object->set_y((_hx_tmp3 - (this->scroll->y * this->totalScaleY)));
HXLINE(1015)		Float _hx_tmp4 = object->get_x();
HXDLIN(1015)		object->set_x((_hx_tmp4 - (((((Float)0.5) * ( (Float)(this->width) )) * (this->scaleX - this->initialZoom)) * ::flixel::FlxG_obj::scaleMode->scale->x)));
HXLINE(1016)		Float _hx_tmp5 = object->get_y();
HXDLIN(1016)		object->set_y((_hx_tmp5 - (((((Float)0.5) * ( (Float)(this->height) )) * (this->scaleY - this->initialZoom)) * ::flixel::FlxG_obj::scaleMode->scale->y)));
HXLINE(1018)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,transformObject,return )

void FlxCamera_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1086_destroy)
HXLINE(1087)		::flixel::util::FlxDestroyUtil_obj::removeChild(this->flashSprite,this->_scrollRect);
HXLINE(1089)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1091)			::flixel::util::FlxDestroyUtil_obj::removeChild(this->_scrollRect,this->_flashBitmap);
HXLINE(1092)			this->screen = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->screen)) );
HXLINE(1093)			this->buffer = null();
HXLINE(1094)			this->_flashBitmap = null();
HXLINE(1095)			this->_fill = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_fill);
            		}
            		else {
HXLINE(1104)			::flixel::util::FlxDestroyUtil_obj::removeChild(this->_scrollRect,this->canvas);
HXLINE(1105)			if (::hx::IsNotNull( this->canvas )) {
HXLINE(1107)				{
HXLINE(1107)					int _g = 0;
HXDLIN(1107)					int _g1 = this->canvas->get_numChildren();
HXDLIN(1107)					while((_g < _g1)){
HXLINE(1107)						_g = (_g + 1);
HXDLIN(1107)						int i = (_g - 1);
HXLINE(1109)						this->canvas->removeChildAt(0);
            					}
            				}
HXLINE(1111)				this->canvas = null();
            			}
HXLINE(1114)			if (::hx::IsNotNull( this->_headOfDrawStack )) {
HXLINE(1116)				this->clearDrawStack();
            			}
HXLINE(1119)			this->_blitMatrix = null();
HXLINE(1120)			this->_helperMatrix = null();
HXLINE(1121)			this->_helperPoint = null();
            		}
HXLINE(1124)		this->_bounds = null();
HXLINE(1125)		this->scroll = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scroll)) );
HXLINE(1126)		this->targetOffset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->targetOffset)) );
HXLINE(1127)		this->deadzone = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->deadzone)) );
HXLINE(1129)		this->target = null();
HXLINE(1130)		this->flashSprite = null();
HXLINE(1131)		this->_scrollRect = null();
HXLINE(1132)		this->_flashRect = null();
HXLINE(1133)		this->_flashPoint = null();
HXLINE(1134)		this->_fxFlashComplete = null();
HXLINE(1135)		this->_fxFadeComplete = null();
HXLINE(1136)		this->_fxShakeComplete = null();
HXLINE(1138)		this->super::destroy();
            	}


void FlxCamera_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1145_update)
HXLINE(1147)		if (::hx::IsNotNull( this->target )) {
HXLINE(1149)			this->updateFollow();
            		}
HXLINE(1152)		this->updateScroll();
HXLINE(1153)		this->updateFlash(elapsed);
HXLINE(1154)		this->updateFade(elapsed);
HXLINE(1156)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(1156)		if (this->filtersEnabled) {
HXLINE(1156)			_hx_tmp = this->filters;
            		}
            		else {
HXLINE(1156)			_hx_tmp = null();
            		}
HXDLIN(1156)		this->flashSprite->set_filters(_hx_tmp);
HXLINE(1158)		this->updateFlashSpritePosition();
HXLINE(1159)		this->updateShake(elapsed);
            	}


void FlxCamera_obj::updateScroll(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1169_updateScroll)
HXDLIN(1169)		this->bindScrollPos(this->scroll);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScroll,(void))

 ::flixel::math::FlxBasePoint FlxCamera_obj::bindScrollPos( ::flixel::math::FlxBasePoint scrollPos){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1181_bindScrollPos)
HXLINE(1182)		 ::Dynamic minX;
HXDLIN(1182)		if (::hx::IsNull( this->minScrollX )) {
HXLINE(1182)			minX = null();
            		}
            		else {
HXLINE(1182)			minX = (( (Float)(this->minScrollX) ) - (((this->zoom - ( (Float)(1) )) * ( (Float)(this->width) )) / (( (Float)(2) ) * this->zoom)));
            		}
HXLINE(1183)		 ::Dynamic maxX;
HXDLIN(1183)		if (::hx::IsNull( this->maxScrollX )) {
HXLINE(1183)			maxX = null();
            		}
            		else {
HXLINE(1183)			maxX = (this->maxScrollX + (((this->zoom - ( (Float)(1) )) * ( (Float)(this->width) )) / (( (Float)(2) ) * this->zoom)));
            		}
HXLINE(1184)		 ::Dynamic minY;
HXDLIN(1184)		if (::hx::IsNull( this->minScrollY )) {
HXLINE(1184)			minY = null();
            		}
            		else {
HXLINE(1184)			minY = (( (Float)(this->minScrollY) ) - (((this->zoom - ( (Float)(1) )) * ( (Float)(this->height) )) / (( (Float)(2) ) * this->zoom)));
            		}
HXLINE(1185)		 ::Dynamic maxY;
HXDLIN(1185)		if (::hx::IsNull( this->maxScrollY )) {
HXLINE(1185)			maxY = null();
            		}
            		else {
HXLINE(1185)			maxY = (this->maxScrollY + (((this->zoom - ( (Float)(1) )) * ( (Float)(this->height) )) / (( (Float)(2) ) * this->zoom)));
            		}
HXLINE(1188)		{
HXLINE(1188)			Float Value = scrollPos->x;
HXDLIN(1188)			 ::Dynamic Max;
HXDLIN(1188)			if (::hx::IsNotNull( maxX )) {
HXLINE(1188)				Max = (( (Float)(maxX) ) - ( (Float)(this->width) ));
            			}
            			else {
HXLINE(1188)				Max = null();
            			}
HXDLIN(1188)			Float lowerBound;
HXDLIN(1188)			bool lowerBound1;
HXDLIN(1188)			if (::hx::IsNotNull( minX )) {
HXLINE(1188)				lowerBound1 = ::hx::IsLess( Value,minX );
            			}
            			else {
HXLINE(1188)				lowerBound1 = false;
            			}
HXDLIN(1188)			if (lowerBound1) {
HXLINE(1188)				lowerBound = ( (Float)(minX) );
            			}
            			else {
HXLINE(1188)				lowerBound = Value;
            			}
HXDLIN(1188)			Float x;
HXDLIN(1188)			bool x1;
HXDLIN(1188)			if (::hx::IsNotNull( Max )) {
HXLINE(1188)				x1 = ::hx::IsGreater( lowerBound,Max );
            			}
            			else {
HXLINE(1188)				x1 = false;
            			}
HXDLIN(1188)			if (x1) {
HXLINE(1188)				x = ( (Float)(Max) );
            			}
            			else {
HXLINE(1188)				x = lowerBound;
            			}
HXDLIN(1188)			scrollPos->set_x(x);
            		}
HXLINE(1189)		{
HXLINE(1189)			Float Value1 = scrollPos->y;
HXDLIN(1189)			 ::Dynamic Max1;
HXDLIN(1189)			if (::hx::IsNotNull( maxY )) {
HXLINE(1189)				Max1 = (( (Float)(maxY) ) - ( (Float)(this->height) ));
            			}
            			else {
HXLINE(1189)				Max1 = null();
            			}
HXDLIN(1189)			Float lowerBound2;
HXDLIN(1189)			bool lowerBound3;
HXDLIN(1189)			if (::hx::IsNotNull( minY )) {
HXLINE(1189)				lowerBound3 = ::hx::IsLess( Value1,minY );
            			}
            			else {
HXLINE(1189)				lowerBound3 = false;
            			}
HXDLIN(1189)			if (lowerBound3) {
HXLINE(1189)				lowerBound2 = ( (Float)(minY) );
            			}
            			else {
HXLINE(1189)				lowerBound2 = Value1;
            			}
HXDLIN(1189)			Float y;
HXDLIN(1189)			bool y1;
HXDLIN(1189)			if (::hx::IsNotNull( Max1 )) {
HXLINE(1189)				y1 = ::hx::IsGreater( lowerBound2,Max1 );
            			}
            			else {
HXLINE(1189)				y1 = false;
            			}
HXDLIN(1189)			if (y1) {
HXLINE(1189)				y = ( (Float)(Max1) );
            			}
            			else {
HXLINE(1189)				y = lowerBound2;
            			}
HXDLIN(1189)			scrollPos->set_y(y);
            		}
HXLINE(1190)		return scrollPos;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,bindScrollPos,return )

void FlxCamera_obj::updateFollow(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1198_updateFollow)
HXLINE(1201)		if (::hx::IsNull( this->deadzone )) {
HXLINE(1203)			this->target->getMidpoint(this->_point);
HXLINE(1204)			{
HXLINE(1204)				 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN(1204)				 ::flixel::math::FlxBasePoint point = this->targetOffset;
HXDLIN(1204)				{
HXLINE(1204)					Float y = point->y;
HXDLIN(1204)					this1->set_x((this1->x + point->x));
HXDLIN(1204)					this1->set_y((this1->y + y));
            				}
HXDLIN(1204)				if (point->_weak) {
HXLINE(1204)					point->put();
            				}
            			}
HXLINE(1205)			{
HXLINE(1205)				 ::flixel::math::FlxBasePoint this2 = this->_scrollTarget;
HXDLIN(1205)				Float y1 = (this->_point->y - (( (Float)(this->height) ) * ((Float)0.5)));
HXDLIN(1205)				this2->set_x((this->_point->x - (( (Float)(this->width) ) * ((Float)0.5))));
HXDLIN(1205)				this2->set_y(y1);
            			}
            		}
            		else {
HXLINE(1209)			Float edge;
HXLINE(1210)			Float targetX = (this->target->x + this->targetOffset->x);
HXLINE(1211)			Float targetY = (this->target->y + this->targetOffset->y);
HXLINE(1213)			if (::hx::IsPointerEq( this->style,::flixel::FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN_dyn() )) {
HXLINE(1215)				if ((targetX >= (this->scroll->x + (( (Float)(this->width) ) - this->viewMarginX)))) {
HXLINE(1217)					this->_scrollTarget->set_x((this->_scrollTarget->x + (( (Float)(this->width) ) - (this->viewMarginX * ( (Float)(2) )))));
            				}
            				else {
HXLINE(1219)					Float _hx_tmp = (targetX + this->target->get_width());
HXDLIN(1219)					if ((_hx_tmp < (this->scroll->x + this->viewMarginX))) {
HXLINE(1221)						this->_scrollTarget->set_x((this->_scrollTarget->x - (( (Float)(this->width) ) - (this->viewMarginX * ( (Float)(2) )))));
            					}
            				}
HXLINE(1224)				if ((targetY >= (this->scroll->y + (( (Float)(this->height) ) - this->viewMarginY)))) {
HXLINE(1226)					this->_scrollTarget->set_y((this->_scrollTarget->y + (( (Float)(this->height) ) - (this->viewMarginY * ( (Float)(2) )))));
            				}
            				else {
HXLINE(1228)					Float _hx_tmp = (targetY + this->target->get_height());
HXDLIN(1228)					if ((_hx_tmp < (this->scroll->y + this->viewMarginY))) {
HXLINE(1230)						this->_scrollTarget->set_y((this->_scrollTarget->y - (( (Float)(this->height) ) - (this->viewMarginY * ( (Float)(2) )))));
            					}
            				}
HXLINE(1234)				this->bindScrollPos(this->_scrollTarget);
            			}
            			else {
HXLINE(1238)				edge = (targetX - this->deadzone->x);
HXLINE(1239)				if ((this->_scrollTarget->x > edge)) {
HXLINE(1241)					this->_scrollTarget->set_x(edge);
            				}
HXLINE(1243)				Float edge1 = (targetX + this->target->get_width());
HXDLIN(1243)				edge = ((edge1 - this->deadzone->x) - this->deadzone->width);
HXLINE(1244)				if ((this->_scrollTarget->x < edge)) {
HXLINE(1246)					this->_scrollTarget->set_x(edge);
            				}
HXLINE(1249)				edge = (targetY - this->deadzone->y);
HXLINE(1250)				if ((this->_scrollTarget->y > edge)) {
HXLINE(1252)					this->_scrollTarget->set_y(edge);
            				}
HXLINE(1254)				Float edge2 = (targetY + this->target->get_height());
HXDLIN(1254)				edge = ((edge2 - this->deadzone->y) - this->deadzone->height);
HXLINE(1255)				if ((this->_scrollTarget->y < edge)) {
HXLINE(1257)					this->_scrollTarget->set_y(edge);
            				}
            			}
HXLINE(1261)			if (::Std_obj::isOfType(this->target,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE(1263)				if (::hx::IsNull( this->_lastTargetPosition )) {
HXLINE(1265)					Float x = this->target->x;
HXDLIN(1265)					Float y = this->target->y;
HXDLIN(1265)					 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN(1265)					point->_inPool = false;
HXDLIN(1265)					this->_lastTargetPosition = point;
            				}
HXLINE(1267)				this->_scrollTarget->set_x((this->_scrollTarget->x + ((this->target->x - this->_lastTargetPosition->x) * this->followLead->x)));
HXLINE(1268)				this->_scrollTarget->set_y((this->_scrollTarget->y + ((this->target->y - this->_lastTargetPosition->y) * this->followLead->y)));
HXLINE(1270)				this->_lastTargetPosition->set_x(this->target->x);
HXLINE(1271)				this->_lastTargetPosition->set_y(this->target->y);
            			}
            		}
HXLINE(1275)		if ((this->followLerp >= (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::updateFramerate) )))) {
HXLINE(1277)			 ::flixel::math::FlxBasePoint this1 = this->scroll;
HXDLIN(1277)			 ::flixel::math::FlxBasePoint p = this->_scrollTarget;
HXDLIN(1277)			{
HXLINE(1277)				Float y = p->y;
HXDLIN(1277)				this1->set_x(p->x);
HXDLIN(1277)				this1->set_y(y);
            			}
HXDLIN(1277)			if (p->_weak) {
HXLINE(1277)				p->put();
            			}
            		}
            		else {
HXLINE(1281)			this->scroll->set_x((this->scroll->x + (((this->_scrollTarget->x - this->scroll->x) * this->followLerp) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::updateFramerate) )))));
HXLINE(1282)			this->scroll->set_y((this->scroll->y + (((this->_scrollTarget->y - this->scroll->y) * this->followLerp) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::updateFramerate) )))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

void FlxCamera_obj::updateFlash(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1289_updateFlash)
HXDLIN(1289)		if ((this->_fxFlashAlpha > ((Float)0.0))) {
HXLINE(1291)			 ::flixel::FlxCamera _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1291)			_hx_tmp->_fxFlashAlpha = (_hx_tmp->_fxFlashAlpha - (elapsed / this->_fxFlashDuration));
HXLINE(1292)			bool _hx_tmp1;
HXDLIN(1292)			if ((this->_fxFlashAlpha <= 0)) {
HXLINE(1292)				_hx_tmp1 = ::hx::IsNotNull( this->_fxFlashComplete );
            			}
            			else {
HXLINE(1292)				_hx_tmp1 = false;
            			}
HXDLIN(1292)			if (_hx_tmp1) {
HXLINE(1294)				this->_fxFlashComplete();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFlash,(void))

void FlxCamera_obj::updateFade(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1300_updateFade)
HXLINE(1301)		if ((this->_fxFadeDuration == ((Float)0.0))) {
HXLINE(1302)			return;
            		}
HXLINE(1304)		if (this->_fxFadeIn) {
HXLINE(1306)			 ::flixel::FlxCamera _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1306)			_hx_tmp->_fxFadeAlpha = (_hx_tmp->_fxFadeAlpha - (elapsed / this->_fxFadeDuration));
HXLINE(1307)			if ((this->_fxFadeAlpha <= ((Float)0.0))) {
HXLINE(1309)				this->_fxFadeAlpha = ((Float)0.0);
HXLINE(1310)				this->completeFade();
            			}
            		}
            		else {
HXLINE(1315)			 ::flixel::FlxCamera _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1315)			_hx_tmp->_fxFadeAlpha = (_hx_tmp->_fxFadeAlpha + (elapsed / this->_fxFadeDuration));
HXLINE(1316)			if ((this->_fxFadeAlpha >= ((Float)1.0))) {
HXLINE(1318)				this->_fxFadeAlpha = ((Float)1.0);
HXLINE(1319)				this->completeFade();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFade,(void))

void FlxCamera_obj::completeFade(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1325_completeFade)
HXLINE(1326)		this->_fxFadeDuration = ((Float)0.0);
HXLINE(1327)		if (::hx::IsNotNull( this->_fxFadeComplete )) {
HXLINE(1328)			this->_fxFadeComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,completeFade,(void))

void FlxCamera_obj::updateShake(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1333_updateShake)
HXDLIN(1333)		if ((this->_fxShakeDuration > 0)) {
HXLINE(1335)			 ::flixel::FlxCamera _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1335)			_hx_tmp->_fxShakeDuration = (_hx_tmp->_fxShakeDuration - elapsed);
HXLINE(1336)			if ((this->_fxShakeDuration <= 0)) {
HXLINE(1338)				if (::hx::IsNotNull( this->_fxShakeComplete )) {
HXLINE(1340)					this->_fxShakeComplete();
            				}
            			}
            			else {
HXLINE(1345)				 ::Dynamic pixelPerfect;
HXDLIN(1345)				if (::hx::IsNull( this->pixelPerfectShake )) {
HXLINE(1345)					pixelPerfect = this->pixelPerfectRender;
            				}
            				else {
HXLINE(1345)					pixelPerfect = this->pixelPerfectShake;
            				}
HXLINE(1346)				int this1 = this->_fxShakeAxes;
HXDLIN(1346)				bool _hx_tmp;
HXDLIN(1346)				if ((this1 != 1)) {
HXLINE(1346)					_hx_tmp = (this1 == 17);
            				}
            				else {
HXLINE(1346)					_hx_tmp = true;
            				}
HXDLIN(1346)				if (_hx_tmp) {
HXLINE(1348)					Float shakePixels = ::flixel::FlxG_obj::random->_hx_float(-1,1,null());
HXDLIN(1348)					Float shakePixels1 = ((shakePixels * this->_fxShakeIntensity) * ( (Float)(this->width) ));
HXLINE(1349)					if (( (bool)(pixelPerfect) )) {
HXLINE(1350)						shakePixels1 = ( (Float)(::Math_obj::round(shakePixels1)) );
            					}
HXLINE(1352)					 ::openfl::display::Sprite fh = this->flashSprite;
HXDLIN(1352)					Float _hx_tmp = fh->get_x();
HXDLIN(1352)					fh->set_x((_hx_tmp + ((shakePixels1 * this->zoom) * ::flixel::FlxG_obj::scaleMode->scale->x)));
            				}
HXLINE(1355)				int this2 = this->_fxShakeAxes;
HXDLIN(1355)				bool _hx_tmp1;
HXDLIN(1355)				if ((this2 != 16)) {
HXLINE(1355)					_hx_tmp1 = (this2 == 17);
            				}
            				else {
HXLINE(1355)					_hx_tmp1 = true;
            				}
HXDLIN(1355)				if (_hx_tmp1) {
HXLINE(1357)					Float shakePixels = ::flixel::FlxG_obj::random->_hx_float(-1,1,null());
HXDLIN(1357)					Float shakePixels1 = ((shakePixels * this->_fxShakeIntensity) * ( (Float)(this->height) ));
HXLINE(1358)					if (( (bool)(pixelPerfect) )) {
HXLINE(1359)						shakePixels1 = ( (Float)(::Math_obj::round(shakePixels1)) );
            					}
HXLINE(1361)					 ::openfl::display::Sprite fh = this->flashSprite;
HXDLIN(1361)					Float _hx_tmp = fh->get_y();
HXDLIN(1361)					fh->set_y((_hx_tmp + ((shakePixels1 * this->zoom) * ::flixel::FlxG_obj::scaleMode->scale->y)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateShake,(void))

void FlxCamera_obj::updateFlashSpritePosition(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1373_updateFlashSpritePosition)
HXDLIN(1373)		if (::hx::IsNotNull( this->flashSprite )) {
HXLINE(1375)			this->flashSprite->set_x(((this->x * ::flixel::FlxG_obj::scaleMode->scale->x) + this->_flashOffset->x));
HXLINE(1376)			this->flashSprite->set_y(((this->y * ::flixel::FlxG_obj::scaleMode->scale->y) + this->_flashOffset->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashSpritePosition,(void))

void FlxCamera_obj::updateFlashOffset(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1385_updateFlashOffset)
HXLINE(1386)		this->_flashOffset->set_x((((( (Float)(this->width) ) * ((Float)0.5)) * ::flixel::FlxG_obj::scaleMode->scale->x) * this->initialZoom));
HXLINE(1387)		this->_flashOffset->set_y((((( (Float)(this->height) ) * ((Float)0.5)) * ::flixel::FlxG_obj::scaleMode->scale->y) * this->initialZoom));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashOffset,(void))

void FlxCamera_obj::updateScrollRect(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1399_updateScrollRect)
HXLINE(1400)		 ::openfl::geom::Rectangle rect;
HXDLIN(1400)		if (::hx::IsNotNull( this->_scrollRect )) {
HXLINE(1400)			rect = this->_scrollRect->get_scrollRect();
            		}
            		else {
HXLINE(1400)			rect = null();
            		}
HXLINE(1402)		if (::hx::IsNotNull( rect )) {
HXLINE(1404)			rect->x = (rect->y = ( (Float)(0) ));
HXLINE(1406)			rect->width = ((( (Float)(this->width) ) * this->initialZoom) * ::flixel::FlxG_obj::scaleMode->scale->x);
HXLINE(1407)			rect->height = ((( (Float)(this->height) ) * this->initialZoom) * ::flixel::FlxG_obj::scaleMode->scale->y);
HXLINE(1409)			this->_scrollRect->set_scrollRect(rect);
HXLINE(1411)			this->_scrollRect->set_x((((Float)-0.5) * rect->width));
HXLINE(1412)			this->_scrollRect->set_y((((Float)-0.5) * rect->height));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScrollRect,(void))

void FlxCamera_obj::updateInternalSpritePositions(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1424_updateInternalSpritePositions)
HXDLIN(1424)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1426)			if (::hx::IsNotNull( this->_flashBitmap )) {
HXLINE(1428)				this->_flashBitmap->set_x(( (Float)(0) ));
HXLINE(1429)				this->_flashBitmap->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE(1434)			if (::hx::IsNotNull( this->canvas )) {
HXLINE(1436)				this->canvas->set_x((((((Float)-0.5) * ( (Float)(this->width) )) * (this->scaleX - this->initialZoom)) * ::flixel::FlxG_obj::scaleMode->scale->x));
HXLINE(1437)				this->canvas->set_y((((((Float)-0.5) * ( (Float)(this->height) )) * (this->scaleY - this->initialZoom)) * ::flixel::FlxG_obj::scaleMode->scale->y));
HXLINE(1439)				this->canvas->set_scaleX(this->totalScaleX);
HXLINE(1440)				this->canvas->set_scaleY(this->totalScaleY);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateInternalSpritePositions,(void))

void FlxCamera_obj::follow( ::flixel::FlxObject Target, ::flixel::FlxCameraFollowStyle Style, ::Dynamic Lerp){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1466_follow)
HXLINE(1467)		if (::hx::IsNull( Style )) {
HXLINE(1468)			Style = ::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn();
            		}
HXLINE(1470)		if (::hx::IsNull( Lerp )) {
HXLINE(1471)			Lerp = (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::updateFramerate) ));
            		}
HXLINE(1473)		this->style = Style;
HXLINE(1474)		this->target = Target;
HXLINE(1475)		this->set_followLerp(( (Float)(Lerp) ));
HXLINE(1476)		Float helper;
HXLINE(1477)		Float w = ( (Float)(0) );
HXLINE(1478)		Float h = ( (Float)(0) );
HXLINE(1479)		this->_lastTargetPosition = null();
HXLINE(1481)		switch((int)(Style->_hx_getIndex())){
            			case (int)0: {
HXLINE(1484)				if (::hx::IsNotNull( this->target )) {
HXLINE(1486)					w = this->target->get_width();
HXLINE(1487)					h = this->target->get_height();
            				}
HXLINE(1489)				Float X = ((( (Float)(this->width) ) - w) / ( (Float)(2) ));
HXDLIN(1489)				Float Y = (((( (Float)(this->height) ) - h) / ( (Float)(2) )) - (h * ((Float)0.25)));
HXDLIN(1489)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1489)				_this->x = X;
HXDLIN(1489)				_this->y = Y;
HXDLIN(1489)				_this->width = w;
HXDLIN(1489)				_this->height = h;
HXDLIN(1489)				 ::flixel::math::FlxRect rect = _this;
HXDLIN(1489)				rect->_inPool = false;
HXDLIN(1489)				this->deadzone = rect;
            			}
            			break;
            			case (int)1: {
HXLINE(1492)				Float w = (( (Float)(this->width) ) / ( (Float)(8) ));
HXLINE(1493)				Float h = (( (Float)(this->height) ) / ( (Float)(3) ));
HXLINE(1494)				Float X = ((( (Float)(this->width) ) - w) / ( (Float)(2) ));
HXDLIN(1494)				Float Y = (((( (Float)(this->height) ) - h) / ( (Float)(2) )) - (h * ((Float)0.25)));
HXDLIN(1494)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1494)				_this->x = X;
HXDLIN(1494)				_this->y = Y;
HXDLIN(1494)				_this->width = w;
HXDLIN(1494)				_this->height = h;
HXDLIN(1494)				 ::flixel::math::FlxRect rect = _this;
HXDLIN(1494)				rect->_inPool = false;
HXDLIN(1494)				this->deadzone = rect;
            			}
            			break;
            			case (int)2: {
HXLINE(1497)				helper = (::Math_obj::max(( (Float)(this->width) ),( (Float)(this->height) )) / ( (Float)(4) ));
HXLINE(1498)				Float X = ((( (Float)(this->width) ) - helper) / ( (Float)(2) ));
HXDLIN(1498)				Float Y = ((( (Float)(this->height) ) - helper) / ( (Float)(2) ));
HXDLIN(1498)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1498)				_this->x = X;
HXDLIN(1498)				_this->y = Y;
HXDLIN(1498)				_this->width = helper;
HXDLIN(1498)				_this->height = helper;
HXDLIN(1498)				 ::flixel::math::FlxRect rect = _this;
HXDLIN(1498)				rect->_inPool = false;
HXDLIN(1498)				this->deadzone = rect;
            			}
            			break;
            			case (int)3: {
HXLINE(1501)				helper = (::Math_obj::max(( (Float)(this->width) ),( (Float)(this->height) )) / ( (Float)(8) ));
HXLINE(1502)				Float X = ((( (Float)(this->width) ) - helper) / ( (Float)(2) ));
HXDLIN(1502)				Float Y = ((( (Float)(this->height) ) - helper) / ( (Float)(2) ));
HXDLIN(1502)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1502)				_this->x = X;
HXDLIN(1502)				_this->y = Y;
HXDLIN(1502)				_this->width = helper;
HXDLIN(1502)				_this->height = helper;
HXDLIN(1502)				 ::flixel::math::FlxRect rect = _this;
HXDLIN(1502)				rect->_inPool = false;
HXDLIN(1502)				this->deadzone = rect;
            			}
            			break;
            			case (int)4: {
HXLINE(1505)				Float Width = ( (Float)(this->width) );
HXDLIN(1505)				Float Height = ( (Float)(this->height) );
HXDLIN(1505)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1505)				_this->x = ( (Float)(0) );
HXDLIN(1505)				_this->y = ( (Float)(0) );
HXDLIN(1505)				_this->width = Width;
HXDLIN(1505)				_this->height = Height;
HXDLIN(1505)				 ::flixel::math::FlxRect rect = _this;
HXDLIN(1505)				rect->_inPool = false;
HXDLIN(1505)				this->deadzone = rect;
            			}
            			break;
            			case (int)5: {
HXLINE(1508)				this->deadzone = null();
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,follow,(void))

void FlxCamera_obj::snapToTarget(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1517_snapToTarget)
HXLINE(1518)		this->updateFollow();
HXLINE(1519)		{
HXLINE(1519)			 ::flixel::math::FlxBasePoint this1 = this->scroll;
HXDLIN(1519)			 ::flixel::math::FlxBasePoint p = this->_scrollTarget;
HXDLIN(1519)			{
HXLINE(1519)				Float y = p->y;
HXDLIN(1519)				this1->set_x(p->x);
HXDLIN(1519)				this1->set_y(y);
            			}
HXDLIN(1519)			if (p->_weak) {
HXLINE(1519)				p->put();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,snapToTarget,(void))

void FlxCamera_obj::focusOn( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1528_focusOn)
HXLINE(1529)		{
HXLINE(1529)			 ::flixel::math::FlxBasePoint this1 = this->scroll;
HXDLIN(1529)			Float y = (point->y - (( (Float)(this->height) ) * ((Float)0.5)));
HXDLIN(1529)			this1->set_x((point->x - (( (Float)(this->width) ) * ((Float)0.5))));
HXDLIN(1529)			this1->set_y(y);
            		}
HXLINE(1530)		if (point->_weak) {
HXLINE(1530)			point->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

void FlxCamera_obj::flash(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-1);
            		Float Duration = __o_Duration.Default(1);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1542_flash)
HXLINE(1543)		bool _hx_tmp;
HXDLIN(1543)		if (!(Force)) {
HXLINE(1543)			_hx_tmp = (this->_fxFlashAlpha > ((Float)0.0));
            		}
            		else {
HXLINE(1543)			_hx_tmp = false;
            		}
HXDLIN(1543)		if (_hx_tmp) {
HXLINE(1544)			return;
            		}
HXLINE(1546)		this->_fxFlashColor = Color;
HXLINE(1547)		if ((Duration <= 0)) {
HXLINE(1548)			Duration = ((Float)0.000001);
            		}
HXLINE(1549)		this->_fxFlashDuration = Duration;
HXLINE(1550)		this->_fxFlashComplete = OnComplete;
HXLINE(1551)		this->_fxFlashAlpha = ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

void FlxCamera_obj::fade(::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration,::hx::Null< bool >  __o_FadeIn, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force){
            		int Color = __o_Color.Default(-16777216);
            		Float Duration = __o_Duration.Default(1);
            		bool FadeIn = __o_FadeIn.Default(false);
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1564_fade)
HXLINE(1565)		bool _hx_tmp;
HXDLIN(1565)		if ((this->_fxFadeDuration > 0)) {
HXLINE(1565)			_hx_tmp = !(Force);
            		}
            		else {
HXLINE(1565)			_hx_tmp = false;
            		}
HXDLIN(1565)		if (_hx_tmp) {
HXLINE(1566)			return;
            		}
HXLINE(1568)		this->_fxFadeColor = Color;
HXLINE(1569)		if ((Duration <= 0)) {
HXLINE(1570)			Duration = ((Float)0.000001);
            		}
HXLINE(1572)		this->_fxFadeIn = FadeIn;
HXLINE(1573)		this->_fxFadeDuration = Duration;
HXLINE(1574)		this->_fxFadeComplete = OnComplete;
HXLINE(1576)		Float _hx_tmp1;
HXDLIN(1576)		if (this->_fxFadeIn) {
HXLINE(1576)			_hx_tmp1 = ((Float)0.999999);
            		}
            		else {
HXLINE(1576)			_hx_tmp1 = ((Float)0.000001);
            		}
HXDLIN(1576)		this->_fxFadeAlpha = _hx_tmp1;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

void FlxCamera_obj::shake(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,::hx::Null< bool >  __o_Force, ::Dynamic Axes){
            		Float Intensity = __o_Intensity.Default(((Float)0.05));
            		Float Duration = __o_Duration.Default(((Float)0.5));
            		bool Force = __o_Force.Default(true);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1590_shake)
HXLINE(1591)		if (::hx::IsNull( Axes )) {
HXLINE(1592)			Axes = 17;
            		}
HXLINE(1594)		bool _hx_tmp;
HXDLIN(1594)		if (!(Force)) {
HXLINE(1594)			_hx_tmp = (this->_fxShakeDuration > 0);
            		}
            		else {
HXLINE(1594)			_hx_tmp = false;
            		}
HXDLIN(1594)		if (_hx_tmp) {
HXLINE(1595)			return;
            		}
HXLINE(1597)		this->_fxShakeIntensity = Intensity;
HXLINE(1598)		this->_fxShakeDuration = Duration;
HXLINE(1599)		this->_fxShakeComplete = OnComplete;
HXLINE(1600)		this->_fxShakeAxes = ( (int)(Axes) );
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

void FlxCamera_obj::stopFX(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1607_stopFX)
HXLINE(1608)		this->_fxFlashAlpha = ((Float)0.0);
HXLINE(1609)		this->_fxFadeAlpha = ((Float)0.0);
HXLINE(1610)		this->_fxFadeDuration = ((Float)0.0);
HXLINE(1611)		this->_fxShakeDuration = ((Float)0.0);
HXLINE(1612)		this->updateFlashSpritePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

void FlxCamera_obj::setFilters(::Array< ::Dynamic> filters){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1621_setFilters)
HXDLIN(1621)		this->filters = filters;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setFilters,(void))

 ::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1631_copyFrom)
HXLINE(1632)		this->setScrollBounds(Camera->minScrollX,Camera->maxScrollX,Camera->minScrollY,Camera->maxScrollY);
HXLINE(1634)		this->target = Camera->target;
HXLINE(1636)		if (::hx::IsNotNull( this->target )) {
HXLINE(1638)			if (::hx::IsNull( Camera->deadzone )) {
HXLINE(1640)				this->deadzone = null();
            			}
            			else {
HXLINE(1644)				if (::hx::IsNull( this->deadzone )) {
HXLINE(1646)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1646)					_this->x = ( (Float)(0) );
HXDLIN(1646)					_this->y = ( (Float)(0) );
HXDLIN(1646)					_this->width = ( (Float)(0) );
HXDLIN(1646)					_this->height = ( (Float)(0) );
HXDLIN(1646)					 ::flixel::math::FlxRect rect = _this;
HXDLIN(1646)					rect->_inPool = false;
HXDLIN(1646)					this->deadzone = rect;
            				}
HXLINE(1648)				{
HXLINE(1648)					 ::flixel::math::FlxRect _this = this->deadzone;
HXDLIN(1648)					 ::flixel::math::FlxRect Rect = Camera->deadzone;
HXDLIN(1648)					_this->x = Rect->x;
HXDLIN(1648)					_this->y = Rect->y;
HXDLIN(1648)					_this->width = Rect->width;
HXDLIN(1648)					_this->height = Rect->height;
HXDLIN(1648)					if (Rect->_weak) {
HXLINE(1648)						if (!(Rect->_inPool)) {
HXLINE(1648)							Rect->_inPool = true;
HXDLIN(1648)							Rect->_weak = false;
HXDLIN(1648)							::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            						}
            					}
            				}
            			}
            		}
HXLINE(1651)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

void FlxCamera_obj::fill(int Color,::hx::Null< bool >  __o_BlendAlpha,::hx::Null< Float >  __o_FxAlpha, ::openfl::display::Graphics graphics){
            		bool BlendAlpha = __o_BlendAlpha.Default(true);
            		Float FxAlpha = __o_FxAlpha.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1662_fill)
HXDLIN(1662)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1664)			if (BlendAlpha) {
HXLINE(1666)				this->_fill->fillRect(this->_flashRect,Color);
HXLINE(1667)				this->buffer->copyPixels(this->_fill,this->_flashRect,this->_flashPoint,null(),null(),BlendAlpha);
            			}
            			else {
HXLINE(1671)				this->buffer->fillRect(this->_flashRect,Color);
            			}
            		}
            		else {
HXLINE(1676)			if ((FxAlpha == 0)) {
HXLINE(1677)				return;
            			}
HXLINE(1679)			 ::openfl::display::Graphics targetGraphics;
HXDLIN(1679)			if (::hx::IsNull( graphics )) {
HXLINE(1679)				targetGraphics = this->canvas->get_graphics();
            			}
            			else {
HXLINE(1679)				targetGraphics = graphics;
            			}
HXLINE(1681)			targetGraphics->beginFill(Color,FxAlpha);
HXLINE(1684)			targetGraphics->drawRect((this->viewMarginX - ( (Float)(1) )),(this->viewMarginY - ( (Float)(1) )),((( (Float)(this->width) ) - (this->viewMarginX * ( (Float)(2) ))) + 2),((( (Float)(this->height) ) - (this->viewMarginY * ( (Float)(2) ))) + 2));
HXLINE(1685)			targetGraphics->endFill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

void FlxCamera_obj::drawFX(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1694_drawFX)
HXLINE(1695)		Float alphaComponent;
HXLINE(1698)		if ((this->_fxFlashAlpha > ((Float)0.0))) {
HXLINE(1700)			alphaComponent = ( (Float)(((this->_fxFlashColor >> 24) & 255)) );
HXLINE(1702)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1704)				Float _hx_tmp;
HXDLIN(1704)				if ((alphaComponent <= 0)) {
HXLINE(1704)					_hx_tmp = ( (Float)(255) );
            				}
            				else {
HXLINE(1704)					_hx_tmp = alphaComponent;
            				}
HXDLIN(1704)				int _hx_tmp1 = (::Std_obj::_hx_int((_hx_tmp * this->_fxFlashAlpha)) << 24);
HXDLIN(1704)				this->fill((_hx_tmp1 + (this->_fxFlashColor & 16777215)),null(),null(),null());
            			}
            			else {
HXLINE(1708)				int _hx_tmp = (this->_fxFlashColor & 16777215);
HXDLIN(1708)				Float _hx_tmp1;
HXDLIN(1708)				if ((alphaComponent <= 0)) {
HXLINE(1708)					_hx_tmp1 = ( (Float)(255) );
            				}
            				else {
HXLINE(1708)					_hx_tmp1 = alphaComponent;
            				}
HXDLIN(1708)				Float _hx_tmp2 = ((_hx_tmp1 * this->_fxFlashAlpha) / ( (Float)(255) ));
HXDLIN(1708)				this->fill(_hx_tmp,true,_hx_tmp2,this->canvas->get_graphics());
            			}
            		}
HXLINE(1713)		if ((this->_fxFadeAlpha > ((Float)0.0))) {
HXLINE(1715)			alphaComponent = ( (Float)(((this->_fxFadeColor >> 24) & 255)) );
HXLINE(1717)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1719)				Float _hx_tmp;
HXDLIN(1719)				if ((alphaComponent <= 0)) {
HXLINE(1719)					_hx_tmp = ( (Float)(255) );
            				}
            				else {
HXLINE(1719)					_hx_tmp = alphaComponent;
            				}
HXDLIN(1719)				int _hx_tmp1 = (::Std_obj::_hx_int((_hx_tmp * this->_fxFadeAlpha)) << 24);
HXDLIN(1719)				this->fill((_hx_tmp1 + (this->_fxFadeColor & 16777215)),null(),null(),null());
            			}
            			else {
HXLINE(1723)				int _hx_tmp = (this->_fxFadeColor & 16777215);
HXDLIN(1723)				Float _hx_tmp1;
HXDLIN(1723)				if ((alphaComponent <= 0)) {
HXLINE(1723)					_hx_tmp1 = ( (Float)(255) );
            				}
            				else {
HXLINE(1723)					_hx_tmp1 = alphaComponent;
            				}
HXDLIN(1723)				Float _hx_tmp2 = ((_hx_tmp1 * this->_fxFadeAlpha) / ( (Float)(255) ));
HXDLIN(1723)				this->fill(_hx_tmp,true,_hx_tmp2,this->canvas->get_graphics());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

void FlxCamera_obj::checkResize(){
            	HX_GC_STACKFRAME(&_hx_pos_d1aae230bd422321_1731_checkResize)
HXDLIN(1731)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1733)			bool _hx_tmp;
HXDLIN(1733)			if ((this->width == this->buffer->width)) {
HXLINE(1733)				_hx_tmp = (this->height != this->buffer->height);
            			}
            			else {
HXLINE(1733)				_hx_tmp = true;
            			}
HXDLIN(1733)			if (_hx_tmp) {
HXLINE(1735)				 ::flixel::graphics::FlxGraphic oldBuffer = this->screen->graphic;
HXLINE(1736)				this->buffer =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->width,this->height,true,0);
HXLINE(1737)				this->screen->set_pixels(this->buffer);
HXLINE(1738)				{
HXLINE(1738)					 ::flixel::math::FlxBasePoint this1 = this->screen->origin;
HXDLIN(1738)					this1->set_x(( (Float)(0) ));
HXDLIN(1738)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(1739)				this->_flashBitmap->set_bitmapData(this->buffer);
HXLINE(1740)				this->_flashRect->width = ( (Float)(this->width) );
HXLINE(1741)				this->_flashRect->height = ( (Float)(this->height) );
HXLINE(1742)				this->_fill = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_fill);
HXLINE(1743)				this->_fill =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->width,this->height,true,0);
HXLINE(1744)				::flixel::FlxG_obj::bitmap->removeIfNoUse(oldBuffer);
            			}
HXLINE(1747)			{
HXLINE(1747)				this->_blitMatrix->identity();
HXDLIN(1747)				this->_blitMatrix->translate(-(this->viewMarginX),-(this->viewMarginY));
HXDLIN(1747)				this->_blitMatrix->scale(this->scaleX,this->scaleY);
HXDLIN(1747)				bool _hx_tmp1;
HXDLIN(1747)				if (!((this->scaleX < this->initialZoom))) {
HXLINE(1747)					_hx_tmp1 = (this->scaleY < this->initialZoom);
            				}
            				else {
HXLINE(1747)					_hx_tmp1 = true;
            				}
HXDLIN(1747)				this->_useBlitMatrix = _hx_tmp1;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,checkResize,(void))

void FlxCamera_obj::updateBlitMatrix(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1752_updateBlitMatrix)
HXLINE(1753)		this->_blitMatrix->identity();
HXLINE(1754)		this->_blitMatrix->translate(-(this->viewMarginX),-(this->viewMarginY));
HXLINE(1755)		this->_blitMatrix->scale(this->scaleX,this->scaleY);
HXLINE(1757)		bool _hx_tmp;
HXDLIN(1757)		if (!((this->scaleX < this->initialZoom))) {
HXLINE(1757)			_hx_tmp = (this->scaleY < this->initialZoom);
            		}
            		else {
HXLINE(1757)			_hx_tmp = true;
            		}
HXDLIN(1757)		this->_useBlitMatrix = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateBlitMatrix,(void))

void FlxCamera_obj::setSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1767_setSize)
HXLINE(1768)		this->set_width(Width);
HXLINE(1769)		this->set_height(Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

void FlxCamera_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1780_setPosition)
HXLINE(1781)		this->set_x(X);
HXLINE(1782)		this->set_y(Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

void FlxCamera_obj::setScrollBoundsRect(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_UpdateWorld){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            		bool UpdateWorld = __o_UpdateWorld.Default(false);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1795_setScrollBoundsRect)
HXLINE(1796)		if (UpdateWorld) {
HXLINE(1798)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN(1798)			_this->x = X;
HXDLIN(1798)			_this->y = Y;
HXDLIN(1798)			_this->width = Width;
HXDLIN(1798)			_this->height = Height;
            		}
HXLINE(1801)		this->setScrollBounds(X,(X + Width),Y,(Y + Height));
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setScrollBoundsRect,(void))

void FlxCamera_obj::setScrollBounds( ::Dynamic MinX, ::Dynamic MaxX, ::Dynamic MinY, ::Dynamic MaxY){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1814_setScrollBounds)
HXLINE(1815)		this->minScrollX = MinX;
HXLINE(1816)		this->maxScrollX = MaxX;
HXLINE(1817)		this->minScrollY = MinY;
HXLINE(1818)		this->maxScrollY = MaxY;
HXLINE(1819)		this->updateScroll();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,setScrollBounds,(void))

void FlxCamera_obj::setScale(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1830_setScale)
HXLINE(1831)		this->scaleX = X;
HXLINE(1832)		this->scaleY = Y;
HXLINE(1834)		this->totalScaleX = (this->scaleX * ::flixel::FlxG_obj::scaleMode->scale->x);
HXLINE(1835)		this->totalScaleY = (this->scaleY * ::flixel::FlxG_obj::scaleMode->scale->y);
HXLINE(1837)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1839)			{
HXLINE(1839)				this->_blitMatrix->identity();
HXDLIN(1839)				this->_blitMatrix->translate(-(this->viewMarginX),-(this->viewMarginY));
HXDLIN(1839)				this->_blitMatrix->scale(this->scaleX,this->scaleY);
HXDLIN(1839)				bool _hx_tmp;
HXDLIN(1839)				if (!((this->scaleX < this->initialZoom))) {
HXLINE(1839)					_hx_tmp = (this->scaleY < this->initialZoom);
            				}
            				else {
HXLINE(1839)					_hx_tmp = true;
            				}
HXDLIN(1839)				this->_useBlitMatrix = _hx_tmp;
            			}
HXLINE(1841)			if (this->_useBlitMatrix) {
HXLINE(1843)				this->_flashBitmap->set_scaleX((this->initialZoom * ::flixel::FlxG_obj::scaleMode->scale->x));
HXLINE(1844)				this->_flashBitmap->set_scaleY((this->initialZoom * ::flixel::FlxG_obj::scaleMode->scale->y));
            			}
            			else {
HXLINE(1848)				this->_flashBitmap->set_scaleX(this->totalScaleX);
HXLINE(1849)				this->_flashBitmap->set_scaleY(this->totalScaleY);
            			}
            		}
HXLINE(1853)		this->viewMarginX = (((((Float)0.5) * ( (Float)(this->width) )) * (this->scaleX - this->initialZoom)) / this->scaleX);
HXLINE(1854)		this->viewMarginY = (((((Float)0.5) * ( (Float)(this->height) )) * (this->scaleY - this->initialZoom)) / this->scaleY);
HXLINE(1856)		this->updateScrollRect();
HXLINE(1857)		this->updateInternalSpritePositions();
HXLINE(1859)		::flixel::FlxG_obj::cameras->cameraResized->dispatch(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

void FlxCamera_obj::onResize(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1867_onResize)
HXLINE(1868)		this->updateFlashOffset();
HXLINE(1869)		this->setScale(this->scaleX,this->scaleY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,onResize,(void))

 ::flixel::math::FlxRect FlxCamera_obj::getViewRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1883_getViewRect)
HXLINE(1884)		if (::hx::IsNull( rect )) {
HXLINE(1885)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1885)			_this->x = ( (Float)(0) );
HXDLIN(1885)			_this->y = ( (Float)(0) );
HXDLIN(1885)			_this->width = ( (Float)(0) );
HXDLIN(1885)			_this->height = ( (Float)(0) );
HXDLIN(1885)			 ::flixel::math::FlxRect rect1 = _this;
HXDLIN(1885)			rect1->_inPool = false;
HXDLIN(1885)			rect = rect1;
            		}
HXLINE(1887)		rect->x = this->viewMarginX;
HXDLIN(1887)		rect->y = this->viewMarginY;
HXDLIN(1887)		rect->width = (( (Float)(this->width) ) - (this->viewMarginX * ( (Float)(2) )));
HXDLIN(1887)		rect->height = (( (Float)(this->height) ) - (this->viewMarginY * ( (Float)(2) )));
HXDLIN(1887)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,getViewRect,return )

 ::flixel::math::FlxRect FlxCamera_obj::getViewMarginRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1896_getViewMarginRect)
HXLINE(1897)		if (::hx::IsNull( rect )) {
HXLINE(1898)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(1898)			_this->x = ( (Float)(0) );
HXDLIN(1898)			_this->y = ( (Float)(0) );
HXDLIN(1898)			_this->width = ( (Float)(0) );
HXDLIN(1898)			_this->height = ( (Float)(0) );
HXDLIN(1898)			 ::flixel::math::FlxRect rect1 = _this;
HXDLIN(1898)			rect1->_inPool = false;
HXDLIN(1898)			rect = rect1;
            		}
HXLINE(1900)		rect->x = this->viewMarginX;
HXDLIN(1900)		rect->y = this->viewMarginY;
HXDLIN(1900)		rect->width = (( (Float)(this->width) ) - (this->viewMarginX * ( (Float)(2) )));
HXDLIN(1900)		rect->height = (( (Float)(this->height) ) - (this->viewMarginY * ( (Float)(2) )));
HXDLIN(1900)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,getViewMarginRect,return )

bool FlxCamera_obj::containsPoint( ::flixel::math::FlxBasePoint point,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1909_containsPoint)
HXLINE(1910)		bool contained;
HXDLIN(1910)		bool contained1;
HXDLIN(1910)		bool contained2;
HXDLIN(1910)		if (((point->x + width) > this->viewMarginX)) {
HXLINE(1910)			contained2 = (point->x < (( (Float)(this->width) ) - this->viewMarginX));
            		}
            		else {
HXLINE(1910)			contained2 = false;
            		}
HXDLIN(1910)		if (contained2) {
HXLINE(1910)			contained1 = ((point->y + height) > this->viewMarginY);
            		}
            		else {
HXLINE(1910)			contained1 = false;
            		}
HXDLIN(1910)		if (contained1) {
HXLINE(1910)			contained = (point->y < (( (Float)(this->height) ) - this->viewMarginY));
            		}
            		else {
HXLINE(1910)			contained = false;
            		}
HXLINE(1912)		if (point->_weak) {
HXLINE(1912)			point->put();
            		}
HXLINE(1913)		return contained;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,containsPoint,return )

bool FlxCamera_obj::containsRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1921_containsRect)
HXLINE(1922)		bool contained;
HXDLIN(1922)		bool contained1;
HXDLIN(1922)		bool contained2;
HXDLIN(1922)		if (((rect->x + rect->width) > this->viewMarginX)) {
HXLINE(1922)			contained2 = (rect->x < (( (Float)(this->width) ) - this->viewMarginX));
            		}
            		else {
HXLINE(1922)			contained2 = false;
            		}
HXDLIN(1922)		if (contained2) {
HXLINE(1922)			contained1 = ((rect->y + rect->height) > this->viewMarginY);
            		}
            		else {
HXLINE(1922)			contained1 = false;
            		}
HXDLIN(1922)		if (contained1) {
HXLINE(1922)			contained = (rect->y < (( (Float)(this->height) ) - this->viewMarginY));
            		}
            		else {
HXLINE(1922)			contained = false;
            		}
HXLINE(1924)		if (rect->_weak) {
HXLINE(1924)			if (!(rect->_inPool)) {
HXLINE(1924)				rect->_inPool = true;
HXDLIN(1924)				rect->_weak = false;
HXDLIN(1924)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            			}
            		}
HXLINE(1925)		return contained;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,containsRect,return )

Float FlxCamera_obj::set_followLerp(Float Value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1930_set_followLerp)
HXDLIN(1930)		 ::Dynamic Max = (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::updateFramerate) ));
HXDLIN(1930)		Float lowerBound;
HXDLIN(1930)		if ((Value < 0)) {
HXDLIN(1930)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXDLIN(1930)			lowerBound = Value;
            		}
HXDLIN(1930)		Float _hx_tmp;
HXDLIN(1930)		bool _hx_tmp1;
HXDLIN(1930)		if (::hx::IsNotNull( Max )) {
HXDLIN(1930)			_hx_tmp1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXDLIN(1930)			_hx_tmp1 = false;
            		}
HXDLIN(1930)		if (_hx_tmp1) {
HXDLIN(1930)			_hx_tmp = ( (Float)(Max) );
            		}
            		else {
HXDLIN(1930)			_hx_tmp = lowerBound;
            		}
HXDLIN(1930)		return (this->followLerp = _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_followLerp,return )

int FlxCamera_obj::set_width(int Value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1934_set_width)
HXLINE(1935)		bool _hx_tmp;
HXDLIN(1935)		if ((this->width != Value)) {
HXLINE(1935)			_hx_tmp = (Value > 0);
            		}
            		else {
HXLINE(1935)			_hx_tmp = false;
            		}
HXDLIN(1935)		if (_hx_tmp) {
HXLINE(1937)			this->width = Value;
HXLINE(1938)			this->viewMarginX = (((((Float)0.5) * ( (Float)(this->width) )) * (this->scaleX - this->initialZoom)) / this->scaleX);
HXLINE(1939)			this->updateFlashOffset();
HXLINE(1940)			this->updateScrollRect();
HXLINE(1941)			this->updateInternalSpritePositions();
HXLINE(1943)			::flixel::FlxG_obj::cameras->cameraResized->dispatch(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1945)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height(int Value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1949_set_height)
HXLINE(1950)		bool _hx_tmp;
HXDLIN(1950)		if ((this->height != Value)) {
HXLINE(1950)			_hx_tmp = (Value > 0);
            		}
            		else {
HXLINE(1950)			_hx_tmp = false;
            		}
HXDLIN(1950)		if (_hx_tmp) {
HXLINE(1952)			this->height = Value;
HXLINE(1953)			this->viewMarginY = (((((Float)0.5) * ( (Float)(this->height) )) * (this->scaleY - this->initialZoom)) / this->scaleY);
HXLINE(1954)			this->updateFlashOffset();
HXLINE(1955)			this->updateScrollRect();
HXLINE(1956)			this->updateInternalSpritePositions();
HXLINE(1958)			::flixel::FlxG_obj::cameras->cameraResized->dispatch(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1960)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom(Float Zoom){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1964_set_zoom)
HXLINE(1965)		Float _hx_tmp;
HXDLIN(1965)		if ((Zoom == 0)) {
HXLINE(1965)			_hx_tmp = ::flixel::FlxCamera_obj::defaultZoom;
            		}
            		else {
HXLINE(1965)			_hx_tmp = Zoom;
            		}
HXDLIN(1965)		this->zoom = _hx_tmp;
HXLINE(1966)		this->setScale(this->zoom,this->zoom);
HXLINE(1967)		return this->zoom;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1971_set_alpha)
HXLINE(1972)		Float lowerBound;
HXDLIN(1972)		if ((Alpha < 0)) {
HXLINE(1972)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1972)			lowerBound = Alpha;
            		}
HXDLIN(1972)		Float _hx_tmp;
HXDLIN(1972)		if ((lowerBound > 1)) {
HXLINE(1972)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1972)			_hx_tmp = lowerBound;
            		}
HXDLIN(1972)		this->alpha = _hx_tmp;
HXLINE(1973)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1975)			this->_flashBitmap->set_alpha(Alpha);
            		}
            		else {
HXLINE(1979)			this->canvas->set_alpha(Alpha);
            		}
HXLINE(1981)		return Alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle(Float Angle){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1985_set_angle)
HXLINE(1986)		this->angle = Angle;
HXLINE(1987)		this->flashSprite->set_rotation(Angle);
HXLINE(1988)		return Angle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_1992_set_color)
HXLINE(1993)		this->color = Color;
HXLINE(1994)		 ::openfl::geom::ColorTransform colorTransform;
HXLINE(1996)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1998)			if (::hx::IsNull( this->_flashBitmap )) {
HXLINE(2000)				return Color;
            			}
HXLINE(2002)			colorTransform = this->_flashBitmap->get_transform()->get_colorTransform();
            		}
            		else {
HXLINE(2006)			colorTransform = this->canvas->get_transform()->get_colorTransform();
            		}
HXLINE(2009)		colorTransform->redMultiplier = (( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE(2010)		colorTransform->greenMultiplier = (( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE(2011)		colorTransform->blueMultiplier = (( (Float)((this->color & 255)) ) / ( (Float)(255) ));
HXLINE(2013)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(2015)			this->_flashBitmap->get_transform()->set_colorTransform(colorTransform);
            		}
            		else {
HXLINE(2019)			this->canvas->get_transform()->set_colorTransform(colorTransform);
            		}
HXLINE(2022)		return Color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing(bool Antialiasing){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2026_set_antialiasing)
HXLINE(2027)		this->antialiasing = Antialiasing;
HXLINE(2028)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(2030)			this->_flashBitmap->smoothing = Antialiasing;
            		}
HXLINE(2032)		return Antialiasing;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

Float FlxCamera_obj::set_x(Float x){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2036_set_x)
HXLINE(2037)		this->x = x;
HXLINE(2038)		this->updateFlashSpritePosition();
HXLINE(2039)		return x;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_x,return )

Float FlxCamera_obj::set_y(Float y){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2043_set_y)
HXLINE(2044)		this->y = y;
HXLINE(2045)		this->updateFlashSpritePosition();
HXLINE(2046)		return y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_y,return )

bool FlxCamera_obj::set_visible(bool visible){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2050_set_visible)
HXLINE(2051)		if (::hx::IsNotNull( this->flashSprite )) {
HXLINE(2053)			this->flashSprite->set_visible(visible);
            		}
HXLINE(2055)		return (this->visible = visible);
            	}


void FlxCamera_obj::calcOffsetX(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2059_calcOffsetX)
HXDLIN(2059)		this->viewMarginX = (((((Float)0.5) * ( (Float)(this->width) )) * (this->scaleX - this->initialZoom)) / this->scaleX);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,calcOffsetX,(void))

void FlxCamera_obj::calcOffsetY(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2062_calcOffsetY)
HXDLIN(2062)		this->viewMarginY = (((((Float)0.5) * ( (Float)(this->height) )) * (this->scaleY - this->initialZoom)) / this->scaleY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,calcOffsetY,(void))

void FlxCamera_obj::calcMarginX(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2066_calcMarginX)
HXDLIN(2066)		this->viewMarginX = (((((Float)0.5) * ( (Float)(this->width) )) * (this->scaleX - this->initialZoom)) / this->scaleX);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,calcMarginX,(void))

void FlxCamera_obj::calcMarginY(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2071_calcMarginY)
HXDLIN(2071)		this->viewMarginY = (((((Float)0.5) * ( (Float)(this->height) )) * (this->scaleY - this->initialZoom)) / this->scaleY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,calcMarginY,(void))

Float FlxCamera_obj::get_viewMarginLeft(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2086_get_viewMarginLeft)
HXDLIN(2086)		return this->viewMarginX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewMarginLeft,return )

Float FlxCamera_obj::get_viewMarginTop(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2091_get_viewMarginTop)
HXDLIN(2091)		return this->viewMarginY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewMarginTop,return )

Float FlxCamera_obj::get_viewMarginRight(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2096_get_viewMarginRight)
HXDLIN(2096)		return (( (Float)(this->width) ) - this->viewMarginX);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewMarginRight,return )

Float FlxCamera_obj::get_viewMarginBottom(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2101_get_viewMarginBottom)
HXDLIN(2101)		return (( (Float)(this->height) ) - this->viewMarginY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewMarginBottom,return )

Float FlxCamera_obj::get_viewWidth(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2106_get_viewWidth)
HXDLIN(2106)		return (( (Float)(this->width) ) - (this->viewMarginX * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewWidth,return )

Float FlxCamera_obj::get_viewHeight(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2111_get_viewHeight)
HXDLIN(2111)		return (( (Float)(this->height) ) - (this->viewMarginY * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewHeight,return )

Float FlxCamera_obj::get_viewX(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2116_get_viewX)
HXDLIN(2116)		return (this->scroll->x + this->viewMarginX);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewX,return )

Float FlxCamera_obj::get_viewY(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2121_get_viewY)
HXDLIN(2121)		return (this->scroll->y + this->viewMarginY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewY,return )

Float FlxCamera_obj::get_viewLeft(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2126_get_viewLeft)
HXDLIN(2126)		return (this->scroll->x + this->viewMarginX);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewLeft,return )

Float FlxCamera_obj::get_viewTop(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2131_get_viewTop)
HXDLIN(2131)		return (this->scroll->y + this->viewMarginY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewTop,return )

Float FlxCamera_obj::get_viewRight(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2136_get_viewRight)
HXDLIN(2136)		return (this->scroll->x + (( (Float)(this->width) ) - this->viewMarginX));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewRight,return )

Float FlxCamera_obj::get_viewBottom(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2141_get_viewBottom)
HXDLIN(2141)		return (this->scroll->y + (( (Float)(this->height) ) - this->viewMarginY));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewBottom,return )

Float FlxCamera_obj::get_viewOffsetX(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2148_get_viewOffsetX)
HXDLIN(2148)		return this->viewMarginX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewOffsetX,return )

Float FlxCamera_obj::set_viewOffsetX(Float value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2153_set_viewOffsetX)
HXDLIN(2153)		return (this->viewMarginX = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_viewOffsetX,return )

Float FlxCamera_obj::get_viewOffsetY(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2158_get_viewOffsetY)
HXDLIN(2158)		return this->viewMarginY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewOffsetY,return )

Float FlxCamera_obj::set_viewOffsetY(Float value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2163_set_viewOffsetY)
HXDLIN(2163)		return (this->viewMarginY = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_viewOffsetY,return )

Float FlxCamera_obj::get_viewOffsetWidth(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2168_get_viewOffsetWidth)
HXDLIN(2168)		return (( (Float)(this->width) ) - this->viewMarginX);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewOffsetWidth,return )

Float FlxCamera_obj::get_viewOffsetHeight(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2173_get_viewOffsetHeight)
HXDLIN(2173)		return (( (Float)(this->height) ) - this->viewMarginY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_viewOffsetHeight,return )

::Array< ::Dynamic> FlxCamera_obj::get__filters(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2178_get__filters)
HXDLIN(2178)		return this->filters;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get__filters,return )

::Array< ::Dynamic> FlxCamera_obj::set__filters(::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2183_set__filters)
HXDLIN(2183)		return (this->filters = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set__filters,return )

 ::flixel::FlxCamera FlxCamera_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2192_get_camera)
HXDLIN(2192)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("don't reference camera.camera",c9,e5,ca,73)));
HXDLIN(2192)		return null();
            	}


 ::flixel::FlxCamera FlxCamera_obj::set_camera( ::flixel::FlxCamera value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2196_set_camera)
HXDLIN(2196)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("don't reference camera.camera",c9,e5,ca,73)));
HXDLIN(2196)		return null();
            	}


::Array< ::Dynamic> FlxCamera_obj::get_cameras(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2200_get_cameras)
HXDLIN(2200)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("don't reference camera.cameras",8a,2a,be,dd)));
HXDLIN(2200)		return null();
            	}


::Array< ::Dynamic> FlxCamera_obj::set_cameras(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2204_set_cameras)
HXDLIN(2204)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("don't reference camera.cameras",8a,2a,be,dd)));
HXDLIN(2204)		return null();
            	}


Float FlxCamera_obj::defaultZoom;

::Array< ::Dynamic> FlxCamera_obj::_defaultCameras;

 ::flixel::graphics::tile::FlxDrawQuadsItem FlxCamera_obj::_storageTilesHead;

 ::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::_storageTrianglesHead;

 ::openfl::_Vector::FloatVector FlxCamera_obj::drawVertices;

 ::openfl::display::Sprite FlxCamera_obj::trianglesSprite;

 ::flixel::math::FlxBasePoint FlxCamera_obj::renderPoint;

 ::flixel::math::FlxRect FlxCamera_obj::renderRect;

::Array< ::Dynamic> FlxCamera_obj::get_defaultCameras(){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2076_get_defaultCameras)
HXDLIN(2076)		return ::flixel::FlxCamera_obj::_defaultCameras;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,get_defaultCameras,return )

::Array< ::Dynamic> FlxCamera_obj::set_defaultCameras(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_2081_set_defaultCameras)
HXDLIN(2081)		return (::flixel::FlxCamera_obj::_defaultCameras = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_defaultCameras,return )


::hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_Zoom) {
	::hx::ObjectPtr< FlxCamera_obj > __this = new FlxCamera_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return __this;
}

::hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_Zoom) {
	FlxCamera_obj *__this = (FlxCamera_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxCamera_obj), true, "flixel.FlxCamera"));
	*(void **)__this = FlxCamera_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return __this;
}

FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_MARK_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetOffset,"targetOffset");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(minScrollX,"minScrollX");
	HX_MARK_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_MARK_MEMBER_NAME(minScrollY,"minScrollY");
	HX_MARK_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectShake,"pixelPerfectShake");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(viewMarginX,"viewMarginX");
	HX_MARK_MEMBER_NAME(viewMarginY,"viewMarginY");
	HX_MARK_MEMBER_NAME(_blitMatrix,"_blitMatrix");
	HX_MARK_MEMBER_NAME(_useBlitMatrix,"_useBlitMatrix");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeAxes,"_fxShakeAxes");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(_fill,"_fill");
	HX_MARK_MEMBER_NAME(_flashBitmap,"_flashBitmap");
	HX_MARK_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(_helperMatrix,"_helperMatrix");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_headTiles,"_headTiles");
	HX_MARK_MEMBER_NAME(_headTriangles,"_headTriangles");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_VISIT_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetOffset,"targetOffset");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(minScrollX,"minScrollX");
	HX_VISIT_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_VISIT_MEMBER_NAME(minScrollY,"minScrollY");
	HX_VISIT_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectShake,"pixelPerfectShake");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(viewMarginX,"viewMarginX");
	HX_VISIT_MEMBER_NAME(viewMarginY,"viewMarginY");
	HX_VISIT_MEMBER_NAME(_blitMatrix,"_blitMatrix");
	HX_VISIT_MEMBER_NAME(_useBlitMatrix,"_useBlitMatrix");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeAxes,"_fxShakeAxes");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(_fill,"_fill");
	HX_VISIT_MEMBER_NAME(_flashBitmap,"_flashBitmap");
	HX_VISIT_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(_helperMatrix,"_helperMatrix");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_headTiles,"_headTiles");
	HX_VISIT_MEMBER_NAME(_headTriangles,"_headTriangles");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxCamera_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"fade") ) { return ::hx::Val( fade_dyn() ); }
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return ::hx::Val( style ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"viewX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewX() ); }
		if (HX_FIELD_EQ(inName,"viewY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewY() ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"_fill") ) { return ::hx::Val( _fill ); }
		if (HX_FIELD_EQ(inName,"flash") ) { return ::hx::Val( flash_dyn() ); }
		if (HX_FIELD_EQ(inName,"shake") ) { return ::hx::Val( shake_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return ::hx::Val( scroll ); }
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"screen") ) { return ::hx::Val( screen ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"canvas") ) { return ::hx::Val( canvas ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return ::hx::Val( stopFX_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return ::hx::Val( drawFX_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return ::hx::Val( bgColor ); }
		if (HX_FIELD_EQ(inName,"viewTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewTop() ); }
		if (HX_FIELD_EQ(inName,"filters") ) { return ::hx::Val( filters ); }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return ::hx::Val( _bounds ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return ::hx::Val( focusOn_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return ::hx::Val( deadzone ); }
		if (HX_FIELD_EQ(inName,"viewLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewLeft() ); }
		if (HX_FIELD_EQ(inName,"_filters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__filters() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return ::hx::Val( setScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return ::hx::Val( set_zoom_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewWidth() ); }
		if (HX_FIELD_EQ(inName,"viewRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewRight() ); }
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return ::hx::Val( _fxFadeIn ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewX") ) { return ::hx::Val( get_viewX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewY") ) { return ::hx::Val( get_viewY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return ::hx::Val( followLerp ); }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { return ::hx::Val( minScrollX ); }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { return ::hx::Val( maxScrollX ); }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { return ::hx::Val( minScrollY ); }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { return ::hx::Val( maxScrollY ); }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewHeight() ); }
		if (HX_FIELD_EQ(inName,"viewBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewBottom() ); }
		if (HX_FIELD_EQ(inName,"followLead") ) { return ::hx::Val( followLead ); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { return ::hx::Val( _headTiles ); }
		if (HX_FIELD_EQ(inName,"drawPixels") ) { return ::hx::Val( drawPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return ::hx::Val( copyPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return ::hx::Val( updateFade_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFilters") ) { return ::hx::Val( setFilters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return ::hx::Val( get_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return ::hx::Val( set_camera_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { return ::hx::Val( totalScaleX ); }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { return ::hx::Val( totalScaleY ); }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return ::hx::Val( flashSprite ); }
		if (HX_FIELD_EQ(inName,"viewMarginX") ) { return ::hx::Val( viewMarginX ); }
		if (HX_FIELD_EQ(inName,"viewMarginY") ) { return ::hx::Val( viewMarginY ); }
		if (HX_FIELD_EQ(inName,"viewOffsetX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewOffsetX() ); }
		if (HX_FIELD_EQ(inName,"viewOffsetY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewOffsetY() ); }
		if (HX_FIELD_EQ(inName,"_blitMatrix") ) { return ::hx::Val( _blitMatrix ); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { return ::hx::Val( initialZoom ); }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { return ::hx::Val( _scrollRect ); }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return ::hx::Val( updateFlash_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return ::hx::Val( updateShake_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkResize") ) { return ::hx::Val( checkResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getViewRect") ) { return ::hx::Val( getViewRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcOffsetX") ) { return ::hx::Val( calcOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcOffsetY") ) { return ::hx::Val( calcOffsetY_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcMarginX") ) { return ::hx::Val( calcMarginX_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcMarginY") ) { return ::hx::Val( calcMarginY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewTop") ) { return ::hx::Val( get_viewTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return ::hx::Val( get_cameras_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return ::hx::Val( set_cameras_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { return ::hx::Val( targetOffset ); }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return ::hx::Val( _flashOffset ); }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return ::hx::Val( _fxFadeColor ); }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return ::hx::Val( _fxFadeAlpha ); }
		if (HX_FIELD_EQ(inName,"_fxShakeAxes") ) { return ::hx::Val( _fxShakeAxes ); }
		if (HX_FIELD_EQ(inName,"_flashBitmap") ) { return ::hx::Val( _flashBitmap ); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return ::hx::Val( _helperPoint ); }
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return ::hx::Val( updateScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return ::hx::Val( updateFollow_dyn() ); }
		if (HX_FIELD_EQ(inName,"completeFade") ) { return ::hx::Val( completeFade_dyn() ); }
		if (HX_FIELD_EQ(inName,"snapToTarget") ) { return ::hx::Val( snapToTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsRect") ) { return ::hx::Val( containsRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewLeft") ) { return ::hx::Val( get_viewLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"get__filters") ) { return ::hx::Val( get__filters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__filters") ) { return ::hx::Val( set__filters_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewMarginTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewMarginTop() ); }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return ::hx::Val( _fxFlashColor ); }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return ::hx::Val( _fxFlashAlpha ); }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return ::hx::Val( _scrollTarget ); }
		if (HX_FIELD_EQ(inName,"_helperMatrix") ) { return ::hx::Val( _helperMatrix ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformRect") ) { return ::hx::Val( transformRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindScrollPos") ) { return ::hx::Val( bindScrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewWidth") ) { return ::hx::Val( get_viewWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewRight") ) { return ::hx::Val( get_viewRight_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewMarginLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewMarginLeft() ); }
		if (HX_FIELD_EQ(inName,"_useBlitMatrix") ) { return ::hx::Val( _useBlitMatrix ); }
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { return ::hx::Val( filtersEnabled ); }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { return ::hx::Val( _headTriangles ); }
		if (HX_FIELD_EQ(inName,"startQuadBatch") ) { return ::hx::Val( startQuadBatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return ::hx::Val( clearDrawStack_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return ::hx::Val( transformPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_followLerp") ) { return ::hx::Val( set_followLerp_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewHeight") ) { return ::hx::Val( get_viewHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewBottom") ) { return ::hx::Val( get_viewBottom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"viewOffsetWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewOffsetWidth() ); }
		if (HX_FIELD_EQ(inName,"viewMarginRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewMarginRight() ); }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return ::hx::Val( _fxFadeDuration ); }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return ::hx::Val( _fxFadeComplete ); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return ::hx::Val( transformVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformObject") ) { return ::hx::Val( transformObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScrollBounds") ) { return ::hx::Val( setScrollBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewOffsetX") ) { return ::hx::Val( get_viewOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewOffsetX") ) { return ::hx::Val( set_viewOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewOffsetY") ) { return ::hx::Val( get_viewOffsetY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewOffsetY") ) { return ::hx::Val( set_viewOffsetY_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"viewOffsetHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewOffsetHeight() ); }
		if (HX_FIELD_EQ(inName,"viewMarginBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewMarginBottom() ); }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return ::hx::Val( _fxFlashDuration ); }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return ::hx::Val( _fxFlashComplete ); }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return ::hx::Val( _fxShakeDuration ); }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return ::hx::Val( _fxShakeComplete ); }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { return ::hx::Val( _currentDrawItem ); }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return ::hx::Val( _headOfDrawStack ); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return ::hx::Val( updateScrollRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBlitMatrix") ) { return ::hx::Val( updateBlitMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectShake") ) { return ::hx::Val( pixelPerfectShake ); }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return ::hx::Val( _fxShakeIntensity ); }
		if (HX_FIELD_EQ(inName,"updateFlashOffset") ) { return ::hx::Val( updateFlashOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getViewMarginRect") ) { return ::hx::Val( getViewMarginRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewMarginTop") ) { return ::hx::Val( get_viewMarginTop_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return ::hx::Val( useBgAlphaBlending ); }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"get_viewMarginLeft") ) { return ::hx::Val( get_viewMarginLeft_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return ::hx::Val( _lastTargetPosition ); }
		if (HX_FIELD_EQ(inName,"startTrianglesBatch") ) { return ::hx::Val( startTrianglesBatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScrollBoundsRect") ) { return ::hx::Val( setScrollBoundsRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewMarginRight") ) { return ::hx::Val( get_viewMarginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewOffsetWidth") ) { return ::hx::Val( get_viewOffsetWidth_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_viewMarginBottom") ) { return ::hx::Val( get_viewMarginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewOffsetHeight") ) { return ::hx::Val( get_viewOffsetHeight_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getNewDrawTrianglesItem") ) { return ::hx::Val( getNewDrawTrianglesItem_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateFlashSpritePosition") ) { return ::hx::Val( updateFlashSpritePosition_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"updateInternalSpritePositions") ) { return ::hx::Val( updateInternalSpritePositions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxCamera_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderRect") ) { outValue = ( renderRect ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { outValue = ( defaultZoom ); return true; }
		if (HX_FIELD_EQ(inName,"renderPoint") ) { outValue = ( renderPoint ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertices") ) { outValue = ( drawVertices ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_defaultCameras() ); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultCameras") ) { outValue = ( _defaultCameras ); return true; }
		if (HX_FIELD_EQ(inName,"trianglesSprite") ) { outValue = ( trianglesSprite ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { outValue = ( _storageTilesHead ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_defaultCameras") ) { outValue = get_defaultCameras_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_defaultCameras") ) { outValue = set_defaultCameras_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { outValue = ( _storageTrianglesHead ); return true; }
	}
	return false;
}

::hx::Val FlxCamera_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_zoom(inValue.Cast< Float >()) );zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast<  ::flixel::FlxCameraFollowStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) );width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fill") ) { _fill=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) );height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__filters(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_followLerp(inValue.Cast< Float >()) );followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { minScrollX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { maxScrollX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { minScrollY=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { maxScrollY=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { _headTiles=inValue.Cast<  ::flixel::graphics::tile::FlxDrawQuadsItem >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { totalScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { totalScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewMarginX") ) { viewMarginX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewMarginY") ) { viewMarginY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewOffsetX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewOffsetX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"viewOffsetY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewOffsetY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_blitMatrix") ) { _blitMatrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { _scrollRect=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { targetOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeAxes") ) { _fxShakeAxes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashBitmap") ) { _flashBitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperMatrix") ) { _helperMatrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_useBlitMatrix") ) { _useBlitMatrix=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { filtersEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { _headTriangles=inValue.Cast<  ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { _currentDrawItem=inValue.Cast<  ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast<  ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectShake") ) { pixelPerfectShake=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxCamera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderRect") ) { renderRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"renderPoint") ) { renderPoint=ioValue.Cast<  ::flixel::math::FlxBasePoint >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertices") ) { drawVertices=ioValue.Cast<  ::openfl::_Vector::FloatVector >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultCameras(ioValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultCameras") ) { _defaultCameras=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"trianglesSprite") ) { trianglesSprite=ioValue.Cast<  ::openfl::display::Sprite >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { _storageTilesHead=ioValue.Cast<  ::flixel::graphics::tile::FlxDrawQuadsItem >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { _storageTrianglesHead=ioValue.Cast<  ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return true; }
	}
	return false;
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("totalScaleX",72,dd,5b,02));
	outFields->push(HX_("totalScaleY",73,dd,5b,02));
	outFields->push(HX_("style",31,a5,1d,84));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("targetOffset",c4,d1,c3,1c));
	outFields->push(HX_("followLerp",88,dc,83,d9));
	outFields->push(HX_("deadzone",d0,12,55,6d));
	outFields->push(HX_("minScrollX",39,80,8f,f6));
	outFields->push(HX_("maxScrollX",67,ad,fc,9a));
	outFields->push(HX_("minScrollY",3a,80,8f,f6));
	outFields->push(HX_("maxScrollY",68,ad,fc,9a));
	outFields->push(HX_("scroll",0d,d8,64,47));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("bgColor",5e,81,83,f7));
	outFields->push(HX_("screen",6c,3b,5d,47));
	outFields->push(HX_("useBgAlphaBlending",23,25,12,b2));
	outFields->push(HX_("flashSprite",d5,e9,0d,f4));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixelPerfectShake",1f,5e,46,36));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("viewMarginX",85,f4,67,47));
	outFields->push(HX_("viewMarginY",86,f4,67,47));
	outFields->push(HX_("viewOffsetX",80,45,78,b9));
	outFields->push(HX_("viewOffsetY",81,45,78,b9));
	outFields->push(HX_("viewOffsetWidth",0e,1f,16,e1));
	outFields->push(HX_("viewOffsetHeight",df,85,94,c8));
	outFields->push(HX_("viewMarginLeft",1a,5a,50,ab));
	outFields->push(HX_("viewMarginTop",e2,37,af,e8));
	outFields->push(HX_("viewMarginRight",69,8a,0b,b2));
	outFields->push(HX_("viewMarginBottom",be,23,60,2f));
	outFields->push(HX_("viewWidth",61,25,f7,0a));
	outFields->push(HX_("viewHeight",2c,08,99,43));
	outFields->push(HX_("viewX",53,e6,fc,36));
	outFields->push(HX_("viewY",54,e6,fc,36));
	outFields->push(HX_("viewLeft",0c,fd,d1,84));
	outFields->push(HX_("viewTop",30,b9,be,9c));
	outFields->push(HX_("viewRight",37,7b,f8,29));
	outFields->push(HX_("viewBottom",30,e7,c5,a6));
	outFields->push(HX_("_blitMatrix",75,45,ab,aa));
	outFields->push(HX_("_useBlitMatrix",be,57,dc,4e));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("followLead",ad,cd,83,d9));
	outFields->push(HX_("filtersEnabled",06,08,9b,18));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashOffset",64,53,c1,f6));
	outFields->push(HX_("_fxFlashColor",64,98,14,dc));
	outFields->push(HX_("_fxFlashDuration",f3,7e,d1,2d));
	outFields->push(HX_("_fxFlashAlpha",5f,ce,4e,b3));
	outFields->push(HX_("_fxFadeColor",96,44,a8,b9));
	outFields->push(HX_("_lastTargetPosition",2f,d6,08,c4));
	outFields->push(HX_("_scrollTarget",1d,da,1d,c1));
	outFields->push(HX_("_fxFadeDuration",01,fe,dd,9f));
	outFields->push(HX_("_fxFadeIn",d2,da,fe,a8));
	outFields->push(HX_("_fxFadeAlpha",91,7a,e2,90));
	outFields->push(HX_("_fxShakeIntensity",5e,86,94,7a));
	outFields->push(HX_("_fxShakeDuration",09,2e,72,36));
	outFields->push(HX_("_fxShakeAxes",5a,79,f0,5e));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("filters",bb,a1,46,09));
	outFields->push(HX_("_filters",3c,fb,fe,42));
	outFields->push(HX_("initialZoom",b7,71,1d,2d));
	outFields->push(HX_("_fill",62,ea,cc,f6));
	outFields->push(HX_("_flashBitmap",c0,cb,8d,87));
	outFields->push(HX_("_scrollRect",f0,a8,f0,db));
	outFields->push(HX_("_bounds",14,98,94,d4));
	outFields->push(HX_("canvas",d8,54,42,b8));
	outFields->push(HX_("_helperMatrix",2e,81,ce,de));
	outFields->push(HX_("_helperPoint",03,e6,14,f8));
	outFields->push(HX_("_currentDrawItem",11,6b,5a,19));
	outFields->push(HX_("_headOfDrawStack",ce,c5,68,ac));
	outFields->push(HX_("_headTiles",06,ac,50,ff));
	outFields->push(HX_("_headTriangles",ac,b3,7c,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxCamera_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleX),HX_("totalScaleX",72,dd,5b,02)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleY),HX_("totalScaleY",73,dd,5b,02)},
	{::hx::fsObject /*  ::flixel::FlxCameraFollowStyle */ ,(int)offsetof(FlxCamera_obj,style),HX_("style",31,a5,1d,84)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxCamera_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,targetOffset),HX_("targetOffset",c4,d1,c3,1c)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_("followLerp",88,dc,83,d9)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxCamera_obj,deadzone),HX_("deadzone",d0,12,55,6d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,minScrollX),HX_("minScrollX",39,80,8f,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,maxScrollX),HX_("maxScrollX",67,ad,fc,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,minScrollY),HX_("minScrollY",3a,80,8f,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,maxScrollY),HX_("maxScrollY",68,ad,fc,9a)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,scroll),HX_("scroll",0d,d8,64,47)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxCamera_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_("bgColor",5e,81,83,f7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxCamera_obj,screen),HX_("screen",6c,3b,5d,47)},
	{::hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_("useBgAlphaBlending",23,25,12,b2)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_("flashSprite",d5,e9,0d,f4)},
	{::hx::fsBool,(int)offsetof(FlxCamera_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,pixelPerfectShake),HX_("pixelPerfectShake",1f,5e,46,36)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,viewMarginX),HX_("viewMarginX",85,f4,67,47)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,viewMarginY),HX_("viewMarginY",86,f4,67,47)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxCamera_obj,_blitMatrix),HX_("_blitMatrix",75,45,ab,aa)},
	{::hx::fsBool,(int)offsetof(FlxCamera_obj,_useBlitMatrix),HX_("_useBlitMatrix",be,57,dc,4e)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,followLead),HX_("followLead",ad,cd,83,d9)},
	{::hx::fsBool,(int)offsetof(FlxCamera_obj,filtersEnabled),HX_("filtersEnabled",06,08,9b,18)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_("_flashOffset",64,53,c1,f6)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_("_fxFlashColor",64,98,14,dc)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_("_fxFlashDuration",f3,7e,d1,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_("_fxFlashComplete",58,70,0b,99)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_("_fxFlashAlpha",5f,ce,4e,b3)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_("_fxFadeColor",96,44,a8,b9)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_("_lastTargetPosition",2f,d6,08,c4)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_("_scrollTarget",1d,da,1d,c1)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_("_fxFadeDuration",01,fe,dd,9f)},
	{::hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_("_fxFadeIn",d2,da,fe,a8)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_("_fxFadeComplete",66,ef,17,0b)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_("_fxFadeAlpha",91,7a,e2,90)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_("_fxShakeIntensity",5e,86,94,7a)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_("_fxShakeDuration",09,2e,72,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_("_fxShakeComplete",6e,1f,ac,a1)},
	{::hx::fsInt,(int)offsetof(FlxCamera_obj,_fxShakeAxes),HX_("_fxShakeAxes",5a,79,f0,5e)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxCamera_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxCamera_obj,filters),HX_("filters",bb,a1,46,09)},
	{::hx::fsFloat,(int)offsetof(FlxCamera_obj,initialZoom),HX_("initialZoom",b7,71,1d,2d)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxCamera_obj,_fill),HX_("_fill",62,ea,cc,f6)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(FlxCamera_obj,_flashBitmap),HX_("_flashBitmap",c0,cb,8d,87)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(FlxCamera_obj,_scrollRect),HX_("_scrollRect",f0,a8,f0,db)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxCamera_obj,_bounds),HX_("_bounds",14,98,94,d4)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(FlxCamera_obj,canvas),HX_("canvas",d8,54,42,b8)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxCamera_obj,_helperMatrix),HX_("_helperMatrix",2e,81,ce,de)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxCamera_obj,_helperPoint),HX_("_helperPoint",03,e6,14,f8)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawBaseItem */ ,(int)offsetof(FlxCamera_obj,_currentDrawItem),HX_("_currentDrawItem",11,6b,5a,19)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawBaseItem */ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_("_headOfDrawStack",ce,c5,68,ac)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawQuadsItem */ ,(int)offsetof(FlxCamera_obj,_headTiles),HX_("_headTiles",06,ac,50,ff)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawTrianglesItem */ ,(int)offsetof(FlxCamera_obj,_headTriangles),HX_("_headTriangles",ac,b3,7c,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxCamera_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxCamera_obj::defaultZoom,HX_("defaultZoom",74,9c,b7,22)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &FlxCamera_obj::_defaultCameras,HX_("_defaultCameras",0c,2c,d2,5b)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawQuadsItem */ ,(void *) &FlxCamera_obj::_storageTilesHead,HX_("_storageTilesHead",e9,a8,61,af)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxDrawTrianglesItem */ ,(void *) &FlxCamera_obj::_storageTrianglesHead,HX_("_storageTrianglesHead",0f,09,78,17)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(void *) &FlxCamera_obj::drawVertices,HX_("drawVertices",1d,4c,09,40)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(void *) &FlxCamera_obj::trianglesSprite,HX_("trianglesSprite",10,d3,45,ab)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxCamera_obj::renderPoint,HX_("renderPoint",1a,e1,40,92)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxCamera_obj::renderRect,HX_("renderRect",9a,47,b1,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxCamera_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("totalScaleX",72,dd,5b,02),
	HX_("totalScaleY",73,dd,5b,02),
	HX_("style",31,a5,1d,84),
	HX_("target",51,f3,ec,86),
	HX_("targetOffset",c4,d1,c3,1c),
	HX_("followLerp",88,dc,83,d9),
	HX_("deadzone",d0,12,55,6d),
	HX_("minScrollX",39,80,8f,f6),
	HX_("maxScrollX",67,ad,fc,9a),
	HX_("minScrollY",3a,80,8f,f6),
	HX_("maxScrollY",68,ad,fc,9a),
	HX_("scroll",0d,d8,64,47),
	HX_("buffer",00,bd,94,d0),
	HX_("bgColor",5e,81,83,f7),
	HX_("screen",6c,3b,5d,47),
	HX_("useBgAlphaBlending",23,25,12,b2),
	HX_("flashSprite",d5,e9,0d,f4),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixelPerfectShake",1f,5e,46,36),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("zoom",13,a3,f8,50),
	HX_("viewMarginX",85,f4,67,47),
	HX_("viewMarginY",86,f4,67,47),
	HX_("_blitMatrix",75,45,ab,aa),
	HX_("_useBlitMatrix",be,57,dc,4e),
	HX_("alpha",5e,a7,96,21),
	HX_("angle",d3,43,e2,22),
	HX_("color",63,71,5c,4a),
	HX_("antialiasing",f4,16,b3,48),
	HX_("followLead",ad,cd,83,d9),
	HX_("filtersEnabled",06,08,9b,18),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashOffset",64,53,c1,f6),
	HX_("_fxFlashColor",64,98,14,dc),
	HX_("_fxFlashDuration",f3,7e,d1,2d),
	HX_("_fxFlashComplete",58,70,0b,99),
	HX_("_fxFlashAlpha",5f,ce,4e,b3),
	HX_("_fxFadeColor",96,44,a8,b9),
	HX_("_lastTargetPosition",2f,d6,08,c4),
	HX_("_scrollTarget",1d,da,1d,c1),
	HX_("_fxFadeDuration",01,fe,dd,9f),
	HX_("_fxFadeIn",d2,da,fe,a8),
	HX_("_fxFadeComplete",66,ef,17,0b),
	HX_("_fxFadeAlpha",91,7a,e2,90),
	HX_("_fxShakeIntensity",5e,86,94,7a),
	HX_("_fxShakeDuration",09,2e,72,36),
	HX_("_fxShakeComplete",6e,1f,ac,a1),
	HX_("_fxShakeAxes",5a,79,f0,5e),
	HX_("_point",91,fb,76,c2),
	HX_("filters",bb,a1,46,09),
	HX_("initialZoom",b7,71,1d,2d),
	HX_("_fill",62,ea,cc,f6),
	HX_("_flashBitmap",c0,cb,8d,87),
	HX_("_scrollRect",f0,a8,f0,db),
	HX_("_bounds",14,98,94,d4),
	HX_("canvas",d8,54,42,b8),
	HX_("_helperMatrix",2e,81,ce,de),
	HX_("_helperPoint",03,e6,14,f8),
	HX_("_currentDrawItem",11,6b,5a,19),
	HX_("_headOfDrawStack",ce,c5,68,ac),
	HX_("_headTiles",06,ac,50,ff),
	HX_("_headTriangles",ac,b3,7c,97),
	HX_("startQuadBatch",b1,bc,12,5e),
	HX_("startTrianglesBatch",11,0b,b7,6e),
	HX_("getNewDrawTrianglesItem",f0,c3,0a,12),
	HX_("clearDrawStack",57,f1,1b,0a),
	HX_("render",56,6b,29,05),
	HX_("drawPixels",51,6a,6d,ce),
	HX_("copyPixels",c2,54,6e,42),
	HX_("drawTriangles",07,44,68,de),
	HX_("transformRect",b0,cc,f4,78),
	HX_("transformPoint",44,cf,11,3d),
	HX_("transformVector",4f,2b,b3,d2),
	HX_("transformObject",4b,f9,94,50),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateScroll",f6,7e,28,47),
	HX_("bindScrollPos",0a,ce,b6,07),
	HX_("updateFollow",5a,38,5a,f9),
	HX_("updateFlash",e7,9e,24,e8),
	HX_("updateFade",25,a0,6a,fc),
	HX_("completeFade",d5,32,78,b7),
	HX_("updateShake",fd,47,b5,61),
	HX_("updateFlashSpritePosition",15,1f,55,df),
	HX_("updateFlashOffset",da,51,21,f5),
	HX_("updateScrollRect",3a,ab,52,53),
	HX_("updateInternalSpritePositions",1f,1f,f9,76),
	HX_("follow",71,91,96,f9),
	HX_("snapToTarget",96,07,43,96),
	HX_("focusOn",17,4b,83,41),
	HX_("flash",b0,35,8c,02),
	HX_("fade",7c,b5,b5,43),
	HX_("shake",c6,de,1c,7c),
	HX_("stopFX",d4,b1,39,0f),
	HX_("setFilters",39,c6,25,5c),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("fill",83,ce,bb,43),
	HX_("drawFX",56,72,d6,df),
	HX_("checkResize",dc,2c,8d,ea),
	HX_("updateBlitMatrix",bf,47,0d,22),
	HX_("setSize",83,e1,d7,11),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setScrollBoundsRect",68,88,5d,8e),
	HX_("setScrollBounds",24,ad,95,dc),
	HX_("setScale",88,37,03,87),
	HX_("onResize",73,50,28,e8),
	HX_("getViewRect",df,04,bd,ae),
	HX_("getViewMarginRect",6d,4e,bb,21),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("containsRect",e3,ce,1c,a6),
	HX_("set_followLerp",45,4d,99,6f),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("set_zoom",10,b8,10,7f),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_color",c6,b9,56,71),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_visible",95,df,8b,33),
	HX_("calcOffsetX",50,85,4b,73),
	HX_("calcOffsetY",51,85,4b,73),
	HX_("calcMarginX",55,34,3b,01),
	HX_("calcMarginY",56,34,3b,01),
	HX_("get_viewMarginLeft",e3,3a,ea,46),
	HX_("get_viewMarginTop",39,43,1f,ef),
	HX_("get_viewMarginRight",80,59,16,3d),
	HX_("get_viewMarginBottom",c7,88,ca,4d),
	HX_("get_viewWidth",38,f9,5a,cc),
	HX_("get_viewHeight",75,90,8e,b9),
	HX_("get_viewX",aa,42,a6,7a),
	HX_("get_viewY",ab,42,a6,7a),
	HX_("get_viewLeft",15,b1,eb,39),
	HX_("get_viewTop",47,19,b9,22),
	HX_("get_viewRight",0e,4f,5c,eb),
	HX_("get_viewBottom",79,6f,bb,1c),
	HX_("get_viewOffsetX",17,fd,59,7a),
	HX_("set_viewOffsetX",23,7a,25,76),
	HX_("get_viewOffsetY",18,fd,59,7a),
	HX_("set_viewOffsetY",24,7a,25,76),
	HX_("get_viewOffsetWidth",25,ee,20,6c),
	HX_("get_viewOffsetHeight",e8,ea,fe,e6),
	HX_("get__filters",45,af,18,f8),
	HX_("set__filters",b9,d2,11,0d),
	HX_("get_camera",6e,b6,13,a8),
	HX_("set_camera",e2,54,91,ab),
	HX_("get_cameras",45,ea,2b,69),
	HX_("set_cameras",51,f1,98,73),
	::String(null()) };

static void FlxCamera_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_defaultCameras,"_defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::drawVertices,"drawVertices");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::trianglesSprite,"trianglesSprite");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::renderPoint,"renderPoint");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::renderRect,"renderRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxCamera_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_defaultCameras,"_defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::drawVertices,"drawVertices");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::trianglesSprite,"trianglesSprite");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::renderPoint,"renderPoint");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::renderRect,"renderRect");
};

#endif

::hx::Class FlxCamera_obj::__mClass;

static ::String FlxCamera_obj_sStaticFields[] = {
	HX_("defaultZoom",74,9c,b7,22),
	HX_("_defaultCameras",0c,2c,d2,5b),
	HX_("_storageTilesHead",e9,a8,61,af),
	HX_("_storageTrianglesHead",0f,09,78,17),
	HX_("drawVertices",1d,4c,09,40),
	HX_("trianglesSprite",10,d3,45,ab),
	HX_("renderPoint",1a,e1,40,92),
	HX_("renderRect",9a,47,b1,e8),
	HX_("get_defaultCameras",36,c4,0b,ae),
	HX_("set_defaultCameras",aa,f6,ba,8a),
	::String(null())
};

void FlxCamera_obj::__register()
{
	FlxCamera_obj _hx_dummy;
	FlxCamera_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxCamera",05,18,e2,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCamera_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCamera_obj::__SetStatic;
	__mClass->mMarkFunc = FlxCamera_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxCamera_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxCamera_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxCamera_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxCamera_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxCamera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxCamera_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxCamera_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_45_boot)
HXDLIN(  45)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("getViewRect",df,04,bd,ae), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("deprecated",73,ff,22,84),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("getViewMarginRect",6d,4e,bb,21))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_50_boot)
HXDLIN(  50)		defaultZoom = ((Float)1.0);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::FloatVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_d1aae230bd422321_589_boot)
HXDLIN( 589)			int length = null();
HXDLIN( 589)			bool fixed = null();
HXDLIN( 589)			::Array< Float > array = null();
HXDLIN( 589)			return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_589_boot)
HXDLIN( 589)		drawVertices = ( ( ::openfl::_Vector::FloatVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d1aae230bd422321_594_boot)
HXDLIN( 594)		trianglesSprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d1aae230bd422321_600_boot)
HXDLIN( 600)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 600)			point->_inPool = false;
HXDLIN( 600)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_600_boot)
HXDLIN( 600)		renderPoint = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d1aae230bd422321_602_boot)
HXDLIN( 602)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 602)			_this->x = ( (Float)(0) );
HXDLIN( 602)			_this->y = ( (Float)(0) );
HXDLIN( 602)			_this->width = ( (Float)(0) );
HXDLIN( 602)			_this->height = ( (Float)(0) );
HXDLIN( 602)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 602)			rect->_inPool = false;
HXDLIN( 602)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_d1aae230bd422321_602_boot)
HXDLIN( 602)		renderRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
