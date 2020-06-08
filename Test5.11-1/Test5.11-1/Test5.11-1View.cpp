
// Test5.11-1View.cpp : CTest5111View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Test5.11-1.h"
#endif

#include "Test5.11-1Set.h"
#include "Test5.11-1Doc.h"
#include "Test5.11-1View.h"
#include"Mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest5111View

IMPLEMENT_DYNCREATE(CTest5111View, CRecordView)

BEGIN_MESSAGE_MAP(CTest5111View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CTest5111View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CTest5111View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CTest5111View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CTest5111View ����/����

CTest5111View::CTest5111View()
	: CRecordView(IDD_TEST5111_FORM)
	, name(_T(""))
	, sno(_T(""))
	, score(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, adress(_T(""))
	, phone(_T(""))
	, m_strQuery(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("C:\\Users\\17250\\");
}

CTest5111View::~CTest5111View()
{
}

void CTest5111View::draw_pic(CString file) {
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

void CTest5111View::draw_pic1(CString file) {
	CImage img;
	img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
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
void CTest5111View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->m_7);
	CString filename, s;
	m_pSet->GetFieldValue(short(7), s);
	filename = _T("E:\\office\\") + s;
	draw_pic(filename);
	ss = filename;
	DDX_Control(pDX, IDC_BUTTON3, chaxun);
	DDX_Text(pDX, IDC_EDIT8, m_strQuery);
}

BOOL CTest5111View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CTest5111View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Test5111Set;
	CRecordView::OnInitialUpdate();
     
}



// CTest5111View ���

#ifdef _DEBUG
void CTest5111View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CTest5111View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CTest5111Doc* CTest5111View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest5111Doc)));
	return (CTest5111Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest5111View ���ݿ�֧��
CRecordset* CTest5111View::OnGetRecordset()
{
	return m_pSet;
}



// CTest5111View ��Ϣ�������


void CTest5111View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString s,filename;
	Mydlg0 dlg;
	filename = ss;
	CImage image;
	image.Load(filename);
	CRect imageRect;
	//GetDlgItem(IDC_STATIC1)->GetClientRect(&imageRect);
	//CDC *picDC;
	//picDC= GetDC();
	//image.Draw(picDC->m_hDC, imageRect);
	//ReleaseDC(picDC);
	
	draw_pic(filename);
	dlg.DoModal();
	
	
}


void CTest5111View::OnBnClickedButton3()
{
	//��ѯ
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	m_strQuery.TrimLeft();
	if (m_strQuery.IsEmpty()) {
		MessageBox(_T("Ҫ��ѯ��ѧ�Ų���Ϊ�գ�")); return;
	}
	if (m_pSet->IsOpen()) {
		m_pSet->Close();
	}
	m_pSet->m_strFilter.Format(_T("sno='%s'"), m_strQuery);
	m_pSet->m_strSort = "sno";
	m_pSet->Open();
	if (!m_pSet->IsEOF()) {
		UpdateData(FALSE);
	}
	else
	{
		MessageBox(_T("û���ҵ���Ҫ�ҵ�ѧ�ż�¼"));
	}
}


void CTest5111View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->AddNew();
	m_pSet->SetFieldNull(&(m_pSet->m_1), FALSE);
	m_pSet->m_2 = 20180005;
	m_pSet->m_1 = "���";
	m_pSet->m_3 = "��";
	m_pSet->m_4 = "�����";
	m_pSet->m_5 = "1990��";
	m_pSet->m_6 = 13977400740;
	m_pSet->m_7 = "a.jpg";
	m_pSet->Update();
	m_pSet->Requery();
}
