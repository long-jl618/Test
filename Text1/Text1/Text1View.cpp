
// Text1View.cpp : CText1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Text1.h"
#endif

#include "Text1Doc.h"
#include "Text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CText1View

IMPLEMENT_DYNCREATE(CText1View, CView)

BEGIN_MESSAGE_MAP(CText1View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CText1View ����/����

CText1View::CText1View()
{
	// TODO: �ڴ˴���ӹ������

}

CText1View::~CText1View()
{
}

BOOL CText1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CText1View ����

void CText1View::OnDraw(CDC* /*pDC*/)
{
	CText1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CText1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CText1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CText1View ���

#ifdef _DEBUG
void CText1View::AssertValid() const
{
	CView::AssertValid();
}

void CText1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CText1Doc* CText1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CText1Doc)));
	return (CText1Doc*)m_pDocument;
}
#endif //_DEBUG


// CText1View ��Ϣ�������


void CText1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s,a1;
	int A;
	A = 618;
	a1.Format(_T("%d"),A);
	s.Format(_T("����������"));
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
	dc.TextOutW(200, 400, a1);
	CView::OnLButtonDown(nFlags, point);
}
