#ifndef visionary_define_hpp
#define visionary_define_hpp

//  暂时在这里添加平台相关的宏，后续思考一下应该是根据平台宏来定义还是从CMake中传入
#define VISIONARY_PLATFORM_WINDOWS32

//#define VISIONARY_PLATFORM_LINUX

//#define VISIONARY_PLATFORM_IOS

//#define VISIONARY_PLATFORM_ANDROID

#ifdef VISIONARY_EXPORT
// Exports Symble
#ifdef _MSC_VER
#define VAPI __declspec(dllexport)
#else
#define VAPI __attribute__((visibility("default")))
#endif
#else
// Imports Symble
#ifdef _MSC_VER
#define VAPI __declspec(dllimport)
#else
#define VAPI
#endif
#endif#ifdef 

#endif