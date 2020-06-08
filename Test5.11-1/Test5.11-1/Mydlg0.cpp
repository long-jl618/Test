// Mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "Test5.11-1.h"
#include "Mydlg0.h"
#include "afxdialogex.h"


// Mydlg0 对话框

IMPLEMENT_DYNAMIC(Mydlg0, CDialogEx)

Mydlg0::Mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Mydlg0::~Mydlg0()
{
}

void Mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Mydlg0, CDialogEx)
END_MESSAGE_MAP()


// Mydlg0 消息处理程序
