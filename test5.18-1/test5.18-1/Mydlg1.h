#pragma once


// Mydlg1 �Ի���

class Mydlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg1)

public:
	Mydlg1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlg1();
	void draw_pic(CString file);
	void get(CString s);
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString str;
};
