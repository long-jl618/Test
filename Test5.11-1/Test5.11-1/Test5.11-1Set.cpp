
// Test5.11-1Set.cpp : CTest5111Set ���ʵ��
//

#include "stdafx.h"
#include "Test5.11-1.h"
#include "Test5.11-1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest5111Set ʵ��

// ���������� 2020��5��13��, 11:53

IMPLEMENT_DYNAMIC(CTest5111Set, CRecordset)

CTest5111Set::CTest5111Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0;
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_6 = 0.0;
	m_7 = L"";
	m_nFields = 8;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CTest5111Set::GetDefaultConnect()
{
	return _T("����Դ2_ѧ����Ϣ");
}

CString CTest5111Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CTest5111Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);
	RFX_Double(pFX, _T("[�ֶ�6]"), m_6);
	RFX_Text(pFX, _T("[�ֶ�7]"), m_7);

}
/////////////////////////////////////////////////////////////////////////////
// CTest5111Set ���

#ifdef _DEBUG
void CTest5111Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CTest5111Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

