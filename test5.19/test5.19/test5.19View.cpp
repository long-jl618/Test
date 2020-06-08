
// test5.19View.cpp : Ctest519View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test5.19.h"
#endif

#include "test5.19Set.h"
#include "test5.19Doc.h"
#include "test5.19View.h"
#include"ADD_DLG.h"
#include"ChangeDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest519View

IMPLEMENT_DYNCREATE(Ctest519View, CRecordView)

BEGIN_MESSAGE_MAP(Ctest519View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &Ctest519View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &Ctest519View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Ctest519View::OnBnClickedButton2)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// Ctest519View 构造/析构

Ctest519View::Ctest519View()
	: CRecordView(IDD_TEST519_FORM)
	, str(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Ctest519View::~Ctest519View()
{
}

void Ctest519View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Ctest519View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Ctest519View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_test519Set;
	CRecordView::OnInitialUpdate();

}


// Ctest519View 诊断

#ifdef _DEBUG
void Ctest519View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Ctest519View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Ctest519Doc* Ctest519View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest519Doc)));
	return (Ctest519Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest519View 数据库支持
CRecordset* Ctest519View::OnGetRecordset()
{
	return m_pSet;
}



// Ctest519View 消息处理程序


void Ctest519View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void Ctest519View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DLG add;
	int r=add.DoModal();
	if (r == IDOK) {
		long ii = add.i;
		m_pSet->AddNew();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}


void Ctest519View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	ChangeDlg cdlg;
	cdlg.c = m_pSet->m_1;
	int r = cdlg.DoModal();
	if (r == IDOK) {
		long cc = cdlg.c;
		m_pSet->Edit();
		m_pSet->m_1 = cc;
		m_pSet->Update();
		UpdateData(false);
	}
}


void Ctest519View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	
}
