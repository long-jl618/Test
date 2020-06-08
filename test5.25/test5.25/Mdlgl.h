#pragma once
#include "afxwin.h"


// Mdlgl 对话框

class Mdlgl : public CDialogEx
{
	DECLARE_DYNAMIC(Mdlgl)

public:
	Mdlgl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mdlgl();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString look;
	virtual BOOL OnInitDialog();
	void getstr(CString s);
	CString strall;
	CListBox Lbox;
};
