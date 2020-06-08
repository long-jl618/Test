
// 11week.2View.cpp : CMy11week2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11week.2.h"
#endif

#include "11week.2Set.h"
#include "11week.2Doc.h"
#include "11week.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11week2View

IMPLEMENT_DYNCREATE(CMy11week2View, CRecordView)

BEGIN_MESSAGE_MAP(CMy11week2View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy11week2View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CMy11week2View ����/����

CMy11week2View::CMy11week2View()
	: CRecordView(IDD_MY11WEEK2_FORM)
	, ID(0)
	, name(_T(""))
	, sno(_T(""))
	, age(_T(""))
	, phone(_T(""))
	, pict(0)
	, p(_T(""))
{
	m_pSet = NULL;

	// TODO: �ڴ˴���ӹ������
	path = _T("");
}

CMy11week2View::~CMy11week2View()
{
}

void CMy11week2View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT7, p);
}

BOOL CMy11week2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11week2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11week2Set;
	CRecordView::OnInitialUpdate();

}


// CMy11week2View ���

#ifdef _DEBUG
void CMy11week2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11week2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11week2Doc* CMy11week2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11week2Doc)));
	return (CMy11week2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11week2View ���ݿ�֧��
CRecordset* CMy11week2View::OnGetRecordset()
{
	return m_pSet;
}



// CMy11week2View ��Ϣ�������


void CMy11week2View::OnBnClickedButton1()
{
	CString s;
	int index;
	m_pSet->GetFieldValue(short(5), s);
	CString filename;
	filename = path;

	draw_pic(filename);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

void CMy11week2View::draw_pic(CString file) {
	CImage img;
	img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width()/rect.Height();
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
	img.Draw(pDC ->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}