
// test5.25View.h : Ctest525View ��Ľӿ�
//

#pragma once

class Ctest525Set;

class Ctest525View : public CRecordView
{
protected: // �������л�����
	Ctest525View();
	DECLARE_DYNCREATE(Ctest525View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST525_FORM };
#endif
	Ctest525Set* m_pSet;

// ����
public:
	Ctest525Doc* GetDocument() const;
	void draw_pic(CString file);
	void paixu(int num);
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
	virtual ~Ctest525View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString sno;
	CString name;
	CString sex;
	CString income;
	CString pic;
	CString file;
	afx_msg void OnBnClickedButton1();
	afx_msg void Onpaixu();
	CString what;
	afx_msg void OnBnClickedButton2();
	afx_msg void Onchaxun();
	afx_msg void Onadd();
	int indexsno;
	afx_msg void Ondelete();
	afx_msg void Onchange();
	afx_msg void Onjilu();
};

#ifndef _DEBUG  // test5.25View.cpp �еĵ��԰汾
inline Ctest525Doc* Ctest525View::GetDocument() const
   { return reinterpret_cast<Ctest525Doc*>(m_pDocument); }
#endif

