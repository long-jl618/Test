#pragma once


// Mydlgch 对话框

class Mydlgch : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlgch)

public:
	Mydlgch(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlgch();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString sno;
	CString name;
	CString sex;
	CString income;
	CString pic;
};
