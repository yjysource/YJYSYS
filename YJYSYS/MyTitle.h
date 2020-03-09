#pragma once

#include <QWidget>
#include "definition.h"
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
class MyTitle :
	public QWidget
{
	Q_OBJECT
public:
	MyTitle(QWidget *parent);
	~MyTitle();
protected:
private:
	QPushButton *pCButtonReTrain;
	QPushButton *pCButtonCameraPara;
	QPushButton *pCButtonAdjustArea;
	QPushButton *pCButtonSystemPara;
	QPushButton *pCButtonReturn;
	QPushButton *pCButtonExit;
	QPushButton *pCButtonCameraCalib;
	QPushButton *pCButtonManualTrig0;
	QPushButton *pCButtonAlarmReccord;
	QPushButton *pCButtonNetWork;
	QLabel *pCLabelLogo;
	QLabel *pCLabelMessage;
	QGridLayout *pGLayout;
	QVBoxLayout *pVLayout;
	QHBoxLayout *pHLayout;
	QHBoxLayout *pHLayout1;
	QHBoxLayout *pHLayout2;
};




