#pragma once


// Mydlgd �Ի���

class Mydlgd : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlgd)

public:
	Mydlgd(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlgd();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
