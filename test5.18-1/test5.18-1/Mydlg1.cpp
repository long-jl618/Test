// Mydlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.18-1.h"
#include "Mydlg1.h"
#include "afxdialogex.h"


// Mydlg1 对话框

IMPLEMENT_DYNAMIC(Mydlg1, CDialogEx)

Mydlg1::Mydlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, str(_T(""))
{

}

Mydlg1::~Mydlg1()
{
}

void Mydlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, str);
}

void Mydlg1::get(CString s) {
	CString ss;
	ss = s;
	str = ss;
	str.SetString(ss);
}

void Mydlg1::draw_pic(CString file) {
	CImage img;
	if (!img.IsNull())
	{
		img.Destroy();
	}
	img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);

}


BEGIN_MESSAGE_MAP(Mydlg1, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Mydlg1 消息处理程序


void Mydlg1::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CString s;
	s = "E://office//a.jpg";
	draw_pic(str);
}
