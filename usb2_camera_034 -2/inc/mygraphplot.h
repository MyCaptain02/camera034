#ifndef	GRAPH_H
#define GRAPH_H

#include "qcustomplot.h"
#include "eventlabel.h"
//#include <QPainter>
//#include <QPaintEvent>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>

class MyGraphPlot: public QCustomPlot
{
	Q_OBJECT



public:
	MyGraphPlot(QFrame *frame_9);
	~MyGraphPlot(){}

	void getDataFilename(QString );
	void getImageSize(int, int);
	void configMyGraphPlot();
	

public slots:
     void updateLine(int lineType, int mouseX1Pos, int mouseY1Pos, int mouseX2Pos, int mouseY2Pos);
	
private:

	int row;
	int col;
	cv::Mat data;
	bool pngFlag;
};
 
#endif