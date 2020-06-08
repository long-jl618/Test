
// test5.18View.cpp : Ctest518View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test5.18.h"
#endif

#include "test5.18Set.h"
#include "test5.18Doc.h"
#include "test5.18View.h"
#include "Mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest518View

IMPLEMENT_DYNCREATE(Ctest518View, CRecordView)

BEGIN_MESSAGE_MAP(Ctest518View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &Ctest518View::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// Ctest518View ����/����

Ctest518View::Ctest518View()
	: CRecordView(IDD_TEST518_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Ctest518View::~Ctest518View()
{
}

void Ctest518View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��

	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
}


void Ctest518View::draw_pic(CString file) {
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
BOOL Ctest518View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Ctest518View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_test518Set;
	CRecordView::OnInitialUpdate();

}


// Ctest518View ���

#ifdef _DEBUG
void Ctest518View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Ctest518View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Ctest518Doc* Ctest518View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest518Doc)));
	return (Ctest518Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest518View ���ݿ�֧��
CRecordset* Ctest518View::OnGetRecordset()
{

	return m_pSet;
}



// Ctest518View ��Ϣ�������


void Ctest518View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mydlg dlg;
	dlg.Getstr(file);
	dlg.DoModal();
}


void Ctest518View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString s, path, filename;
	path = "E://office//";
	UpdateData(false);
	GetDlgItemText(IDC_EDIT1, str);
	filename = path + str;
	file = filename;
	draw_pic(filename);
}
