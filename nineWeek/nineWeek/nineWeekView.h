
// nineWeekView.h : CnineWeekView ��Ľӿ�
//

#pragma once


class CnineWeekView : public CView
{
protected: // �������л�����
	CnineWeekView();
	DECLARE_DYNCREATE(CnineWeekView)

// ����
public:
	CnineWeekDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CnineWeekView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onwenjian();
};

#ifndef _DEBUG  // nineWeekView.cpp �еĵ��԰汾
inline CnineWeekDoc* CnineWeekView::GetDocument() const
   { return reinterpret_cast<CnineWeekDoc*>(m_pDocument); }
#endif

