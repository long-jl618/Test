
// test5.18-2View.cpp : Ctest5182View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test5.18-2.h"
#endif

#include "test5.18-2Doc.h"
#include "test5.18-2View.h"
#include "Mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest5182View

IMPLEMENT_DYNCREATE(Ctest5182View, CView)

BEGIN_MESSAGE_MAP(Ctest5182View, CView)
END_MESSAGE_MAP()

// Ctest5182View ����/����

Ctest5182View::Ctest5182View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest5182View::~Ctest5182View()
{
}

BOOL Ctest5182View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest5182View ����

void Ctest5182View::OnDraw(CDC* /*pDC*/)
{
	Ctest5182Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	Mydlg dlg;
	dlg.DoModal();
}


// Ctest5182View ���

#ifdef _DEBUG
void Ctest5182View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest5182View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest5182Doc* Ctest5182View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest5182Doc)));
	return (Ctest5182Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest5182View ��Ϣ�������
