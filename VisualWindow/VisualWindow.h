// VisualWindow.h: VisualWindow DLL 的主标头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#ifndef VISUAL_WINDOW_API_EXPORTS
#define VISUAL_WINDOW_API_EXPORTS
#endif

#include "resource.h"		// 主符号


// CVisualWindowApp
// 有关此类实现的信息，请参阅 VisualWindow.cpp
//

class CVisualWindowApp : public CWinApp
{
public:
	CVisualWindowApp();

// 重写
public:
	virtual BOOL InitInstance();
    virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};


