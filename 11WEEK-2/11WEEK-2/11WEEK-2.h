
// 11WEEK-2.h : 11WEEK-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy11WEEK2App:
// �йش����ʵ�֣������ 11WEEK-2.cpp
//

class CMy11WEEK2App : public CWinApp
{
public:
	CMy11WEEK2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy11WEEK2App theApp;
