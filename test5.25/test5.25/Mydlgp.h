#pragma once


// Mydlgp �Ի���

class Mydlgp : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlgp)

public:
	Mydlgp(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlgp();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString str;
	CString what;
};
