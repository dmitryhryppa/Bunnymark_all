#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#define INCLUDED_haxor_graphics_mesh_MeshAttrib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,graphics,mesh,MeshAttrib)
HX_DECLARE_CLASS2(haxor,io,Buffer)
namespace haxor{
namespace graphics{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  MeshAttrib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MeshAttrib_obj OBJ_;
		MeshAttrib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.mesh.MeshAttrib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MeshAttrib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshAttrib_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MeshAttrib","\x37","\x59","\xb7","\xba"); }

		int __cid;
		int _loc_;
		virtual ::String get_name( );
		Dynamic get_name_dyn();

		::String m_name;
		::haxor::io::Buffer data;
		int offset;
		virtual int get_count( );
		Dynamic get_count_dyn();

};

} // end namespace haxor
} // end namespace graphics
} // end namespace mesh

#endif /* INCLUDED_haxor_graphics_mesh_MeshAttrib */ 