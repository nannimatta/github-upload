
#include "xfsData.h"

HRESULT StartUp_Subsytem() {
	HRESULT hres;
	DWORD dwVersionsRequired = 0x00030A03;
	LPWFSVERSION lpWFSVersion = (LPWFSVERSION)malloc(sizeof(WFSVERSION));
	hres = WFSStartUp(dwVersionsRequired, lpWFSVersion);

	return hres;
}