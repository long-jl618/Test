
// 11week.2Doc.h : CMy11week2Doc ��Ľӿ�
//


#pragma once
#include "11week.2Set.h"


class CMy11week2Doc : public CDocument
{
protected: // �������л�����
	CMy11week2Doc();
	DECLARE_DYNCREATE(CMy11week2Doc)

// ����
public:
	CMy11week2Set m_My11week2Set;

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
	virtual ~CMy11week2Doc();
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
