#pragma once


// Mydlga �Ի���

class Mydlga : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlga)

public:
	Mydlga(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlga();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
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
	afx_msg void OnBnClickedOk();
	void Restr(CString sno1, CString name1, CString sex1, CString income1, CString pic1);
};
