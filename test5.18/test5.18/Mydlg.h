#pragma once

class Ctest518Set;

// Mydlg �Ի���

class Mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg)

public:
	Mydlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlg();
	void draw_pic(CString file);
	void Getstr(CString s);
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
	Ctest518Set * m_pSet1;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString str;
};
