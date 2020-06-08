
// 11week.3View.h : CMy11week3View 类的接口
//

#pragma once

class CMy11week3Set;

class CMy11week3View : public CRecordView
{
protected: // 仅从序列化创建
	CMy11week3View();
	DECLARE_DYNCREATE(CMy11week3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK3_FORM };
#endif
	CMy11week3Set* m_pSet;

// 特性
public:
	CMy11week3Doc* GetDocument() const;
	void draw_pic(CString file);
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
	virtual ~CMy11week3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString sno;
	CString age;
	CString phone;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 11week.3View.cpp 中的调试版本
inline CMy11week3Doc* CMy11week3View::GetDocument() const
   { return reinterpret_cast<CMy11week3Doc*>(m_pDocument); }
#endif

