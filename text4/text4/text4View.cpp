
// text4View.cpp : Ctext4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctext4View 构造/析构

Ctext4View::Ctext4View()
{
	// TODO: 在此处添加构造代码

}

Ctext4View::~Ctext4View()
{
}

BOOL Ctext4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctext4View 绘制

void Ctext4View::OnDraw(CDC* /*pDC*/)
{
	Ctext4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctext4View 诊断

#ifdef _DEBUG
void Ctext4View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext4Doc* Ctext4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext4Doc)));
	return (Ctext4Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext4View 消息处理程序


void Ctext4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
