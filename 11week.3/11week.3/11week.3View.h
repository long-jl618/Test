
// 11week.3View.h : CMy11week3View ��Ľӿ�
//

#pragma once

class CMy11week3Set;

class CMy11week3View : public CRecordView
{
protected: // �������л�����
	CMy11week3View();
	DECLARE_DYNCREATE(CMy11week3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK3_FORM };
#endif
	CMy11week3Set* m_pSet;

// ����
public:
	CMy11week3Doc* GetDocument() const;
	void draw_pic(CString file);
// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMy11week3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // 11week.3View.cpp �еĵ��԰汾
inline CMy11week3Doc* CMy11week3View::GetDocument() const
   { return reinterpret_cast<CMy11week3Doc*>(m_pDocument); }
#endif

