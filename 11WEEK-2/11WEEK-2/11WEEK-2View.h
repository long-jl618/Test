
// 11WEEK-2View.h : CMy11WEEK2View 类的接口
//

#pragma once

class CMy11WEEK2Set;

class CMy11WEEK2View : public CRecordView
{
protected: // 仅从序列化创建
	CMy11WEEK2View();
	DECLARE_DYNCREATE(CMy11WEEK2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK2_FORM };
#endif
	CMy11WEEK2Set* m_pSet;
	

// 特性
public:
	CMy11WEEK2Doc* GetDocument() const;
	void draw_pic(CString file);
// 操作
public:CString Path;
	   //CImage img;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CMy11WEEK2View();
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
	CString Name;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	CString index;
};

#ifndef _DEBUG  // 11WEEK-2View.cpp 中的调试版本
inline CMy11WEEK2Doc* CMy11WEEK2View::GetDocument() const
   { return reinterpret_cast<CMy11WEEK2Doc*>(m_pDocument); }
#endif

