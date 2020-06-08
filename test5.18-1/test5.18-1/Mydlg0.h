#pragma once


// Mydlg0 对话框

class Mydlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg0)

public:
	Mydlg0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlg0();
	void draw_pic(CString file);
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

	afx_msg void OnBnClickedButton1();
	CString path;
};
