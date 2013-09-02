// Luft.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Luft.h"


// This is an example of an exported variable
LUFT_API int nLuft=0;

// This is an example of an exported function.
LUFT_API int fnLuft(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Luft.h for the class definition
CLuft::CLuft()
{
	return;
}
