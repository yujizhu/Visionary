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