#pragma once

// ActiveXOcxCtrl.h : CActiveXOcxCtrl ActiveX 控件类的声明。


// CActiveXOcxCtrl : 有关实现的信息，请参阅 ActiveXOcxCtrl.cpp。

class CActiveXOcxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CActiveXOcxCtrl)

// 构造函数
public:
	CActiveXOcxCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CActiveXOcxCtrl();

	DECLARE_OLECREATE_EX(CActiveXOcxCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CActiveXOcxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CActiveXOcxCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CActiveXOcxCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
		dispidadd = 1L
	};
protected:
	LONG add(LONG num1, LONG num2);
};

