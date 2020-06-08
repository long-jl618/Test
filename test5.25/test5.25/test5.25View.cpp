
// test5.25View.cpp : Ctest525View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test5.25.h"
#endif

#include "test5.25Set.h"
#include "test5.25Doc.h"
#include "test5.25View.h"
#include "Mydlg0.h"
#include "Mydlgp.h"
#include "Mydlgc.h"
#include "Mydlga.h"
#include "Mydlgd.h"
#include "Mydlgch.h"
#include "Mdlgl.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest525View

IMPLEMENT_DYNCREATE(Ctest525View, CRecordView)

BEGIN_MESSAGE_MAP(Ctest525View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &Ctest525View::OnBnClickedButton1)
	ON_COMMAND(ID_paixu, &Ctest525View::Onpaixu)
	ON_BN_CLICKED(IDC_BUTTON2, &Ctest525View::OnBnClickedButton2)
	ON_COMMAND(ID_chaxun, &Ctest525View::Onchaxun)
	ON_COMMAND(ID_add, &Ctest525View::Onadd)
	ON_COMMAND(ID_delete, &Ctest525View::Ondelete)
	ON_COMMAND(ID_change, &Ctest525View::Onchange)
	ON_COMMAND(ID_jilu, &Ctest525View::Onjilu)
END_MESSAGE_MAP()

// Ctest525View 构造/析构

Ctest525View::Ctest525View()
	: CRecordView(IDD_TEST525_FORM)
	, sno(_T(""))
	, name(_T(""))
	, sex(_T(""))
	, income(_T(""))
	, pic(_T(""))
	, what(_T(""))
{
	m_pSet = NULL;
	file = "";
	indexsno = 0;
	// TODO: 在此处添加构造代码

}

Ctest525View::~Ctest525View()
{
}

void Ctest525View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_5);
	CString path, filename, s;
	path = _T("E://office//");
	GetDlgItemText(IDC_EDIT5, s);
	filename = path + s;
	file = filename;
	draw_pic(filename);

	DDX_Text(pDX, IDC_EDIT6, what);
}

void Ctest525View::paixu(int num) {
	int index,a;
	CString s;
	index = num;
	m_pSet->MoveFirst();
	UpdateData(false);
	while (m_pSet->m_4<index)
	{

		if (m_pSet->IsBOF())
		{
			m_pSet->MoveFirst();
		}
		m_pSet->MoveNext();
		UpdateData(false);
	}
}

void Ctest525View::draw_pic(CString file) {
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


BOOL Ctest525View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Ctest525View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_test525Set;
	CRecordView::OnInitialUpdate();

}


// Ctest525View 诊断

#ifdef _DEBUG
void Ctest525View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Ctest525View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Ctest525Doc* Ctest525View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest525Doc)));
	return (Ctest525Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest525View 数据库支持
CRecordset* Ctest525View::OnGetRecordset()
{
	return m_pSet;
}



// Ctest525View 消息处理程序


void Ctest525View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Mydlg0 dlg;
	dlg.getstr(file);
	dlg.DoModal();
	
}


void Ctest525View::Onpaixu()
{
	// TODO: 在此添加命令处理程序代码
	Mydlgp dlgp;
	int r;
	r = dlgp.DoModal();
	int num;
	if (r==IDOK)
	{
		CString str0;
		str0 = dlgp.str.GetString();
		//CString str1;
		//str0.Right;
		str0.Delete(0, str0.Find(_T(">") )+1);
		num = _ttoi(str0);
		paixu(num);
		UpdateData(true);
		what.SetString(str0);
		
		UpdateData(false);
	}
	
}


void Ctest525View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	
	m_pSet->MoveFirst();
	UpdateData(false);
}


void Ctest525View::Onchaxun()
{
	// TODO: 在此添加命令处理程序代码
	Mydlgc dlgc;
	int r;
	CString s;
	long ss;
	r = dlgc.DoModal();
	if (r==IDOK)
	{
		s = dlgc.num.GetString();
		ss = _ttoi(s);
		while (m_pSet->m_1 != s) {
			if (m_pSet->IsEOF())
			{
				m_pSet->MoveFirst();
			}
			else m_pSet->MoveNext();
			if (m_pSet->m_1==ss)
			{
				break;
			}
		}
			
		
		UpdateData(false);
	}
}


void Ctest525View::Onadd()
{
	// TODO: 在此添加命令处理程序代码
	Mydlga dlga;
	int r;
	r = dlga.DoModal();
	if (r == IDOK) {
		//m_pSet->AddNew();
		m_pSet->AddNew();
		UpdateData(true);
		m_pSet->SetFieldNull(&(m_pSet->m_1), FALSE);
		m_pSet->m_1 = _ttoi(dlga.sno.GetString());
	    
		m_pSet->m_2 =dlga.name.GetString();
		m_pSet->m_3 =dlga.sex.GetString();
		m_pSet->m_4 = _ttoi(dlga.income.GetString());
		m_pSet->m_5 = dlga.pic.GetString();
		UpdateData(false);
		m_pSet->Update();
		m_pSet->Requery();
	}
}


void Ctest525View::Ondelete()
{

	// TODO: 在此添加命令处理程序代码
	CRecordsetStatus status;
	m_pSet->GetStatus(status);
	m_pSet->Delete();
	if (status.m_lCurrentRecord==0)
	{
		m_pSet->MoveNext();
	}
	else
	{
		m_pSet->MoveFirst();
	}
	UpdateData(FALSE);
}


void Ctest525View::Onchange()
{
	// TODO: 在此添加命令处理程序代码
	Mydlgch dlgc;
	int r;
	CString s;
	s.Format(_T("%d"),m_pSet->m_1);
	dlgc.sno.SetString(s);
	r = dlgc.DoModal();
	if (r==IDOK)
	{
		m_pSet->Edit();
		//m_pSet->SetFieldNull(&(m_pSet->m_1), FALSE);
		//_T("%s",m_pSet->m_1)
		UpdateData(true);
		m_pSet->m_1 = _ttoi(dlgc.sno.GetString());
		m_pSet->m_2 = dlgc.name.GetString();
		m_pSet->m_3 = dlgc.sex.GetString();
		m_pSet->m_4 = _ttoi(dlgc.income.GetString());
		m_pSet->m_5 = dlgc.pic.GetString();
		UpdateData(false);
		m_pSet->Update();
		m_pSet->Requery();

	}
}


void Ctest525View::Onjilu()
{
	// TODO: 在此添加命令处理程序代码
	Mdlgl dlgl;
	int r;
	CString str,s1,s2,s3,s4,s5,strall;
	strall = "";
	
		while (!m_pSet->IsEOF()) {
			s1.Format(_T("%d"), m_pSet->m_1);
			s2 = m_pSet->m_2;
			s3 = m_pSet->m_3;
			s4.Format(_T("%f"), m_pSet->m_4);
			//s5 = m_pSet->m_5;
			str = s1 + s2 + s3 + s4 +_T("\r\n");
			strall =strall+str;
			dlgl.getstr(strall);
			m_pSet->MoveNext();
		}
		
		dlgl.DoModal();
	
}
