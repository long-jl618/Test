// Mydlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "test5.18.h"
#include "Mydlg.h"
#include "afxdialogex.h"
#include"test5.18Set.h"
#include "test5.18Doc.h"
// Mydlg �Ի���

IMPLEMENT_DYNAMIC(Mydlg, CDialogEx)

Mydlg::Mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
	m_pSet1 = NULL;
	str = "";

}

Mydlg::~Mydlg()
{
}

void Mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	CString s, filename, path;
	path = "E://office//";
	filename = path + s;
	//draw_pic(filename);
}

void Mydlg::Getstr(CString s) {
	str = s;
	
}
void Mydlg::draw_pic(CString file) {
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

BEGIN_MESSAGE_MAP(Mydlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Mydlg ��Ϣ�������


void Mydlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	draw_pic(str);
}
