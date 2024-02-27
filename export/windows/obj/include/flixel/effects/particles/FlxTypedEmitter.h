#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#define INCLUDED_flixel_effects_particles_FlxTypedEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitterMode)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxPointRangeBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRangeBounds)

namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES FlxTypedEmitter_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxTypedEmitter_obj OBJ_;
		FlxTypedEmitter_obj();

	public:
		enum { _hx_ClassId = 0x2e67f70b };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.effects.particles.FlxTypedEmitter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.effects.particles.FlxTypedEmitter"); }
		static ::hx::ObjectPtr< FlxTypedEmitter_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Size);
		static ::hx::ObjectPtr< FlxTypedEmitter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedEmitter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedEmitter",96,29,e7,49); }

		::hx::Class particleClass;
		bool emitting;
		Float frequency;
		 ::Dynamic blend;
		Float x;
		Float y;
		Float width;
		Float height;
		 ::flixel::effects::particles::FlxEmitterMode launchMode;
		bool keepScaleRatio;
		 ::flixel::util::helpers::FlxPointRangeBounds velocity;
		 ::flixel::util::helpers::FlxRangeBounds speed;
		 ::flixel::util::helpers::FlxRangeBounds angularAcceleration;
		 ::flixel::util::helpers::FlxRangeBounds angularDrag;
		 ::flixel::util::helpers::FlxRangeBounds angularVelocity;
		 ::flixel::util::helpers::FlxRangeBounds angle;
		bool ignoreAngularVelocity;
		 ::flixel::util::helpers::FlxBounds launchAngle;
		 ::flixel::util::helpers::FlxBounds lifespan;
		 ::flixel::util::helpers::FlxPointRangeBounds scale;
		 ::flixel::util::helpers::FlxRangeBounds alpha;
		 ::flixel::util::helpers::FlxRangeBounds color;
		 ::flixel::util::helpers::FlxPointRangeBounds drag;
		 ::flixel::util::helpers::FlxPointRangeBounds acceleration;
		 ::flixel::util::helpers::FlxRangeBounds elasticity;
		bool immovable;
		bool autoUpdateHitbox;
		int allowCollisions;
		int _quantity;
		bool _explode;
		Float _timer;
		int _counter;
		 ::flixel::math::FlxBasePoint _point;
		bool _waitForKill;
		void destroy();

		 ::flixel::effects::particles::FlxTypedEmitter loadParticles( ::Dynamic Graphics,::hx::Null< int >  Quantity,::hx::Null< int >  bakedRotationAngles,::hx::Null< bool >  Multiple,::hx::Null< bool >  AutoBuffer);
		::Dynamic loadParticles_dyn();

		 ::Dynamic loadParticle( ::Dynamic Graphics,int Quantity,int bakedRotationAngles,::hx::Null< bool >  Multiple,::hx::Null< bool >  AutoBuffer,int totalFrames);
		::Dynamic loadParticle_dyn();

		 ::flixel::effects::particles::FlxTypedEmitter makeParticles(::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< int >  Color,::hx::Null< int >  Quantity);
		::Dynamic makeParticles_dyn();

		void update(Float elapsed);

		void explode();
		::Dynamic explode_dyn();

		void emitContinuously(Float elapsed);
		::Dynamic emitContinuously_dyn();

		void emitParticleContinuously();
		::Dynamic emitParticleContinuously_dyn();

		void onFinished();
		::Dynamic onFinished_dyn();

		void kill();

		 ::flixel::effects::particles::FlxTypedEmitter start(::hx::Null< bool >  Explode,::hx::Null< Float >  Frequency,::hx::Null< int >  Quantity);
		::Dynamic start_dyn();

		 ::Dynamic emitParticle();
		::Dynamic emitParticle_dyn();

		void focusOn( ::flixel::FlxObject Object);
		::Dynamic focusOn_dyn();

		void setPosition(::hx::Null< Float >  X,::hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		void setSize(Float Width,Float Height);
		::Dynamic setSize_dyn();

		bool get_solid();
		::Dynamic get_solid_dyn();

		bool set_solid(bool Solid);
		::Dynamic set_solid_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxTypedEmitter */ 
