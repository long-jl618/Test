#pragma once


// Mydlgc �Ի���

class Mydlgc : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlgc)

public:
	Mydlgc(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlgc();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString num;
};
