// ActiveXOcx.cpp : CActiveXOcxApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "ActiveXOcx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CActiveXOcxApp theApp;

const GUID CDECL _tlid = { 0x38717B79, 0xB38, 0x4D20, { 0xBE, 0xE, 0xA6, 0xAF, 0xF7, 0xC9, 0x9, 0x9A } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CActiveXOcxApp::InitInstance - DLL ��ʼ��

BOOL CActiveXOcxApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CActiveXOcxApp::ExitInstance - DLL ��ֹ

int CActiveXOcxApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
