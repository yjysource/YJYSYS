/***************************************
文件：YJYSYS.H
作用：定义系统主窗口界面
更新：CZ.2020.3.8
***************************************/


#pragma once

#include <QtWidgets/QMainWindow>
#include <QApplication>
#include <QDesktopWidget>
#include <QRect>
#include "definition.h"
#include "disngwidget.h"
#include "camerawidget.h"
#include "MyTitle.h"
#include "parawidget.h"
#include <QGridLayout>
class YJYSYS : public QMainWindow
{
	Q_OBJECT

public:
	YJYSYS(QWidget *parent = Q_NULLPTR);
	~YJYSYS();
	QGridLayout *pLayout;
	CameraWidget *pcameraWidget;
	disNgWidget *pdisNgWidget;
	MyTitle *pmyTitle;
	paraWidget *pparaWidget;
private:

};
