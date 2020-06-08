#pragma once


// Mydlgd 对话框

class Mydlgd : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlgd)

public:
	Mydlgd(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlgd();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
