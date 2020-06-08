
// 11week.2Set.cpp : CMy11week2Set ���ʵ��
//

#include "stdafx.h"
#include "11week.2.h"
#include "11week.2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11week2Set ʵ��

// ���������� 2020��5��12��, 11:17

IMPLEMENT_DYNAMIC(CMy11week2Set, CRecordset)

CMy11week2Set::CMy11week2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0.0;
	m_3 = 0;
	m_4 = 0.0;
	m_5 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy11week2Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90\x2014\x2014\x5b66\x751f\x4fe1\x606f;DBQ=E:\\office\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy11week2Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CMy11week2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Double(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Long(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Double(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);
}
/////////////////////////////////////////////////////////////////////////////
// CMy11week2Set ���

#ifdef _DEBUG
void CMy11week2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy11week2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

