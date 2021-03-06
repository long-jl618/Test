
// text5View.cpp : Ctext5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctext5View 构造/析构

Ctext5View::Ctext5View()
{
	// TODO: 在此处添加构造代码
	


}

Ctext5View::~Ctext5View()
{
}

BOOL Ctext5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext5View 绘制

void Ctext5View::OnDraw(CDC *PDC /*pDC*/)
{
	Ctext5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		PDC->Ellipse(pDoc->ca.GetAt(i));
	
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext5View 诊断

#ifdef _DEBUG
void Ctext5View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext5Doc* Ctext5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext5Doc)));
	return (Ctext5Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext5View 消息处理程序


void Ctext5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	int r1 = rand() % 50 + 5;
	int r2 = rand() % 50 + 5;
	//CClientDC dc(this);
	CRect cr(point.x - r1, point.y - r2, point.x + r1, point.y + r2);
	Ctext5Doc *pDoc = GetDocument();
	pDoc-> ca.Add(cr);
	this->Invalidate();

}
