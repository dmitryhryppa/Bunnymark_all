#ifndef INCLUDED_haxor_graphics_material_shader_FlexShader
#define INCLUDED_haxor_graphics_material_shader_FlexShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,material,Shader)
HX_DECLARE_CLASS4(haxor,graphics,material,shader,FlexShader)
namespace haxor{
namespace graphics{
namespace material{
namespace shader{


class HXCPP_CLASS_ATTRIBUTES  FlexShader_obj : public ::haxor::graphics::material::Shader_obj{
	public:
		typedef ::haxor::graphics::material::Shader_obj super;
		typedef FlexShader_obj OBJ_;
		FlexShader_obj();
		Void __construct(::String __o_p_vs,::String __o_p_fs);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.material.shader.FlexShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlexShader_obj > __new(::String __o_p_vs,::String __o_p_fs);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlexShader_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlexShader","\x5e","\xf7","\xe0","\xf2"); }

};

} // end namespace haxor
} // end namespace graphics
} // end namespace material
} // end namespace shader

#endif /* INCLUDED_haxor_graphics_material_shader_FlexShader */ 
