
// nineWeekView.cpp : CnineWeekView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CnineWeekView ����/����

CnineWeekView::CnineWeekView()
{
	// TODO: �ڴ˴���ӹ������

}

CnineWeekView::~CnineWeekView()
{
}

BOOL CnineWeekView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CnineWeekView ����

void CnineWeekView::OnDraw(CDC* /*pDC*/)
{
	CnineWeekDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CnineWeekView ���

#ifdef _DEBUG
void CnineWeekView::AssertValid() const
{
	CView::AssertValid();
}

void CnineWeekView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CnineWeekDoc* CnineWeekView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CnineWeekDoc)));
	return (CnineWeekDoc*)m_pDocument;
}
#endif //_DEBUG


// CnineWeekView ��Ϣ�������


void CnineWeekView::Onwenjian()
{

	CString filter, strtext;
	CString filename;
	filter = "ѧ������.txt";
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, filter);
	if (dlg.DoModal() == IDOK) {
		CString str;
		CStdioFile file;
		filename = dlg.GetPathName();
		if (!file.Open(filename, CFile::modeRead)) {
			::AfxMessageBox(_T("�ļ���ʧ�ܡ�"));
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
	// TODO: �ڴ���������������
}
