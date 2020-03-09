#include "parawidget.h"

paraWidget::paraWidget(QWidget *parent)
{
	this->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
	this->setStyleSheet("background-color:blue;");
	this->setParent(parent);
}

paraWidget ::~paraWidget()
{


}