#include "disngwidget.h"

disNgWidget::disNgWidget(QWidget *parent)
{
	double sceenX, sceenY;
	sceenX = (double)GetScreenInfoX();
	sceenY = (double)GetScreenInfoY();
	this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
	this->setStyleSheet("background-color:black;");
	this->setParent(parent);
	this->setFixedSize((sceenX / 3), (sceenY / 5) * 2);
}

disNgWidget::~disNgWidget()
{


}

