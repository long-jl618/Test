#pragma once


// Mydlg1 对话框

class Mydlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg1)

public:
	Mydlg1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlg1();
	void draw_pic(CString file);
	void get(CString s);
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString str;
};
