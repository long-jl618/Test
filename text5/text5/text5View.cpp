
// text5View.cpp : Ctext5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text5.h"
#endif

#include "text5Doc.h"
#include "text5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext5View

IMPLEMENT_DYNCREATE(Ctext5View, CView)

BEGIN_MESSAGE_MAP(Ctext5View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext5View ����/����

Ctext5View::Ctext5View()
{
	// TODO: �ڴ˴���ӹ������
	


}

Ctext5View::~Ctext5View()
{
}

BOOL Ctext5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext5View ����

void Ctext5View::OnDraw(CDC *PDC /*pDC*/)
{
	Ctext5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		PDC->Ellipse(pDoc->ca.GetAt(i));
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext5View ���

#ifdef _DEBUG
void Ctext5View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext5Doc* Ctext5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext5Doc)));
	return (Ctext5Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext5View ��Ϣ�������


void Ctext5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	int r1 = rand() % 50 + 5;
	int r2 = rand() % 50 + 5;
	//CClientDC dc(this);
	CRect cr(point.x - r1, point.y - r2, point.x + r1, point.y + r2);
	Ctext5Doc *pDoc = GetDocument();
	pDoc-> ca.Add(cr);
	this->Invalidate();

}
