
// test_01_08Dlg.h : ��� ����
//


#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <iostream>

#pragma once


// Ctest_01_08Dlg ��ȭ ����
class Ctest_01_08Dlg : public CDialogEx
{
// �����Դϴ�.
public:
	Ctest_01_08Dlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_TEST_01_08_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();

};
