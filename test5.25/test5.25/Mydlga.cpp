// Mydlga.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mydlga.h"
#include "afxdialogex.h"


// Mydlga 对话框

IMPLEMENT_DYNAMIC(Mydlga, CDialogEx)

Mydlga::Mydlga(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, sno(_T(""))
	, name(_T(""))
	, sex(_T(""))
	, income(_T(""))
	, pic(_T(""))
{

}

Mydlga::~Mydlga()
{
}

void Mydlga::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, sno);
	DDX_Text(pDX, IDC_EDIT2, name);
	DDX_Text(pDX, IDC_EDIT3, sex);
	DDX_Text(pDX, IDC_EDIT4, income);
	DDX_Text(pDX, IDC_EDIT5, pic);
}

void Mydlga::Restr(CString sno1, CString name1, CString sex1, CString income1, CString pic1) {

}
BEGIN_MESSAGE_MAP(Mydlga, CDialogEx)
	ON_BN_CLICKED(IDOK, &Mydlga::OnBnClickedOk)
END_MESSAGE_MAP()


// Mydlga 消息处理程序


void Mydlga::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
