#include "mygraphplot.h"
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>


MyGraphPlot::MyGraphPlot(QFrame *frame_9)
	:QCustomPlot(frame_9),
	pngFlag(false)
{
}
//��ȡ�ļ�����������ȡ���ݳ���
void MyGraphPlot::getDataFilename(QString filename)
{
	QString file_png = filename.replace(QString(".bmp"), QString(".png"));//filename�����stringҲ����
	QFileInfo file_png_info(file_png);
	if (file_png_info.isFile())
		{
			data = cv::imread(file_png.toLocal8Bit().toStdString(), cv::IMREAD_ANYDEPTH);
			pngFlag=true;
        }
	else
	    { 
	        QString file_bmp;
			file_bmp = filename.replace(QString(".png"), QString(".bmp"));
	        data = cv::imread(file_bmp.toLocal8Bit().toStdString(), cv::IMREAD_GRAYSCALE);
			pngFlag=false;
	    }
}

void MyGraphPlot::getImageSize(int imageWidth, int imageHeight)
{
	row = imageHeight;
	col = imageWidth;
}

void MyGraphPlot::configMyGraphPlot()
{
	xAxis->setLabel(QStringLiteral("����������"));
	yAxis->setLabel(QStringLiteral("�Ҷ�ֵ"));
}

void MyGraphPlot::updateLine(int lineType, int x1, int y1, int x2, int y2)
{
/*	//��������
	DWORD start = GetTickCount();
	QFile dataFile(dataFile_name);//ֻ���½�һ��QFile����ʱ����ʹ��QFile::QFile(const QString & name)������
	                               //��������updateLine�������޷��������������� dataFile��������Ҫ�Ѷ��ļ��Ĳ���д��ͬһ���ļ���

	
	if (!dataFile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QMessageBox::information(NULL, "FileOpenError", "This file does't exist!");
		return;
	}
	QTextStream in(&dataFile);
	QString dataString = in.readAll();
	QStringList dataStringList = dataString.split(QRegExp("\\s+"));

	DWORD end = GetTickCount();
	qDebug() << (end - start) << "    file time";
//	if (dataStringList.size() != row* col) // ���ݶ���������
//	{
//		QMessageBox::information(NULL, "FileOpenError", "The data is error!");
//		return;
//	}  
	// ��������ݱ���ɶ�ά����������ȥ  
	int **result;
	result = new int*[row];
	for (int i = 0; i<row; i++)
	{
		result[i] = new int[col];
	}
	int index = 0;

	

	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			result[i][j] = dataStringList.at(index++).toInt();//i����������j��������
		}
	}
*/	
   //��ʼ������
	if (pngFlag)
	{
		yAxis->setRange(0, 4096);
	}
	else
	{
		yAxis->setRange(0, 255);
	}
	if (lineType==1)
	{ 
		QVector<double> x(col), y(col); //   ��ʼ����̬����,��col���������Ҫ����
		for (int i = 0; i<col; ++i)
	    {
		   x[i] = i ; 
		//   y[i] = result[y1][i];
		   if (pngFlag)
			    y[i] = data.at<ushort>(y1, i);
		   else
			   y[i] = data.at<uchar>(y1, i);//ucharȡֵ��Χ��0~255
	    }
        addGraph();
        graph(0)->setData(x, y);
	    xAxis->setRange(0, col);
      //  yAxis->setRange(0, 255);
	    replot();
	}
	if (lineType == 2)
	{
		QVector<double> x(row), y(row); 
		for (int i = 0; i < row; ++i)
		{
			x[i] = i;
			if (pngFlag)
				y[i] = data.at<ushort>(i, x1);
			else
			y[i] = data.at<unsigned short>(i, x1);
		}
		addGraph();
		graph(0)->setData(x, y);
		xAxis->setRange(0, row);
	//	yAxis->setRange(0, 255);
		replot();
	}
	if (lineType == 3)
	{
		int x_len = x2 - x1;
		int y_len = y2 - y1;
		double lenth = sqrt(x_len*x_len + y_len*y_len);
		int len = lenth + 0.5;  //��С����������ת��Ϊ����
		double cosine = x_len / lenth;
		double sine = y_len / lenth;

		QVector<double> x(len), y(len);
		for (int i = 0; i < len; ++i)
		{
			x[i] = i;
			double x_pos = x1 + i*cosine;
			double y_pos = y1 + i*sine;
			int x_pos_int = x_pos;
			int y_pos_int = y_pos;//�����x��y������x[i],y[i]���岻ͬ
			if (pngFlag)
				y[i] = data.at<ushort>(y_pos_int, x_pos_int);
			else
			y[i] = data.at<unsigned short>(y_pos_int, x_pos_int);
		}
		addGraph();
		graph(0)->setData(x, y);
		xAxis->setRange(0, len);
	//	yAxis->setRange(0, 255);
		replot();
	}
	if (lineType == 4)
	{
		int x_len = x2 - x1;
		int y_len = y2 - y1;
		double lenth = sqrt(x_len*x_len + y_len*y_len);
		int len = lenth+0.5;  //��С����������ת��Ϊ����
		double cosine = x_len / lenth;
		double sine = y_len / lenth;

		QVector<double> x(len), y(len);
		for (int i = 0; i < len; ++i)
		{
			x[i] = i;
			double x_pos = x1 + i*cosine;
			double y_pos = y1 + i*sine;
			int x_pos_int = x_pos;
			int y_pos_int = y_pos;//�����x��y������x[i],y[i]���岻ͬ
			if (pngFlag)
				y[i] = data.at<ushort>(y_pos_int, x_pos_int);
			else
			y[i] = data.at<unsigned short>(y_pos_int, x_pos_int);
		}
		addGraph();
		graph(0)->setData(x, y);
		xAxis->setRange(0, len);
	//	yAxis->setRange(0, 255);
		replot();
	}	
}

