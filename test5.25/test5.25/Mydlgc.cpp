// Mydlgc.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mydlgc.h"
#include "afxdialogex.h"


// Mydlgc 对话框

IMPLEMENT_DYNAMIC(Mydlgc, CDialogEx)

Mydlgc::Mydlgc(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, num(_T(""))
{

}

Mydlgc::~Mydlgc()
{
}

void Mydlgc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, num);
}


BEGIN_MESSAGE_MAP(Mydlgc, CDialogEx)
END_MESSAGE_MAP()


// Mydlgc 消息处理程序
