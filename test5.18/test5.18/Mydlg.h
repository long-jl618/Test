#pragma once

class Ctest518Set;

// Mydlg 对话框

class Mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg)

public:
	Mydlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlg();
	void draw_pic(CString file);
	void Getstr(CString s);
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
	Ctest518Set * m_pSet1;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString str;
};
