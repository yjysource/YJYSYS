#pragma once
/**************************************
文件：definition.h
作用：包含全局应用，以及头文件
更新：CZ.2020.3.8
***************************************/

#ifndef DEFINITION_H
#define DEFINITION_H

#include <QtGui>
#include <QMutex>
#include <windows.h>
#include <tchar.h>

#include <deque>
#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include "WinIo.h"
#include "line.h"
using namespace std;

#include <cv.h>
#include <highgui.h>
#pragma comment(lib,"cv.lib")
#pragma comment(lib,"cxcore.lib")
#pragma comment(lib,"highgui.lib")

#include <QHBoxLayout>


//0 - 没有相机
//1 - 迈德相机
//2 - 海康相机
//3 - 大华相机

#define HAS_CAMERA 2

#if HAS_CAMERA == 1
#include "CameraApi.h"
#pragma comment(lib,"MVCAMSDK.lib")

#elif HAS_CAMERA == 2
#include "MvErrorDefine.h"
#include "MvCameraControl.h"
#pragma comment (lib,"MvCameraControl.lib")
#endif
/*#elif HAS_CAMERA == 3
#include "GenICam/System.h"
#include "GenICam/Camera.h"
#include "Infra/Vector.h"
#include "Infra/Thread.h"
#include "Infra/Mutex.h"
#include "Infra/Guard.h"
#pragma comment (lib,"MVSDKmd.lib")

using namespace Dahua::GenICam;
using namespace Dahua::Infra;
#endif
*/
//1 - 串口
//2 - IO
//3 - modbus
//4 - TCP

#define USE_PANEL_IO 1
#include "qextserialbase.h"
#include "win_qextserialport.h"

#define MAX_CAMERA  6
#define MAX_DECTECT 1

#define MAX_ROI			200  // ROI能设置的最大个数
#define MAX_ROI_POINTS	40  // 多边形ROI的最多点数
#define MAX_TEMPLATE	30	// 模板的最多张数
#define MAX_IGNORE		2000// 每个区域允许忽略的最大报警点数

#define CURRENT_SHAPE_NONE	  0
#define CURRENT_SHAPE_SQUARE  1
#define CURRENT_SHAPE_POLYGON 2
#define CURRENT_SHAPE_CIRCLE  4
#define CURRENT_SHAPE_LINE    8

#define STATE_INITIAL	0
#define STATE_NEW		1
#define STATE_MOVE		2
#define STATE_RESIZE	3
#define STATE_SELECT	4
#define STATE_CLRSELECT	5

#define CTRLNODE_TOPLEFT		0
#define CTRLNODE_TOP			1
#define CTRLNODE_TOPRIGHT		2
#define CTRLNODE_LEFT			3
#define CTRLNODE_RIGHT			4
#define CTRLNODE_BOTTOMLEFT		5
#define CTRLNODE_BOTTOM			6
#define CTRLNODE_BOTTOMRIGHT	7

// 编辑框类型
#define EDIT_NUM	1
#define EDIT_CHAR	2
#define EDIT_L1		4
#define EDIT_L2		8

#define MAX_BUF 256


//void CaclTime(void);
void CheckInRange(int *p, int isX);
void CheckInRange(QRect *pRect, bool isNotChangeSize = false);
void CheckInRange(Line *pLine);
bool PointAround(QPoint ref, QPoint point, int range = 20);
bool LineAround(int x0, int x1, int range = 20);
bool LineAround(int x0, int x1, int y, int dl, int dh, int range = 20);
unsigned char calcLRC(unsigned char *puchMsg, unsigned short usDataLen);
unsigned char calcLRC2(unsigned char *puchMsg, unsigned short usDataLen);
//void ComSend(unsigned char a[], int len);
void ComSendIO(int k, int data);
unsigned short calcCRC(unsigned char *puchMsg, unsigned short usDataLen);
int GetScreenInfoX();
int GetScreenInfoY();
#endif // !DEFINITION_H
