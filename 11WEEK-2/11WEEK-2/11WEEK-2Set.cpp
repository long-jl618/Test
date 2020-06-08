
// 11WEEK-2Set.cpp : CMy11WEEK2Set ���ʵ��
//

#include "stdafx.h"
#include "11WEEK-2.h"
#include "11WEEK-2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11WEEK2Set ʵ��

// ���������� 2020��5��13��, 23:21

IMPLEMENT_DYNAMIC(CMy11WEEK2Set, CRecordset)

CMy11WEEK2Set::CMy11WEEK2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_nFields = 3;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy11WEEK2Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7167\x7247\x4fe1\x606f;DBQ=E:\\OFFICE\\Database6.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy11WEEK2Set::GetDefaultSQL()
{
	return _T("[��Ƭ��Ϣ]");
}

void CMy11WEEK2Set::DoFieldExchange(CFieldExchange* pFX)
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
// CMy11WEEK2Set ���

#ifdef _DEBUG
void CMy11WEEK2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy11WEEK2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

