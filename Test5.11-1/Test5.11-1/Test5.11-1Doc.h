
// Test5.11-1Doc.h : CTest5111Doc ��Ľӿ�
//


#pragma once
#include "Test5.11-1Set.h"


class CTest5111Doc : public CDocument
{
protected: // �������л�����
	CTest5111Doc();
	DECLARE_DYNCREATE(CTest5111Doc)

// ����
public:
	CTest5111Set m_Test5111Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CTest5111Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
