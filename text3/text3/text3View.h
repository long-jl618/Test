
// text3View.h : Ctext3View ��Ľӿ�
//

#pragma once


class Ctext3View : public CView
{
protected: // �������л�����
	Ctext3View();
	DECLARE_DYNCREATE(Ctext3View)

// ����
public:
	Ctext3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // text3View.cpp �еĵ��԰汾
inline Ctext3Doc* Ctext3View::GetDocument() const
   { return reinterpret_cast<Ctext3Doc*>(m_pDocument); }
#endif

