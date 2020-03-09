#include "camerawidget.h"

CameraWidget::CameraWidget(QWidget *parent,int camNO)
{
	this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
	this->setStyleSheet("background-color:black;");
	this->setParent(parent);
}
CameraWidget::~CameraWidget()
{

}
