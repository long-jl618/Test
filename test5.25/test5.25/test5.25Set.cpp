
// test5.25Set.cpp : Ctest525Set 类的实现
//

#include "stdafx.h"
#include "test5.25.h"
#include "test5.25Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest525Set 实现

// 代码生成在 2020年5月25日, 14:29

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString Ctest525Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x4e2a\x4eba\x4fe1\x606f;DBQ=E:\\OFFICE\\Database8.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Ctest525Set::GetDefaultSQL()
{
	return _T("[个人信息表]");
}

void Ctest525Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[字段1]"), m_1);
	RFX_Text(pFX, _T("[字段2]"), m_2);
	RFX_Text(pFX, _T("[字段3]"), m_3);
	RFX_Double(pFX, _T("[字段4]"), m_4);
	RFX_Text(pFX, _T("[字段5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Ctest525Set 诊断

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

