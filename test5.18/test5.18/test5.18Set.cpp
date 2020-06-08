
// test5.18Set.cpp : Ctest518Set ���ʵ��
//

#include "stdafx.h"
#include "test5.18.h"
#include "test5.18Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest518Set ʵ��

// ���������� 2020��5��18��, 15:04

IMPLEMENT_DYNAMIC(Ctest518Set, CRecordset)

Ctest518Set::Ctest518Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_nFields = 3;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Ctest518Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7167\x7247\x4fe1\x606f;DBQ=E:\\OFFICE\\Database6.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Ctest518Set::GetDefaultSQL()
{
	return _T("[��Ƭ��Ϣ]");
}

void Ctest518Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);

}
/////////////////////////////////////////////////////////////////////////////
// Ctest518Set ���

#ifdef _DEBUG
void Ctest518Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Ctest518Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

