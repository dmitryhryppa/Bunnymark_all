#ifndef INCLUDED_haxor_component_physics_BoxCollider
#define INCLUDED_haxor_component_physics_BoxCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS3(haxor,component,physics,BoxCollider)
HX_DECLARE_CLASS3(haxor,component,physics,Collider)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,math,Vector3)
namespace haxor{
namespace component{
namespace physics{


class HXCPP_CLASS_ATTRIBUTES  BoxCollider_obj : public ::haxor::component::physics::Collider_obj{
	public:
		typedef ::haxor::component::physics::Collider_obj super;
		typedef BoxCollider_obj OBJ_;
		BoxCollider_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.physics.BoxCollider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BoxCollider_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoxCollider_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BoxCollider","\x3f","\x74","\x52","\x1e"); }

		virtual ::haxor::math::Vector3 get_center( );
		Dynamic get_center_dyn();

		virtual ::haxor::math::Vector3 set_center( ::haxor::math::Vector3 v);
		Dynamic set_center_dyn();

		::haxor::math::Vector3 m_center;
		virtual ::haxor::math::Vector3 get_size( );
		Dynamic get_size_dyn();

		virtual ::haxor::math::Vector3 set_size( ::haxor::math::Vector3 v);
		Dynamic set_size_dyn();

		::haxor::math::Vector3 m_size;
		virtual Void OnBuild( );

		virtual Void GenerateSphere( );

		virtual Void GenerateAABB( );

};

} // end namespace haxor
} // end namespace component
} // end namespace physics

#endif /* INCLUDED_haxor_component_physics_BoxCollider */ 