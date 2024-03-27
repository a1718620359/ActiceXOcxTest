// ActiveXOcxCtrl.cpp : CActiveXOcxCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "ActiveXOcx.h"
#include "ActiveXOcxCtrl.h"
#include "ActiveXOcxPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CActiveXOcxCtrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CActiveXOcxCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CActiveXOcxCtrl, COleControl)
	DISP_FUNCTION_ID(CActiveXOcxCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CActiveXOcxCtrl, "add", dispidadd, add, VT_I4, VTS_I4 VTS_I4)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CActiveXOcxCtrl, COleControl)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CActiveXOcxCtrl, 1)
	PROPPAGEID(CActiveXOcxPropPage::guid)
END_PROPPAGEIDS(CActiveXOcxCtrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CActiveXOcxCtrl, "ACTIVEXOCX.ActiveXOcxCtrl.1",
	0xe01295a, 0x4bc3, 0x4db3, 0x86, 0x26, 0xbc, 0x3c, 0x43, 0x20, 0xb, 0x21)



// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CActiveXOcxCtrl, _tlid, _wVerMajor, _wVerMinor)



// �ӿ� ID

const IID IID_DActiveXOcx = { 0xAE58995F, 0xA5D5, 0x4655, { 0xB9, 0x2, 0x6C, 0x95, 0x63, 0x60, 0x49, 0xE1 } };
const IID IID_DActiveXOcxEvents = { 0x6594C47C, 0x3A13, 0x4242, { 0x80, 0xCE, 0xDD, 0xF8, 0x3C, 0x1E, 0x7F, 0xA } };


// �ؼ�������Ϣ

static const DWORD _dwActiveXOcxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CActiveXOcxCtrl, IDS_ACTIVEXOCX, _dwActiveXOcxOleMisc)



// CActiveXOcxCtrl::CActiveXOcxCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CActiveXOcxCtrl ��ϵͳע�����

BOOL CActiveXOcxCtrl::CActiveXOcxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_ACTIVEXOCX,
			IDB_ACTIVEXOCX,
			afxRegApartmentThreading,
			_dwActiveXOcxOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CActiveXOcxCtrl::CActiveXOcxCtrl - ���캯��

CActiveXOcxCtrl::CActiveXOcxCtrl()
{
	InitializeIIDs(&IID_DActiveXOcx, &IID_DActiveXOcxEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}



// CActiveXOcxCtrl::~CActiveXOcxCtrl - ��������

CActiveXOcxCtrl::~CActiveXOcxCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}



// CActiveXOcxCtrl::OnDraw - ��ͼ����

void CActiveXOcxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CActiveXOcxCtrl::DoPropExchange - �־���֧��

void CActiveXOcxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CActiveXOcxCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CActiveXOcxCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CActiveXOcxCtrl::AboutBox - ���û���ʾ�����ڡ���

void CActiveXOcxCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_ACTIVEXOCX);
	dlgAbout.DoModal();
}



// CActiveXOcxCtrl ��Ϣ�������


LONG CActiveXOcxCtrl::add(LONG num1, LONG num2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	LONG res = num1 + num2;

	return res;
}
