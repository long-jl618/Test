
// Test5.11-1.h : Test5.11-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CTest5111App:
// �йش����ʵ�֣������ Test5.11-1.cpp
//

class CTest5111App : public CWinApp
{
public:
	CTest5111App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTest5111App theApp;
