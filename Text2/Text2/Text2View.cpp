
// Text2View.cpp : CText2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Text2.h"
#endif

#include "Text2Doc.h"
#include "Text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CText2View

IMPLEMENT_DYNCREATE(CText2View, CView)

BEGIN_MESSAGE_MAP(CText2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CText2View ����/����

CText2View::CText2View()
{
	// TODO: �ڴ˴���ӹ������

}

CText2View::~CText2View()
{
}

BOOL CText2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CText2View ����

void CText2View::OnDraw(CDC* /*pDC*/)
{
	CText2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int A;
	A = 618;
	CString s,a;
	s.Format(_T("����������"));
	a.Format(_T("%d"), A);
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
	dc.TextOutW(200, 400, a);
}


// CText2View ��ӡ

BOOL CText2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CText2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CText2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CText2View ���

#ifdef _DEBUG
void CText2View::AssertValid() const
{
	CView::AssertValid();
}

void CText2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CText2Doc* CText2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CText2Doc)));
	return (CText2Doc*)m_pDocument;
}
#endif //_DEBUG


// CText2View ��Ϣ�������
