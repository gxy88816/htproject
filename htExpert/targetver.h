#pragma once

// ���� SDKDDKVer.h ��������õ���߰汾�� Windows ƽ̨��

// ���ҪΪ��ǰ�� Windows ƽ̨����Ӧ�ó�������� WinSDKVer.h������
// WIN32_WINNT ������ΪҪ֧�ֵ�ƽ̨��Ȼ���ٰ��� SDKDDKVer.h��
//#ifndef WINVER                          // ָ��Ҫ������ƽ̨�� Windows Vista��
//#define WINVER 0x0501           // ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
//#endif
//
//#ifndef _WIN32_WINNT            // ָ��Ҫ������ƽ̨�� Windows Vista��
//#define _WIN32_WINNT 0x0501     // ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
//#endif
//
//#ifndef _WIN32_WINDOWS          // ָ��Ҫ������ƽ̨�� Windows 98��
//#define _WIN32_WINDOWS 0x0410 // ����ֵ����Ϊ�ʵ���ֵ���������� Windows Me ����߰汾��
//#endif
//
//#ifndef _WIN32_IE                       // ָ��Ҫ������ƽ̨�� Internet Explorer 7.0��
//#define _WIN32_IE 0x0600        // ����ֵ����Ϊ��Ӧ��ֵ���������� IE �������汾��
//#endif

#ifndef WINVER                          // ָ��Ҫ������ƽ̨�� Windows XP��  
#define WINVER 0x0500           // ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��  
#endif  
#ifndef _WIN32_WINNT            // ָ��Ҫ������ƽ̨�� Windows XP��  
#define _WIN32_WINNT 0x0501     // ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��  
#endif  
#ifndef _WIN32_WINDOWS          // ָ��Ҫ������ƽ̨�� Windows 98��  
#define _WIN32_WINDOWS 0x0410 // ����ֵ����Ϊ�ʵ���ֵ���������� Windows Me ����߰汾��  
#endif  
#ifndef _WIN32_IE                       // ָ��Ҫ������ƽ̨�� Internet Explorer 5.0��  
#define _WIN32_IE 0x0501        // ����ֵ����Ϊ��Ӧ��ֵ���������� IE �������汾��  
#endif  

#include <SDKDDKVer.h>