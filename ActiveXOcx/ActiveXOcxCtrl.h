#pragma once

// ActiveXOcxCtrl.h : CActiveXOcxCtrl ActiveX �ؼ����������


// CActiveXOcxCtrl : �й�ʵ�ֵ���Ϣ������� ActiveXOcxCtrl.cpp��

class CActiveXOcxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CActiveXOcxCtrl)

// ���캯��
public:
	CActiveXOcxCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CActiveXOcxCtrl();

	DECLARE_OLECREATE_EX(CActiveXOcxCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CActiveXOcxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CActiveXOcxCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CActiveXOcxCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
		dispidadd = 1L
	};
protected:
	LONG add(LONG num1, LONG num2);
};

