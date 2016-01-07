
// test_01_08Dlg.h : 헤더 파일
//


#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <iostream>

#pragma once


// Ctest_01_08Dlg 대화 상자
class Ctest_01_08Dlg : public CDialogEx
{
// 생성입니다.
public:
	Ctest_01_08Dlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_TEST_01_08_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();

};
