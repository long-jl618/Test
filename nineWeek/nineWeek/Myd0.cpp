// Myd0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "nineWeek.h"
#include "Myd0.h"
#include "afxdialogex.h"


// Myd0 �Ի���

IMPLEMENT_DYNAMIC(Myd0, CDialogEx)

Myd0::Myd0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Myd0::~Myd0()
{
}

void Myd0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(Myd0, CDialogEx)
END_MESSAGE_MAP()


// Myd0 ��Ϣ�������


BOOL Myd0::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	//Myd0 mdl;
	//mdl.DoModal();
	CString filter, strtext;
	CString filename;
	filter = "ѧ������.txt";
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, filter);
	if (dlg.DoModal() == IDOK) {
		CString str;
		CStdioFile file;
		filename = dlg.GetPathName();
		if (!file.Open(filename, CFile::modeRead)) {
			::AfxMessageBox(_T("�ļ���ʧ�ܡ�"));
			return 0;
		}
		strtext = _T("");
		while (file.ReadString(strtext))
		{
			Lbox.AddString(strtext);
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
