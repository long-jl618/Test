// Mdlgl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mdlgl.h"
#include "afxdialogex.h"


// Mdlgl �Ի���

IMPLEMENT_DYNAMIC(Mdlgl, CDialogEx)

Mdlgl::Mdlgl(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG7, pParent)
	, look(_T(""))
{
	strall = "";
}

Mdlgl::~Mdlgl()
{
}

void Mdlgl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_LBString(pDX, IDC_LIST1, look);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(Mdlgl, CDialogEx)
END_MESSAGE_MAP()


// Mdlgl ��Ϣ�������
void Mdlgl::getstr(CString s) {
	strall = s;
	//Lbox.AddString(strall);
}

BOOL Mdlgl::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// = "123456";
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Lbox.AddString(strall);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
