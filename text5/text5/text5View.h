
// text5View.h : Ctext5View ��Ľӿ�
//

#pragma once


class Ctext5View : public CView
{
protected: // �������л�����
	Ctext5View();
	DECLARE_DYNCREATE(Ctext5View)

// ����
public:
	Ctext5Doc* GetDocument() const;

// ����
public:
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text5View.cpp �еĵ��԰汾
inline Ctext5Doc* Ctext5View::GetDocument() const
   { return reinterpret_cast<Ctext5Doc*>(m_pDocument); }
#endif

