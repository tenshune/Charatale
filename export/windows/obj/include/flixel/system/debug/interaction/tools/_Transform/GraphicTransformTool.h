#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformTool
#define INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformTool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS6(flixel,_hx_system,debug,interaction,tools,_Transform,GraphicTransformTool)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _Transform{


class HXCPP_CLASS_ATTRIBUTES GraphicTransformTool_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicTransformTool_obj OBJ_;
		GraphicTransformTool_obj();

	public:
		enum { _hx_ClassId = 0x47b5c67a };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools._Transform.GraphicTransformTool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools._Transform.GraphicTransformTool"); }
		static ::hx::ObjectPtr< GraphicTransformTool_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static ::hx::ObjectPtr< GraphicTransformTool_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicTransformTool_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicTransformTool",3c,b3,51,fa); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _Transform

#endif /* INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformTool */ 
