#include "YJYSYS.h"

YJYSYS::YJYSYS(QWidget *parent)
	: QMainWindow(parent)
{
	int sceenX, sceenY;
	sceenX = GetScreenInfoX();
	sceenY = GetScreenInfoY();
	this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
	setGeometry(0, 0, sceenX, sceenY);
	//pcameraWidget = new CameraWidget(this,1);
	pdisNgWidget = new disNgWidget(this);
//	pparaWidget = new paraWidget(this);
	pmyTitle = new MyTitle(this);
	pmyTitle->setGeometry(0, 0, pmyTitle->width(), pmyTitle->height());
	//pcameraWidget->setGeometry(0, 0, (sceenX / 3) * 2, (sceenY / 5) * 4);
	pdisNgWidget->setGeometry((sceenX / 3) * 2, 0, (sceenX / 3), (sceenY / 5) * 2);
	//pparaWidget->setGeometry((sceenX / 3) * 2, (sceenY / 5) * 2, (sceenX / 3), (sceenY / 5) * 3);
	
}
YJYSYS::~YJYSYS()
{

}

