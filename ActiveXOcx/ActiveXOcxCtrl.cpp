// ActiveXOcxCtrl.cpp : CActiveXOcxCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "ActiveXOcx.h"
#include "ActiveXOcxCtrl.h"
#include "ActiveXOcxPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CActiveXOcxCtrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CActiveXOcxCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CActiveXOcxCtrl, COleControl)
	DISP_FUNCTION_ID(CActiveXOcxCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CActiveXOcxCtrl, "add", dispidadd, add, VT_I4, VTS_I4 VTS_I4)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CActiveXOcxCtrl, COleControl)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CActiveXOcxCtrl, 1)
	PROPPAGEID(CActiveXOcxPropPage::guid)
END_PROPPAGEIDS(CActiveXOcxCtrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CActiveXOcxCtrl, "ACTIVEXOCX.ActiveXOcxCtrl.1",
	0xe01295a, 0x4bc3, 0x4db3, 0x86, 0x26, 0xbc, 0x3c, 0x43, 0x20, 0xb, 0x21)



// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CActiveXOcxCtrl, _tlid, _wVerMajor, _wVerMinor)



// 接口 ID

const IID IID_DActiveXOcx = { 0xAE58995F, 0xA5D5, 0x4655, { 0xB9, 0x2, 0x6C, 0x95, 0x63, 0x60, 0x49, 0xE1 } };
const IID IID_DActiveXOcxEvents = { 0x6594C47C, 0x3A13, 0x4242, { 0x80, 0xCE, 0xDD, 0xF8, 0x3C, 0x1E, 0x7F, 0xA } };


// 控件类型信息

static const DWORD _dwActiveXOcxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CActiveXOcxCtrl, IDS_ACTIVEXOCX, _dwActiveXOcxOleMisc)



// CActiveXOcxCtrl::CActiveXOcxCtrlFactory::UpdateRegistry -
// 添加或移除 CActiveXOcxCtrl 的系统注册表项

BOOL CActiveXOcxCtrl::CActiveXOcxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// CActiveXOcxCtrl::CActiveXOcxCtrl - 构造函数

CActiveXOcxCtrl::CActiveXOcxCtrl()
{
	InitializeIIDs(&IID_DActiveXOcx, &IID_DActiveXOcxEvents);
	// TODO: 在此初始化控件的实例数据。
}



// CActiveXOcxCtrl::~CActiveXOcxCtrl - 析构函数

CActiveXOcxCtrl::~CActiveXOcxCtrl()
{
	// TODO: 在此清理控件的实例数据。
}



// CActiveXOcxCtrl::OnDraw - 绘图函数

void CActiveXOcxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CActiveXOcxCtrl::DoPropExchange - 持久性支持

void CActiveXOcxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CActiveXOcxCtrl::OnResetState - 将控件重置为默认状态

void CActiveXOcxCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CActiveXOcxCtrl::AboutBox - 向用户显示“关于”框

void CActiveXOcxCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_ACTIVEXOCX);
	dlgAbout.DoModal();
}



// CActiveXOcxCtrl 消息处理程序


LONG CActiveXOcxCtrl::add(LONG num1, LONG num2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	LONG res = num1 + num2;

	return res;
}
