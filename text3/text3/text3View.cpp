
// text3View.cpp : Ctext3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text3.h"
#endif

#include "text3Doc.h"
#include "text3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext3View

IMPLEMENT_DYNCREATE(Ctext3View, CView)

BEGIN_MESSAGE_MAP(Ctext3View, CView)
END_MESSAGE_MAP()

// Ctext3View ����/����

Ctext3View::Ctext3View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext3View::~Ctext3View()
{
}

BOOL Ctext3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext3View ����

void Ctext3View::OnDraw(CDC* /*pDC*/)
{
	Ctext3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext3View ���

#ifdef _DEBUG
void Ctext3View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext3Doc* Ctext3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext3Doc)));
	return (Ctext3Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext3View ��Ϣ�������
