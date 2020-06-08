
// nineWeekView.h : CnineWeekView 类的接口
//

#pragma once


class CnineWeekView : public CView
{
protected: // 仅从序列化创建
	CnineWeekView();
	DECLARE_DYNCREATE(CnineWeekView)

// 特性
public:
	CnineWeekDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CnineWeekView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onwenjian();
};

#ifndef _DEBUG  // nineWeekView.cpp 中的调试版本
inline CnineWeekDoc* CnineWeekView::GetDocument() const
   { return reinterpret_cast<CnineWeekDoc*>(m_pDocument); }
#endif

