
// text4View.cpp : Ctext4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text4.h"
#endif

#include "text4Doc.h"
#include "text4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext4View

IMPLEMENT_DYNCREATE(Ctext4View, CView)

BEGIN_MESSAGE_MAP(Ctext4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Ctext4View ����/����

Ctext4View::Ctext4View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext4View::~Ctext4View()
{
}

BOOL Ctext4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext4View ����

void Ctext4View::OnDraw(CDC* /*pDC*/)
{
	Ctext4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext4View ���

#ifdef _DEBUG
void Ctext4View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext4Doc* Ctext4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext4Doc)));
	return (Ctext4Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext4View ��Ϣ�������


void Ctext4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
