#pragma once


// ChangeDlg �Ի���

class ChangeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ChangeDlg)

public:
	ChangeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChangeDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Change };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long c;
};
