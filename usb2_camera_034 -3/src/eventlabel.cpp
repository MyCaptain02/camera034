#include "eventlabel.h"
#include <QToolTip>

EventLabel::EventLabel(QFrame * m_showFrame)
	:QLabel(m_showFrame),
	setLine(0),
	mouseDoubleClickFlag(false),
	mouseReleaseFlag(false),
	setInputDataLineFlag(false),
	mousePressFlag(false),
	mouseClickEventFlag(false),
	openImage(false)
{}

void EventLabel::setHorizontalLine()
{
	if (openImage)	
	{ 
		setLine = 1;
	}
}

void EventLabel::setVerticalLine()
{
	if (openImage)
	{
		setLine = 2;
	}
}

//void EventLabel::setAutoLine()
//{
//	setLine = 4;
//}

void EventLabel::unableSetLine()
{
	setLine = 0;
	mouseDoubleClickFlag = false;
	mouseReleaseFlag = false;
	mousePressFlag=false;
	setInputDataLineFlag = false;
	openImage = false;
	setMouseTracking(false);
}


void EventLabel::setInputDataLine(int beginPoint_x, int beginPoint_y, int endPoint_x, int endPoint_y)
{
	if (openImage)
	{
		setLine = 3;
		x1 = beginPoint_x;//如果你写int x1 = beginPoint_x.toInt(); 那么你就又重新声明了一个x1
		y1 = beginPoint_x;
		x2 = endPoint_x;
		y2 = endPoint_y;
		setInputDataLineFlag = true;
		update();
	}
}

void EventLabel::mouseMoveEvent(QMouseEvent *event)
{
	if (openImage)
	{
		int x_move = event->pos().x();
		int y_move = event->pos().y();
		QString x_move_string = QString::number(x_move);
		QString y_move_string = QString::number(y_move);
		//setToolTip(x_move_string +","+ y_move_string);
		QToolTip::showText(event->globalPos(), x_move_string + "," + y_move_string);
		//QToolTip::showText(x_move_string + "," + y_move_string);
		//qDebug() << x_move_string;
		
	}
	else
		QLabel::mouseMoveEvent(event);
}

/*void EventLabel::mouseClickEvent(QMouseEvent *event)
{
	if (openImage)
	{
		if (setLine == 0)
		{
			if (event->button() == Qt::LeftButton)
			{

				 x = event->pos().x();
				 y= event->pos().y();

				mouseClickEventFlag = true;
				update();
			}
		}
	}
	QLabel::mouseClickEvent(event);
}
*/
void EventLabel::mouseDoubleClickEvent(QMouseEvent *event)
{
	if (setLine == 1 || 2)
	{
		if (event->button() == Qt::LeftButton)
		{

			x = event->pos().x();
			y = event->pos().y();
			mouseDoubleClickFlag = true;
			update();
		}
	}
	//QLabel::mouseDoubleClickEvent(event);
}

void EventLabel::mousePressEvent(QMouseEvent *event)
{
	
	if (openImage)
	{ 
		if (event->button() == Qt::RightButton)
		{
			setLine = 4;
			x1 = event->pos().x();
			y1 = event->pos().y();
			mousePressFlag = true;
		}
		else
		{
			x = event->pos().x();
			y = event->pos().y();
			mouseClickEventFlag = true;
			update();
		}
	}
	QLabel::mousePressEvent(event);
} 

void EventLabel::mouseReleaseEvent(QMouseEvent *event)
{
	if (openImage)
	{ 
		if (event->button() == Qt::RightButton)
		{
			x2 = event->pos().x();
			y2 = event->pos().y();
			mouseReleaseFlag = true;
			update();
		}
	}
	QLabel::mouseReleaseEvent(event);
}


void EventLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	if (mouseDoubleClickFlag)
	{ 
		QLabel::paintEvent(event);
		QPainter painter(this);
		if (setLine == 1)//设置横向分析线
		{
			painter.drawLine(0, y, labelWidth, y);
			//QLabel::paintEvent(event);
			emit drawLine(1, 0, y, labelWidth, y);
		}
		if (setLine == 2)
		{
			painter.drawLine(x, 0, x, labelHeight);
			emit drawLine(2, x, 0, x, labelHeight);
		}
	   mouseDoubleClickFlag = false;		
	}
	else if (mousePressFlag&&mouseReleaseFlag)
	{
		QLabel::paintEvent(event);
		QPainter painter(this);
		painter.drawLine(x1, y1, x2, y2);
	//	
		emit drawLine(4, x1, y1, x2, y2);
		mouseReleaseFlag = false;
		mousePressFlag = false;
	}
	else if (setInputDataLineFlag)
	{
		QLabel::paintEvent(event);
		QPainter painter(this);
		painter.drawLine(x1, y1, x2, y2);
		//	
		emit drawLine(3, x1, y1, x2, y2);
		setInputDataLineFlag = false;
	}
	else if (mouseClickEventFlag)
	{
		QLabel::paintEvent(event);
		QPainter painter(this);
	//	QPen pen;
	//	pen.setWidth(50);
		painter.setPen(QPen(Qt::black, 5));
		//painter.drawEllipse(x,y,,500);
		painter.drawPoint(x, y);
		mouseClickEventFlag = false;
		emit sendPointPos(x, y);
	}
//	else
//	{
	//QLabel::paintEvent(event);
//	}
}

void EventLabel::getLabelSize(int width, int height)
{
	labelWidth = width;
	labelHeight = height;
	openImage = true;
	setMouseTracking(true);
}



