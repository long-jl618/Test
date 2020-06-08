
// test5.18View.h : Ctest518View 类的接口
//

#pragma once

class Ctest518Set;

class Ctest518View : public CRecordView
{
protected: // 仅从序列化创建
	Ctest518View();
	DECLARE_DYNCREATE(Ctest518View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST518_FORM };
#endif
	Ctest518Set* m_pSet;

// 特性
public:
	Ctest518Doc* GetDocument() const;
	void draw_pic(CString file);
// 操作
public:CString file;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Ctest518View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
	CString name;
	CString str;
};

#ifndef _DEBUG  // test5.18View.cpp 中的调试版本
inline Ctest518Doc* Ctest518View::GetDocument() const
   { return reinterpret_cast<Ctest518Doc*>(m_pDocument); }
#endif

