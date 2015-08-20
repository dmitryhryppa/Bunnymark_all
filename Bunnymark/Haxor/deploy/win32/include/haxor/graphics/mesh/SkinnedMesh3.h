#ifndef INCLUDED_haxor_graphics_mesh_SkinnedMesh3
#define INCLUDED_haxor_graphics_mesh_SkinnedMesh3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh3)
HX_DECLARE_CLASS3(haxor,graphics,mesh,MeshLayout)
HX_DECLARE_CLASS3(haxor,graphics,mesh,SkinnedMesh3)
HX_DECLARE_CLASS2(haxor,math,Matrix4)
HX_DECLARE_CLASS2(haxor,math,Vector4)
namespace haxor{
namespace graphics{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  SkinnedMesh3_obj : public ::haxor::graphics::mesh::Mesh3_obj{
	public:
		typedef ::haxor::graphics::mesh::Mesh3_obj super;
		typedef SkinnedMesh3_obj OBJ_;
		SkinnedMesh3_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.mesh.SkinnedMesh3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SkinnedMesh3_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SkinnedMesh3_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SkinnedMesh3","\xb6","\x75","\x97","\x40"); }

		virtual Array< ::Dynamic > get_binds( );
		Dynamic get_binds_dyn();

		virtual Array< ::Dynamic > set_binds( Array< ::Dynamic > v);
		Dynamic set_binds_dyn();

		Array< ::Dynamic > m_binds;
		virtual Array< ::Dynamic > get_bone( );
		Dynamic get_bone_dyn();

		virtual Array< ::Dynamic > set_bone( Array< ::Dynamic > v);
		Dynamic set_bone_dyn();

		Array< ::Dynamic > m_bone;
		virtual Array< ::Dynamic > get_weight( );
		Dynamic get_weight_dyn();

		virtual Array< ::Dynamic > set_weight( Array< ::Dynamic > v);
		Dynamic set_weight_dyn();

		Array< ::Dynamic > m_weight;
};

} // end namespace haxor
} // end namespace graphics
} // end namespace mesh

#endif /* INCLUDED_haxor_graphics_mesh_SkinnedMesh3 */ 
