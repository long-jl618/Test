
// 11WEEK-2Doc.h : CMy11WEEK2Doc ��Ľӿ�
//


#pragma once
#include "11WEEK-2Set.h"


class CMy11WEEK2Doc : public CDocument
{
protected: // �������л�����
	CMy11WEEK2Doc();
	DECLARE_DYNCREATE(CMy11WEEK2Doc)

// ����
public:
	CMy11WEEK2Set m_My11WEEK2Set;

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
	virtual ~CMy11WEEK2Doc();
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
