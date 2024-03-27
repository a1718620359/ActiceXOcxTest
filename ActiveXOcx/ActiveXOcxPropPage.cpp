// ActiveXOcxPropPage.cpp : CActiveXOcxPropPage 属性页类的实现。

#include "stdafx.h"
#include "ActiveXOcx.h"
#include "ActiveXOcxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CActiveXOcxPropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CActiveXOcxPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CActiveXOcxPropPage, "ACTIVEXOCX.ActiveXOcxPropPage.1",
	0x95cb1926, 0x2191, 0x4735, 0x8d, 0xf0, 0x67, 0x3e, 0xe4, 0x6e, 0x4a, 0x38)



// CActiveXOcxPropPage::CActiveXOcxPropPageFactory::UpdateRegistry -
// 添加或移除 CActiveXOcxPropPage 的系统注册表项

BOOL CActiveXOcxPropPage::CActiveXOcxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ACTIVEXOCX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CActiveXOcxPropPage::CActiveXOcxPropPage - 构造函数

CActiveXOcxPropPage::CActiveXOcxPropPage() :
	COlePropertyPage(IDD, IDS_ACTIVEXOCX_PPG_CAPTION)
{
}



// CActiveXOcxPropPage::DoDataExchange - 在页和属性间移动数据

void CActiveXOcxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CActiveXOcxPropPage 消息处理程序
