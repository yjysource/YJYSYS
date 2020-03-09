#include "MyTitle.h"

MyTitle::MyTitle(QWidget *parent)
{
	double sceenX, sceenY;
	sceenX = (double)GetScreenInfoX();
	sceenY = (double)GetScreenInfoY();
	this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
	//this->setStyleSheet("background-color:red;");
	this->setParent(parent);
	this->setFixedSize((sceenX / 3) * 2, (sceenY / 5));
	pCLabelLogo = new QLabel(this);
	pCLabelLogo->setStyleSheet("QLabel{border-image:url(:/YJYSYS/Resources/logo.png);}\
                                  QLabel:hover{border-image: url(:/YJYSYS/Resources/logo.png);}\
                                  QLabel:pressed{border-image: url(:/YJYSYS/Resources/logo.png);}");
	pCLabelMessage = new QLabel(this);
	pCLabelMessage->setStyleSheet("background-color:red;");
	pCButtonReturn = new QPushButton("������ʾ", this);
	pCButtonCameraPara = new QPushButton("�������", this);
	pCButtonSystemPara = new QPushButton("ϵͳ����", this);
	pCButtonNetWork = new QPushButton("ͨѶ����", this);
	pCButtonCameraCalib = new QPushButton("����궨", this);
	pCButtonAdjustArea = new QPushButton("�㷨����", this);
	pCButtonReTrain = new QPushButton("����ģ��", this);
	pCButtonAlarmReccord = new QPushButton("ͼƬ�鿴", this);
	pCButtonManualTrig0 = new QPushButton("ץ�Ĵ���", this);
	pCButtonExit = new QPushButton("�˳�����", this);
	pHLayout1 = new QHBoxLayout();
	pHLayout1->addWidget(pCButtonReturn);
	pHLayout1->addWidget(pCButtonCameraPara);
	pHLayout1->addWidget(pCButtonSystemPara);
	pHLayout1->addWidget(pCButtonNetWork);
	pHLayout1->addWidget(pCButtonCameraCalib);
	pHLayout1->addWidget(pCButtonAdjustArea);
	pHLayout1->addWidget(pCButtonReTrain);
	pHLayout1->addWidget(pCButtonAlarmReccord);
	pHLayout1->addWidget(pCButtonManualTrig0);
	pHLayout1->addWidget(pCButtonExit);
	pVLayout = new QVBoxLayout();
	pVLayout->addLayout(pHLayout1);
	pVLayout->addWidget(pCLabelMessage);
	pVLayout->setStretchFactor(pHLayout1, 1);
	pVLayout->setStretchFactor(pCLabelMessage, 1);
	pGLayout = new QGridLayout();
	pGLayout->addWidget(pCLabelLogo, 0, 0, 2, 1);
	pGLayout->addLayout(pVLayout, 0, 2, 2, 8);
	this->setLayout(pGLayout);
}

MyTitle :: ~MyTitle()
{


}