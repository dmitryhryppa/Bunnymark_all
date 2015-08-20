#ifndef INCLUDED_haxor_component_Component
#define INCLUDED_haxor_component_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Camera)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,component,Transform)
HX_DECLARE_CLASS3(haxor,component,physics,RigidBody)
HX_DECLARE_CLASS2(haxor,core,Entity)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IResizeable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
namespace haxor{
namespace component{


class HXCPP_CLASS_ATTRIBUTES  Component_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Component_obj OBJ_;
		Component_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.component.Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Component_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"); }

		virtual ::String get_name( );

		virtual ::String set_name( ::String v);

		::haxor::core::Entity entity;
		virtual ::haxor::core::Entity get_entity( );
		Dynamic get_entity_dyn();

		::haxor::core::Entity m_entity;
		virtual int get_layer( );
		Dynamic get_layer_dyn();

		virtual int set_layer( int v);
		Dynamic set_layer_dyn();

		::haxor::component::Transform transform;
		virtual ::haxor::component::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::haxor::component::Camera get_camera( );
		Dynamic get_camera_dyn();

		virtual ::haxor::component::Renderer get_renderer( );
		Dynamic get_renderer_dyn();

		virtual ::haxor::component::physics::RigidBody get_rigidbody( );
		Dynamic get_rigidbody_dyn();

		virtual Dynamic AddComponent( ::hx::Class p_type);
		Dynamic AddComponent_dyn();

		virtual Dynamic GetComponent( ::hx::Class p_type);
		Dynamic GetComponent_dyn();

		virtual Dynamic GetComponents( ::hx::Class p_type);
		Dynamic GetComponents_dyn();

		virtual Dynamic GetComponentInChildren( ::hx::Class p_type);
		Dynamic GetComponentInChildren_dyn();

		virtual Dynamic GetComponentsInChildren( ::hx::Class p_type);
		Dynamic GetComponentsInChildren_dyn();

		virtual Void OnBuild( );
		Dynamic OnBuild_dyn();

		virtual Void OnTransformUpdate( bool p_hierarchy);
		Dynamic OnTransformUpdate_dyn();

		virtual Void OnVisibilityChange( bool p_visible);
		Dynamic OnVisibilityChange_dyn();

};

} // end namespace haxor
} // end namespace component

#endif /* INCLUDED_haxor_component_Component */ 
