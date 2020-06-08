
// test5.18View.cpp : Ctest518View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test5.18.h"
#endif

#include "test5.18Set.h"
#include "test5.18Doc.h"
#include "test5.18View.h"
#include "Mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest518View

IMPLEMENT_DYNCREATE(Ctest518View, CRecordView)

BEGIN_MESSAGE_MAP(Ctest518View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &Ctest518View::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// Ctest518View 构造/析构

Ctest518View::Ctest518View()
	: CRecordView(IDD_TEST518_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Ctest518View::~Ctest518View()
{
}

void Ctest518View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例

	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
}


void Ctest518View::draw_pic(CString file) {
	CImage img;
	if (!img.IsNull())
	{
		img.Destroy();
	}
	img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);

}
BOOL Ctest518View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Ctest518View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_test518Set;
	CRecordView::OnInitialUpdate();

}


// Ctest518View 诊断

#ifdef _DEBUG
void Ctest518View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Ctest518View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Ctest518Doc* Ctest518View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest518Doc)));
	return (Ctest518Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest518View 数据库支持
CRecordset* Ctest518View::OnGetRecordset()
{

	return m_pSet;
}



// Ctest518View 消息处理程序


void Ctest518View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Mydlg dlg;
	dlg.Getstr(file);
	dlg.DoModal();
}


void Ctest518View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString s, path, filename;
	path = "E://office//";
	UpdateData(false);
	GetDlgItemText(IDC_EDIT1, str);
	filename = path + str;
	file = filename;
	draw_pic(filename);
}
