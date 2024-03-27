#pragma once

// ActiveXOcxPropPage.h : CActiveXOcxPropPage 属性页类的声明。


// CActiveXOcxPropPage : 有关实现的信息，请参阅 ActiveXOcxPropPage.cpp。

class CActiveXOcxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CActiveXOcxPropPage)
	DECLARE_OLECREATE_EX(CActiveXOcxPropPage)

// 构造函数
public:
	CActiveXOcxPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_ACTIVEXOCX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

