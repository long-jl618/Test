
// Text2View.h : CText2View ��Ľӿ�
//

#pragma once


class CText2View : public CView
{
protected: // �������л�����
	CText2View();
	DECLARE_DYNCREATE(CText2View)

// ����
public:
	CText2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CText2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Text2View.cpp �еĵ��԰汾
inline CText2Doc* CText2View::GetDocument() const
   { return reinterpret_cast<CText2Doc*>(m_pDocument); }
#endif

