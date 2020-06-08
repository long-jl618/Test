
// Test5.11-1Set.cpp : CTest5111Set 类的实现
//

#include "stdafx.h"
#include "Test5.11-1.h"
#include "Test5.11-1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest5111Set 实现

// 代码生成在 2020年5月13日, 11:53

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CTest5111Set::GetDefaultConnect()
{
	return _T("数据源2_学生信息");
}

CString CTest5111Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void CTest5111Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Long(pFX, _T("[字段2]"), m_2);
	RFX_Text(pFX, _T("[字段3]"), m_3);
	RFX_Text(pFX, _T("[字段4]"), m_4);
	RFX_Text(pFX, _T("[字段5]"), m_5);
	RFX_Double(pFX, _T("[字段6]"), m_6);
	RFX_Text(pFX, _T("[字段7]"), m_7);

}
/////////////////////////////////////////////////////////////////////////////
// CTest5111Set 诊断

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

