
// test5.18-2View.h : Ctest5182View ��Ľӿ�
//

#pragma once


class Ctest5182View : public CView
{
protected: // �������л�����
	Ctest5182View();
	DECLARE_DYNCREATE(Ctest5182View)

// ����
public:
	Ctest5182Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest5182View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test5.18-2View.cpp �еĵ��԰汾
inline Ctest5182Doc* Ctest5182View::GetDocument() const
   { return reinterpret_cast<Ctest5182Doc*>(m_pDocument); }
#endif

