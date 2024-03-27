// ActiveXOcx.cpp : CActiveXOcxApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "ActiveXOcx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CActiveXOcxApp theApp;

const GUID CDECL _tlid = { 0x38717B79, 0xB38, 0x4D20, { 0xBE, 0xE, 0xA6, 0xAF, 0xF7, 0xC9, 0x9, 0x9A } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CActiveXOcxApp::InitInstance - DLL 初始化

BOOL CActiveXOcxApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CActiveXOcxApp::ExitInstance - DLL 终止

int CActiveXOcxApp::ExitInstance()
{
	// TODO: 在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
