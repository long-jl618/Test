// Mydlgc.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test5.25.h"
#include "Mydlgc.h"
#include "afxdialogex.h"


// Mydlgc �Ի���

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


// Mydlgc ��Ϣ�������
