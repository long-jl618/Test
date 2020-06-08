
// 11weekView.cpp : CMy11weekView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "11week.h"
#endif

#include "11weekSet.h"
#include "11weekDoc.h"
#include "11weekView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11weekView

IMPLEMENT_DYNCREATE(CMy11weekView, CRecordView)

BEGIN_MESSAGE_MAP(CMy11weekView, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy11weekView 构造/析构

CMy11weekView::CMy11weekView()
	: CRecordView(IDD_MY11WEEK_FORM)
	, ID(0)
	, name(_T(""))
	, sno(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMy11weekView::~CMy11weekView()
{
}

void CMy11weekView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMy11weekView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMy11weekView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11weekSet;
	CRecordView::OnInitialUpdate();

}


// CMy11weekView 打印

BOOL CMy11weekView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy11weekView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy11weekView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy11weekView 诊断

#ifdef _DEBUG
void CMy11weekView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11weekView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11weekDoc* CMy11weekView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11weekDoc)));
	return (CMy11weekDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy11weekView 数据库支持
CRecordset* CMy11weekView::OnGetRecordset()
{
	return m_pSet;
}



// CMy11weekView 消息处理程序
