#include <QWidget>
#include "line.h"
#include "definition.h"

Line::Line(int x1t, int y1t, int x2t, int y2t)
{
	m_bSelected = FALSE;
	SetLine(x1t, y1t, x2t, y2t);
	x1i = 0;
	y1i = 0;
	x2i = 0;
	y2i = 0;
}

Line::Line()
{
	m_bSelected = FALSE;
	SetLine(0, 0, 0, 0);
	x1i = 0;
	y1i = 0;
	x2i = 0;
	y2i = 0;
}

Line::~Line()
{
}

void Line::Draw(QPainter &p)
{
	if (m_bSelected)
	{
		p.setPen(Qt::magenta);
	}
	p.drawLine(x1, y1, x2, y2);
}

bool Line::IsSelected(void)
{
	return m_bSelected;
}

void Line::SetSelected(bool bSelected)
{
	m_bSelected = bSelected;
}

//Hit in which CtrlNode
bool Line::PtInCtrl(QPoint point, int* pCtrlNodeID)
{
	if (m_bSelected)
	{
		if (PointAround(QPoint(x1, y1), point))
		{
			*pCtrlNodeID = CTRLNODE_TOPLEFT;
			return TRUE;
		}
		else if (PointAround(QPoint(x2, y2), point))
		{
			*pCtrlNodeID = CTRLNODE_BOTTOMRIGHT;
			return TRUE;
		}
	}

	*pCtrlNodeID = -1;
	return FALSE;
}

//Resize the rect 
//通过是8个控制块中的哪一个移动了多少来重新设置大小
void Line::Resize(int nCtrlNodeID, QPoint startPoint, QPoint endPoint)
{
	switch (nCtrlNodeID)
	{
	case CTRLNODE_TOPLEFT:
		x1 += endPoint.x() - startPoint.x();
		y1 += endPoint.y() - startPoint.y();
		break;
	case CTRLNODE_BOTTOMRIGHT:
	default:
		x2 += endPoint.x() - startPoint.x();
		y2 += endPoint.y() - startPoint.y();
		break;
	}
}

void Line::SetLine(int x1t, int y1t, int x2t, int y2t)
{
	x1 = x1t;
	y1 = y1t;
	x2 = x2t;
	y2 = y2t;
}

void Line::translate(int dx, int dy)
{
	x1 += dx;
	y1 += dy;
	x2 += dx;
	y2 += dy;
}

bool Line::Contains(QPoint point)
{
	float a, b, c, d1, d2, d3;
	a = y2 - y1;
	b = x1 - x2;
	c = x2 * y1 - x1 * y2;
	d1 = a * point.x() + b * point.y() + c;
	d2 = d1 * d1;
	d3 = a * a + b * b;

	if (d2 < d3 * 100)
		return TRUE;
	else
		return FALSE;
}

QRect Line::GetRect(void)
{
	QRect tmp;
	tmp.setLeft(min(x1i, x2i));
	tmp.setRight(max(x1i, x2i));
	tmp.setTop(min(y1i, y2i));
	tmp.setBottom(max(y1i, y2i));
	return tmp;
}

void Line::SetImageLine(void)
{
	/*x1i = cvRound((x1 / gpWPara->showAW));
	y1i = cvRound((y1 / gpWPara->showAH));
	x2i = cvRound((x2 / gpWPara->showAW));
	y2i = cvRound((y2 / gpWPara->showAH));*/
}