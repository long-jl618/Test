
// Test5.11-1View.h : CTest5111View ��Ľӿ�
//

#pragma once
#include "afxwin.h"

class CTest5111Set;

class CTest5111View : public CRecordView
{
protected: // �������л�����
	CTest5111View();
	DECLARE_DYNCREATE(CTest5111View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST5111_FORM };
#endif
	CTest5111Set* m_pSet;
	
// ����
public:
	CTest5111Doc* GetDocument() const;
	void draw_pic(CString file);
	void draw_pic1(CString file);
// ����
public:CString path;
	   CString ss;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CTest5111View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString sno;
	CString score;
	CString sex;
	CString birth;
	CString adress;
	CString phone;
	afx_msg void OnBnClickedButton1();
	CButton chaxun;
	afx_msg void OnBnClickedButton3();
	CString m_strQuery;
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // Test5.11-1View.cpp �еĵ��԰汾
inline CTest5111Doc* CTest5111View::GetDocument() const
   { return reinterpret_cast<CTest5111Doc*>(m_pDocument); }
#endif

