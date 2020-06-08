
// Test5.11-1View.h : CTest5111View 类的接口
//

#pragma once
#include "afxwin.h"

class CTest5111Set;

class CTest5111View : public CRecordView
{
protected: // 仅从序列化创建
	CTest5111View();
	DECLARE_DYNCREATE(CTest5111View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST5111_FORM };
#endif
	CTest5111Set* m_pSet;
	
// 特性
public:
	CTest5111Doc* GetDocument() const;
	void draw_pic(CString file);
	void draw_pic1(CString file);
// 操作
public:CString path;
	   CString ss;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CTest5111View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // Test5.11-1View.cpp 中的调试版本
inline CTest5111Doc* CTest5111View::GetDocument() const
   { return reinterpret_cast<CTest5111Doc*>(m_pDocument); }
#endif

