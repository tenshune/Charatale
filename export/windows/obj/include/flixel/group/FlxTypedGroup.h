#ifndef INCLUDED_flixel_group_FlxTypedGroup
#define INCLUDED_flixel_group_FlxTypedGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroupIterator)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS2(haxe,iterators,ArrayKeyValueIterator)

namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES FlxTypedGroup_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxTypedGroup_obj OBJ_;
		FlxTypedGroup_obj();

	public:
		enum { _hx_ClassId = 0x62817b24 };

		void __construct(::hx::Null< int >  __o_MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.group.FlxTypedGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.group.FlxTypedGroup"); }
		static ::hx::ObjectPtr< FlxTypedGroup_obj > __new(::hx::Null< int >  __o_MaxSize);
		static ::hx::ObjectPtr< FlxTypedGroup_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedGroup",67,cd,0c,9b); }

		static  ::flixel::group::FlxTypedGroup resolveGroup( ::flixel::FlxBasic basic);
		static ::Dynamic resolveGroup_dyn();

		static  ::flixel::group::FlxTypedGroup resolveSelectionGroup( ::flixel::FlxBasic basic);
		static ::Dynamic resolveSelectionGroup_dyn();

		::cpp::VirtualArray members;
		int maxSize;
		int length;
		 ::flixel::util::_FlxSignal::FlxSignal1 _memberAdded;
		 ::flixel::util::_FlxSignal::FlxSignal1 _memberRemoved;
		int _marker;
		virtual void destroy();

		virtual void update(Float elapsed);

		virtual void draw();

		 ::Dynamic add( ::Dynamic basic);
		::Dynamic add_dyn();

		 ::Dynamic insert(int position, ::Dynamic object);
		::Dynamic insert_dyn();

		 ::Dynamic recycle(::hx::Class objectClass, ::Dynamic objectFactory,::hx::Null< bool >  force,::hx::Null< bool >  revive);
		::Dynamic recycle_dyn();

		 ::Dynamic remove( ::Dynamic basic,::hx::Null< bool >  splice);
		::Dynamic remove_dyn();

		 ::Dynamic replace( ::Dynamic oldObject, ::Dynamic newObject);
		::Dynamic replace_dyn();

		void sort( ::Dynamic func,::hx::Null< int >  order);
		::Dynamic sort_dyn();

		 ::Dynamic getFirst( ::Dynamic func);
		::Dynamic getFirst_dyn();

		 ::Dynamic getFirstHelper( ::Dynamic func);
		::Dynamic getFirstHelper_dyn();

		 ::Dynamic getLast( ::Dynamic func);
		::Dynamic getLast_dyn();

		int getFirstIndex( ::Dynamic func);
		::Dynamic getFirstIndex_dyn();

		int getLastIndex( ::Dynamic func);
		::Dynamic getLastIndex_dyn();

		bool any( ::Dynamic func);
		::Dynamic any_dyn();

		bool every( ::Dynamic func);
		::Dynamic every_dyn();

		 ::Dynamic getFirstAvailable(::hx::Class objectClass,::hx::Null< bool >  force);
		::Dynamic getFirstAvailable_dyn();

		int getFirstNull();
		::Dynamic getFirstNull_dyn();

		 ::Dynamic getFirstExisting();
		::Dynamic getFirstExisting_dyn();

		 ::Dynamic getFirstAlive();
		::Dynamic getFirstAlive_dyn();

		 ::Dynamic getFirstDead();
		::Dynamic getFirstDead_dyn();

		int countLiving();
		::Dynamic countLiving_dyn();

		int countDead();
		::Dynamic countDead_dyn();

		 ::Dynamic getRandom(::hx::Null< int >  startIndex,::hx::Null< int >  length);
		::Dynamic getRandom_dyn();

		void clear();
		::Dynamic clear_dyn();

		void killMembers();
		::Dynamic killMembers_dyn();

		virtual void kill();

		void reviveMembers();
		::Dynamic reviveMembers_dyn();

		void revive();

		 ::flixel::group::FlxTypedGroupIterator iterator( ::Dynamic filter);
		::Dynamic iterator_dyn();

		 ::haxe::iterators::ArrayKeyValueIterator keyValueIterator();
		::Dynamic keyValueIterator_dyn();

		void forEach( ::Dynamic func,::hx::Null< bool >  recurse);
		::Dynamic forEach_dyn();

		void forEachAlive( ::Dynamic func,::hx::Null< bool >  recurse);
		::Dynamic forEachAlive_dyn();

		void forEachDead( ::Dynamic func,::hx::Null< bool >  recurse);
		::Dynamic forEachDead_dyn();

		void forEachExists( ::Dynamic func,::hx::Null< bool >  recurse);
		::Dynamic forEachExists_dyn();

		void forEachOfType(::hx::Class objectClass, ::Dynamic func,::hx::Null< bool >  recurse);
		::Dynamic forEachOfType_dyn();

		int set_maxSize(int size);
		::Dynamic set_maxSize_dyn();

		 ::flixel::util::_FlxSignal::FlxSignal1 get_memberAdded();
		::Dynamic get_memberAdded_dyn();

		 ::flixel::util::_FlxSignal::FlxSignal1 get_memberRemoved();
		::Dynamic get_memberRemoved_dyn();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedGroup */ 
