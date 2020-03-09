#pragma once
#ifndef LINE_H
#define LINE_H

#include <QtGui>

class Line
{
public:
	Line(int x1t, int y1t, int x2t, int y2t);
	Line();
	~Line();

	void Draw(QPainter &p);
	void Resize(int nCtrlNodeID, QPoint startPoint, QPoint endPoint);
	bool PtInCtrl(QPoint point, int* pCtrlNodeID);
	void SetSelected(bool bSelected);
	bool IsSelected(void);
	void SetImageLine(void);
	void SetLine(int x1t, int y1t, int x2t, int y2t);
	void translate(int dx, int dy);
	bool Contains(QPoint point);
	QRect GetRect(void);

	int x1, y1, x2, y2;
	int x1i, y1i, x2i, y2i;

private:
	bool m_bSelected;
};

#endif
