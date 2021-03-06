// WindowComponent.h: WindowComponent DLL 的主标头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#ifndef WINDOW_COMPONENT_API_EXPORTS
#define WINDOW_COMPONENT_API_EXPORTS
#endif

#include "Res/resource.h"		// 主符号


// CWindowComponentApp
// 有关此类实现的信息，请参阅 WindowComponent.cpp
//

class CWindowComponentApp : public CWinApp
{
public:
	CWindowComponentApp();

// 重写
public:
	virtual BOOL InitInstance();
    virtual int ExitInstance();
	DECLARE_MESSAGE_MAP()
};
