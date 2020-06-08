// Mydlgp.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mydlgp.h"
#include "afxdialogex.h"


// Mydlgp 对话框

IMPLEMENT_DYNAMIC(Mydlgp, CDialogEx)

Mydlgp::Mydlgp(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, str(_T(""))
	, what(_T(""))
{

}

Mydlgp::~Mydlgp()
{
}

void Mydlgp::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
	DDX_Text(pDX, IDC_EDIT2, what);
}


BEGIN_MESSAGE_MAP(Mydlgp, CDialogEx)
END_MESSAGE_MAP()


// Mydlgp 消息处理程序
