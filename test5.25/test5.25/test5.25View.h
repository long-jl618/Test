
// test5.25View.h : Ctest525View 类的接口
//

#pragma once

class Ctest525Set;

class Ctest525View : public CRecordView
{
protected: // 仅从序列化创建
	Ctest525View();
	DECLARE_DYNCREATE(Ctest525View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST525_FORM };
#endif
	Ctest525Set* m_pSet;

// 特性
public:
	Ctest525Doc* GetDocument() const;
	void draw_pic(CString file);
	void paixu(int num);
// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Ctest525View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString sno;
	CString name;
	CString sex;
	CString income;
	CString pic;
	CString file;
	afx_msg void OnBnClickedButton1();
	afx_msg void Onpaixu();
	CString what;
	afx_msg void OnBnClickedButton2();
	afx_msg void Onchaxun();
	afx_msg void Onadd();
	int indexsno;
	afx_msg void Ondelete();
	afx_msg void Onchange();
	afx_msg void Onjilu();
};

#ifndef _DEBUG  // test5.25View.cpp 中的调试版本
inline Ctest525Doc* Ctest525View::GetDocument() const
   { return reinterpret_cast<Ctest525Doc*>(m_pDocument); }
#endif

