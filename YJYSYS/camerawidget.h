#pragma once
#ifndef CAMERAWIDGET_H
#define CAMERAWIDGET_H

#include <QWidget>
#include "definition.h"
class  CameraWidget : public QWidget
{
	Q_OBJECT
public:
	 CameraWidget (QWidget *parent ,int camNO);
	~ CameraWidget ();

	HANDLE m_hhv;

#if HAS_CAMERA == 1
	int hCamera;
	BYTE *pImageMV;
	tSdkFrameHead sFrameInfo;
#elif HAS_CAMERA == 2
	void* m_hDevHandle;
	static void CALLBACK ImageCallBack(unsigned char* pData, MV_FRAME_OUT_INFO* pFrameInfo, void* pUser);
#endif

protected:
	/*virtual void paintEvent(QPaintEvent *event);
	virtual void mouseMoveEvent(QMouseEvent * event);
	virtual void mousePressEvent(QMouseEvent * event);
	virtual void mouseReleaseEvent(QMouseEvent * event);
	virtual void mouseDoubleClickEvent(QMouseEvent *event);*/
private:

};


#endif // !CAMERAWIDGET_H
