
// 11WEEK-2View.h : CMy11WEEK2View ��Ľӿ�
//

#pragma once

class CMy11WEEK2Set;

class CMy11WEEK2View : public CRecordView
{
protected: // �������л�����
	CMy11WEEK2View();
	DECLARE_DYNCREATE(CMy11WEEK2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK2_FORM };
#endif
	CMy11WEEK2Set* m_pSet;
	

// ����
public:
	CMy11WEEK2Doc* GetDocument() const;
	void draw_pic(CString file);
// ����
public:CString Path;
	   //CImage img;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMy11WEEK2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // 11WEEK-2View.cpp �еĵ��԰汾
inline CMy11WEEK2Doc* CMy11WEEK2View::GetDocument() const
   { return reinterpret_cast<CMy11WEEK2Doc*>(m_pDocument); }
#endif

