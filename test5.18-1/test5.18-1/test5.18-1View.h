
// test5.18-1View.h : Ctest5181View ��Ľӿ�
//

#pragma once


class Ctest5181View : public CView
{
protected: // �������л�����
	Ctest5181View();
	DECLARE_DYNCREATE(Ctest5181View)

// ����
public:
	Ctest5181Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest5181View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test5.18-1View.cpp �еĵ��԰汾
inline Ctest5181Doc* Ctest5181View::GetDocument() const
   { return reinterpret_cast<Ctest5181Doc*>(m_pDocument); }
#endif

