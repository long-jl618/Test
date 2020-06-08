
// 9weekView.cpp : CMy9weekView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "9week.h"
#endif

#include "9weekDoc.h"
#include "9weekView.h"
#include"Myd0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy9weekView

IMPLEMENT_DYNCREATE(CMy9weekView, CView)

BEGIN_MESSAGE_MAP(CMy9weekView, CView)
	ON_COMMAND(ID_Open, &CMy9weekView::OnOpen)
END_MESSAGE_MAP()

// CMy9weekView 构造/析构

CMy9weekView::CMy9weekView()
{
	// TODO:  在此处添加构造代码

}

CMy9weekView::~CMy9weekView()
{
}

BOOL CMy9weekView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy9weekView 绘制

void CMy9weekView::OnDraw(CDC* /*pDC*/)
{
	CMy9weekDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMy9weekView 诊断

#ifdef _DEBUG
void CMy9weekView::AssertValid() const
{
	CView::AssertValid();
}

void CMy9weekView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy9weekDoc* CMy9weekView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy9weekDoc)));
	return (CMy9weekDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy9weekView 消息处理程序


void CMy9weekView::OnOpen()
{
	Myd0 dlg;
	dlg.DoModal();
	// TODO:  在此添加命令处理程序代码
}
