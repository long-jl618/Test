
// 11WEEK-2View.cpp : CMy11WEEK2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11WEEK-2.h"
#endif

#include "11WEEK-2Set.h"
#include "11WEEK-2Doc.h"
#include "11WEEK-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11WEEK2View

IMPLEMENT_DYNCREATE(CMy11WEEK2View, CRecordView)

BEGIN_MESSAGE_MAP(CMy11WEEK2View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CMy11WEEK2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CMy11WEEK2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CMy11WEEK2View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CMy11WEEK2View::OnRecordLast)
END_MESSAGE_MAP()

// CMy11WEEK2View ����/����

CMy11WEEK2View::CMy11WEEK2View()
	: CRecordView(IDD_MY11WEEK2_FORM)
	, Name(_T(""))
	, index(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	Path = _T("E:\\office\\");
	
}

CMy11WEEK2View::~CMy11WEEK2View()
{

}

void CMy11WEEK2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
	CString s, filename,path;
	filename = _T("E:\\office\\a.jpg");
	GetDlgItemText(IDC_EDIT1, s);
	path = _T("E:\\office\\b.jpg");
	if (s!="")
		filename = Path + s;
	//draw_pic(path);
	DDX_Text(pDX, IDC_EDIT2, index);
	//index.SetString(s);
	
}

void CMy11WEEK2View::draw_pic(CString file) {
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
BOOL CMy11WEEK2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11WEEK2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11WEEK2Set;
	CRecordView::OnInitialUpdate();

}


// CMy11WEEK2View ���

#ifdef _DEBUG
void CMy11WEEK2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11WEEK2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11WEEK2Doc* CMy11WEEK2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11WEEK2Doc)));
	return (CMy11WEEK2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy11WEEK2View ���ݿ�֧��
CRecordset* CMy11WEEK2View::OnGetRecordset()
{
	return m_pSet;
}



// CMy11WEEK2View ��Ϣ�������


void CMy11WEEK2View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString s, filename, path;
	filename = _T("E:\\office\\a.jpg");
	GetDlgItemText(IDC_EDIT1, s);
	path = _T("E:\\office\\");
	draw_pic(filename);
	
}


void CMy11WEEK2View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString s, filename, path;
	path = _T("E:\\office\\");
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	draw_pic(filename);
}


void CMy11WEEK2View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString s, filename, path;
	GetDlgItemText(IDC_EDIT1, s);
	path = _T("E:\\office\\");
	filename = path + s;
	//index.SetString(filename);
	draw_pic(filename);
}


void CMy11WEEK2View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString s, filename, path,ss;
	m_pSet->GetFieldValue(short(2), s);
	path = _T("E:\\office\\");
	filename = path+s;
	//index.SetString(filename);
	draw_pic(filename);
}
