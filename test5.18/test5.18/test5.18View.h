
// test5.18View.h : Ctest518View ��Ľӿ�
//

#pragma once

class Ctest518Set;

class Ctest518View : public CRecordView
{
protected: // �������л�����
	Ctest518View();
	DECLARE_DYNCREATE(Ctest518View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_TEST518_FORM };
#endif
	Ctest518Set* m_pSet;

// ����
public:
	Ctest518Doc* GetDocument() const;
	void draw_pic(CString file);
// ����
public:CString file;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Ctest518View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
	CString name;
	CString str;
};

#ifndef _DEBUG  // test5.18View.cpp �еĵ��԰汾
inline Ctest518Doc* Ctest518View::GetDocument() const
   { return reinterpret_cast<Ctest518Doc*>(m_pDocument); }
#endif

