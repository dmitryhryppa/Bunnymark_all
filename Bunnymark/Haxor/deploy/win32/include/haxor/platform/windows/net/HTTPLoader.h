#ifndef INCLUDED_haxor_platform_windows_net_HTTPLoader
#define INCLUDED_haxor_platform_windows_net_HTTPLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_platform_windows_net_HTTPRequest
#include <haxor/platform/windows/net/HTTPRequest.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,net,HTTPRequestTask)
HX_DECLARE_CLASS4(haxor,platform,windows,net,HTTPLoader)
HX_DECLARE_CLASS4(haxor,platform,windows,net,HTTPRequest)
HX_DECLARE_CLASS2(haxor,thread,Activity)
HX_DECLARE_CLASS2(haxor,thread,Task)
namespace haxor{
namespace platform{
namespace windows{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  HTTPLoader_obj : public ::haxor::platform::windows::net::HTTPRequest_obj{
	public:
		typedef ::haxor::platform::windows::net::HTTPRequest_obj super;
		typedef HTTPLoader_obj OBJ_;
		HTTPLoader_obj();
		Void __construct(::String p_url,bool p_binary,Dynamic p_callback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.platform.windows.net.HTTPLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPLoader_obj > __new(::String p_url,bool p_binary,Dynamic p_callback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPLoader_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HTTPLoader","\xbb","\x75","\x6e","\x9c"); }

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		virtual Void OnStart( );

		virtual Void OnProgress( );

		virtual Void OnComplete( );

		virtual Void OnError( );

};

} // end namespace haxor
} // end namespace platform
} // end namespace windows
} // end namespace net

#endif /* INCLUDED_haxor_platform_windows_net_HTTPLoader */ 