
// test5.18-2View.h : Ctest5182View 类的接口
//

#pragma once


class Ctest5182View : public CView
{
protected: // 仅从序列化创建
	Ctest5182View();
	DECLARE_DYNCREATE(Ctest5182View)

// 特性
public:
	Ctest5182Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest5182View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test5.18-2View.cpp 中的调试版本
inline Ctest5182Doc* Ctest5182View::GetDocument() const
   { return reinterpret_cast<Ctest5182Doc*>(m_pDocument); }
#endif

