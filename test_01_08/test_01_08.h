
// test_01_08.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// Ctest_01_08App:
// �� Ŭ������ ������ ���ؼ��� test_01_08.cpp�� �����Ͻʽÿ�.
//

class Ctest_01_08App : public CWinApp
{
public:
	Ctest_01_08App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern Ctest_01_08App theApp;