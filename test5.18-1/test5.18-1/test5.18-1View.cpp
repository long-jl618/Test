
// test5.18-1View.cpp : Ctest5181View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test5.18-1.h"
#endif

#include "test5.18-1Doc.h"
#include "test5.18-1View.h"
#include"Mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest5181View

IMPLEMENT_DYNCREATE(Ctest5181View, CView)

BEGIN_MESSAGE_MAP(Ctest5181View, CView)
END_MESSAGE_MAP()

// Ctest5181View ����/����

Ctest5181View::Ctest5181View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest5181View::~Ctest5181View()
{
}

BOOL Ctest5181View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest5181View ����

void Ctest5181View::OnDraw(CDC* /*pDC*/)
{
	Ctest5181Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	Mydlg0 dlg0;
	dlg0.DoModal();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest5181View ���

#ifdef _DEBUG
void Ctest5181View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest5181View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest5181Doc* Ctest5181View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest5181Doc)));
	return (Ctest5181Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest5181View ��Ϣ�������
