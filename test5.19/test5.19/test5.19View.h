
// test5.19View.h : Ctest519View ��Ľӿ�
//

#pragma once

class Ctest519Set;

class Ctest519View : public CRecordView
{
protected: // �������л�����
	Ctest519View();
	DECLARE_DYNCREATE(Ctest519View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST519_FORM };
#endif
	Ctest519Set* m_pSet;

// ����
public:
	Ctest519Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Ctest519View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString str;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // test5.19View.cpp �еĵ��԰汾
inline Ctest519Doc* Ctest519View::GetDocument() const
   { return reinterpret_cast<Ctest519Doc*>(m_pDocument); }
#endif

