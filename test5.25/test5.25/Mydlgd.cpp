// Mydlgd.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mydlgd.h"
#include "afxdialogex.h"


// Mydlgd 对话框

IMPLEMENT_DYNAMIC(Mydlgd, CDialogEx)

Mydlgd::Mydlgd(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

Mydlgd::~Mydlgd()
{
}

void Mydlgd::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Mydlgd, CDialogEx)
END_MESSAGE_MAP()


// Mydlgd 消息处理程序
