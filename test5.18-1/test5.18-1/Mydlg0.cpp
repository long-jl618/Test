// Mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "test5.18-1.h"
#include "Mydlg0.h"
#include "afxdialogex.h"
#include "Mydlg1.h"

// Mydlg0 对话框

IMPLEMENT_DYNAMIC(Mydlg0, CDialogEx)

Mydlg0::Mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
	path = "";
}

Mydlg0::~Mydlg0()
{
}

void Mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	CString s, path, filename;
	
}


void Mydlg0::draw_pic(CString file) {
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


BEGIN_MESSAGE_MAP(Mydlg0, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg0 消息处理程序


void Mydlg0::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CString file,path;
	file = "E://office//a.jpg";
	path = file;
	draw_pic(file);
	
}


void Mydlg0::OnBnClickedButton1()
{
	Mydlg1 dlg1;
	path = "E://office//a.jpg";
	//dlg1.draw_pic(path);
	dlg1.get(path);
	dlg1.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}
