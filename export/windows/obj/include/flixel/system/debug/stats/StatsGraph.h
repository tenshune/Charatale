#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#define INCLUDED_flixel_system_debug_stats_StatsGraph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,stats,StatsGraph)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{


class HXCPP_CLASS_ATTRIBUTES StatsGraph_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef StatsGraph_obj OBJ_;
		StatsGraph_obj();

	public:
		enum { _hx_ClassId = 0x2be41faa };

		void __construct(int X,int Y,int Width,int Height,int GraphColor,::String Unit,::hx::Null< int >  __o_LabelWidth,::String Label);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats.StatsGraph")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.stats.StatsGraph"); }
		static ::hx::ObjectPtr< StatsGraph_obj > __new(int X,int Y,int Width,int Height,int GraphColor,::String Unit,::hx::Null< int >  __o_LabelWidth,::String Label);
		static ::hx::ObjectPtr< StatsGraph_obj > __alloc(::hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height,int GraphColor,::String Unit,::hx::Null< int >  __o_LabelWidth,::String Label);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StatsGraph_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StatsGraph",cf,7c,81,99); }

		static void __boot();
		static int AXIS_COLOR;
		static Float AXIS_ALPHA;
		static int HISTORY_MAX;
		 ::openfl::text::TextField minLabel;
		 ::openfl::text::TextField curLabel;
		 ::openfl::text::TextField maxLabel;
		 ::openfl::text::TextField avgLabel;
		Float minValue;
		Float maxValue;
		int graphColor;
		::Array< Float > history;
		 ::openfl::display::Shape _axis;
		int _width;
		int _height;
		::String _unit;
		int _labelWidth;
		::String _label;
		void drawAxes();
		::Dynamic drawAxes_dyn();

		void drawGraph();
		::Dynamic drawGraph_dyn();

		void update(Float Value);
		::Dynamic update_dyn();

		::String formatValue(Float value);
		::Dynamic formatValue_dyn();

		Float average();
		::Dynamic average_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats

#endif /* INCLUDED_flixel_system_debug_stats_StatsGraph */ 
