// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LUFT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LUFT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LUFT_EXPORTS
#define LUFT_API __declspec(dllexport)
#else
#define LUFT_API __declspec(dllimport)
#endif

// This class is exported from the Luft.dll
class LUFT_API CLuft {
public:
	CLuft(void);
	// TODO: add your methods here.
};

extern LUFT_API int nLuft;

LUFT_API int fnLuft(void);
