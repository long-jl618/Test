
// 11week.3Doc.h : CMy11week3Doc ��Ľӿ�
//


#pragma once
#include "11week.3Set.h"


class CMy11week3Doc : public CDocument
{
protected: // �������л�����
	CMy11week3Doc();
	DECLARE_DYNCREATE(CMy11week3Doc)

// ����
public:
	CMy11week3Set m_My11week3Set;

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
	virtual ~CMy11week3Doc();
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
