//c++ header
#include <ctime>
#include <string>

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <memory>
//window header
#include <atlbase.h>
#include <windows.h>
#include <WTypes.h>
#include <shellapi.h>
#include<tlhelp32.h>

#include <wininet.h> 
#include <io.h>
#include <winsock2.h>
#include <Shlobj.h>
#include <WinVer.h>
#include <regex>
#include "targetver.h"

#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif