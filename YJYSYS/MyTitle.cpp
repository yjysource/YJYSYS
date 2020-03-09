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
	pCButtonReturn = new QPushButton("多屏显示", this);
	pCButtonCameraPara = new QPushButton("相机参数", this);
	pCButtonSystemPara = new QPushButton("系统参数", this);
	pCButtonNetWork = new QPushButton("通讯设置", this);
	pCButtonCameraCalib = new QPushButton("相机标定", this);
	pCButtonAdjustArea = new QPushButton("算法工具", this);
	pCButtonReTrain = new QPushButton("加入模板", this);
	pCButtonAlarmReccord = new QPushButton("图片查看", this);
	pCButtonManualTrig0 = new QPushButton("抓拍处理", this);
	pCButtonExit = new QPushButton("退出程序", this);
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