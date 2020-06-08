
// Text1View.cpp : CText1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CText1View 构造/析构

CText1View::CText1View()
{
	// TODO: 在此处添加构造代码

}

CText1View::~CText1View()
{
}

BOOL CText1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CText1View 绘制

void CText1View::OnDraw(CDC* /*pDC*/)
{
	CText1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
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


// CText1View 诊断

#ifdef _DEBUG
void CText1View::AssertValid() const
{
	CView::AssertValid();
}

void CText1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CText1Doc* CText1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CText1Doc)));
	return (CText1Doc*)m_pDocument;
}
#endif //_DEBUG


// CText1View 消息处理程序


void CText1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s,a1;
	int A;
	A = 618;
	a1.Format(_T("%d"),A);
	s.Format(_T("我是龙洁林"));
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
	dc.TextOutW(200, 400, a1);
	CView::OnLButtonDown(nFlags, point);
}
