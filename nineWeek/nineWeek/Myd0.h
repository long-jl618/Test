#pragma once
#include "afxwin.h"


// Myd0 对话框

class Myd0 : public CDialogEx
{
	DECLARE_DYNAMIC(Myd0)

public:
	Myd0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Myd0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListBox Lbox;
	virtual BOOL OnInitDialog();
};
