// ActiveXOcxPropPage.cpp : CActiveXOcxPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "ActiveXOcx.h"
#include "ActiveXOcxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CActiveXOcxPropPage, COlePropertyPage)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CActiveXOcxPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CActiveXOcxPropPage, "ACTIVEXOCX.ActiveXOcxPropPage.1",
	0x95cb1926, 0x2191, 0x4735, 0x8d, 0xf0, 0x67, 0x3e, 0xe4, 0x6e, 0x4a, 0x38)



// CActiveXOcxPropPage::CActiveXOcxPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CActiveXOcxPropPage ��ϵͳע�����

BOOL CActiveXOcxPropPage::CActiveXOcxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ACTIVEXOCX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CActiveXOcxPropPage::CActiveXOcxPropPage - ���캯��

CActiveXOcxPropPage::CActiveXOcxPropPage() :
	COlePropertyPage(IDD, IDS_ACTIVEXOCX_PPG_CAPTION)
{
}



// CActiveXOcxPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CActiveXOcxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CActiveXOcxPropPage ��Ϣ�������
