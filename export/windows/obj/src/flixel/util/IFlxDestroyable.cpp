#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxDestroyable_obj_sMemberFields[] = {
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class IFlxDestroyable_obj::__mClass;

void IFlxDestroyable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.IFlxDestroyable",51,e9,02,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxDestroyable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd4fe2fcd >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
