
// text4View.h : Ctext4View ��Ľӿ�
//

#pragma once


class Ctext4View : public CView
{
protected: // �������л�����
	Ctext4View();
	DECLARE_DYNCREATE(Ctext4View)

// ����
public:
	Ctext4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text4View.cpp �еĵ��԰汾
inline Ctext4Doc* Ctext4View::GetDocument() const
   { return reinterpret_cast<Ctext4Doc*>(m_pDocument); }
#endif

