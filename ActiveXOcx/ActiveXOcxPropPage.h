#pragma once

// ActiveXOcxPropPage.h : CActiveXOcxPropPage ����ҳ���������


// CActiveXOcxPropPage : �й�ʵ�ֵ���Ϣ������� ActiveXOcxPropPage.cpp��

class CActiveXOcxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CActiveXOcxPropPage)
	DECLARE_OLECREATE_EX(CActiveXOcxPropPage)

// ���캯��
public:
	CActiveXOcxPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_ACTIVEXOCX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

