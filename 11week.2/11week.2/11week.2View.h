
// 11week.2View.h : CMy11week2View ��Ľӿ�
//

#pragma once

class CMy11week2Set;

class CMy11week2View : public CRecordView
{
protected: // �������л�����
	CMy11week2View();
	DECLARE_DYNCREATE(CMy11week2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK2_FORM };
#endif
	CMy11week2Set* m_pSet;
	CString path;
// ����
public:
	CMy11week2Doc* GetDocument() const;
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
	virtual ~CMy11week2View();
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
	int pict;
	CString p;
};

#ifndef _DEBUG  // 11week.2View.cpp �еĵ��԰汾
inline CMy11week2Doc* CMy11week2View::GetDocument() const
   { return reinterpret_cast<CMy11week2Doc*>(m_pDocument); }
#endif

