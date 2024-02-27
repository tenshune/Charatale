#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_90_get,"flixel.math._FlxPoint.FlxPoint_Impl_","get",0xd70f398b,"flixel.math._FlxPoint.FlxPoint_Impl_.get","flixel/math/FlxPoint.hx",90,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_103_weak,"flixel.math._FlxPoint.FlxPoint_Impl_","weak",0x60d679e3,"flixel.math._FlxPoint.FlxPoint_Impl_.weak","flixel/math/FlxPoint.hx",103,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_112_plusOp,"flixel.math._FlxPoint.FlxPoint_Impl_","plusOp",0x67601d46,"flixel.math._FlxPoint.FlxPoint_Impl_.plusOp","flixel/math/FlxPoint.hx",112,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_125_minusOp,"flixel.math._FlxPoint.FlxPoint_Impl_","minusOp",0x56869926,"flixel.math._FlxPoint.FlxPoint_Impl_.minusOp","flixel/math/FlxPoint.hx",125,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_139_scaleOp,"flixel.math._FlxPoint.FlxPoint_Impl_","scaleOp",0x67b021c0,"flixel.math._FlxPoint.FlxPoint_Impl_.scaleOp","flixel/math/FlxPoint.hx",139,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_152_divideOp,"flixel.math._FlxPoint.FlxPoint_Impl_","divideOp",0x9cabb3e5,"flixel.math._FlxPoint.FlxPoint_Impl_.divideOp","flixel/math/FlxPoint.hx",152,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_165_plusEqualOp,"flixel.math._FlxPoint.FlxPoint_Impl_","plusEqualOp",0x97e887b0,"flixel.math._FlxPoint.FlxPoint_Impl_.plusEqualOp","flixel/math/FlxPoint.hx",165,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_175_minusEqualOp,"flixel.math._FlxPoint.FlxPoint_Impl_","minusEqualOp",0x7454ffd0,"flixel.math._FlxPoint.FlxPoint_Impl_.minusEqualOp","flixel/math/FlxPoint.hx",175,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_185_scaleEqualOp,"flixel.math._FlxPoint.FlxPoint_Impl_","scaleEqualOp",0xaa9408f6,"flixel.math._FlxPoint.FlxPoint_Impl_.scaleEqualOp","flixel/math/FlxPoint.hx",185,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_196_plusFlashOp,"flixel.math._FlxPoint.FlxPoint_Impl_","plusFlashOp",0x499464ac,"flixel.math._FlxPoint.FlxPoint_Impl_.plusFlashOp","flixel/math/FlxPoint.hx",196,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_208_minusFlashOp,"flixel.math._FlxPoint.FlxPoint_Impl_","minusFlashOp",0x2600dccc,"flixel.math._FlxPoint.FlxPoint_Impl_.minusFlashOp","flixel/math/FlxPoint.hx",208,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_220_minusFlashOp2,"flixel.math._FlxPoint.FlxPoint_Impl_","minusFlashOp2",0x1ac055e6,"flixel.math._FlxPoint.FlxPoint_Impl_.minusFlashOp2","flixel/math/FlxPoint.hx",220,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_233_plusEqualFlashOp,"flixel.math._FlxPoint.FlxPoint_Impl_","plusEqualFlashOp",0x621ffa02,"flixel.math._FlxPoint.FlxPoint_Impl_.plusEqualFlashOp","flixel/math/FlxPoint.hx",233,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_243_minusEqualFlashOp,"flixel.math._FlxPoint.FlxPoint_Impl_","minusEqualFlashOp",0x9cec0de2,"flixel.math._FlxPoint.FlxPoint_Impl_.minusEqualFlashOp","flixel/math/FlxPoint.hx",243,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_300__new,"flixel.math._FlxPoint.FlxPoint_Impl_","_new",0x510032cc,"flixel.math._FlxPoint.FlxPoint_Impl_._new","flixel/math/FlxPoint.hx",300,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_312_set,"flixel.math._FlxPoint.FlxPoint_Impl_","set",0xd7185497,"flixel.math._FlxPoint.FlxPoint_Impl_.set","flixel/math/FlxPoint.hx",312,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_326_add,"flixel.math._FlxPoint.FlxPoint_Impl_","add",0xd70aab16,"flixel.math._FlxPoint.FlxPoint_Impl_.add","flixel/math/FlxPoint.hx",326,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_339_addPoint,"flixel.math._FlxPoint.FlxPoint_Impl_","addPoint",0x9100895a,"flixel.math._FlxPoint.FlxPoint_Impl_.addPoint","flixel/math/FlxPoint.hx",339,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_353_subtract,"flixel.math._FlxPoint.FlxPoint_Impl_","subtract",0x492523ff,"flixel.math._FlxPoint.FlxPoint_Impl_.subtract","flixel/math/FlxPoint.hx",353,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_366_subtractPoint,"flixel.math._FlxPoint.FlxPoint_Impl_","subtractPoint",0x3d1a23d1,"flixel.math._FlxPoint.FlxPoint_Impl_.subtractPoint","flixel/math/FlxPoint.hx",366,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_380_scale,"flixel.math._FlxPoint.FlxPoint_Impl_","scale",0x0be76ebf,"flixel.math._FlxPoint.FlxPoint_Impl_.scale","flixel/math/FlxPoint.hx",380,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_396_scalePoint,"flixel.math._FlxPoint.FlxPoint_Impl_","scalePoint",0x6850e111,"flixel.math._FlxPoint.FlxPoint_Impl_.scalePoint","flixel/math/FlxPoint.hx",396,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_410_scaleNew,"flixel.math._FlxPoint.FlxPoint_Impl_","scaleNew",0x526c9ae1,"flixel.math._FlxPoint.FlxPoint_Impl_.scaleNew","flixel/math/FlxPoint.hx",410,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_421_addNew,"flixel.math._FlxPoint.FlxPoint_Impl_","addNew",0xc1786eea,"flixel.math._FlxPoint.FlxPoint_Impl_.addNew","flixel/math/FlxPoint.hx",421,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_432_subtractNew,"flixel.math._FlxPoint.FlxPoint_Impl_","subtractNew",0x073bada1,"flixel.math._FlxPoint.FlxPoint_Impl_.subtractNew","flixel/math/FlxPoint.hx",432,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_442_copyFrom,"flixel.math._FlxPoint.FlxPoint_Impl_","copyFrom",0x1974baaa,"flixel.math._FlxPoint.FlxPoint_Impl_.copyFrom","flixel/math/FlxPoint.hx",442,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_456_copyFromFlash,"flixel.math._FlxPoint.FlxPoint_Impl_","copyFromFlash",0x118e02a6,"flixel.math._FlxPoint.FlxPoint_Impl_.copyFromFlash","flixel/math/FlxPoint.hx",456,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_466_copyTo,"flixel.math._FlxPoint.FlxPoint_Impl_","copyTo",0xeba6aabb,"flixel.math._FlxPoint.FlxPoint_Impl_.copyTo","flixel/math/FlxPoint.hx",466,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_481_copyToFlash,"flixel.math._FlxPoint.FlxPoint_Impl_","copyToFlash",0x206734f5,"flixel.math._FlxPoint.FlxPoint_Impl_.copyToFlash","flixel/math/FlxPoint.hx",481,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_499_addToFlash,"flixel.math._FlxPoint.FlxPoint_Impl_","addToFlash",0xb7282dbf,"flixel.math._FlxPoint.FlxPoint_Impl_.addToFlash","flixel/math/FlxPoint.hx",499,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_513_subtractFromFlash,"flixel.math._FlxPoint.FlxPoint_Impl_","subtractFromFlash",0xfbb3e3e7,"flixel.math._FlxPoint.FlxPoint_Impl_.subtractFromFlash","flixel/math/FlxPoint.hx",513,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_524_floor,"flixel.math._FlxPoint.FlxPoint_Impl_","floor",0x95af7201,"flixel.math._FlxPoint.FlxPoint_Impl_.floor","flixel/math/FlxPoint.hx",524,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_534_ceil,"flixel.math._FlxPoint.FlxPoint_Impl_","ceil",0x539e3c70,"flixel.math._FlxPoint.FlxPoint_Impl_.ceil","flixel/math/FlxPoint.hx",534,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_544_round,"flixel.math._FlxPoint.FlxPoint_Impl_","round",0x807e9883,"flixel.math._FlxPoint.FlxPoint_Impl_.round","flixel/math/FlxPoint.hx",544,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_561_inCoords,"flixel.math._FlxPoint.FlxPoint_Impl_","inCoords",0xa2169cce,"flixel.math._FlxPoint.FlxPoint_Impl_.inCoords","flixel/math/FlxPoint.hx",561,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_572_inRect,"flixel.math._FlxPoint.FlxPoint_Impl_","inRect",0xaa80b9d4,"flixel.math._FlxPoint.FlxPoint_Impl_.inRect","flixel/math/FlxPoint.hx",572,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_585_rotate,"flixel.math._FlxPoint.FlxPoint_Impl_","rotate",0xed93d486,"flixel.math._FlxPoint.FlxPoint_Impl_.rotate","flixel/math/FlxPoint.hx",585,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_598_pivotRadians,"flixel.math._FlxPoint.FlxPoint_Impl_","pivotRadians",0x75c3e03b,"flixel.math._FlxPoint.FlxPoint_Impl_.pivotRadians","flixel/math/FlxPoint.hx",598,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_617_pivotDegrees,"flixel.math._FlxPoint.FlxPoint_Impl_","pivotDegrees",0x892e7d70,"flixel.math._FlxPoint.FlxPoint_Impl_.pivotDegrees","flixel/math/FlxPoint.hx",617,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_627_distanceTo,"flixel.math._FlxPoint.FlxPoint_Impl_","distanceTo",0x0c7a53bb,"flixel.math._FlxPoint.FlxPoint_Impl_.distanceTo","flixel/math/FlxPoint.hx",627,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_644_radiansTo,"flixel.math._FlxPoint.FlxPoint_Impl_","radiansTo",0x9889ef42,"flixel.math._FlxPoint.FlxPoint_Impl_.radiansTo","flixel/math/FlxPoint.hx",644,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_657_radiansFrom,"flixel.math._FlxPoint.FlxPoint_Impl_","radiansFrom",0x39176ef1,"flixel.math._FlxPoint.FlxPoint_Impl_.radiansFrom","flixel/math/FlxPoint.hx",657,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_670_degreesTo,"flixel.math._FlxPoint.FlxPoint_Impl_","degreesTo",0x51be03b7,"flixel.math._FlxPoint.FlxPoint_Impl_.degreesTo","flixel/math/FlxPoint.hx",670,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_683_degreesFrom,"flixel.math._FlxPoint.FlxPoint_Impl_","degreesFrom",0xb6d14aa6,"flixel.math._FlxPoint.FlxPoint_Impl_.degreesFrom","flixel/math/FlxPoint.hx",683,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_701_angleBetween,"flixel.math._FlxPoint.FlxPoint_Impl_","angleBetween",0x4881e6a0,"flixel.math._FlxPoint.FlxPoint_Impl_.angleBetween","flixel/math/FlxPoint.hx",701,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_742_transform,"flixel.math._FlxPoint.FlxPoint_Impl_","transform",0xe5b88c21,"flixel.math._FlxPoint.FlxPoint_Impl_.transform","flixel/math/FlxPoint.hx",742,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_757_dot,"flixel.math._FlxPoint.FlxPoint_Impl_","dot",0xd70cfb7e,"flixel.math._FlxPoint.FlxPoint_Impl_.dot","flixel/math/FlxPoint.hx",757,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_767_dotProduct,"flixel.math._FlxPoint.FlxPoint_Impl_","dotProduct",0xbe7da751,"flixel.math._FlxPoint.FlxPoint_Impl_.dotProduct","flixel/math/FlxPoint.hx",767,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_782_dotProductWeak,"flixel.math._FlxPoint.FlxPoint_Impl_","dotProductWeak",0x0920ac69,"flixel.math._FlxPoint.FlxPoint_Impl_.dotProductWeak","flixel/math/FlxPoint.hx",782,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_792_dotProdWithNormalizing,"flixel.math._FlxPoint.FlxPoint_Impl_","dotProdWithNormalizing",0x1e5996ef,"flixel.math._FlxPoint.FlxPoint_Impl_.dotProdWithNormalizing","flixel/math/FlxPoint.hx",792,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_806_isPerpendicular,"flixel.math._FlxPoint.FlxPoint_Impl_","isPerpendicular",0x36a5e4d5,"flixel.math._FlxPoint.FlxPoint_Impl_.isPerpendicular","flixel/math/FlxPoint.hx",806,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_816_crossProductLength,"flixel.math._FlxPoint.FlxPoint_Impl_","crossProductLength",0x6effe880,"flixel.math._FlxPoint.FlxPoint_Impl_.crossProductLength","flixel/math/FlxPoint.hx",816,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_831_crossProductLengthWeak,"flixel.math._FlxPoint.FlxPoint_Impl_","crossProductLengthWeak",0x3e2cb118,"flixel.math._FlxPoint.FlxPoint_Impl_.crossProductLengthWeak","flixel/math/FlxPoint.hx",831,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_841_isParallel,"flixel.math._FlxPoint.FlxPoint_Impl_","isParallel",0x79333c7c,"flixel.math._FlxPoint.FlxPoint_Impl_.isParallel","flixel/math/FlxPoint.hx",841,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_856_isParallelWeak,"flixel.math._FlxPoint.FlxPoint_Impl_","isParallelWeak",0x38ffb314,"flixel.math._FlxPoint.FlxPoint_Impl_.isParallelWeak","flixel/math/FlxPoint.hx",856,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_866_isZero,"flixel.math._FlxPoint.FlxPoint_Impl_","isZero",0x90cb625d,"flixel.math._FlxPoint.FlxPoint_Impl_.isZero","flixel/math/FlxPoint.hx",866,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_873_zero,"flixel.math._FlxPoint.FlxPoint_Impl_","zero",0x62d22c93,"flixel.math._FlxPoint.FlxPoint_Impl_.zero","flixel/math/FlxPoint.hx",873,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_882_normalize,"flixel.math._FlxPoint.FlxPoint_Impl_","normalize",0x4bc69642,"flixel.math._FlxPoint.FlxPoint_Impl_.normalize","flixel/math/FlxPoint.hx",882,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_895_isNormalized,"flixel.math._FlxPoint.FlxPoint_Impl_","isNormalized",0x323b8d2c,"flixel.math._FlxPoint.FlxPoint_Impl_.isNormalized","flixel/math/FlxPoint.hx",895,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_905_rotateByRadians,"flixel.math._FlxPoint.FlxPoint_Impl_","rotateByRadians",0xf9a2dbf5,"flixel.math._FlxPoint.FlxPoint_Impl_.rotateByRadians","flixel/math/FlxPoint.hx",905,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_924_rotateByDegrees,"flixel.math._FlxPoint.FlxPoint_Impl_","rotateByDegrees",0x0d0d792a,"flixel.math._FlxPoint.FlxPoint_Impl_.rotateByDegrees","flixel/math/FlxPoint.hx",924,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_935_rotateWithTrig,"flixel.math._FlxPoint.FlxPoint_Impl_","rotateWithTrig",0x874640a8,"flixel.math._FlxPoint.FlxPoint_Impl_.rotateWithTrig","flixel/math/FlxPoint.hx",935,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_952_setPolarRadians,"flixel.math._FlxPoint.FlxPoint_Impl_","setPolarRadians",0x4eaeb98b,"flixel.math._FlxPoint.FlxPoint_Impl_.setPolarRadians","flixel/math/FlxPoint.hx",952,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_969_setPolarDegrees,"flixel.math._FlxPoint.FlxPoint_Impl_","setPolarDegrees",0x621956c0,"flixel.math._FlxPoint.FlxPoint_Impl_.setPolarDegrees","flixel/math/FlxPoint.hx",969,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_976_rightNormal,"flixel.math._FlxPoint.FlxPoint_Impl_","rightNormal",0x95307518,"flixel.math._FlxPoint.FlxPoint_Impl_.rightNormal","flixel/math/FlxPoint.hx",976,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_989_leftNormal,"flixel.math._FlxPoint.FlxPoint_Impl_","leftNormal",0xe007ad39,"flixel.math._FlxPoint.FlxPoint_Impl_.leftNormal","flixel/math/FlxPoint.hx",989,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1002_negate,"flixel.math._FlxPoint.FlxPoint_Impl_","negate",0x898ccfed,"flixel.math._FlxPoint.FlxPoint_Impl_.negate","flixel/math/FlxPoint.hx",1002,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1010_negateNew,"flixel.math._FlxPoint.FlxPoint_Impl_","negateNew",0x6601aa73,"flixel.math._FlxPoint.FlxPoint_Impl_.negateNew","flixel/math/FlxPoint.hx",1010,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1022_projectTo,"flixel.math._FlxPoint.FlxPoint_Impl_","projectTo",0x351de369,"flixel.math._FlxPoint.FlxPoint_Impl_.projectTo","flixel/math/FlxPoint.hx",1022,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1044_projectToNormalized,"flixel.math._FlxPoint.FlxPoint_Impl_","projectToNormalized",0x27d20900,"flixel.math._FlxPoint.FlxPoint_Impl_.projectToNormalized","flixel/math/FlxPoint.hx",1044,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1059_projectToNormalizedWeak,"flixel.math._FlxPoint.FlxPoint_Impl_","projectToNormalizedWeak",0x4dd91198,"flixel.math._FlxPoint.FlxPoint_Impl_.projectToNormalizedWeak","flixel/math/FlxPoint.hx",1059,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1074_perpProduct,"flixel.math._FlxPoint.FlxPoint_Impl_","perpProduct",0xeed63471,"flixel.math._FlxPoint.FlxPoint_Impl_.perpProduct","flixel/math/FlxPoint.hx",1074,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1086_perpProductWeak,"flixel.math._FlxPoint.FlxPoint_Impl_","perpProductWeak",0x32164989,"flixel.math._FlxPoint.FlxPoint_Impl_.perpProductWeak","flixel/math/FlxPoint.hx",1086,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1098_ratio,"flixel.math._FlxPoint.FlxPoint_Impl_","ratio",0x773cd540,"flixel.math._FlxPoint.FlxPoint_Impl_.ratio","flixel/math/FlxPoint.hx",1098,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1116_ratioWeak,"flixel.math._FlxPoint.FlxPoint_Impl_","ratioWeak",0x323efdd8,"flixel.math._FlxPoint.FlxPoint_Impl_.ratioWeak","flixel/math/FlxPoint.hx",1116,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1137_findIntersection,"flixel.math._FlxPoint.FlxPoint_Impl_","findIntersection",0x8390c20d,"flixel.math._FlxPoint.FlxPoint_Impl_.findIntersection","flixel/math/FlxPoint.hx",1137,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1169_findIntersectionInBounds,"flixel.math._FlxPoint.FlxPoint_Impl_","findIntersectionInBounds",0x03b2a367,"flixel.math._FlxPoint.FlxPoint_Impl_.findIntersectionInBounds","flixel/math/FlxPoint.hx",1169,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1198_truncate,"flixel.math._FlxPoint.FlxPoint_Impl_","truncate",0x200d6d51,"flixel.math._FlxPoint.FlxPoint_Impl_.truncate","flixel/math/FlxPoint.hx",1198,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1210_radiansBetween,"flixel.math._FlxPoint.FlxPoint_Impl_","radiansBetween",0xb2fe36a1,"flixel.math._FlxPoint.FlxPoint_Impl_.radiansBetween","flixel/math/FlxPoint.hx",1210,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1224_degreesBetween,"flixel.math._FlxPoint.FlxPoint_Impl_","degreesBetween",0x0842da0c,"flixel.math._FlxPoint.FlxPoint_Impl_.degreesBetween","flixel/math/FlxPoint.hx",1224,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1234_sign,"flixel.math._FlxPoint.FlxPoint_Impl_","sign",0x5e34ada8,"flixel.math._FlxPoint.FlxPoint_Impl_.sign","flixel/math/FlxPoint.hx",1234,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1250_dist,"flixel.math._FlxPoint.FlxPoint_Impl_","dist",0x544a84d1,"flixel.math._FlxPoint.FlxPoint_Impl_.dist","flixel/math/FlxPoint.hx",1250,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1257_distSquared,"flixel.math._FlxPoint.FlxPoint_Impl_","distSquared",0x261cd856,"flixel.math._FlxPoint.FlxPoint_Impl_.distSquared","flixel/math/FlxPoint.hx",1257,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1272_bounce,"flixel.math._FlxPoint.FlxPoint_Impl_","bounce",0x889113b3,"flixel.math._FlxPoint.FlxPoint_Impl_.bounce","flixel/math/FlxPoint.hx",1272,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1289_bounceWithFriction,"flixel.math._FlxPoint.FlxPoint_Impl_","bounceWithFriction",0x258dc173,"flixel.math._FlxPoint.FlxPoint_Impl_.bounceWithFriction","flixel/math/FlxPoint.hx",1289,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1309_isValid,"flixel.math._FlxPoint.FlxPoint_Impl_","isValid",0xd0e6f027,"flixel.math._FlxPoint.FlxPoint_Impl_.isValid","flixel/math/FlxPoint.hx",1309,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1320_clone,"flixel.math._FlxPoint.FlxPoint_Impl_","clone",0xdb7bb392,"flixel.math._FlxPoint.FlxPoint_Impl_.clone","flixel/math/FlxPoint.hx",1320,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1325_get_x,"flixel.math._FlxPoint.FlxPoint_Impl_","get_x",0x24794584,"flixel.math._FlxPoint.FlxPoint_Impl_.get_x","flixel/math/FlxPoint.hx",1325,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1330_set_x,"flixel.math._FlxPoint.FlxPoint_Impl_","set_x",0x0d483b90,"flixel.math._FlxPoint.FlxPoint_Impl_.set_x","flixel/math/FlxPoint.hx",1330,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1335_get_y,"flixel.math._FlxPoint.FlxPoint_Impl_","get_y",0x24794585,"flixel.math._FlxPoint.FlxPoint_Impl_.get_y","flixel/math/FlxPoint.hx",1335,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1340_set_y,"flixel.math._FlxPoint.FlxPoint_Impl_","set_y",0x0d483b91,"flixel.math._FlxPoint.FlxPoint_Impl_.set_y","flixel/math/FlxPoint.hx",1340,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1344_get_dx,"flixel.math._FlxPoint.FlxPoint_Impl_","get_dx",0xc5a37d08,"flixel.math._FlxPoint.FlxPoint_Impl_.get_dx","flixel/math/FlxPoint.hx",1344,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1352_get_dy,"flixel.math._FlxPoint.FlxPoint_Impl_","get_dy",0xc5a37d09,"flixel.math._FlxPoint.FlxPoint_Impl_.get_dy","flixel/math/FlxPoint.hx",1352,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1361_get_length,"flixel.math._FlxPoint.FlxPoint_Impl_","get_length",0x101c845a,"flixel.math._FlxPoint.FlxPoint_Impl_.get_length","flixel/math/FlxPoint.hx",1361,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1365_set_length,"flixel.math._FlxPoint.FlxPoint_Impl_","set_length",0x139a22ce,"flixel.math._FlxPoint.FlxPoint_Impl_.set_length","flixel/math/FlxPoint.hx",1365,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1377_get_lengthSquared,"flixel.math._FlxPoint.FlxPoint_Impl_","get_lengthSquared",0xd217cbed,"flixel.math._FlxPoint.FlxPoint_Impl_.get_lengthSquared","flixel/math/FlxPoint.hx",1377,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1382_get_degrees,"flixel.math._FlxPoint.FlxPoint_Impl_","get_degrees",0xbb9779b3,"flixel.math._FlxPoint.FlxPoint_Impl_.get_degrees","flixel/math/FlxPoint.hx",1382,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1386_set_degrees,"flixel.math._FlxPoint.FlxPoint_Impl_","set_degrees",0xc60480bf,"flixel.math._FlxPoint.FlxPoint_Impl_.set_degrees","flixel/math/FlxPoint.hx",1386,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1393_get_radians,"flixel.math._FlxPoint.FlxPoint_Impl_","get_radians",0xa82cdc7e,"flixel.math._FlxPoint.FlxPoint_Impl_.get_radians","flixel/math/FlxPoint.hx",1393,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1397_set_radians,"flixel.math._FlxPoint.FlxPoint_Impl_","set_radians",0xb299e38a,"flixel.math._FlxPoint.FlxPoint_Impl_.set_radians","flixel/math/FlxPoint.hx",1397,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1407_get_rx,"flixel.math._FlxPoint.FlxPoint_Impl_","get_rx",0xc5a3893a,"flixel.math._FlxPoint.FlxPoint_Impl_.get_rx","flixel/math/FlxPoint.hx",1407,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1412_get_ry,"flixel.math._FlxPoint.FlxPoint_Impl_","get_ry",0xc5a3893b,"flixel.math._FlxPoint.FlxPoint_Impl_.get_ry","flixel/math/FlxPoint.hx",1412,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1417_get_lx,"flixel.math._FlxPoint.FlxPoint_Impl_","get_lx",0xc5a38400,"flixel.math._FlxPoint.FlxPoint_Impl_.get_lx","flixel/math/FlxPoint.hx",1417,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_1422_get_ly,"flixel.math._FlxPoint.FlxPoint_Impl_","get_ly",0xc5a38401,"flixel.math._FlxPoint.FlxPoint_Impl_.get_ly","flixel/math/FlxPoint.hx",1422,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_74_boot,"flixel.math._FlxPoint.FlxPoint_Impl_","boot",0x52fca19d,"flixel.math._FlxPoint.FlxPoint_Impl_.boot","flixel/math/FlxPoint.hx",74,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_75_boot,"flixel.math._FlxPoint.FlxPoint_Impl_","boot",0x52fca19d,"flixel.math._FlxPoint.FlxPoint_Impl_.boot","flixel/math/FlxPoint.hx",75,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_77_boot,"flixel.math._FlxPoint.FlxPoint_Impl_","boot",0x52fca19d,"flixel.math._FlxPoint.FlxPoint_Impl_.boot","flixel/math/FlxPoint.hx",77,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_78_boot,"flixel.math._FlxPoint.FlxPoint_Impl_","boot",0x52fca19d,"flixel.math._FlxPoint.FlxPoint_Impl_.boot","flixel/math/FlxPoint.hx",78,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_6689cf469d632363_79_boot,"flixel.math._FlxPoint.FlxPoint_Impl_","boot",0x52fca19d,"flixel.math._FlxPoint.FlxPoint_Impl_.boot","flixel/math/FlxPoint.hx",79,0xb3e1cd2c)
namespace flixel{
namespace math{
namespace _FlxPoint{

void FlxPoint_Impl__obj::__construct() { }

Dynamic FlxPoint_Impl__obj::__CreateEmpty() { return new FlxPoint_Impl__obj; }

void *FlxPoint_Impl__obj::_hx_vtable = 0;

Dynamic FlxPoint_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPoint_Impl__obj > _hx_result = new FlxPoint_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxPoint_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50db1cb3;
}

Float FlxPoint_Impl__obj::EPSILON;

Float FlxPoint_Impl__obj::EPSILON_SQUARED;

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::_point1;

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::_point2;

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::_point3;

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::get(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_90_get)
HXDLIN(  90)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN(  90)		point->_inPool = false;
HXDLIN(  90)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,get,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::weak(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_103_weak)
HXDLIN( 103)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 103)		point->_inPool = false;
HXDLIN( 103)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 103)		point1->_weak = true;
HXDLIN( 103)		return point1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,weak,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::plusOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_112_plusOp)
HXLINE( 113)		Float x = (a->x + b->x);
HXDLIN( 113)		Float y = (a->y + b->y);
HXDLIN( 113)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 113)		point->_inPool = false;
HXDLIN( 113)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 114)		if (a->_weak) {
HXLINE( 114)			a->put();
            		}
HXLINE( 115)		if (b->_weak) {
HXLINE( 115)			b->put();
            		}
HXLINE( 116)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,plusOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::minusOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_125_minusOp)
HXLINE( 126)		Float x = (a->x - b->x);
HXDLIN( 126)		Float y = (a->y - b->y);
HXDLIN( 126)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 126)		point->_inPool = false;
HXDLIN( 126)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 127)		if (a->_weak) {
HXLINE( 127)			a->put();
            		}
HXLINE( 128)		if (b->_weak) {
HXLINE( 128)			b->put();
            		}
HXLINE( 129)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,minusOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::scaleOp( ::flixel::math::FlxBasePoint a,Float b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_139_scaleOp)
HXLINE( 140)		Float x = (a->x * b);
HXDLIN( 140)		Float y = (a->y * b);
HXDLIN( 140)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 140)		point->_inPool = false;
HXDLIN( 140)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 141)		if (a->_weak) {
HXLINE( 141)			a->put();
            		}
HXLINE( 142)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,scaleOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::divideOp( ::flixel::math::FlxBasePoint a,Float b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_152_divideOp)
HXLINE( 153)		Float x = (a->x / b);
HXDLIN( 153)		Float y = (a->y / b);
HXDLIN( 153)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 153)		point->_inPool = false;
HXDLIN( 153)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 154)		if (a->_weak) {
HXLINE( 154)			a->put();
            		}
HXLINE( 155)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,divideOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::plusEqualOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_165_plusEqualOp)
HXDLIN( 165)		{
HXDLIN( 165)			Float y = b->y;
HXDLIN( 165)			a->set_x((a->x + b->x));
HXDLIN( 165)			a->set_y((a->y + y));
            		}
HXDLIN( 165)		if (b->_weak) {
HXDLIN( 165)			b->put();
            		}
HXDLIN( 165)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,plusEqualOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::minusEqualOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_175_minusEqualOp)
HXDLIN( 175)		{
HXDLIN( 175)			Float y = b->y;
HXDLIN( 175)			a->set_x((a->x - b->x));
HXDLIN( 175)			a->set_y((a->y - y));
            		}
HXDLIN( 175)		if (b->_weak) {
HXDLIN( 175)			b->put();
            		}
HXDLIN( 175)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,minusEqualOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::scaleEqualOp( ::flixel::math::FlxBasePoint a,Float b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_185_scaleEqualOp)
HXDLIN( 185)		 ::Dynamic y = null();
HXDLIN( 185)		if (::hx::IsNull( y )) {
HXDLIN( 185)			y = b;
            		}
HXDLIN( 185)		a->set_x((a->x * b));
HXDLIN( 185)		a->set_y((a->y * ( (Float)(y) )));
HXDLIN( 185)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,scaleEqualOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::plusFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_196_plusFlashOp)
HXLINE( 197)		Float x = (a->x + b->x);
HXDLIN( 197)		Float y = (a->y + b->y);
HXDLIN( 197)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 197)		point->_inPool = false;
HXDLIN( 197)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 198)		if (a->_weak) {
HXLINE( 198)			a->put();
            		}
HXLINE( 199)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,plusFlashOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::minusFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_208_minusFlashOp)
HXLINE( 209)		Float x = (a->x - b->x);
HXDLIN( 209)		Float y = (a->y - b->y);
HXDLIN( 209)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 209)		point->_inPool = false;
HXDLIN( 209)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 210)		if (a->_weak) {
HXLINE( 210)			a->put();
            		}
HXLINE( 211)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,minusFlashOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::minusFlashOp2( ::openfl::geom::Point a, ::flixel::math::FlxBasePoint b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_220_minusFlashOp2)
HXLINE( 221)		Float x = (a->x - b->x);
HXDLIN( 221)		Float y = (a->y - b->y);
HXDLIN( 221)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 221)		point->_inPool = false;
HXDLIN( 221)		 ::flixel::math::FlxBasePoint result = point;
HXLINE( 222)		if (b->_weak) {
HXLINE( 222)			b->put();
            		}
HXLINE( 223)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,minusFlashOp2,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::plusEqualFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_233_plusEqualFlashOp)
HXDLIN( 233)		Float y = b->y;
HXDLIN( 233)		a->set_x((a->x + b->x));
HXDLIN( 233)		a->set_y((a->y + y));
HXDLIN( 233)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,plusEqualFlashOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::minusEqualFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_243_minusEqualFlashOp)
HXDLIN( 243)		Float y = b->y;
HXDLIN( 243)		a->set_x((a->x - b->x));
HXDLIN( 243)		a->set_y((a->y - y));
HXDLIN( 243)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,minusEqualFlashOp,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::_new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_6689cf469d632363_300__new)
HXDLIN( 300)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,x,y);
HXDLIN( 300)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,_new,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::set( ::flixel::math::FlxBasePoint this1,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_312_set)
HXLINE( 313)		this1->set_x(x);
HXLINE( 314)		this1->set_y(y);
HXLINE( 315)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,set,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::add( ::flixel::math::FlxBasePoint this1,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_326_add)
HXLINE( 327)		this1->set_x((this1->x + x));
HXLINE( 328)		this1->set_y((this1->y + y));
HXLINE( 329)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,add,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::addPoint( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_339_addPoint)
HXLINE( 340)		{
HXLINE( 340)			Float y = point->y;
HXDLIN( 340)			this1->set_x((this1->x + point->x));
HXDLIN( 340)			this1->set_y((this1->y + y));
            		}
HXLINE( 341)		if (point->_weak) {
HXLINE( 341)			point->put();
            		}
HXLINE( 342)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,addPoint,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::subtract( ::flixel::math::FlxBasePoint this1,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_353_subtract)
HXLINE( 354)		this1->set_x((this1->x - x));
HXLINE( 355)		this1->set_y((this1->y - y));
HXLINE( 356)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,subtract,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::subtractPoint( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_366_subtractPoint)
HXLINE( 367)		{
HXLINE( 367)			Float y = point->y;
HXDLIN( 367)			this1->set_x((this1->x - point->x));
HXDLIN( 367)			this1->set_y((this1->y - y));
            		}
HXLINE( 368)		if (point->_weak) {
HXLINE( 368)			point->put();
            		}
HXLINE( 369)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,subtractPoint,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::scale( ::flixel::math::FlxBasePoint this1,Float x, ::Dynamic y){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_380_scale)
HXLINE( 381)		if (::hx::IsNull( y )) {
HXLINE( 382)			y = x;
            		}
HXLINE( 384)		this1->set_x((this1->x * x));
HXLINE( 385)		this1->set_y((this1->y * ( (Float)(y) )));
HXLINE( 386)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,scale,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::scalePoint( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_396_scalePoint)
HXLINE( 397)		{
HXLINE( 397)			Float x = point->x;
HXDLIN( 397)			 ::Dynamic y = point->y;
HXDLIN( 397)			if (::hx::IsNull( y )) {
HXLINE( 397)				y = x;
            			}
HXDLIN( 397)			this1->set_x((this1->x * x));
HXDLIN( 397)			this1->set_y((this1->y * ( (Float)(y) )));
            		}
HXLINE( 398)		if (point->_weak) {
HXLINE( 398)			point->put();
            		}
HXLINE( 399)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,scalePoint,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::scaleNew( ::flixel::math::FlxBasePoint this1,Float k){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_410_scaleNew)
HXDLIN( 410)		 ::flixel::math::FlxBasePoint p = null();
HXDLIN( 410)		 ::flixel::math::FlxBasePoint p1 = p;
HXDLIN( 410)		if (::hx::IsNull( p1 )) {
HXDLIN( 410)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 410)			point->_inPool = false;
HXDLIN( 410)			p1 = point;
            		}
HXDLIN( 410)		Float y = this1->y;
HXDLIN( 410)		p1->set_x(this1->x);
HXDLIN( 410)		p1->set_y(y);
HXDLIN( 410)		 ::flixel::math::FlxBasePoint this2 = p1;
HXDLIN( 410)		 ::Dynamic y1 = null();
HXDLIN( 410)		if (::hx::IsNull( y1 )) {
HXDLIN( 410)			y1 = k;
            		}
HXDLIN( 410)		this2->set_x((this2->x * k));
HXDLIN( 410)		this2->set_y((this2->y * ( (Float)(y1) )));
HXDLIN( 410)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,scaleNew,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::addNew( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_421_addNew)
HXDLIN( 421)		 ::flixel::math::FlxBasePoint p1 = null();
HXDLIN( 421)		 ::flixel::math::FlxBasePoint p2 = p1;
HXDLIN( 421)		if (::hx::IsNull( p2 )) {
HXDLIN( 421)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 421)			point->_inPool = false;
HXDLIN( 421)			p2 = point;
            		}
HXDLIN( 421)		Float y = this1->y;
HXDLIN( 421)		p2->set_x(this1->x);
HXDLIN( 421)		p2->set_y(y);
HXDLIN( 421)		 ::flixel::math::FlxBasePoint this2 = p2;
HXDLIN( 421)		{
HXDLIN( 421)			Float y1 = p->y;
HXDLIN( 421)			this2->set_x((this2->x + p->x));
HXDLIN( 421)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 421)		if (p->_weak) {
HXDLIN( 421)			p->put();
            		}
HXDLIN( 421)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,addNew,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::subtractNew( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_432_subtractNew)
HXDLIN( 432)		 ::flixel::math::FlxBasePoint p1 = null();
HXDLIN( 432)		 ::flixel::math::FlxBasePoint p2 = p1;
HXDLIN( 432)		if (::hx::IsNull( p2 )) {
HXDLIN( 432)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 432)			point->_inPool = false;
HXDLIN( 432)			p2 = point;
            		}
HXDLIN( 432)		Float y = this1->y;
HXDLIN( 432)		p2->set_x(this1->x);
HXDLIN( 432)		p2->set_y(y);
HXDLIN( 432)		 ::flixel::math::FlxBasePoint this2 = p2;
HXDLIN( 432)		{
HXDLIN( 432)			Float y1 = p->y;
HXDLIN( 432)			this2->set_x((this2->x - p->x));
HXDLIN( 432)			this2->set_y((this2->y - y1));
            		}
HXDLIN( 432)		if (p->_weak) {
HXDLIN( 432)			p->put();
            		}
HXDLIN( 432)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,subtractNew,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::copyFrom( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_442_copyFrom)
HXLINE( 443)		{
HXLINE( 443)			Float y = p->y;
HXDLIN( 443)			this1->set_x(p->x);
HXDLIN( 443)			this1->set_y(y);
            		}
HXLINE( 444)		if (p->_weak) {
HXLINE( 444)			p->put();
            		}
HXLINE( 445)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,copyFrom,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::copyFromFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_456_copyFromFlash)
HXDLIN( 456)		return this1->set(p->x,p->y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,copyFromFlash,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::copyTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_466_copyTo)
HXLINE( 467)		if (::hx::IsNull( p )) {
HXLINE( 469)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 469)			point->_inPool = false;
HXDLIN( 469)			p = point;
            		}
HXLINE( 471)		Float y = this1->y;
HXDLIN( 471)		p->set_x(this1->x);
HXDLIN( 471)		p->set_y(y);
HXDLIN( 471)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,copyTo,return )

 ::openfl::geom::Point FlxPoint_Impl__obj::copyToFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p){
            	HX_GC_STACKFRAME(&_hx_pos_6689cf469d632363_481_copyToFlash)
HXLINE( 482)		if (::hx::IsNull( p )) {
HXLINE( 484)			p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 487)		p->x = this1->x;
HXLINE( 488)		p->y = this1->y;
HXLINE( 489)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,copyToFlash,return )

 ::openfl::geom::Point FlxPoint_Impl__obj::addToFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_499_addToFlash)
HXLINE( 500)		 ::openfl::geom::Point p1 = p;
HXDLIN( 500)		p1->x = (p1->x + this1->x);
HXLINE( 501)		 ::openfl::geom::Point p2 = p;
HXDLIN( 501)		p2->y = (p2->y + this1->y);
HXLINE( 503)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,addToFlash,return )

 ::openfl::geom::Point FlxPoint_Impl__obj::subtractFromFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_513_subtractFromFlash)
HXLINE( 514)		 ::openfl::geom::Point p1 = p;
HXDLIN( 514)		p1->x = (p1->x - this1->x);
HXLINE( 515)		 ::openfl::geom::Point p2 = p;
HXDLIN( 515)		p2->y = (p2->y - this1->y);
HXLINE( 517)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,subtractFromFlash,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::floor( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_524_floor)
HXLINE( 525)		this1->set_x(( (Float)(::Math_obj::floor(this1->x)) ));
HXLINE( 526)		this1->set_y(( (Float)(::Math_obj::floor(this1->y)) ));
HXLINE( 527)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,floor,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::ceil( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_534_ceil)
HXLINE( 535)		this1->set_x(( (Float)(::Math_obj::ceil(this1->x)) ));
HXLINE( 536)		this1->set_y(( (Float)(::Math_obj::ceil(this1->y)) ));
HXLINE( 537)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,ceil,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::round( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_544_round)
HXLINE( 545)		this1->set_x(( (Float)(::Math_obj::round(this1->x)) ));
HXLINE( 546)		this1->set_y(( (Float)(::Math_obj::round(this1->y)) ));
HXLINE( 547)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,round,return )

bool FlxPoint_Impl__obj::inCoords( ::flixel::math::FlxBasePoint this1,Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_561_inCoords)
HXDLIN( 561)		return ::flixel::math::FlxMath_obj::pointInCoordinates(this1->x,this1->y,x,y,width,height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxPoint_Impl__obj,inCoords,return )

bool FlxPoint_Impl__obj::inRect( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_572_inRect)
HXDLIN( 572)		return ::flixel::math::FlxMath_obj::pointInFlxRect(this1->x,this1->y,rect);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,inRect,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::rotate( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint pivot,Float degrees){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_585_rotate)
HXDLIN( 585)		return ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::pivotRadians(this1,pivot,(degrees * (::Math_obj::PI / ( (Float)(180) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,rotate,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::pivotRadians( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint pivot,Float radians){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_598_pivotRadians)
HXLINE( 599)		{
HXLINE( 599)			 ::flixel::math::FlxBasePoint this2 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN( 599)			{
HXLINE( 599)				Float y = this1->y;
HXDLIN( 599)				this2->set_x(this1->x);
HXDLIN( 599)				this2->set_y(y);
            			}
HXDLIN( 599)			if (this1->_weak) {
HXLINE( 599)				this1->put();
            			}
HXDLIN( 599)			 ::flixel::math::FlxBasePoint this3 = this2;
HXDLIN( 599)			{
HXLINE( 599)				Float y1 = pivot->y;
HXDLIN( 599)				this3->set_x((this3->x - pivot->x));
HXDLIN( 599)				this3->set_y((this3->y - y1));
            			}
HXDLIN( 599)			if (pivot->_weak) {
HXLINE( 599)				pivot->put();
            			}
            		}
HXLINE( 600)		{
HXLINE( 600)			 ::flixel::math::FlxBasePoint this4 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN( 600)			Float rads = (::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1) + radians);
HXDLIN( 600)			Float len = ::Math_obj::sqrt(((this4->x * this4->x) + (this4->y * this4->y)));
HXDLIN( 600)			this4->set_x((len * ::Math_obj::cos(rads)));
HXDLIN( 600)			this4->set_y((len * ::Math_obj::sin(rads)));
            		}
HXLINE( 601)		{
HXLINE( 601)			Float y2 = (::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1->y + pivot->y);
HXDLIN( 601)			this1->set_x((::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1->x + pivot->x));
HXDLIN( 601)			this1->set_y(y2);
            		}
HXLINE( 602)		if (pivot->_weak) {
HXLINE( 602)			pivot->put();
            		}
HXLINE( 603)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,pivotRadians,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::pivotDegrees( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint pivot,Float degrees){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_617_pivotDegrees)
HXDLIN( 617)		return ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::pivotRadians(this1,pivot,(degrees * (::Math_obj::PI / ( (Float)(180) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,pivotDegrees,return )

Float FlxPoint_Impl__obj::distanceTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_627_distanceTo)
HXLINE( 628)		Float dx = (this1->x - point->x);
HXLINE( 629)		Float dy = (this1->y - point->y);
HXLINE( 630)		if (point->_weak) {
HXLINE( 630)			point->put();
            		}
HXLINE( 631)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,distanceTo,return )

Float FlxPoint_Impl__obj::radiansTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_644_radiansTo)
HXDLIN( 644)		Float x = (point->x - this1->x);
HXDLIN( 644)		Float y = (point->y - this1->y);
HXDLIN( 644)		return ::Math_obj::atan2(y,x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,radiansTo,return )

Float FlxPoint_Impl__obj::radiansFrom( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_657_radiansFrom)
HXDLIN( 657)		Float x = (this1->x - point->x);
HXDLIN( 657)		Float y = (this1->y - point->y);
HXDLIN( 657)		return ::Math_obj::atan2(y,x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,radiansFrom,return )

Float FlxPoint_Impl__obj::degreesTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_670_degreesTo)
HXDLIN( 670)		Float x = (point->x - this1->x);
HXDLIN( 670)		Float y = (point->y - this1->y);
HXDLIN( 670)		return (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,degreesTo,return )

Float FlxPoint_Impl__obj::degreesFrom( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_683_degreesFrom)
HXDLIN( 683)		Float x = (this1->x - point->x);
HXDLIN( 683)		Float y = (this1->y - point->y);
HXDLIN( 683)		return (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,degreesFrom,return )

Float FlxPoint_Impl__obj::angleBetween( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_701_angleBetween)
HXLINE( 702)		Float x = (point->x - this1->x);
HXLINE( 703)		Float y = (point->y - this1->y);
HXLINE( 704)		Float angle = ( (Float)(0) );
HXLINE( 706)		bool _hx_tmp;
HXDLIN( 706)		if ((x == 0)) {
HXLINE( 706)			_hx_tmp = (y != 0);
            		}
            		else {
HXLINE( 706)			_hx_tmp = true;
            		}
HXDLIN( 706)		if (_hx_tmp) {
HXLINE( 708)			Float c1 = (::Math_obj::PI * ((Float)0.25));
HXLINE( 709)			Float c2 = (( (Float)(3) ) * c1);
HXLINE( 710)			Float ay;
HXDLIN( 710)			if ((y < 0)) {
HXLINE( 710)				ay = -(y);
            			}
            			else {
HXLINE( 710)				ay = y;
            			}
HXLINE( 712)			if ((x >= 0)) {
HXLINE( 714)				angle = (c1 - (c1 * ((x - ay) / (x + ay))));
            			}
            			else {
HXLINE( 718)				angle = (c2 - (c1 * ((x + ay) / (ay - x))));
            			}
HXLINE( 720)			Float angle1;
HXDLIN( 720)			if ((y < 0)) {
HXLINE( 720)				angle1 = -(angle);
            			}
            			else {
HXLINE( 720)				angle1 = angle;
            			}
HXDLIN( 720)			angle = (angle1 * (( (Float)(180) ) / ::Math_obj::PI));
HXLINE( 722)			if ((angle > 90)) {
HXLINE( 724)				angle = (angle - ( (Float)(270) ));
            			}
            			else {
HXLINE( 728)				angle = (angle + 90);
            			}
            		}
HXLINE( 732)		if (point->_weak) {
HXLINE( 732)			point->put();
            		}
HXLINE( 733)		return angle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,angleBetween,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::transform( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_742_transform)
HXLINE( 743)		Float x1 = (((this1->x * matrix->a) + (this1->y * matrix->c)) + matrix->tx);
HXLINE( 744)		Float y1 = (((this1->x * matrix->b) + (this1->y * matrix->d)) + matrix->ty);
HXLINE( 746)		this1->set_x(x1);
HXDLIN( 746)		this1->set_y(y1);
HXDLIN( 746)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,transform,return )

Float FlxPoint_Impl__obj::dot( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_757_dot)
HXDLIN( 757)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXDLIN( 757)		if (p->_weak) {
HXDLIN( 757)			p->put();
            		}
HXDLIN( 757)		return dp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,dot,return )

Float FlxPoint_Impl__obj::dotProduct( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_767_dotProduct)
HXLINE( 768)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXLINE( 769)		if (p->_weak) {
HXLINE( 769)			p->put();
            		}
HXLINE( 770)		return dp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,dotProduct,return )

Float FlxPoint_Impl__obj::dotProductWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_782_dotProductWeak)
HXDLIN( 782)		return ((this1->x * p->x) + (this1->y * p->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,dotProductWeak,return )

Float FlxPoint_Impl__obj::dotProdWithNormalizing( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_792_dotProdWithNormalizing)
HXLINE( 793)		 ::flixel::math::FlxBasePoint p1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN( 793)		if (::hx::IsNull( p1 )) {
HXLINE( 793)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 793)			point->_inPool = false;
HXDLIN( 793)			p1 = point;
            		}
HXDLIN( 793)		Float y = p->y;
HXDLIN( 793)		p1->set_x(p->x);
HXDLIN( 793)		p1->set_y(y);
HXDLIN( 793)		 ::flixel::math::FlxBasePoint normalized = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::normalize(p1);
HXLINE( 794)		if (p->_weak) {
HXLINE( 794)			p->put();
            		}
HXLINE( 795)		return ((this1->x * normalized->x) + (this1->y * normalized->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,dotProdWithNormalizing,return )

bool FlxPoint_Impl__obj::isPerpendicular( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_806_isPerpendicular)
HXDLIN( 806)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXDLIN( 806)		if (p->_weak) {
HXDLIN( 806)			p->put();
            		}
HXDLIN( 806)		return (::Math_obj::abs(dp) < ((Float)9.9999999999999984e-015));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,isPerpendicular,return )

Float FlxPoint_Impl__obj::crossProductLength( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_816_crossProductLength)
HXLINE( 817)		Float cp = ((this1->x * p->y) - (this1->y * p->x));
HXLINE( 818)		if (p->_weak) {
HXLINE( 818)			p->put();
            		}
HXLINE( 819)		return cp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,crossProductLength,return )

Float FlxPoint_Impl__obj::crossProductLengthWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_831_crossProductLengthWeak)
HXDLIN( 831)		return ((this1->x * p->y) - (this1->y * p->x));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,crossProductLengthWeak,return )

bool FlxPoint_Impl__obj::isParallel( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_841_isParallel)
HXLINE( 842)		bool pp = (::Math_obj::abs(((this1->x * p->y) - (this1->y * p->x))) < ((Float)9.9999999999999984e-015));
HXLINE( 843)		if (p->_weak) {
HXLINE( 843)			p->put();
            		}
HXLINE( 844)		return pp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,isParallel,return )

bool FlxPoint_Impl__obj::isParallelWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_856_isParallelWeak)
HXDLIN( 856)		return (::Math_obj::abs(((this1->x * p->y) - (this1->y * p->x))) < ((Float)9.9999999999999984e-015));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,isParallelWeak,return )

bool FlxPoint_Impl__obj::isZero( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_866_isZero)
HXDLIN( 866)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXDLIN( 866)			return (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXDLIN( 866)			return false;
            		}
HXDLIN( 866)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,isZero,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::zero( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_873_zero)
HXLINE( 874)		this1->set_x(this1->set_y(( (Float)(0) )));
HXLINE( 875)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,zero,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::normalize( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_882_normalize)
HXLINE( 883)		bool _hx_tmp;
HXDLIN( 883)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE( 883)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE( 883)			_hx_tmp = false;
            		}
HXDLIN( 883)		if (_hx_tmp) {
HXLINE( 885)			return this1;
            		}
HXLINE( 887)		Float x = (( (Float)(1) ) / ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
HXDLIN( 887)		 ::Dynamic y = null();
HXDLIN( 887)		if (::hx::IsNull( y )) {
HXLINE( 887)			y = x;
            		}
HXDLIN( 887)		this1->set_x((this1->x * x));
HXDLIN( 887)		this1->set_y((this1->y * ( (Float)(y) )));
HXDLIN( 887)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,normalize,return )

bool FlxPoint_Impl__obj::isNormalized( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_895_isNormalized)
HXDLIN( 895)		return (::Math_obj::abs((((this1->x * this1->x) + (this1->y * this1->y)) - ( (Float)(1) ))) < ((Float)9.9999999999999984e-015));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,isNormalized,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::rotateByRadians( ::flixel::math::FlxBasePoint this1,Float rads){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_905_rotateByRadians)
HXLINE( 906)		Float s = ::Math_obj::sin(rads);
HXLINE( 907)		Float c = ::Math_obj::cos(rads);
HXLINE( 908)		Float tempX = this1->x;
HXLINE( 910)		this1->set_x(((tempX * c) - (this1->y * s)));
HXLINE( 911)		this1->set_y(((tempX * s) + (this1->y * c)));
HXLINE( 913)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,rotateByRadians,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::rotateByDegrees( ::flixel::math::FlxBasePoint this1,Float degs){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_924_rotateByDegrees)
HXDLIN( 924)		Float rads = (degs * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 924)		Float s = ::Math_obj::sin(rads);
HXDLIN( 924)		Float c = ::Math_obj::cos(rads);
HXDLIN( 924)		Float tempX = this1->x;
HXDLIN( 924)		this1->set_x(((tempX * c) - (this1->y * s)));
HXDLIN( 924)		this1->set_y(((tempX * s) + (this1->y * c)));
HXDLIN( 924)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,rotateByDegrees,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::rotateWithTrig( ::flixel::math::FlxBasePoint this1,Float sin,Float cos){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_935_rotateWithTrig)
HXLINE( 936)		Float tempX = this1->x;
HXLINE( 937)		this1->set_x(((tempX * cos) - (this1->y * sin)));
HXLINE( 938)		this1->set_y(((tempX * sin) + (this1->y * cos)));
HXLINE( 939)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,rotateWithTrig,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::setPolarRadians( ::flixel::math::FlxBasePoint this1,Float length,Float radians){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_952_setPolarRadians)
HXLINE( 953)		this1->set_x((length * ::Math_obj::cos(radians)));
HXLINE( 954)		this1->set_y((length * ::Math_obj::sin(radians)));
HXLINE( 955)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,setPolarRadians,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::setPolarDegrees( ::flixel::math::FlxBasePoint this1,Float length,Float degrees){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_969_setPolarDegrees)
HXDLIN( 969)		return ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::setPolarRadians(this1,length,(degrees * (::Math_obj::PI / ( (Float)(180) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,setPolarDegrees,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::rightNormal( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_976_rightNormal)
HXLINE( 977)		if (::hx::IsNull( p )) {
HXLINE( 979)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 979)			point->_inPool = false;
HXDLIN( 979)			p = point;
            		}
HXLINE( 981)		{
HXLINE( 981)			Float y = this1->x;
HXDLIN( 981)			p->set_x(-(this1->y));
HXDLIN( 981)			p->set_y(y);
            		}
HXLINE( 982)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,rightNormal,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::leftNormal( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_989_leftNormal)
HXLINE( 990)		if (::hx::IsNull( p )) {
HXLINE( 992)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 992)			point->_inPool = false;
HXDLIN( 992)			p = point;
            		}
HXLINE( 994)		{
HXLINE( 994)			Float y = -(this1->x);
HXDLIN( 994)			p->set_x(this1->y);
HXDLIN( 994)			p->set_y(y);
            		}
HXLINE( 995)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,leftNormal,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::negate( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1002_negate)
HXLINE(1003)		this1->set_x((this1->x * ( (Float)(-1) )));
HXLINE(1004)		this1->set_y((this1->y * ( (Float)(-1) )));
HXLINE(1005)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,negate,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::negateNew( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1010_negateNew)
HXDLIN(1010)		 ::flixel::math::FlxBasePoint p = null();
HXDLIN(1010)		 ::flixel::math::FlxBasePoint p1 = p;
HXDLIN(1010)		if (::hx::IsNull( p1 )) {
HXDLIN(1010)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1010)			point->_inPool = false;
HXDLIN(1010)			p1 = point;
            		}
HXDLIN(1010)		Float y = this1->y;
HXDLIN(1010)		p1->set_x(this1->x);
HXDLIN(1010)		p1->set_y(y);
HXDLIN(1010)		 ::flixel::math::FlxBasePoint this2 = p1;
HXDLIN(1010)		this2->set_x((this2->x * ( (Float)(-1) )));
HXDLIN(1010)		this2->set_y((this2->y * ( (Float)(-1) )));
HXDLIN(1010)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,negateNew,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::projectTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint proj){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1022_projectTo)
HXLINE(1023)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXLINE(1024)		Float lenSq = ((p->x * p->x) + (p->y * p->y));
HXLINE(1026)		if (::hx::IsNull( proj )) {
HXLINE(1028)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1028)			point->_inPool = false;
HXDLIN(1028)			proj = point;
            		}
HXLINE(1031)		{
HXLINE(1031)			Float y = ((dp * p->y) / lenSq);
HXDLIN(1031)			proj->set_x(((dp * p->x) / lenSq));
HXDLIN(1031)			proj->set_y(y);
            		}
HXLINE(1032)		if (p->_weak) {
HXLINE(1032)			p->put();
            		}
HXLINE(1033)		return proj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,projectTo,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::projectToNormalized( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint proj){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1044_projectToNormalized)
HXLINE(1045)		 ::flixel::math::FlxBasePoint proj1 = proj;
HXDLIN(1045)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXDLIN(1045)		if (::hx::IsNull( proj1 )) {
HXLINE(1045)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1045)			point->_inPool = false;
HXDLIN(1045)			proj1 = point;
            		}
HXDLIN(1045)		Float y = (dp * p->y);
HXDLIN(1045)		proj1->set_x((dp * p->x));
HXDLIN(1045)		proj1->set_y(y);
HXDLIN(1045)		proj = proj1;
HXLINE(1046)		if (p->_weak) {
HXLINE(1046)			p->put();
            		}
HXLINE(1047)		return proj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,projectToNormalized,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::projectToNormalizedWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint proj){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1059_projectToNormalizedWeak)
HXLINE(1060)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXLINE(1062)		if (::hx::IsNull( proj )) {
HXLINE(1064)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1064)			point->_inPool = false;
HXDLIN(1064)			proj = point;
            		}
HXLINE(1067)		Float y = (dp * p->y);
HXDLIN(1067)		proj->set_x((dp * p->x));
HXDLIN(1067)		proj->set_y(y);
HXDLIN(1067)		return proj;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,projectToNormalizedWeak,return )

Float FlxPoint_Impl__obj::perpProduct( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1074_perpProduct)
HXLINE(1075)		Float pp = ((this1->y * p->x) + (-(this1->x) * p->y));
HXLINE(1076)		if (p->_weak) {
HXLINE(1076)			p->put();
            		}
HXLINE(1077)		return pp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,perpProduct,return )

Float FlxPoint_Impl__obj::perpProductWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1086_perpProductWeak)
HXDLIN(1086)		return ((this1->y * p->x) + (-(this1->x) * p->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,perpProductWeak,return )

Float FlxPoint_Impl__obj::ratio( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1098_ratio)
HXLINE(1099)		Float r;
HXDLIN(1099)		if ((::Math_obj::abs(((this1->x * p->y) - (this1->y * p->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE(1099)			r = ::Math_obj::NaN;
            		}
            		else {
HXLINE(1099)			bool r1;
HXDLIN(1099)			if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE(1099)				r1 = (((p->x * p->x) + (p->y * p->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE(1099)				r1 = true;
            			}
HXDLIN(1099)			if (r1) {
HXLINE(1099)				r = ::Math_obj::NaN;
            			}
            			else {
HXLINE(1099)				 ::flixel::math::FlxBasePoint p1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1099)				if (::hx::IsNull( p1 )) {
HXLINE(1099)					 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1099)					point->_inPool = false;
HXDLIN(1099)					p1 = point;
            				}
HXDLIN(1099)				Float y = b->y;
HXDLIN(1099)				p1->set_x(b->x);
HXDLIN(1099)				p1->set_y(y);
HXDLIN(1099)				::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1 = p1;
HXDLIN(1099)				{
HXLINE(1099)					 ::flixel::math::FlxBasePoint this2 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1099)					Float y1 = a->y;
HXDLIN(1099)					this2->set_x((this2->x - a->x));
HXDLIN(1099)					this2->set_y((this2->y - y1));
            				}
HXDLIN(1099)				 ::flixel::math::FlxBasePoint this3 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1099)				r = (((this3->y * p->x) + (-(this3->x) * p->y)) / ((this1->y * p->x) + (-(this1->x) * p->y)));
            			}
            		}
HXLINE(1100)		if (a->_weak) {
HXLINE(1100)			a->put();
            		}
HXLINE(1101)		if (b->_weak) {
HXLINE(1101)			b->put();
            		}
HXLINE(1102)		if (p->_weak) {
HXLINE(1102)			p->put();
            		}
HXLINE(1103)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_Impl__obj,ratio,return )

Float FlxPoint_Impl__obj::ratioWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1116_ratioWeak)
HXLINE(1117)		if ((::Math_obj::abs(((this1->x * p->y) - (this1->y * p->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE(1118)			return ::Math_obj::NaN;
            		}
HXLINE(1119)		bool _hx_tmp;
HXDLIN(1119)		if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE(1119)			_hx_tmp = (((p->x * p->x) + (p->y * p->y)) < ((Float)9.9999999999999984e-015));
            		}
            		else {
HXLINE(1119)			_hx_tmp = true;
            		}
HXDLIN(1119)		if (_hx_tmp) {
HXLINE(1120)			return ::Math_obj::NaN;
            		}
HXLINE(1122)		 ::flixel::math::FlxBasePoint p1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1122)		if (::hx::IsNull( p1 )) {
HXLINE(1122)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1122)			point->_inPool = false;
HXDLIN(1122)			p1 = point;
            		}
HXDLIN(1122)		Float y = b->y;
HXDLIN(1122)		p1->set_x(b->x);
HXDLIN(1122)		p1->set_y(y);
HXDLIN(1122)		::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1 = p1;
HXLINE(1123)		{
HXLINE(1123)			 ::flixel::math::FlxBasePoint this2 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1123)			Float y1 = a->y;
HXDLIN(1123)			this2->set_x((this2->x - a->x));
HXDLIN(1123)			this2->set_y((this2->y - y1));
            		}
HXLINE(1125)		 ::flixel::math::FlxBasePoint this3 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1125)		return (((this3->y * p->x) + (-(this3->x) * p->y)) / ((this1->y * p->x) + (-(this1->x) * p->y)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_Impl__obj,ratioWeak,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::findIntersection( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint intersection){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1137_findIntersection)
HXLINE(1138)		Float t;
HXDLIN(1138)		if ((::Math_obj::abs(((this1->x * p->y) - (this1->y * p->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE(1138)			t = ::Math_obj::NaN;
            		}
            		else {
HXLINE(1138)			bool t1;
HXDLIN(1138)			if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE(1138)				t1 = (((p->x * p->x) + (p->y * p->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE(1138)				t1 = true;
            			}
HXDLIN(1138)			if (t1) {
HXLINE(1138)				t = ::Math_obj::NaN;
            			}
            			else {
HXLINE(1138)				 ::flixel::math::FlxBasePoint p1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1138)				if (::hx::IsNull( p1 )) {
HXLINE(1138)					 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1138)					point->_inPool = false;
HXDLIN(1138)					p1 = point;
            				}
HXDLIN(1138)				Float y = b->y;
HXDLIN(1138)				p1->set_x(b->x);
HXDLIN(1138)				p1->set_y(y);
HXDLIN(1138)				::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1 = p1;
HXDLIN(1138)				{
HXLINE(1138)					 ::flixel::math::FlxBasePoint this2 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1138)					Float y1 = a->y;
HXDLIN(1138)					this2->set_x((this2->x - a->x));
HXDLIN(1138)					this2->set_y((this2->y - y1));
            				}
HXDLIN(1138)				 ::flixel::math::FlxBasePoint this3 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1138)				t = (((this3->y * p->x) + (-(this3->x) * p->y)) / ((this1->y * p->x) + (-(this1->x) * p->y)));
            			}
            		}
HXLINE(1140)		if (::hx::IsNull( intersection )) {
HXLINE(1142)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1142)			point->_inPool = false;
HXDLIN(1142)			intersection = point;
            		}
HXLINE(1145)		if (::Math_obj::isNaN(t)) {
HXLINE(1147)			Float y = ::Math_obj::NaN;
HXDLIN(1147)			intersection->set_x(::Math_obj::NaN);
HXDLIN(1147)			intersection->set_y(y);
            		}
            		else {
HXLINE(1151)			Float y = (a->y + (t * this1->y));
HXDLIN(1151)			intersection->set_x((a->x + (t * this1->x)));
HXDLIN(1151)			intersection->set_y(y);
            		}
HXLINE(1154)		if (a->_weak) {
HXLINE(1154)			a->put();
            		}
HXLINE(1155)		if (b->_weak) {
HXLINE(1155)			b->put();
            		}
HXLINE(1156)		if (p->_weak) {
HXLINE(1156)			p->put();
            		}
HXLINE(1157)		return intersection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxPoint_Impl__obj,findIntersection,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::findIntersectionInBounds( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint intersection){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1169_findIntersectionInBounds)
HXLINE(1170)		if (::hx::IsNull( intersection )) {
HXLINE(1172)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1172)			point->_inPool = false;
HXDLIN(1172)			intersection = point;
            		}
HXLINE(1175)		Float t1;
HXDLIN(1175)		if ((::Math_obj::abs(((this1->x * p->y) - (this1->y * p->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE(1175)			t1 = ::Math_obj::NaN;
            		}
            		else {
HXLINE(1175)			bool t11;
HXDLIN(1175)			if (!((((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE(1175)				t11 = (((p->x * p->x) + (p->y * p->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE(1175)				t11 = true;
            			}
HXDLIN(1175)			if (t11) {
HXLINE(1175)				t1 = ::Math_obj::NaN;
            			}
            			else {
HXLINE(1175)				 ::flixel::math::FlxBasePoint p1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1175)				if (::hx::IsNull( p1 )) {
HXLINE(1175)					 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1175)					point->_inPool = false;
HXDLIN(1175)					p1 = point;
            				}
HXDLIN(1175)				Float y = b->y;
HXDLIN(1175)				p1->set_x(b->x);
HXDLIN(1175)				p1->set_y(y);
HXDLIN(1175)				::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1 = p1;
HXDLIN(1175)				{
HXLINE(1175)					 ::flixel::math::FlxBasePoint this2 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1175)					Float y1 = a->y;
HXDLIN(1175)					this2->set_x((this2->x - a->x));
HXDLIN(1175)					this2->set_y((this2->y - y1));
            				}
HXDLIN(1175)				 ::flixel::math::FlxBasePoint this3 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1175)				t1 = (((this3->y * p->x) + (-(this3->x) * p->y)) / ((this1->y * p->x) + (-(this1->x) * p->y)));
            			}
            		}
HXLINE(1176)		Float t2;
HXDLIN(1176)		if ((::Math_obj::abs(((p->x * this1->y) - (p->y * this1->x))) < ((Float)9.9999999999999984e-015))) {
HXLINE(1176)			t2 = ::Math_obj::NaN;
            		}
            		else {
HXLINE(1176)			bool t21;
HXDLIN(1176)			if (!((((p->x * p->x) + (p->y * p->y)) < ((Float)9.9999999999999984e-015)))) {
HXLINE(1176)				t21 = (((this1->x * this1->x) + (this1->y * this1->y)) < ((Float)9.9999999999999984e-015));
            			}
            			else {
HXLINE(1176)				t21 = true;
            			}
HXDLIN(1176)			if (t21) {
HXLINE(1176)				t2 = ::Math_obj::NaN;
            			}
            			else {
HXLINE(1176)				 ::flixel::math::FlxBasePoint p1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1176)				if (::hx::IsNull( p1 )) {
HXLINE(1176)					 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1176)					point->_inPool = false;
HXDLIN(1176)					p1 = point;
            				}
HXDLIN(1176)				Float y = a->y;
HXDLIN(1176)				p1->set_x(a->x);
HXDLIN(1176)				p1->set_y(y);
HXDLIN(1176)				::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1 = p1;
HXDLIN(1176)				{
HXLINE(1176)					 ::flixel::math::FlxBasePoint this2 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1176)					Float y1 = b->y;
HXDLIN(1176)					this2->set_x((this2->x - b->x));
HXDLIN(1176)					this2->set_y((this2->y - y1));
            				}
HXDLIN(1176)				 ::flixel::math::FlxBasePoint this3 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1176)				t2 = (((this3->y * this1->x) + (-(this3->x) * this1->y)) / ((p->y * this1->x) + (-(p->x) * this1->y)));
            			}
            		}
HXLINE(1177)		bool _hx_tmp;
HXDLIN(1177)		bool _hx_tmp1;
HXDLIN(1177)		bool _hx_tmp2;
HXDLIN(1177)		bool _hx_tmp3;
HXDLIN(1177)		bool _hx_tmp4;
HXDLIN(1177)		if (!(::Math_obj::isNaN(t1))) {
HXLINE(1177)			_hx_tmp4 = !(::Math_obj::isNaN(t2));
            		}
            		else {
HXLINE(1177)			_hx_tmp4 = false;
            		}
HXDLIN(1177)		if (_hx_tmp4) {
HXLINE(1177)			_hx_tmp3 = (t1 > 0);
            		}
            		else {
HXLINE(1177)			_hx_tmp3 = false;
            		}
HXDLIN(1177)		if (_hx_tmp3) {
HXLINE(1177)			_hx_tmp2 = (t1 <= 1);
            		}
            		else {
HXLINE(1177)			_hx_tmp2 = false;
            		}
HXDLIN(1177)		if (_hx_tmp2) {
HXLINE(1177)			_hx_tmp1 = (t2 > 0);
            		}
            		else {
HXLINE(1177)			_hx_tmp1 = false;
            		}
HXDLIN(1177)		if (_hx_tmp1) {
HXLINE(1177)			_hx_tmp = (t2 <= 1);
            		}
            		else {
HXLINE(1177)			_hx_tmp = false;
            		}
HXDLIN(1177)		if (_hx_tmp) {
HXLINE(1179)			Float y = (a->y + (t1 * this1->y));
HXDLIN(1179)			intersection->set_x((a->x + (t1 * this1->x)));
HXDLIN(1179)			intersection->set_y(y);
            		}
            		else {
HXLINE(1183)			Float y = ::Math_obj::NaN;
HXDLIN(1183)			intersection->set_x(::Math_obj::NaN);
HXDLIN(1183)			intersection->set_y(y);
            		}
HXLINE(1186)		if (a->_weak) {
HXLINE(1186)			a->put();
            		}
HXLINE(1187)		if (b->_weak) {
HXLINE(1187)			b->put();
            		}
HXLINE(1188)		if (p->_weak) {
HXLINE(1188)			p->put();
            		}
HXLINE(1189)		return intersection;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxPoint_Impl__obj,findIntersectionInBounds,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::truncate( ::flixel::math::FlxBasePoint this1,Float max){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1198_truncate)
HXLINE(1199)		{
HXLINE(1199)			Float l = ::Math_obj::min(max,::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
HXDLIN(1199)			bool _hx_tmp;
HXDLIN(1199)			if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE(1199)				_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            			}
            			else {
HXLINE(1199)				_hx_tmp = false;
            			}
HXDLIN(1199)			if (!(_hx_tmp)) {
HXLINE(1199)				Float a = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(this1);
HXDLIN(1199)				this1->set_x((l * ::Math_obj::cos(a)));
HXDLIN(1199)				this1->set_y((l * ::Math_obj::sin(a)));
            			}
            		}
HXLINE(1200)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,truncate,return )

Float FlxPoint_Impl__obj::radiansBetween( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1210_radiansBetween)
HXLINE(1211)		Float rads = ::Math_obj::acos((((this1->x * p->x) + (this1->y * p->y)) / (::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))) * ::Math_obj::sqrt(((p->x * p->x) + (p->y * p->y))))));
HXLINE(1212)		if (p->_weak) {
HXLINE(1212)			p->put();
            		}
HXLINE(1213)		return rads;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,radiansBetween,return )

Float FlxPoint_Impl__obj::degreesBetween( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1224_degreesBetween)
HXDLIN(1224)		Float rads = ::Math_obj::acos((((this1->x * p->x) + (this1->y * p->y)) / (::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))) * ::Math_obj::sqrt(((p->x * p->x) + (p->y * p->y))))));
HXDLIN(1224)		if (p->_weak) {
HXDLIN(1224)			p->put();
            		}
HXDLIN(1224)		return (rads * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,degreesBetween,return )

int FlxPoint_Impl__obj::sign( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1234_sign)
HXLINE(1235)		Float signFl = (((a->x - this1->x) * (b->y - this1->y)) - ((a->y - this1->y) * (b->x - this1->x)));
HXLINE(1236)		if (a->_weak) {
HXLINE(1236)			a->put();
            		}
HXLINE(1237)		if (b->_weak) {
HXLINE(1237)			b->put();
            		}
HXLINE(1238)		if ((signFl == 0)) {
HXLINE(1240)			return 0;
            		}
HXLINE(1242)		return ::Math_obj::round((signFl / ::Math_obj::abs(signFl)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,sign,return )

Float FlxPoint_Impl__obj::dist( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1250_dist)
HXDLIN(1250)		Float dx = (p->x - this1->x);
HXDLIN(1250)		Float dy = (p->y - this1->y);
HXDLIN(1250)		if (p->_weak) {
HXDLIN(1250)			p->put();
            		}
HXDLIN(1250)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,dist,return )

Float FlxPoint_Impl__obj::distSquared( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1257_distSquared)
HXLINE(1258)		Float dx = (p->x - this1->x);
HXLINE(1259)		Float dy = (p->y - this1->y);
HXLINE(1260)		if (p->_weak) {
HXLINE(1260)			p->put();
            		}
HXLINE(1261)		return ((dx * dx) + (dy * dy));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,distSquared,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::bounce( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint normal,::hx::Null< Float >  __o_bounceCoeff){
            		Float bounceCoeff = __o_bounceCoeff.Default(1);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1272_bounce)
HXLINE(1273)		Float d = ((1 + bounceCoeff) * ((this1->x * normal->x) + (this1->y * normal->y)));
HXLINE(1274)		this1->set_x((this1->x - (d * normal->x)));
HXLINE(1275)		this1->set_y((this1->y - (d * normal->y)));
HXLINE(1276)		if (normal->_weak) {
HXLINE(1276)			normal->put();
            		}
HXLINE(1277)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxPoint_Impl__obj,bounce,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::bounceWithFriction( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint normal,::hx::Null< Float >  __o_bounceCoeff,::hx::Null< Float >  __o_friction){
            		Float bounceCoeff = __o_bounceCoeff.Default(1);
            		Float friction = __o_friction.Default(0);
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1289_bounceWithFriction)
HXLINE(1290)		 ::flixel::math::FlxBasePoint p = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::rightNormal(normal,::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point3);
HXDLIN(1290)		 ::flixel::math::FlxBasePoint proj = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point1;
HXDLIN(1290)		Float dp = ((this1->x * p->x) + (this1->y * p->y));
HXDLIN(1290)		if (::hx::IsNull( proj )) {
HXLINE(1290)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1290)			point->_inPool = false;
HXDLIN(1290)			proj = point;
            		}
HXDLIN(1290)		Float y = (dp * p->y);
HXDLIN(1290)		proj->set_x((dp * p->x));
HXDLIN(1290)		proj->set_y(y);
HXDLIN(1290)		 ::flixel::math::FlxBasePoint p1 = proj;
HXLINE(1291)		 ::flixel::math::FlxBasePoint proj1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::_point2;
HXDLIN(1291)		Float dp1 = ((this1->x * normal->x) + (this1->y * normal->y));
HXDLIN(1291)		if (::hx::IsNull( proj1 )) {
HXLINE(1291)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1291)			point->_inPool = false;
HXDLIN(1291)			proj1 = point;
            		}
HXDLIN(1291)		Float y1 = (dp1 * normal->y);
HXDLIN(1291)		proj1->set_x((dp1 * normal->x));
HXDLIN(1291)		proj1->set_y(y1);
HXDLIN(1291)		 ::flixel::math::FlxBasePoint p2 = proj1;
HXLINE(1292)		Float bounceX = -(p2->x);
HXLINE(1293)		Float bounceY = -(p2->y);
HXLINE(1294)		Float frictionX = p1->x;
HXLINE(1295)		Float frictionY = p1->y;
HXLINE(1296)		this1->set_x(((bounceX * bounceCoeff) + (frictionX * friction)));
HXLINE(1297)		this1->set_y(((bounceY * bounceCoeff) + (frictionY * friction)));
HXLINE(1298)		if (normal->_weak) {
HXLINE(1298)			normal->put();
            		}
HXLINE(1299)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_Impl__obj,bounceWithFriction,return )

bool FlxPoint_Impl__obj::isValid( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1309_isValid)
HXDLIN(1309)		bool _hx_tmp;
HXDLIN(1309)		bool _hx_tmp1;
HXDLIN(1309)		if (!(::Math_obj::isNaN(this1->x))) {
HXDLIN(1309)			_hx_tmp1 = !(::Math_obj::isNaN(this1->y));
            		}
            		else {
HXDLIN(1309)			_hx_tmp1 = false;
            		}
HXDLIN(1309)		if (_hx_tmp1) {
HXDLIN(1309)			_hx_tmp = ::Math_obj::isFinite(this1->x);
            		}
            		else {
HXDLIN(1309)			_hx_tmp = false;
            		}
HXDLIN(1309)		if (_hx_tmp) {
HXDLIN(1309)			return ::Math_obj::isFinite(this1->y);
            		}
            		else {
HXDLIN(1309)			return false;
            		}
HXDLIN(1309)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,isValid,return )

 ::flixel::math::FlxBasePoint FlxPoint_Impl__obj::clone( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1320_clone)
HXDLIN(1320)		 ::flixel::math::FlxBasePoint p1 = p;
HXDLIN(1320)		if (::hx::IsNull( p1 )) {
HXDLIN(1320)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1320)			point->_inPool = false;
HXDLIN(1320)			p1 = point;
            		}
HXDLIN(1320)		Float y = this1->y;
HXDLIN(1320)		p1->set_x(this1->x);
HXDLIN(1320)		p1->set_y(y);
HXDLIN(1320)		return p1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,clone,return )

Float FlxPoint_Impl__obj::get_x( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1325_get_x)
HXDLIN(1325)		return this1->x;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_x,return )

Float FlxPoint_Impl__obj::set_x( ::flixel::math::FlxBasePoint this1,Float x){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1330_set_x)
HXDLIN(1330)		return this1->set_x(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,set_x,return )

Float FlxPoint_Impl__obj::get_y( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1335_get_y)
HXDLIN(1335)		return this1->y;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_y,return )

Float FlxPoint_Impl__obj::set_y( ::flixel::math::FlxBasePoint this1,Float y){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1340_set_y)
HXDLIN(1340)		return this1->set_y(y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,set_y,return )

Float FlxPoint_Impl__obj::get_dx( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1344_get_dx)
HXLINE(1345)		bool _hx_tmp;
HXDLIN(1345)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE(1345)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE(1345)			_hx_tmp = false;
            		}
HXDLIN(1345)		if (_hx_tmp) {
HXLINE(1346)			return ( (Float)(0) );
            		}
HXLINE(1348)		return (this1->x / ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_dx,return )

Float FlxPoint_Impl__obj::get_dy( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1352_get_dy)
HXLINE(1353)		bool _hx_tmp;
HXDLIN(1353)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE(1353)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE(1353)			_hx_tmp = false;
            		}
HXDLIN(1353)		if (_hx_tmp) {
HXLINE(1354)			return ( (Float)(0) );
            		}
HXLINE(1356)		return (this1->y / ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_dy,return )

Float FlxPoint_Impl__obj::get_length( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1361_get_length)
HXDLIN(1361)		return ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_length,return )

Float FlxPoint_Impl__obj::set_length( ::flixel::math::FlxBasePoint this1,Float l){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1365_set_length)
HXLINE(1366)		bool _hx_tmp;
HXDLIN(1366)		if ((::Math_obj::abs(this1->x) < ((Float)0.0000001))) {
HXLINE(1366)			_hx_tmp = (::Math_obj::abs(this1->y) < ((Float)0.0000001));
            		}
            		else {
HXLINE(1366)			_hx_tmp = false;
            		}
HXDLIN(1366)		if (!(_hx_tmp)) {
HXLINE(1368)			Float a = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(this1);
HXLINE(1369)			this1->set_x((l * ::Math_obj::cos(a)));
HXLINE(1370)			this1->set_y((l * ::Math_obj::sin(a)));
            		}
HXLINE(1372)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,set_length,return )

Float FlxPoint_Impl__obj::get_lengthSquared( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1377_get_lengthSquared)
HXDLIN(1377)		return ((this1->x * this1->x) + (this1->y * this1->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_lengthSquared,return )

Float FlxPoint_Impl__obj::get_degrees( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1382_get_degrees)
HXDLIN(1382)		Float _hx_tmp = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(this1);
HXDLIN(1382)		return (_hx_tmp * (( (Float)(180) ) / ::Math_obj::PI));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_degrees,return )

Float FlxPoint_Impl__obj::set_degrees( ::flixel::math::FlxBasePoint this1,Float degs){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1386_set_degrees)
HXLINE(1387)		{
HXLINE(1387)			Float rads = (degs * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN(1387)			Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
HXDLIN(1387)			this1->set_x((len * ::Math_obj::cos(rads)));
HXDLIN(1387)			this1->set_y((len * ::Math_obj::sin(rads)));
            		}
HXLINE(1388)		return degs;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,set_degrees,return )

Float FlxPoint_Impl__obj::get_radians( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1393_get_radians)
HXDLIN(1393)		Float x = this1->x;
HXDLIN(1393)		Float y = this1->y;
HXDLIN(1393)		return ::Math_obj::atan2(y,x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_radians,return )

Float FlxPoint_Impl__obj::set_radians( ::flixel::math::FlxBasePoint this1,Float rads){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1397_set_radians)
HXLINE(1398)		Float len = ::Math_obj::sqrt(((this1->x * this1->x) + (this1->y * this1->y)));
HXLINE(1400)		this1->set_x((len * ::Math_obj::cos(rads)));
HXLINE(1401)		this1->set_y((len * ::Math_obj::sin(rads)));
HXLINE(1402)		return rads;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_Impl__obj,set_radians,return )

Float FlxPoint_Impl__obj::get_rx( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1407_get_rx)
HXDLIN(1407)		return -(this1->y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_rx,return )

Float FlxPoint_Impl__obj::get_ry( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1412_get_ry)
HXDLIN(1412)		return this1->x;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_ry,return )

Float FlxPoint_Impl__obj::get_lx( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1417_get_lx)
HXDLIN(1417)		return this1->y;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_lx,return )

Float FlxPoint_Impl__obj::get_ly( ::flixel::math::FlxBasePoint this1){
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_1422_get_ly)
HXDLIN(1422)		return -(this1->x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_Impl__obj,get_ly,return )


FlxPoint_Impl__obj::FlxPoint_Impl__obj()
{
}

bool FlxPoint_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dot") ) { outValue = dot_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ceil") ) { outValue = ceil_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = zero_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dist") ) { outValue = dist_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"floor") ) { outValue = floor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ratio") ) { outValue = ratio_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_x") ) { outValue = set_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_y") ) { outValue = set_y_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"plusOp") ) { outValue = plusOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addNew") ) { outValue = addNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyTo") ) { outValue = copyTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inRect") ) { outValue = inRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isZero") ) { outValue = isZero_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"negate") ) { outValue = negate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bounce") ) { outValue = bounce_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_dx") ) { outValue = get_dx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_dy") ) { outValue = get_dy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_rx") ) { outValue = get_rx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ry") ) { outValue = get_ry_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lx") ) { outValue = get_lx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ly") ) { outValue = get_ly_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minusOp") ) { outValue = minusOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scaleOp") ) { outValue = scaleOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divideOp") ) { outValue = divideOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { outValue = addPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scaleNew") ) { outValue = scaleNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inCoords") ) { outValue = inCoords_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"truncate") ) { outValue = truncate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"radiansTo") ) { outValue = radiansTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesTo") ) { outValue = degreesTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"negateNew") ) { outValue = negateNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"projectTo") ) { outValue = projectTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ratioWeak") ) { outValue = ratioWeak_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scalePoint") ) { outValue = scalePoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addToFlash") ) { outValue = addToFlash_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceTo") ) { outValue = distanceTo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isParallel") ) { outValue = isParallel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"leftNormal") ) { outValue = leftNormal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"plusEqualOp") ) { outValue = plusEqualOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"plusFlashOp") ) { outValue = plusFlashOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtractNew") ) { outValue = subtractNew_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { outValue = copyToFlash_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansFrom") ) { outValue = radiansFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesFrom") ) { outValue = degreesFrom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rightNormal") ) { outValue = rightNormal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"perpProduct") ) { outValue = perpProduct_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distSquared") ) { outValue = distSquared_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_degrees") ) { outValue = get_degrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_degrees") ) { outValue = set_degrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_radians") ) { outValue = get_radians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_radians") ) { outValue = set_radians_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minusEqualOp") ) { outValue = minusEqualOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scaleEqualOp") ) { outValue = scaleEqualOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minusFlashOp") ) { outValue = minusFlashOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pivotRadians") ) { outValue = pivotRadians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pivotDegrees") ) { outValue = pivotDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNormalized") ) { outValue = isNormalized_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minusFlashOp2") ) { outValue = minusFlashOp2_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { outValue = subtractPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { outValue = copyFromFlash_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dotProductWeak") ) { outValue = dotProductWeak_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isParallelWeak") ) { outValue = isParallelWeak_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { outValue = rotateWithTrig_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"radiansBetween") ) { outValue = radiansBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"degreesBetween") ) { outValue = degreesBetween_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isPerpendicular") ) { outValue = isPerpendicular_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotateByRadians") ) { outValue = rotateByRadians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rotateByDegrees") ) { outValue = rotateByDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPolarRadians") ) { outValue = setPolarRadians_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPolarDegrees") ) { outValue = setPolarDegrees_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"perpProductWeak") ) { outValue = perpProductWeak_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"plusEqualFlashOp") ) { outValue = plusEqualFlashOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"findIntersection") ) { outValue = findIntersection_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"minusEqualFlashOp") ) { outValue = minusEqualFlashOp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtractFromFlash") ) { outValue = subtractFromFlash_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { outValue = get_lengthSquared_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"crossProductLength") ) { outValue = crossProductLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bounceWithFriction") ) { outValue = bounceWithFriction_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"projectToNormalized") ) { outValue = projectToNormalized_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"dotProdWithNormalizing") ) { outValue = dotProdWithNormalizing_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"crossProductLengthWeak") ) { outValue = crossProductLengthWeak_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"projectToNormalizedWeak") ) { outValue = projectToNormalizedWeak_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findIntersectionInBounds") ) { outValue = findIntersectionInBounds_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxPoint_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxPoint_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxPoint_Impl__obj::EPSILON,HX_("EPSILON",4a,89,92,2c)},
	{::hx::fsFloat,(void *) &FlxPoint_Impl__obj::EPSILON_SQUARED,HX_("EPSILON_SQUARED",d2,99,e6,6d)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxPoint_Impl__obj::_point1,HX_("_point1",80,23,a5,65)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxPoint_Impl__obj::_point2,HX_("_point2",81,23,a5,65)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxPoint_Impl__obj::_point3,HX_("_point3",82,23,a5,65)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxPoint_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_Impl__obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(FlxPoint_Impl__obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_MARK_MEMBER_NAME(FlxPoint_Impl__obj::_point1,"_point1");
	HX_MARK_MEMBER_NAME(FlxPoint_Impl__obj::_point2,"_point2");
	HX_MARK_MEMBER_NAME(FlxPoint_Impl__obj::_point3,"_point3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPoint_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_Impl__obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(FlxPoint_Impl__obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_VISIT_MEMBER_NAME(FlxPoint_Impl__obj::_point1,"_point1");
	HX_VISIT_MEMBER_NAME(FlxPoint_Impl__obj::_point2,"_point2");
	HX_VISIT_MEMBER_NAME(FlxPoint_Impl__obj::_point3,"_point3");
};

#endif

::hx::Class FlxPoint_Impl__obj::__mClass;

static ::String FlxPoint_Impl__obj_sStaticFields[] = {
	HX_("EPSILON",4a,89,92,2c),
	HX_("EPSILON_SQUARED",d2,99,e6,6d),
	HX_("_point1",80,23,a5,65),
	HX_("_point2",81,23,a5,65),
	HX_("_point3",82,23,a5,65),
	HX_("get",96,80,4e,00),
	HX_("weak",78,5c,f5,4e),
	HX_("plusOp",1b,8f,ec,44),
	HX_("minusOp",b1,c1,dd,53),
	HX_("scaleOp",4b,4a,07,65),
	HX_("divideOp",fa,04,98,4b),
	HX_("plusEqualOp",bb,51,a6,9c),
	HX_("minusEqualOp",65,ff,a7,95),
	HX_("scaleEqualOp",8b,08,e7,cb),
	HX_("plusFlashOp",b7,2e,52,4e),
	HX_("minusFlashOp",61,dc,53,47),
	HX_("minusFlashOp2",b1,f8,0c,22),
	HX_("plusEqualFlashOp",17,e8,12,8d),
	HX_("minusEqualFlashOp",2d,72,89,06),
	HX_("_new",61,15,1f,3f),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("addPoint",6f,da,ec,3f),
	HX_("subtract",14,75,11,f8),
	HX_("subtractPoint",9c,c6,66,44),
	HX_("scale",8a,ce,ce,78),
	HX_("scalePoint",66,61,c3,e7),
	HX_("scaleNew",f6,eb,58,01),
	HX_("addNew",bf,e0,04,9f),
	HX_("subtractNew",ac,77,f9,0b),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyFromFlash",71,a5,da,18),
	HX_("copyTo",90,1c,33,c9),
	HX_("copyToFlash",00,ff,24,25),
	HX_("addToFlash",14,ae,9a,36),
	HX_("subtractFromFlash",32,48,51,65),
	HX_("floor",cc,d1,96,02),
	HX_("ceil",05,1f,bd,41),
	HX_("round",4e,f8,65,ed),
	HX_("inCoords",e3,ed,02,51),
	HX_("inRect",a9,2b,0d,88),
	HX_("rotate",5b,46,20,cb),
	HX_("pivotRadians",d0,df,16,97),
	HX_("pivotDegrees",05,7d,81,aa),
	HX_("distanceTo",10,d4,ec,8b),
	HX_("radiansTo",8d,90,64,f8),
	HX_("radiansFrom",fc,38,d5,3d),
	HX_("degreesTo",02,a5,98,b1),
	HX_("degreesFrom",b1,14,8f,bb),
	HX_("angleBetween",35,e6,d4,69),
	HX_("transform",6c,2d,93,45),
	HX_("dot",89,42,4c,00),
	HX_("dotProduct",a6,27,f0,3d),
	HX_("dotProductWeak",3e,7b,e2,64),
	HX_("dotProdWithNormalizing",c4,c2,75,68),
	HX_("isPerpendicular",60,10,79,24),
	HX_("crossProductLength",d5,45,1a,6f),
	HX_("crossProductLengthWeak",ed,dc,48,88),
	HX_("isParallel",d1,bc,a5,f8),
	HX_("isParallelWeak",e9,81,c1,94),
	HX_("isZero",32,d4,57,6e),
	HX_("zero",28,0f,f1,50),
	HX_("normalize",8d,37,a1,ab),
	HX_("isNormalized",c1,8c,8e,53),
	HX_("rotateByRadians",80,07,76,e7),
	HX_("rotateByDegrees",b5,a4,e0,fa),
	HX_("rotateWithTrig",7d,0f,08,e3),
	HX_("setPolarRadians",16,e5,81,3c),
	HX_("setPolarDegrees",4b,82,ec,4f),
	HX_("rightNormal",23,3f,ee,99),
	HX_("leftNormal",8e,2d,7a,5f),
	HX_("negate",c2,41,19,67),
	HX_("negateNew",be,4b,dc,c5),
	HX_("projectTo",b4,84,f8,94),
	HX_("projectToNormalized",0b,56,c9,3e),
	HX_("projectToNormalizedWeak",23,40,63,dc),
	HX_("perpProduct",7c,fe,93,f3),
	HX_("perpProductWeak",14,75,e9,1f),
	HX_("ratio",0b,35,24,e4),
	HX_("ratioWeak",23,9f,19,92),
	HX_("findIntersection",22,b0,83,ae),
	HX_("findIntersectionInBounds",7c,2e,11,2e),
	HX_("truncate",66,be,f9,ce),
	HX_("radiansBetween",76,05,c0,0e),
	HX_("degreesBetween",e1,a8,04,64),
	HX_("sign",3d,90,53,4c),
	HX_("dist",66,67,69,42),
	HX_("distSquared",61,a2,da,2a),
	HX_("bounce",88,85,1d,66),
	HX_("bounceWithFriction",c8,1e,a8,25),
	HX_("isValid",b2,18,3e,ce),
	HX_("clone",5d,13,63,48),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_dx",dd,ee,2f,a3),
	HX_("get_dy",de,ee,2f,a3),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("get_lengthSquared",38,30,b5,3b),
	HX_("get_degrees",be,43,55,c0),
	HX_("set_degrees",ca,4a,c2,ca),
	HX_("get_radians",89,a6,ea,ac),
	HX_("set_radians",95,ad,57,b7),
	HX_("get_rx",0f,fb,2f,a3),
	HX_("get_ry",10,fb,2f,a3),
	HX_("get_lx",d5,f5,2f,a3),
	HX_("get_ly",d6,f5,2f,a3),
	::String(null())
};

void FlxPoint_Impl__obj::__register()
{
	FlxPoint_Impl__obj _hx_dummy;
	FlxPoint_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math._FlxPoint.FlxPoint_Impl_",e3,3a,be,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPoint_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxPoint_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPoint_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxPoint_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPoint_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPoint_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPoint_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPoint_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_74_boot)
HXDLIN(  74)		EPSILON = ((Float)0.0000001);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_75_boot)
HXDLIN(  75)		EPSILON_SQUARED = ((Float)9.9999999999999984e-015);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_6689cf469d632363_77_boot)
HXDLIN(  77)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  77)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_77_boot)
HXDLIN(  77)		_point1 = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_6689cf469d632363_78_boot)
HXDLIN(  78)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  78)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_78_boot)
HXDLIN(  78)		_point2 = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_6689cf469d632363_79_boot)
HXDLIN(  79)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN(  79)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_6689cf469d632363_79_boot)
HXDLIN(  79)		_point3 = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace math
} // end namespace _FlxPoint
