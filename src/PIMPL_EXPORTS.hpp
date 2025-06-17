#ifdef PIMPL_EXPORTS
#define PIMPL_EXPORT __declspec(dllexport)
#else
#define PIMPL_EXPORT __declspec(dllimport)
#endif