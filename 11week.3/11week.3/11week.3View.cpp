
// 11week.3View.cpp : CMy11week3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11week.3.h"
#endif

#include "11week.3Set.h"
#include "11week.3Doc.h"
#include "11week.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11week3View

IMPLEMENT_DYNCREATE(CMy11week3View, CRecordView)

BEGIN_MESSAGE_MAP(CMy11week3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy11week3View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CMy11week3View ����/����

CMy11week3View::CMy11week3View()
	: CRecordView(IDD_MY11WEEK3_FORM)
	, ID(0)
	, name(_T(""))
	, sno(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy11week3View::~CMy11week3View()
{
}

void CMy11week3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	CString s;
	m_pSet->GetFieldValue(short(5), s);
	draw_pic(s);
	
}

BOOL CMy11week3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11week3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11week3Set;
	CRecordView::OnInitialUpdate();

}
void CMy11week3View::draw_pic(CString file) {
	CImage img;
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

// CMy11week3View ���

#ifdef _DEBUG
void CMy11week3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11week3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11week3Doc* CMy11week3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11week3Doc)));
	return (CMy11week3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11week3View ���ݿ�֧��
CRecordset* CMy11week3View::OnGetRecordset()
{
	return m_pSet;
}



// CMy11week3View ��Ϣ�������


void CMy11week3View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString s;
	m_pSet->GetFieldValue(short(5), s);
	draw_pic(s);
}
