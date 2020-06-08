
// nineWeekView.cpp : CnineWeekView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "nineWeek.h"
#endif

#include "nineWeekDoc.h"
#include "nineWeekView.h"
#include "Myd0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CnineWeekView

IMPLEMENT_DYNCREATE(CnineWeekView, CView)

BEGIN_MESSAGE_MAP(CnineWeekView, CView)
	ON_COMMAND(ID_wenjian, &CnineWeekView::Onwenjian)
END_MESSAGE_MAP()

// CnineWeekView 构造/析构

CnineWeekView::CnineWeekView()
{
	// TODO: 在此处添加构造代码

}

CnineWeekView::~CnineWeekView()
{
}

BOOL CnineWeekView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CnineWeekView 绘制

void CnineWeekView::OnDraw(CDC* /*pDC*/)
{
	CnineWeekDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CnineWeekView 诊断

#ifdef _DEBUG
void CnineWeekView::AssertValid() const
{
	CView::AssertValid();
}

void CnineWeekView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CnineWeekDoc* CnineWeekView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CnineWeekDoc)));
	return (CnineWeekDoc*)m_pDocument;
}
#endif //_DEBUG


// CnineWeekView 消息处理程序


void CnineWeekView::Onwenjian()
{

	CString filter, strtext;
	CString filename;
	filter = "学生名单.txt";
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, filter);
	if (dlg.DoModal() == IDOK) {
		CString str;
		CStdioFile file;
		filename = dlg.GetPathName();
		if (!file.Open(filename, CFile::modeRead)) {
			::AfxMessageBox(_T("文件打开失败。"));
			return;
		}
		strtext = _T("");
		while (file.ReadString(strtext))
		{
			//dlg.Lbox.AddString(strtext);
		}
	}
	Myd0 mdl;
   
	mdl.DoModal();
	// TODO: 在此添加命令处理程序代码
}
