
// test5.19View.h : Ctest519View 类的接口
//

#pragma once

class Ctest519Set;

class Ctest519View : public CRecordView
{
protected: // 仅从序列化创建
	Ctest519View();
	DECLARE_DYNCREATE(Ctest519View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST519_FORM };
#endif
	Ctest519Set* m_pSet;

// 特性
public:
	Ctest519Doc* GetDocument() const;

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
	virtual ~Ctest519View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString str;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // test5.19View.cpp 中的调试版本
inline Ctest519Doc* Ctest519View::GetDocument() const
   { return reinterpret_cast<Ctest519Doc*>(m_pDocument); }
#endif

