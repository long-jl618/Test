#pragma once
#include "afxwin.h"


// Mdlgl �Ի���

class Mdlgl : public CDialogEx
{
	DECLARE_DYNAMIC(Mdlgl)

public:
	Mdlgl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mdlgl();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString look;
	virtual BOOL OnInitDialog();
	void getstr(CString s);
	CString strall;
	CListBox Lbox;
};
