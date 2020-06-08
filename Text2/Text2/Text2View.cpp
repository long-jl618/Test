
// Text2View.cpp : CText2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Text2.h"
#endif

#include "Text2Doc.h"
#include "Text2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CText2View

IMPLEMENT_DYNCREATE(CText2View, CView)

BEGIN_MESSAGE_MAP(CText2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CText2View 构造/析构

CText2View::CText2View()
{
	// TODO: 在此处添加构造代码

}

CText2View::~CText2View()
{
}

BOOL CText2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CText2View 绘制

void CText2View::OnDraw(CDC* /*pDC*/)
{
	CText2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int A;
	A = 618;
	CString s,a;
	s.Format(_T("我是龙洁林"));
	a.Format(_T("%d"), A);
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
	dc.TextOutW(200, 400, a);
}


// CText2View 打印

BOOL CText2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CText2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CText2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CText2View 诊断

#ifdef _DEBUG
void CText2View::AssertValid() const
{
	CView::AssertValid();
}

void CText2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CText2Doc* CText2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CText2Doc)));
	return (CText2Doc*)m_pDocument;
}
#endif //_DEBUG


// CText2View 消息处理程序
