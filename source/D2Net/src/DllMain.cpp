#include <Windows.h>

#include <cstdint>

#include <D2Dll.h>


#undef D2FUNC_DLL
#define D2FUNC_DLL D2FUNC_DLL_STUB


extern int32_t dword_6FC0B264;


//D2Net.0x6FC01B40
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		dword_6FC0B264 = 0;
		break;
	case DLL_PROCESS_DETACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	}

	return TRUE;
}
