#ifndef INCLUDED_openfl_media_SoundChannel
#define INCLUDED_openfl_media_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,media,AudioSource)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,SampleDataEvent)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES SoundChannel_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();

	public:
		enum { _hx_ClassId = 0x1a2cc6bc };

		void __construct( ::openfl::media::Sound sound, ::lime::media::AudioSource audioSource, ::openfl::media::SoundTransform soundTransform);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.media.SoundChannel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.media.SoundChannel"); }
		static ::hx::ObjectPtr< SoundChannel_obj > __new( ::openfl::media::Sound sound, ::lime::media::AudioSource audioSource, ::openfl::media::SoundTransform soundTransform);
		static ::hx::ObjectPtr< SoundChannel_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::media::Sound sound, ::lime::media::AudioSource audioSource, ::openfl::media::SoundTransform soundTransform);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SoundChannel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SoundChannel",d4,af,1c,a9); }

		Float leftPeak;
		Float rightPeak;
		 ::openfl::media::Sound _hx___sound;
		bool _hx___isValid;
		 ::openfl::media::SoundTransform _hx___soundTransform;
		 ::lime::media::AudioSource _hx___audioSource;
		 ::openfl::events::SampleDataEvent _hx___sampleDataEvent;
		 ::Dynamic _hx___alSource;
		 ::openfl::utils::ByteArrayData _hx___outputBuffer;
		 ::lime::utils::ArrayBufferView _hx___bufferView;
		::cpp::VirtualArray _hx___alBuffers;
		int _hx___numberOfBuffers;
		::cpp::VirtualArray _hx___emptyBuffers;
		void stop();
		::Dynamic stop_dyn();

		void _hx___dispose();
		::Dynamic _hx___dispose_dyn();

		void _hx___startSampleData();
		::Dynamic _hx___startSampleData_dyn();

		void _hx___updateTransform();
		::Dynamic _hx___updateTransform_dyn();

		void _hx___initAudioSource( ::lime::media::AudioSource audioSource);
		::Dynamic _hx___initAudioSource_dyn();

		Float get_position();
		::Dynamic get_position_dyn();

		Float set_position(Float value);
		::Dynamic set_position_dyn();

		 ::openfl::media::SoundTransform get_soundTransform();
		::Dynamic get_soundTransform_dyn();

		 ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		::Dynamic set_soundTransform_dyn();

		void audioSource_onComplete();
		::Dynamic audioSource_onComplete_dyn();

		void watchBuffers(int i);
		::Dynamic watchBuffers_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundChannel */ 
