#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_117_fromString,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","fromString",0xcc26c669,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.fromString","flixel/input/keyboard/FlxKey.hx",117,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_125_toString,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","toString",0xf3f689ba,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.toString","flixel/input/keyboard/FlxKey.hx",125,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_b641261cd9bd2dff_54_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_13_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",13,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_14_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",14,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_15_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",15,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_16_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",16,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_17_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",17,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_18_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",18,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_19_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",19,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_20_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",20,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_21_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",21,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_22_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",22,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_23_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",23,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_24_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",24,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_25_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",25,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_26_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",26,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_27_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",27,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_28_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",28,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_29_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",29,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_30_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",30,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_31_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",31,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_32_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",32,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_33_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",33,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_34_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",34,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_35_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",35,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_36_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",36,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_37_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",37,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_38_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",38,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_39_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",39,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_40_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",40,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_41_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",41,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_42_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",42,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_43_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",43,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_44_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",44,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_45_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",45,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_46_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",46,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_47_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",47,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_48_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",48,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_49_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",49,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_50_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",50,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_51_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",51,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_52_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",52,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_53_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",53,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_54_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",54,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_55_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",55,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_56_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",56,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_57_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",57,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_58_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",58,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_59_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",59,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_60_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",60,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_61_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",61,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_62_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",62,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_63_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",63,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_64_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",64,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_65_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",65,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_66_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",66,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_67_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",67,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_68_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",68,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_69_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",69,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_70_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",70,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_71_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",71,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_72_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",72,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_73_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",73,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_74_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",74,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_75_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",75,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_76_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",76,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_77_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",77,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_78_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",78,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_79_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",79,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_80_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",80,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_81_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",81,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_82_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",82,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_83_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",83,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_84_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",84,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_85_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",85,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_86_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",86,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_87_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",87,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_88_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",88,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_89_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",89,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_90_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",90,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_91_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",91,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_92_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",92,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_93_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",93,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_94_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",94,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_95_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",95,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_96_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",96,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_97_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",97,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_98_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",98,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_99_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",99,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_100_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",100,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_101_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",101,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_102_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",102,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_103_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",103,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_104_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",104,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_105_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",105,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_106_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",106,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_107_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",107,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_108_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",108,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_109_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",109,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_110_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",110,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_111_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",111,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_112_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",112,0x46a3c741)
HX_LOCAL_STACK_FRAME(_hx_pos_a9115cea19c56d84_113_boot,"flixel.input.keyboard._FlxKey.FlxKey_Impl_","boot",0xb4b21e40,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.boot","flixel/input/keyboard/FlxKey.hx",113,0x46a3c741)
namespace flixel{
namespace input{
namespace keyboard{
namespace _FlxKey{

void FlxKey_Impl__obj::__construct() { }

Dynamic FlxKey_Impl__obj::__CreateEmpty() { return new FlxKey_Impl__obj; }

void *FlxKey_Impl__obj::_hx_vtable = 0;

Dynamic FlxKey_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxKey_Impl__obj > _hx_result = new FlxKey_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxKey_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x052b5b74;
}

 ::haxe::ds::StringMap FlxKey_Impl__obj::fromStringMap;

 ::haxe::ds::IntMap FlxKey_Impl__obj::toStringMap;

int FlxKey_Impl__obj::ANY;

int FlxKey_Impl__obj::NONE;

int FlxKey_Impl__obj::A;

int FlxKey_Impl__obj::B;

int FlxKey_Impl__obj::C;

int FlxKey_Impl__obj::D;

int FlxKey_Impl__obj::E;

int FlxKey_Impl__obj::F;

int FlxKey_Impl__obj::G;

int FlxKey_Impl__obj::H;

int FlxKey_Impl__obj::I;

int FlxKey_Impl__obj::J;

int FlxKey_Impl__obj::K;

int FlxKey_Impl__obj::L;

int FlxKey_Impl__obj::M;

int FlxKey_Impl__obj::N;

int FlxKey_Impl__obj::O;

int FlxKey_Impl__obj::P;

int FlxKey_Impl__obj::Q;

int FlxKey_Impl__obj::R;

int FlxKey_Impl__obj::S;

int FlxKey_Impl__obj::T;

int FlxKey_Impl__obj::U;

int FlxKey_Impl__obj::V;

int FlxKey_Impl__obj::W;

int FlxKey_Impl__obj::X;

int FlxKey_Impl__obj::Y;

int FlxKey_Impl__obj::Z;

int FlxKey_Impl__obj::ZERO;

int FlxKey_Impl__obj::ONE;

int FlxKey_Impl__obj::TWO;

int FlxKey_Impl__obj::THREE;

int FlxKey_Impl__obj::FOUR;

int FlxKey_Impl__obj::FIVE;

int FlxKey_Impl__obj::SIX;

int FlxKey_Impl__obj::SEVEN;

int FlxKey_Impl__obj::EIGHT;

int FlxKey_Impl__obj::NINE;

int FlxKey_Impl__obj::PAGEUP;

int FlxKey_Impl__obj::PAGEDOWN;

int FlxKey_Impl__obj::HOME;

int FlxKey_Impl__obj::END;

int FlxKey_Impl__obj::INSERT;

int FlxKey_Impl__obj::ESCAPE;

int FlxKey_Impl__obj::MINUS;

int FlxKey_Impl__obj::PLUS;

int FlxKey_Impl__obj::DELETE;

int FlxKey_Impl__obj::BACKSPACE;

int FlxKey_Impl__obj::LBRACKET;

int FlxKey_Impl__obj::RBRACKET;

int FlxKey_Impl__obj::BACKSLASH;

int FlxKey_Impl__obj::CAPSLOCK;

int FlxKey_Impl__obj::SCROLL_LOCK;

int FlxKey_Impl__obj::NUMLOCK;

int FlxKey_Impl__obj::SEMICOLON;

int FlxKey_Impl__obj::QUOTE;

int FlxKey_Impl__obj::ENTER;

int FlxKey_Impl__obj::SHIFT;

int FlxKey_Impl__obj::COMMA;

int FlxKey_Impl__obj::PERIOD;

int FlxKey_Impl__obj::SLASH;

int FlxKey_Impl__obj::GRAVEACCENT;

int FlxKey_Impl__obj::CONTROL;

int FlxKey_Impl__obj::ALT;

int FlxKey_Impl__obj::SPACE;

int FlxKey_Impl__obj::UP;

int FlxKey_Impl__obj::DOWN;

int FlxKey_Impl__obj::LEFT;

int FlxKey_Impl__obj::RIGHT;

int FlxKey_Impl__obj::TAB;

int FlxKey_Impl__obj::WINDOWS;

int FlxKey_Impl__obj::MENU;

int FlxKey_Impl__obj::PRINTSCREEN;

int FlxKey_Impl__obj::BREAK;

int FlxKey_Impl__obj::F1;

int FlxKey_Impl__obj::F2;

int FlxKey_Impl__obj::F3;

int FlxKey_Impl__obj::F4;

int FlxKey_Impl__obj::F5;

int FlxKey_Impl__obj::F6;

int FlxKey_Impl__obj::F7;

int FlxKey_Impl__obj::F8;

int FlxKey_Impl__obj::F9;

int FlxKey_Impl__obj::F10;

int FlxKey_Impl__obj::F11;

int FlxKey_Impl__obj::F12;

int FlxKey_Impl__obj::NUMPADZERO;

int FlxKey_Impl__obj::NUMPADONE;

int FlxKey_Impl__obj::NUMPADTWO;

int FlxKey_Impl__obj::NUMPADTHREE;

int FlxKey_Impl__obj::NUMPADFOUR;

int FlxKey_Impl__obj::NUMPADFIVE;

int FlxKey_Impl__obj::NUMPADSIX;

int FlxKey_Impl__obj::NUMPADSEVEN;

int FlxKey_Impl__obj::NUMPADEIGHT;

int FlxKey_Impl__obj::NUMPADNINE;

int FlxKey_Impl__obj::NUMPADMINUS;

int FlxKey_Impl__obj::NUMPADPLUS;

int FlxKey_Impl__obj::NUMPADPERIOD;

int FlxKey_Impl__obj::NUMPADMULTIPLY;

int FlxKey_Impl__obj::NUMPADSLASH;

int FlxKey_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_117_fromString)
HXLINE( 118)		s = s.toUpperCase();
HXLINE( 119)		if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s)) {
HXLINE( 119)			return ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s);
            		}
            		else {
HXLINE( 119)			return -1;
            		}
HXDLIN( 119)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxKey_Impl__obj,fromString,return )

::String FlxKey_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_125_toString)
HXDLIN( 125)		return ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxKey_Impl__obj,toString,return )


FlxKey_Impl__obj::FlxKey_Impl__obj()
{
}

bool FlxKey_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxKey_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxKey_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxKey_Impl__obj::fromStringMap,HX_("fromStringMap",81,6f,a2,3b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &FlxKey_Impl__obj::toStringMap,HX_("toStringMap",50,a5,9e,2e)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::A,HX_("A",41,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::B,HX_("B",42,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::C,HX_("C",43,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::D,HX_("D",44,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::E,HX_("E",45,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F,HX_("F",46,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::G,HX_("G",47,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::H,HX_("H",48,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::I,HX_("I",49,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::J,HX_("J",4a,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::K,HX_("K",4b,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::L,HX_("L",4c,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::M,HX_("M",4d,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::N,HX_("N",4e,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::O,HX_("O",4f,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::P,HX_("P",50,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::Q,HX_("Q",51,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::R,HX_("R",52,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::S,HX_("S",53,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::T,HX_("T",54,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::U,HX_("U",55,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::V,HX_("V",56,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::W,HX_("W",57,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::X,HX_("X",58,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::Y,HX_("Y",59,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::Z,HX_("Z",5a,00,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::ZERO,HX_("ZERO",28,d7,b1,3b)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::ONE,HX_("ONE",46,36,3c,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::TWO,HX_("TWO",6c,09,40,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::THREE,HX_("THREE",3e,8c,7e,8d)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::FOUR,HX_("FOUR",e6,2b,81,2e)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::FIVE,HX_("FIVE",32,9f,7c,2e)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SIX,HX_("SIX",02,3b,3f,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SEVEN,HX_("SEVEN",ed,5c,1f,f8)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::EIGHT,HX_("EIGHT",2f,b9,1c,eb)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NINE,HX_("NINE",32,4d,c6,33)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::PAGEUP,HX_("PAGEUP",6a,5e,bb,98)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::PAGEDOWN,HX_("PAGEDOWN",31,36,e2,b9)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::HOME,HX_("HOME",1f,92,d3,2f)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::END,HX_("END",bb,9f,34,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::INSERT,HX_("INSERT",39,ef,5f,50)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::ESCAPE,HX_("ESCAPE",81,ef,5c,8d)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::MINUS,HX_("MINUS",50,b8,56,86)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::PLUS,HX_("PLUS",5a,07,1b,35)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::DELETE,HX_("DELETE",2b,6c,5b,1d)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::BACKSPACE,HX_("BACKSPACE",1f,f5,42,c6)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::LBRACKET,HX_("LBRACKET",3c,3b,54,16)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::RBRACKET,HX_("RBRACKET",f6,e7,82,6d)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::BACKSLASH,HX_("BACKSLASH",96,28,9e,c3)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::CAPSLOCK,HX_("CAPSLOCK",8c,6c,6e,80)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SCROLL_LOCK,HX_("SCROLL_LOCK",9d,2c,87,f4)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMLOCK,HX_("NUMLOCK",11,e9,32,30)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SEMICOLON,HX_("SEMICOLON",11,86,2a,49)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::QUOTE,HX_("QUOTE",1c,5b,e0,db)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::ENTER,HX_("ENTER",f8,a4,74,ee)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SHIFT,HX_("SHIFT",62,24,11,fa)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::COMMA,HX_("COMMA",b5,69,4b,c8)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::PERIOD,HX_("PERIOD",01,0d,9e,ed)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SLASH,HX_("SLASH",1d,f8,af,fc)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::GRAVEACCENT,HX_("GRAVEACCENT",6f,63,9a,0e)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::CONTROL,HX_("CONTROL",3d,3f,55,99)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::ALT,HX_("ALT",09,95,31,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::SPACE,HX_("SPACE",a6,c4,54,ff)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::TAB,HX_("TAB",35,f6,3f,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::WINDOWS,HX_("WINDOWS",63,b2,48,68)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::MENU,HX_("MENU",9f,0d,1a,33)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::PRINTSCREEN,HX_("PRINTSCREEN",39,7f,7c,10)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::BREAK,HX_("BREAK",9f,5c,da,36)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F1,HX_("F1",2b,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F2,HX_("F2",2c,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F3,HX_("F3",2d,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F4,HX_("F4",2e,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F5,HX_("F5",2f,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F6,HX_("F6",30,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F7,HX_("F7",31,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F8,HX_("F8",32,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F9,HX_("F9",33,3d,00,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F10,HX_("F10",a5,48,35,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F11,HX_("F11",a6,48,35,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::F12,HX_("F12",a7,48,35,00)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADZERO,HX_("NUMPADZERO",75,90,dd,33)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADONE,HX_("NUMPADONE",99,e5,09,5c)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADTWO,HX_("NUMPADTWO",bf,b8,0d,5c)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADTHREE,HX_("NUMPADTHREE",51,f6,94,bb)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADFOUR,HX_("NUMPADFOUR",33,e5,ac,26)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADFIVE,HX_("NUMPADFIVE",7f,58,a8,26)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADSIX,HX_("NUMPADSIX",55,ea,0c,5c)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADSEVEN,HX_("NUMPADSEVEN",00,c7,35,26)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADEIGHT,HX_("NUMPADEIGHT",42,23,33,19)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADNINE,HX_("NUMPADNINE",7f,06,f2,2b)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADMINUS,HX_("NUMPADMINUS",63,22,6d,b4)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADPLUS,HX_("NUMPADPLUS",a7,c0,46,2d)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADPERIOD,HX_("NUMPADPERIOD",8e,73,24,13)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADMULTIPLY,HX_("NUMPADMULTIPLY",f1,55,e9,54)},
	{::hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADSLASH,HX_("NUMPADSLASH",30,62,c6,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxKey_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::C,"C");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::D,"D");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::E,"E");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F,"F");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::G,"G");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::H,"H");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::I,"I");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::J,"J");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::K,"K");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::L,"L");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::M,"M");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::N,"N");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::O,"O");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::P,"P");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Q,"Q");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::R,"R");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::S,"S");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::T,"T");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::U,"U");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::V,"V");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::W,"W");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Z,"Z");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::END,"END");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SCROLL_LOCK,"SCROLL_LOCK");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMLOCK,"NUMLOCK");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::GRAVEACCENT,"GRAVEACCENT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::WINDOWS,"WINDOWS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::MENU,"MENU");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PRINTSCREEN,"PRINTSCREEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BREAK,"BREAK");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F1,"F1");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F2,"F2");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F3,"F3");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F4,"F4");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F5,"F5");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F6,"F6");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F7,"F7");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F8,"F8");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F9,"F9");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F10,"F10");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F11,"F11");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F12,"F12");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADZERO,"NUMPADZERO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADONE,"NUMPADONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTWO,"NUMPADTWO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTHREE,"NUMPADTHREE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFOUR,"NUMPADFOUR");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFIVE,"NUMPADFIVE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSIX,"NUMPADSIX");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADNINE,"NUMPADNINE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMINUS,"NUMPADMINUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPLUS,"NUMPADPLUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSLASH,"NUMPADSLASH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxKey_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::C,"C");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::D,"D");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::E,"E");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F,"F");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::G,"G");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::H,"H");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::I,"I");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::J,"J");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::K,"K");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::L,"L");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::M,"M");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::N,"N");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::O,"O");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::P,"P");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::R,"R");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::S,"S");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::T,"T");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::U,"U");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::V,"V");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::W,"W");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::END,"END");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SCROLL_LOCK,"SCROLL_LOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMLOCK,"NUMLOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::GRAVEACCENT,"GRAVEACCENT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::WINDOWS,"WINDOWS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::MENU,"MENU");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PRINTSCREEN,"PRINTSCREEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BREAK,"BREAK");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADZERO,"NUMPADZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADONE,"NUMPADONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTWO,"NUMPADTWO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTHREE,"NUMPADTHREE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFOUR,"NUMPADFOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFIVE,"NUMPADFIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSIX,"NUMPADSIX");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADNINE,"NUMPADNINE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMINUS,"NUMPADMINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPLUS,"NUMPADPLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSLASH,"NUMPADSLASH");
};

#endif

::hx::Class FlxKey_Impl__obj::__mClass;

static ::String FlxKey_Impl__obj_sStaticFields[] = {
	HX_("fromStringMap",81,6f,a2,3b),
	HX_("toStringMap",50,a5,9e,2e),
	HX_("ANY",cc,96,31,00),
	HX_("NONE",b8,da,ca,33),
	HX_("A",41,00,00,00),
	HX_("B",42,00,00,00),
	HX_("C",43,00,00,00),
	HX_("D",44,00,00,00),
	HX_("E",45,00,00,00),
	HX_("F",46,00,00,00),
	HX_("G",47,00,00,00),
	HX_("H",48,00,00,00),
	HX_("I",49,00,00,00),
	HX_("J",4a,00,00,00),
	HX_("K",4b,00,00,00),
	HX_("L",4c,00,00,00),
	HX_("M",4d,00,00,00),
	HX_("N",4e,00,00,00),
	HX_("O",4f,00,00,00),
	HX_("P",50,00,00,00),
	HX_("Q",51,00,00,00),
	HX_("R",52,00,00,00),
	HX_("S",53,00,00,00),
	HX_("T",54,00,00,00),
	HX_("U",55,00,00,00),
	HX_("V",56,00,00,00),
	HX_("W",57,00,00,00),
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("Z",5a,00,00,00),
	HX_("ZERO",28,d7,b1,3b),
	HX_("ONE",46,36,3c,00),
	HX_("TWO",6c,09,40,00),
	HX_("THREE",3e,8c,7e,8d),
	HX_("FOUR",e6,2b,81,2e),
	HX_("FIVE",32,9f,7c,2e),
	HX_("SIX",02,3b,3f,00),
	HX_("SEVEN",ed,5c,1f,f8),
	HX_("EIGHT",2f,b9,1c,eb),
	HX_("NINE",32,4d,c6,33),
	HX_("PAGEUP",6a,5e,bb,98),
	HX_("PAGEDOWN",31,36,e2,b9),
	HX_("HOME",1f,92,d3,2f),
	HX_("END",bb,9f,34,00),
	HX_("INSERT",39,ef,5f,50),
	HX_("ESCAPE",81,ef,5c,8d),
	HX_("MINUS",50,b8,56,86),
	HX_("PLUS",5a,07,1b,35),
	HX_("DELETE",2b,6c,5b,1d),
	HX_("BACKSPACE",1f,f5,42,c6),
	HX_("LBRACKET",3c,3b,54,16),
	HX_("RBRACKET",f6,e7,82,6d),
	HX_("BACKSLASH",96,28,9e,c3),
	HX_("CAPSLOCK",8c,6c,6e,80),
	HX_("SCROLL_LOCK",9d,2c,87,f4),
	HX_("NUMLOCK",11,e9,32,30),
	HX_("SEMICOLON",11,86,2a,49),
	HX_("QUOTE",1c,5b,e0,db),
	HX_("ENTER",f8,a4,74,ee),
	HX_("SHIFT",62,24,11,fa),
	HX_("COMMA",b5,69,4b,c8),
	HX_("PERIOD",01,0d,9e,ed),
	HX_("SLASH",1d,f8,af,fc),
	HX_("GRAVEACCENT",6f,63,9a,0e),
	HX_("CONTROL",3d,3f,55,99),
	HX_("ALT",09,95,31,00),
	HX_("SPACE",a6,c4,54,ff),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("TAB",35,f6,3f,00),
	HX_("WINDOWS",63,b2,48,68),
	HX_("MENU",9f,0d,1a,33),
	HX_("PRINTSCREEN",39,7f,7c,10),
	HX_("BREAK",9f,5c,da,36),
	HX_("F1",2b,3d,00,00),
	HX_("F2",2c,3d,00,00),
	HX_("F3",2d,3d,00,00),
	HX_("F4",2e,3d,00,00),
	HX_("F5",2f,3d,00,00),
	HX_("F6",30,3d,00,00),
	HX_("F7",31,3d,00,00),
	HX_("F8",32,3d,00,00),
	HX_("F9",33,3d,00,00),
	HX_("F10",a5,48,35,00),
	HX_("F11",a6,48,35,00),
	HX_("F12",a7,48,35,00),
	HX_("NUMPADZERO",75,90,dd,33),
	HX_("NUMPADONE",99,e5,09,5c),
	HX_("NUMPADTWO",bf,b8,0d,5c),
	HX_("NUMPADTHREE",51,f6,94,bb),
	HX_("NUMPADFOUR",33,e5,ac,26),
	HX_("NUMPADFIVE",7f,58,a8,26),
	HX_("NUMPADSIX",55,ea,0c,5c),
	HX_("NUMPADSEVEN",00,c7,35,26),
	HX_("NUMPADEIGHT",42,23,33,19),
	HX_("NUMPADNINE",7f,06,f2,2b),
	HX_("NUMPADMINUS",63,22,6d,b4),
	HX_("NUMPADPLUS",a7,c0,46,2d),
	HX_("NUMPADPERIOD",8e,73,24,13),
	HX_("NUMPADMULTIPLY",f1,55,e9,54),
	HX_("NUMPADSLASH",30,62,c6,2a),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxKey_Impl__obj::__register()
{
	FlxKey_Impl__obj _hx_dummy;
	FlxKey_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.keyboard._FlxKey.FlxKey_Impl_",20,01,a0,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxKey_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxKey_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxKey_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxKey_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxKey_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxKey_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxKey_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxKey_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b641261cd9bd2dff_54_boot)
HXDLIN(  54)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(HX_("ANY",cc,96,31,00),-2);
HXDLIN(  54)			_g->set(HX_("A",41,00,00,00),65);
HXDLIN(  54)			_g->set(HX_("B",42,00,00,00),66);
HXDLIN(  54)			_g->set(HX_("C",43,00,00,00),67);
HXDLIN(  54)			_g->set(HX_("D",44,00,00,00),68);
HXDLIN(  54)			_g->set(HX_("E",45,00,00,00),69);
HXDLIN(  54)			_g->set(HX_("F",46,00,00,00),70);
HXDLIN(  54)			_g->set(HX_("G",47,00,00,00),71);
HXDLIN(  54)			_g->set(HX_("H",48,00,00,00),72);
HXDLIN(  54)			_g->set(HX_("I",49,00,00,00),73);
HXDLIN(  54)			_g->set(HX_("J",4a,00,00,00),74);
HXDLIN(  54)			_g->set(HX_("K",4b,00,00,00),75);
HXDLIN(  54)			_g->set(HX_("L",4c,00,00,00),76);
HXDLIN(  54)			_g->set(HX_("M",4d,00,00,00),77);
HXDLIN(  54)			_g->set(HX_("N",4e,00,00,00),78);
HXDLIN(  54)			_g->set(HX_("O",4f,00,00,00),79);
HXDLIN(  54)			_g->set(HX_("P",50,00,00,00),80);
HXDLIN(  54)			_g->set(HX_("Q",51,00,00,00),81);
HXDLIN(  54)			_g->set(HX_("R",52,00,00,00),82);
HXDLIN(  54)			_g->set(HX_("S",53,00,00,00),83);
HXDLIN(  54)			_g->set(HX_("T",54,00,00,00),84);
HXDLIN(  54)			_g->set(HX_("U",55,00,00,00),85);
HXDLIN(  54)			_g->set(HX_("V",56,00,00,00),86);
HXDLIN(  54)			_g->set(HX_("W",57,00,00,00),87);
HXDLIN(  54)			_g->set(HX_("X",58,00,00,00),88);
HXDLIN(  54)			_g->set(HX_("Y",59,00,00,00),89);
HXDLIN(  54)			_g->set(HX_("Z",5a,00,00,00),90);
HXDLIN(  54)			_g->set(HX_("ZERO",28,d7,b1,3b),48);
HXDLIN(  54)			_g->set(HX_("ONE",46,36,3c,00),49);
HXDLIN(  54)			_g->set(HX_("TWO",6c,09,40,00),50);
HXDLIN(  54)			_g->set(HX_("THREE",3e,8c,7e,8d),51);
HXDLIN(  54)			_g->set(HX_("FOUR",e6,2b,81,2e),52);
HXDLIN(  54)			_g->set(HX_("FIVE",32,9f,7c,2e),53);
HXDLIN(  54)			_g->set(HX_("SIX",02,3b,3f,00),54);
HXDLIN(  54)			_g->set(HX_("SEVEN",ed,5c,1f,f8),55);
HXDLIN(  54)			_g->set(HX_("EIGHT",2f,b9,1c,eb),56);
HXDLIN(  54)			_g->set(HX_("NINE",32,4d,c6,33),57);
HXDLIN(  54)			_g->set(HX_("PAGEUP",6a,5e,bb,98),33);
HXDLIN(  54)			_g->set(HX_("PAGEDOWN",31,36,e2,b9),34);
HXDLIN(  54)			_g->set(HX_("HOME",1f,92,d3,2f),36);
HXDLIN(  54)			_g->set(HX_("END",bb,9f,34,00),35);
HXDLIN(  54)			_g->set(HX_("INSERT",39,ef,5f,50),45);
HXDLIN(  54)			_g->set(HX_("ESCAPE",81,ef,5c,8d),27);
HXDLIN(  54)			_g->set(HX_("MINUS",50,b8,56,86),189);
HXDLIN(  54)			_g->set(HX_("PLUS",5a,07,1b,35),187);
HXDLIN(  54)			_g->set(HX_("DELETE",2b,6c,5b,1d),46);
HXDLIN(  54)			_g->set(HX_("BACKSPACE",1f,f5,42,c6),8);
HXDLIN(  54)			_g->set(HX_("LBRACKET",3c,3b,54,16),219);
HXDLIN(  54)			_g->set(HX_("RBRACKET",f6,e7,82,6d),221);
HXDLIN(  54)			_g->set(HX_("BACKSLASH",96,28,9e,c3),220);
HXDLIN(  54)			_g->set(HX_("CAPSLOCK",8c,6c,6e,80),20);
HXDLIN(  54)			_g->set(HX_("SCROLL_LOCK",9d,2c,87,f4),145);
HXDLIN(  54)			_g->set(HX_("NUMLOCK",11,e9,32,30),144);
HXDLIN(  54)			_g->set(HX_("SEMICOLON",11,86,2a,49),186);
HXDLIN(  54)			_g->set(HX_("QUOTE",1c,5b,e0,db),222);
HXDLIN(  54)			_g->set(HX_("ENTER",f8,a4,74,ee),13);
HXDLIN(  54)			_g->set(HX_("SHIFT",62,24,11,fa),16);
HXDLIN(  54)			_g->set(HX_("COMMA",b5,69,4b,c8),188);
HXDLIN(  54)			_g->set(HX_("PERIOD",01,0d,9e,ed),190);
HXDLIN(  54)			_g->set(HX_("SLASH",1d,f8,af,fc),191);
HXDLIN(  54)			_g->set(HX_("GRAVEACCENT",6f,63,9a,0e),192);
HXDLIN(  54)			_g->set(HX_("CONTROL",3d,3f,55,99),17);
HXDLIN(  54)			_g->set(HX_("ALT",09,95,31,00),18);
HXDLIN(  54)			_g->set(HX_("SPACE",a6,c4,54,ff),32);
HXDLIN(  54)			_g->set(HX_("UP",5b,4a,00,00),38);
HXDLIN(  54)			_g->set(HX_("DOWN",62,c0,2e,2d),40);
HXDLIN(  54)			_g->set(HX_("LEFT",07,d0,70,32),37);
HXDLIN(  54)			_g->set(HX_("RIGHT",bc,43,52,67),39);
HXDLIN(  54)			_g->set(HX_("TAB",35,f6,3f,00),9);
HXDLIN(  54)			_g->set(HX_("WINDOWS",63,b2,48,68),15);
HXDLIN(  54)			_g->set(HX_("MENU",9f,0d,1a,33),302);
HXDLIN(  54)			_g->set(HX_("PRINTSCREEN",39,7f,7c,10),301);
HXDLIN(  54)			_g->set(HX_("BREAK",9f,5c,da,36),19);
HXDLIN(  54)			_g->set(HX_("F1",2b,3d,00,00),112);
HXDLIN(  54)			_g->set(HX_("F2",2c,3d,00,00),113);
HXDLIN(  54)			_g->set(HX_("F3",2d,3d,00,00),114);
HXDLIN(  54)			_g->set(HX_("F4",2e,3d,00,00),115);
HXDLIN(  54)			_g->set(HX_("F5",2f,3d,00,00),116);
HXDLIN(  54)			_g->set(HX_("F6",30,3d,00,00),117);
HXDLIN(  54)			_g->set(HX_("F7",31,3d,00,00),118);
HXDLIN(  54)			_g->set(HX_("F8",32,3d,00,00),119);
HXDLIN(  54)			_g->set(HX_("F9",33,3d,00,00),120);
HXDLIN(  54)			_g->set(HX_("F10",a5,48,35,00),121);
HXDLIN(  54)			_g->set(HX_("F11",a6,48,35,00),122);
HXDLIN(  54)			_g->set(HX_("F12",a7,48,35,00),123);
HXDLIN(  54)			_g->set(HX_("NUMPADZERO",75,90,dd,33),96);
HXDLIN(  54)			_g->set(HX_("NUMPADONE",99,e5,09,5c),97);
HXDLIN(  54)			_g->set(HX_("NUMPADTWO",bf,b8,0d,5c),98);
HXDLIN(  54)			_g->set(HX_("NUMPADTHREE",51,f6,94,bb),99);
HXDLIN(  54)			_g->set(HX_("NUMPADFOUR",33,e5,ac,26),100);
HXDLIN(  54)			_g->set(HX_("NUMPADFIVE",7f,58,a8,26),101);
HXDLIN(  54)			_g->set(HX_("NUMPADSIX",55,ea,0c,5c),102);
HXDLIN(  54)			_g->set(HX_("NUMPADSEVEN",00,c7,35,26),103);
HXDLIN(  54)			_g->set(HX_("NUMPADEIGHT",42,23,33,19),104);
HXDLIN(  54)			_g->set(HX_("NUMPADNINE",7f,06,f2,2b),105);
HXDLIN(  54)			_g->set(HX_("NUMPADMINUS",63,22,6d,b4),109);
HXDLIN(  54)			_g->set(HX_("NUMPADPLUS",a7,c0,46,2d),107);
HXDLIN(  54)			_g->set(HX_("NUMPADPERIOD",8e,73,24,13),110);
HXDLIN(  54)			_g->set(HX_("NUMPADMULTIPLY",f1,55,e9,54),106);
HXDLIN(  54)			_g->set(HX_("NUMPADSLASH",30,62,c6,2a),111);
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b641261cd9bd2dff_54_boot)
HXDLIN(  54)		fromStringMap = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b641261cd9bd2dff_54_boot)
HXDLIN(  54)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(-2,HX_("ANY",cc,96,31,00));
HXDLIN(  54)			_g->set(65,HX_("A",41,00,00,00));
HXDLIN(  54)			_g->set(66,HX_("B",42,00,00,00));
HXDLIN(  54)			_g->set(67,HX_("C",43,00,00,00));
HXDLIN(  54)			_g->set(68,HX_("D",44,00,00,00));
HXDLIN(  54)			_g->set(69,HX_("E",45,00,00,00));
HXDLIN(  54)			_g->set(70,HX_("F",46,00,00,00));
HXDLIN(  54)			_g->set(71,HX_("G",47,00,00,00));
HXDLIN(  54)			_g->set(72,HX_("H",48,00,00,00));
HXDLIN(  54)			_g->set(73,HX_("I",49,00,00,00));
HXDLIN(  54)			_g->set(74,HX_("J",4a,00,00,00));
HXDLIN(  54)			_g->set(75,HX_("K",4b,00,00,00));
HXDLIN(  54)			_g->set(76,HX_("L",4c,00,00,00));
HXDLIN(  54)			_g->set(77,HX_("M",4d,00,00,00));
HXDLIN(  54)			_g->set(78,HX_("N",4e,00,00,00));
HXDLIN(  54)			_g->set(79,HX_("O",4f,00,00,00));
HXDLIN(  54)			_g->set(80,HX_("P",50,00,00,00));
HXDLIN(  54)			_g->set(81,HX_("Q",51,00,00,00));
HXDLIN(  54)			_g->set(82,HX_("R",52,00,00,00));
HXDLIN(  54)			_g->set(83,HX_("S",53,00,00,00));
HXDLIN(  54)			_g->set(84,HX_("T",54,00,00,00));
HXDLIN(  54)			_g->set(85,HX_("U",55,00,00,00));
HXDLIN(  54)			_g->set(86,HX_("V",56,00,00,00));
HXDLIN(  54)			_g->set(87,HX_("W",57,00,00,00));
HXDLIN(  54)			_g->set(88,HX_("X",58,00,00,00));
HXDLIN(  54)			_g->set(89,HX_("Y",59,00,00,00));
HXDLIN(  54)			_g->set(90,HX_("Z",5a,00,00,00));
HXDLIN(  54)			_g->set(48,HX_("ZERO",28,d7,b1,3b));
HXDLIN(  54)			_g->set(49,HX_("ONE",46,36,3c,00));
HXDLIN(  54)			_g->set(50,HX_("TWO",6c,09,40,00));
HXDLIN(  54)			_g->set(51,HX_("THREE",3e,8c,7e,8d));
HXDLIN(  54)			_g->set(52,HX_("FOUR",e6,2b,81,2e));
HXDLIN(  54)			_g->set(53,HX_("FIVE",32,9f,7c,2e));
HXDLIN(  54)			_g->set(54,HX_("SIX",02,3b,3f,00));
HXDLIN(  54)			_g->set(55,HX_("SEVEN",ed,5c,1f,f8));
HXDLIN(  54)			_g->set(56,HX_("EIGHT",2f,b9,1c,eb));
HXDLIN(  54)			_g->set(57,HX_("NINE",32,4d,c6,33));
HXDLIN(  54)			_g->set(33,HX_("PAGEUP",6a,5e,bb,98));
HXDLIN(  54)			_g->set(34,HX_("PAGEDOWN",31,36,e2,b9));
HXDLIN(  54)			_g->set(36,HX_("HOME",1f,92,d3,2f));
HXDLIN(  54)			_g->set(35,HX_("END",bb,9f,34,00));
HXDLIN(  54)			_g->set(45,HX_("INSERT",39,ef,5f,50));
HXDLIN(  54)			_g->set(27,HX_("ESCAPE",81,ef,5c,8d));
HXDLIN(  54)			_g->set(189,HX_("MINUS",50,b8,56,86));
HXDLIN(  54)			_g->set(187,HX_("PLUS",5a,07,1b,35));
HXDLIN(  54)			_g->set(46,HX_("DELETE",2b,6c,5b,1d));
HXDLIN(  54)			_g->set(8,HX_("BACKSPACE",1f,f5,42,c6));
HXDLIN(  54)			_g->set(219,HX_("LBRACKET",3c,3b,54,16));
HXDLIN(  54)			_g->set(221,HX_("RBRACKET",f6,e7,82,6d));
HXDLIN(  54)			_g->set(220,HX_("BACKSLASH",96,28,9e,c3));
HXDLIN(  54)			_g->set(20,HX_("CAPSLOCK",8c,6c,6e,80));
HXDLIN(  54)			_g->set(145,HX_("SCROLL_LOCK",9d,2c,87,f4));
HXDLIN(  54)			_g->set(144,HX_("NUMLOCK",11,e9,32,30));
HXDLIN(  54)			_g->set(186,HX_("SEMICOLON",11,86,2a,49));
HXDLIN(  54)			_g->set(222,HX_("QUOTE",1c,5b,e0,db));
HXDLIN(  54)			_g->set(13,HX_("ENTER",f8,a4,74,ee));
HXDLIN(  54)			_g->set(16,HX_("SHIFT",62,24,11,fa));
HXDLIN(  54)			_g->set(188,HX_("COMMA",b5,69,4b,c8));
HXDLIN(  54)			_g->set(190,HX_("PERIOD",01,0d,9e,ed));
HXDLIN(  54)			_g->set(191,HX_("SLASH",1d,f8,af,fc));
HXDLIN(  54)			_g->set(192,HX_("GRAVEACCENT",6f,63,9a,0e));
HXDLIN(  54)			_g->set(17,HX_("CONTROL",3d,3f,55,99));
HXDLIN(  54)			_g->set(18,HX_("ALT",09,95,31,00));
HXDLIN(  54)			_g->set(32,HX_("SPACE",a6,c4,54,ff));
HXDLIN(  54)			_g->set(38,HX_("UP",5b,4a,00,00));
HXDLIN(  54)			_g->set(40,HX_("DOWN",62,c0,2e,2d));
HXDLIN(  54)			_g->set(37,HX_("LEFT",07,d0,70,32));
HXDLIN(  54)			_g->set(39,HX_("RIGHT",bc,43,52,67));
HXDLIN(  54)			_g->set(9,HX_("TAB",35,f6,3f,00));
HXDLIN(  54)			_g->set(15,HX_("WINDOWS",63,b2,48,68));
HXDLIN(  54)			_g->set(302,HX_("MENU",9f,0d,1a,33));
HXDLIN(  54)			_g->set(301,HX_("PRINTSCREEN",39,7f,7c,10));
HXDLIN(  54)			_g->set(19,HX_("BREAK",9f,5c,da,36));
HXDLIN(  54)			_g->set(112,HX_("F1",2b,3d,00,00));
HXDLIN(  54)			_g->set(113,HX_("F2",2c,3d,00,00));
HXDLIN(  54)			_g->set(114,HX_("F3",2d,3d,00,00));
HXDLIN(  54)			_g->set(115,HX_("F4",2e,3d,00,00));
HXDLIN(  54)			_g->set(116,HX_("F5",2f,3d,00,00));
HXDLIN(  54)			_g->set(117,HX_("F6",30,3d,00,00));
HXDLIN(  54)			_g->set(118,HX_("F7",31,3d,00,00));
HXDLIN(  54)			_g->set(119,HX_("F8",32,3d,00,00));
HXDLIN(  54)			_g->set(120,HX_("F9",33,3d,00,00));
HXDLIN(  54)			_g->set(121,HX_("F10",a5,48,35,00));
HXDLIN(  54)			_g->set(122,HX_("F11",a6,48,35,00));
HXDLIN(  54)			_g->set(123,HX_("F12",a7,48,35,00));
HXDLIN(  54)			_g->set(96,HX_("NUMPADZERO",75,90,dd,33));
HXDLIN(  54)			_g->set(97,HX_("NUMPADONE",99,e5,09,5c));
HXDLIN(  54)			_g->set(98,HX_("NUMPADTWO",bf,b8,0d,5c));
HXDLIN(  54)			_g->set(99,HX_("NUMPADTHREE",51,f6,94,bb));
HXDLIN(  54)			_g->set(100,HX_("NUMPADFOUR",33,e5,ac,26));
HXDLIN(  54)			_g->set(101,HX_("NUMPADFIVE",7f,58,a8,26));
HXDLIN(  54)			_g->set(102,HX_("NUMPADSIX",55,ea,0c,5c));
HXDLIN(  54)			_g->set(103,HX_("NUMPADSEVEN",00,c7,35,26));
HXDLIN(  54)			_g->set(104,HX_("NUMPADEIGHT",42,23,33,19));
HXDLIN(  54)			_g->set(105,HX_("NUMPADNINE",7f,06,f2,2b));
HXDLIN(  54)			_g->set(109,HX_("NUMPADMINUS",63,22,6d,b4));
HXDLIN(  54)			_g->set(107,HX_("NUMPADPLUS",a7,c0,46,2d));
HXDLIN(  54)			_g->set(110,HX_("NUMPADPERIOD",8e,73,24,13));
HXDLIN(  54)			_g->set(106,HX_("NUMPADMULTIPLY",f1,55,e9,54));
HXDLIN(  54)			_g->set(111,HX_("NUMPADSLASH",30,62,c6,2a));
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b641261cd9bd2dff_54_boot)
HXDLIN(  54)		toStringMap = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_13_boot)
HXDLIN(  13)		ANY = -2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_14_boot)
HXDLIN(  14)		NONE = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_15_boot)
HXDLIN(  15)		A = 65;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_16_boot)
HXDLIN(  16)		B = 66;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_17_boot)
HXDLIN(  17)		C = 67;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_18_boot)
HXDLIN(  18)		D = 68;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_19_boot)
HXDLIN(  19)		E = 69;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_20_boot)
HXDLIN(  20)		F = 70;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_21_boot)
HXDLIN(  21)		G = 71;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_22_boot)
HXDLIN(  22)		H = 72;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_23_boot)
HXDLIN(  23)		I = 73;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_24_boot)
HXDLIN(  24)		J = 74;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_25_boot)
HXDLIN(  25)		K = 75;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_26_boot)
HXDLIN(  26)		L = 76;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_27_boot)
HXDLIN(  27)		M = 77;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_28_boot)
HXDLIN(  28)		N = 78;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_29_boot)
HXDLIN(  29)		O = 79;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_30_boot)
HXDLIN(  30)		P = 80;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_31_boot)
HXDLIN(  31)		Q = 81;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_32_boot)
HXDLIN(  32)		R = 82;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_33_boot)
HXDLIN(  33)		S = 83;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_34_boot)
HXDLIN(  34)		T = 84;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_35_boot)
HXDLIN(  35)		U = 85;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_36_boot)
HXDLIN(  36)		V = 86;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_37_boot)
HXDLIN(  37)		W = 87;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_38_boot)
HXDLIN(  38)		X = 88;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_39_boot)
HXDLIN(  39)		Y = 89;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_40_boot)
HXDLIN(  40)		Z = 90;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_41_boot)
HXDLIN(  41)		ZERO = 48;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_42_boot)
HXDLIN(  42)		ONE = 49;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_43_boot)
HXDLIN(  43)		TWO = 50;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_44_boot)
HXDLIN(  44)		THREE = 51;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_45_boot)
HXDLIN(  45)		FOUR = 52;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_46_boot)
HXDLIN(  46)		FIVE = 53;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_47_boot)
HXDLIN(  47)		SIX = 54;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_48_boot)
HXDLIN(  48)		SEVEN = 55;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_49_boot)
HXDLIN(  49)		EIGHT = 56;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_50_boot)
HXDLIN(  50)		NINE = 57;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_51_boot)
HXDLIN(  51)		PAGEUP = 33;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_52_boot)
HXDLIN(  52)		PAGEDOWN = 34;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_53_boot)
HXDLIN(  53)		HOME = 36;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_54_boot)
HXDLIN(  54)		END = 35;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_55_boot)
HXDLIN(  55)		INSERT = 45;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_56_boot)
HXDLIN(  56)		ESCAPE = 27;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_57_boot)
HXDLIN(  57)		MINUS = 189;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_58_boot)
HXDLIN(  58)		PLUS = 187;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_59_boot)
HXDLIN(  59)		DELETE = 46;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_60_boot)
HXDLIN(  60)		BACKSPACE = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_61_boot)
HXDLIN(  61)		LBRACKET = 219;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_62_boot)
HXDLIN(  62)		RBRACKET = 221;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_63_boot)
HXDLIN(  63)		BACKSLASH = 220;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_64_boot)
HXDLIN(  64)		CAPSLOCK = 20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_65_boot)
HXDLIN(  65)		SCROLL_LOCK = 145;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_66_boot)
HXDLIN(  66)		NUMLOCK = 144;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_67_boot)
HXDLIN(  67)		SEMICOLON = 186;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_68_boot)
HXDLIN(  68)		QUOTE = 222;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_69_boot)
HXDLIN(  69)		ENTER = 13;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_70_boot)
HXDLIN(  70)		SHIFT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_71_boot)
HXDLIN(  71)		COMMA = 188;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_72_boot)
HXDLIN(  72)		PERIOD = 190;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_73_boot)
HXDLIN(  73)		SLASH = 191;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_74_boot)
HXDLIN(  74)		GRAVEACCENT = 192;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_75_boot)
HXDLIN(  75)		CONTROL = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_76_boot)
HXDLIN(  76)		ALT = 18;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_77_boot)
HXDLIN(  77)		SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_78_boot)
HXDLIN(  78)		UP = 38;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_79_boot)
HXDLIN(  79)		DOWN = 40;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_80_boot)
HXDLIN(  80)		LEFT = 37;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_81_boot)
HXDLIN(  81)		RIGHT = 39;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_82_boot)
HXDLIN(  82)		TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_83_boot)
HXDLIN(  83)		WINDOWS = 15;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_84_boot)
HXDLIN(  84)		MENU = 302;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_85_boot)
HXDLIN(  85)		PRINTSCREEN = 301;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_86_boot)
HXDLIN(  86)		BREAK = 19;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_87_boot)
HXDLIN(  87)		F1 = 112;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_88_boot)
HXDLIN(  88)		F2 = 113;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_89_boot)
HXDLIN(  89)		F3 = 114;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_90_boot)
HXDLIN(  90)		F4 = 115;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_91_boot)
HXDLIN(  91)		F5 = 116;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_92_boot)
HXDLIN(  92)		F6 = 117;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_93_boot)
HXDLIN(  93)		F7 = 118;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_94_boot)
HXDLIN(  94)		F8 = 119;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_95_boot)
HXDLIN(  95)		F9 = 120;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_96_boot)
HXDLIN(  96)		F10 = 121;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_97_boot)
HXDLIN(  97)		F11 = 122;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_98_boot)
HXDLIN(  98)		F12 = 123;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_99_boot)
HXDLIN(  99)		NUMPADZERO = 96;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_100_boot)
HXDLIN( 100)		NUMPADONE = 97;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_101_boot)
HXDLIN( 101)		NUMPADTWO = 98;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_102_boot)
HXDLIN( 102)		NUMPADTHREE = 99;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_103_boot)
HXDLIN( 103)		NUMPADFOUR = 100;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_104_boot)
HXDLIN( 104)		NUMPADFIVE = 101;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_105_boot)
HXDLIN( 105)		NUMPADSIX = 102;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_106_boot)
HXDLIN( 106)		NUMPADSEVEN = 103;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_107_boot)
HXDLIN( 107)		NUMPADEIGHT = 104;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_108_boot)
HXDLIN( 108)		NUMPADNINE = 105;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_109_boot)
HXDLIN( 109)		NUMPADMINUS = 109;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_110_boot)
HXDLIN( 110)		NUMPADPLUS = 107;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_111_boot)
HXDLIN( 111)		NUMPADPERIOD = 110;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_112_boot)
HXDLIN( 112)		NUMPADMULTIPLY = 106;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9115cea19c56d84_113_boot)
HXDLIN( 113)		NUMPADSLASH = 111;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
} // end namespace _FlxKey
