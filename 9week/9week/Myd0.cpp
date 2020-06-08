// Myd0.cpp : 实现文件
//

#include "stdafx.h"
#include "9week.h"
#include "Myd0.h"
#include "afxdialogex.h"


// Myd0 对话框

IMPLEMENT_DYNAMIC(Myd0, CDialog)

Myd0::Myd0(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

Myd0::~Myd0()
{
}

void Myd0::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(Myd0, CDialog)
END_MESSAGE_MAP()


// Myd0 消息处理程序


BOOL Myd0::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	// TODO:  在此添加额外的初始化

	Myd0 mdl;
    mdl.DoModal();
	CString filter,strtext;
	CString filename;
	filter = "学生名单.txt";
	CFileDialog dlg (TRUE,NULL, NULL, OFN_HIDEREADONLY, filter);
	if (dlg.DoModal() == IDOK) {
		CString str;
		CStdioFile file;
		filename = dlg.GetPathName();
		if (!file.Open(filename, CFile::modeRead)) {
			::AfxMessageBox(_T("文件打开失败。"));
			return;
		}
		strtext = _T("");
		while (file.ReadString(strtext))
		{
			Lbox.AddString(strtext);
		}
	}

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
