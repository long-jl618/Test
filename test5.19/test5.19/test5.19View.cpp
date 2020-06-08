
// test5.19View.cpp : Ctest519View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test5.19.h"
#endif

#include "test5.19Set.h"
#include "test5.19Doc.h"
#include "test5.19View.h"
#include"ADD_DLG.h"
#include"ChangeDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest519View

IMPLEMENT_DYNCREATE(Ctest519View, CRecordView)

BEGIN_MESSAGE_MAP(Ctest519View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &Ctest519View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &Ctest519View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Ctest519View::OnBnClickedButton2)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// Ctest519View ����/����

Ctest519View::Ctest519View()
	: CRecordView(IDD_TEST519_FORM)
	, str(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Ctest519View::~Ctest519View()
{
}

void Ctest519View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Ctest519View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Ctest519View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_test519Set;
	CRecordView::OnInitialUpdate();

}


// Ctest519View ���

#ifdef _DEBUG
void Ctest519View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Ctest519View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Ctest519Doc* Ctest519View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest519Doc)));
	return (Ctest519Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest519View ���ݿ�֧��
CRecordset* Ctest519View::OnGetRecordset()
{
	return m_pSet;
}



// Ctest519View ��Ϣ�������


void Ctest519View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void Ctest519View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG add;
	int r=add.DoModal();
	if (r == IDOK) {
		long ii = add.i;
		m_pSet->AddNew();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}


void Ctest519View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ChangeDlg cdlg;
	cdlg.c = m_pSet->m_1;
	int r = cdlg.DoModal();
	if (r == IDOK) {
		long cc = cdlg.c;
		m_pSet->Edit();
		m_pSet->m_1 = cc;
		m_pSet->Update();
		UpdateData(false);
	}
}


void Ctest519View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	
}
