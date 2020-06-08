
// test5.18-2View.cpp : Ctest5182View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctest5182View 构造/析构

Ctest5182View::Ctest5182View()
{
	// TODO: 在此处添加构造代码

}

Ctest5182View::~Ctest5182View()
{
}

BOOL Ctest5182View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest5182View 绘制

void Ctest5182View::OnDraw(CDC* /*pDC*/)
{
	Ctest5182Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	Mydlg dlg;
	dlg.DoModal();
}


// Ctest5182View 诊断

#ifdef _DEBUG
void Ctest5182View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest5182View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest5182Doc* Ctest5182View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest5182Doc)));
	return (Ctest5182Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest5182View 消息处理程序
