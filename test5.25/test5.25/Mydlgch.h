#pragma once


// Mydlgch �Ի���

class Mydlgch : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlgch)

public:
	Mydlgch(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlgch();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString sno;
	CString name;
	CString sex;
	CString income;
	CString pic;
};
