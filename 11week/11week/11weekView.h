
// 11weekView.h : CMy11weekView 类的接口
//

#pragma once

class CMy11weekSet;

class CMy11weekView : public CRecordView
{
protected: // 仅从序列化创建
	CMy11weekView();
	DECLARE_DYNCREATE(CMy11weekView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK_FORM };
#endif
	CMy11weekSet* m_pSet;

// 特性
public:
	CMy11weekDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy11weekView();
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
};

#ifndef _DEBUG  // 11weekView.cpp 中的调试版本
inline CMy11weekDoc* CMy11weekView::GetDocument() const
   { return reinterpret_cast<CMy11weekDoc*>(m_pDocument); }
#endif

