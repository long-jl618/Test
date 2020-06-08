
// test5.18-1View.cpp : Ctest5181View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctest5181View 构造/析构

Ctest5181View::Ctest5181View()
{
	// TODO: 在此处添加构造代码

}

Ctest5181View::~Ctest5181View()
{
}

BOOL Ctest5181View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest5181View 绘制

void Ctest5181View::OnDraw(CDC* /*pDC*/)
{
	Ctest5181Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	Mydlg0 dlg0;
	dlg0.DoModal();
	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest5181View 诊断

#ifdef _DEBUG
void Ctest5181View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest5181View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest5181Doc* Ctest5181View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest5181Doc)));
	return (Ctest5181Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest5181View 消息处理程序
