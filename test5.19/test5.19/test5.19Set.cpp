
// test5.19Set.cpp : Ctest519Set ���ʵ��
//

#include "stdafx.h"
#include "test5.19.h"
#include "test5.19Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest519Set ʵ��

// ���������� 2020��5��19��, 14:18

IMPLEMENT_DYNAMIC(Ctest519Set, CRecordset)

Ctest519Set::Ctest519Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Ctest519Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_519;DBQ=E:\\office\\Database7.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Ctest519Set::GetDefaultSQL()
{
	return _T("[��Ϣ]");
}

void Ctest519Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// Ctest519Set ���

#ifdef _DEBUG
void Ctest519Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Ctest519Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

