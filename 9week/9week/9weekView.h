
// 9weekView.h : CMy9weekView 类的接口
//

#pragma once


class CMy9weekView : public CView
{
protected: // 仅从序列化创建
	CMy9weekView();
	DECLARE_DYNCREATE(CMy9weekView)

// 特性
public:
	CMy9weekDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy9weekView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpen();
};

#ifndef _DEBUG  // 9weekView.cpp 中的调试版本
inline CMy9weekDoc* CMy9weekView::GetDocument() const
   { return reinterpret_cast<CMy9weekDoc*>(m_pDocument); }
#endif

