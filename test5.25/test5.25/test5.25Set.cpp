
// test5.25Set.cpp : Ctest525Set ���ʵ��
//

#include "stdafx.h"
#include "test5.25.h"
#include "test5.25Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest525Set ʵ��

// ���������� 2020��5��25��, 14:29

IMPLEMENT_DYNAMIC(Ctest525Set, CRecordset)

Ctest525Set::Ctest525Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_2 = L"";
	m_3 = L"";
	m_4 = 0.0;
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Ctest525Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x4e2a\x4eba\x4fe1\x606f;DBQ=E:\\OFFICE\\Database8.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Ctest525Set::GetDefaultSQL()
{
	return _T("[������Ϣ��]");
}

void Ctest525Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Double(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Ctest525Set ���

#ifdef _DEBUG
void Ctest525Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Ctest525Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

