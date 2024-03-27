// CDActiveXOcxEvents.h : 由 Microsoft Visual C++ 创建的 ActiveX 控件包装类的声明

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CDActiveXOcxEvents

class CDActiveXOcxEvents : public COleDispatchDriver
{
public:
	CDActiveXOcxEvents() {}		// 调用 COleDispatchDriver 默认构造函数
	CDActiveXOcxEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDActiveXOcxEvents(const CDActiveXOcxEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// 特性
public:

// 操作
public:



};
