// Mydlgch.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mydlgch.h"
#include "afxdialogex.h"


// Mydlgch 对话框

IMPLEMENT_DYNAMIC(Mydlgch, CDialogEx)

Mydlgch::Mydlgch(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	, sno(_T(""))
	, name(_T(""))
	, sex(_T(""))
	, income(_T(""))
	, pic(_T(""))
{

}

Mydlgch::~Mydlgch()
{
}

void Mydlgch::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, sno);
	DDX_Text(pDX, IDC_EDIT2, name);
	DDX_Text(pDX, IDC_EDIT3, sex);
	DDX_Text(pDX, IDC_EDIT4, income);
	DDX_Text(pDX, IDC_EDIT5, pic);
}


BEGIN_MESSAGE_MAP(Mydlgch, CDialogEx)
END_MESSAGE_MAP()


// Mydlgch 消息处理程序
