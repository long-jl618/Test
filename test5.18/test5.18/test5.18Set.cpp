
// test5.18Set.cpp : Ctest518Set 类的实现
//

#include "stdafx.h"
#include "test5.18.h"
#include "test5.18Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest518Set 实现

// 代码生成在 2020年5月18日, 15:04

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString Ctest518Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7167\x7247\x4fe1\x606f;DBQ=E:\\OFFICE\\Database6.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Ctest518Set::GetDefaultSQL()
{
	return _T("[相片信息]");
}

void Ctest518Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Text(pFX, _T("[字段2]"), m_2);

}
/////////////////////////////////////////////////////////////////////////////
// Ctest518Set 诊断

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

