// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once
#pragma warning (disable:4800) 
#pragma warning (disable:4996) // New security standards
#pragma warning (disable:4482) // Fully qualified enums crap


#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows 95 and Windows NT 4 or later.
#define WINVER 0x0501		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows NT 4 or later.
#define _WIN32_WINNT 0x0501		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif	//XP->0x0501, 9x->0x0400					

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0501 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 4.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target IE 5.0 or later.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS


#undef VATI_EXTENSIONS

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxcview.h>
#include <afxdisp.h>        // MFC Automation classes

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxtempl.h>
#include <windowsx.h>		// Additional stuff for window management
#include "..\CxImage\CxImage\ximage.h"			// CxImage main header
#include "..\CxImage\CxImage\xfile.h"			// Spoooooky! =O
#include "..\CxImage\CxImage\ximajpg.h"
#include <direct.h>
#include <uxtheme.h>
#include "icoimage.h"

#include "..\..\Documentation\context.h" // Generated by Html Help Workshop, you can just copy it from the doc folder if you like

#include <Shlobj.h>

#define IM_ICON_INVALIDSIZE 0x0002
#define IM_ICON_ERRORSIZE 0x0004

void InsertAlphaIcon (CString szName, CImageList * iml, int sx, int sy);
void InsertAlphaIcon (CString szName, CImageList * iml);

void GetInt (CString szName, int * nVal, int nDefault);
int GetInt (CString szName, int nDefault);
void SaveInt (CString szName, int nVal);
void SaveStr (CString szName, CString szVal);
CString GetStr (CString szName, CString szDefault);
void GetStr (CString szName, CString * szVal, CString szDefault);
void GetStr (CString szName, char * szVal, CString szDefault);

int CxImage_FindType(CString& ext);
CString CxImage_GetFormatList ();
CString CxImage_GetExtension (int n, HWND hwnd);

CString GetAppPath ();