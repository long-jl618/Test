// Mdlgl.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mdlgl.h"
#include "afxdialogex.h"


// Mdlgl 对话框

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


// Mdlgl 消息处理程序
void Mdlgl::getstr(CString s) {
	strall = s;
	//Lbox.AddString(strall);
}

BOOL Mdlgl::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// = "123456";
	// TODO:  在此添加额外的初始化
	Lbox.AddString(strall);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
