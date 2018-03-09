#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include "imagemodel.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	bool initCameraConfig();
	
public slots:
	void openCamera();
	void closeCamera();
	void pauseCamera();

	void updateImage(QPixmap image);

	void showFrameRate();

	void saveData();

	void countReceiveFrames();

	void changeWidthTo8bitsPerPixel(bool flag);
	
	void changeImageToColor(bool flag);

	//void switchResolution(int index);
	void switchResolution_1280(bool);
	void switchResolution_640(bool);
	void switchResolution_320(bool);
	void setAnalogGain_1(bool);
	void setAnalogGain_2(bool);
	void setAnalogGain_4(bool);
	void setAnalogGain_8(bool);
	void setAnalogGain_10(bool);

	//void setAnalogGain(int index);

	void setRedGain(int gain);
	void setGreenGain(int gain);
	void setBlueGain(int gain);
	void setGlobalGain(int gain);

	void setExposureMode(bool isAuto);
	void setExposureValue(int value);

	void chooseSavingPath();
	void takeImage();
	void showCurve();
	void openImage();
	void setHorizontalLine();
	void setVerticalLine();
	void setInputDataLine();
	//void configMyGraphPlot();
	//void showAnalysePoint();
	void getPointData(int, int, int);
	
private:
	Ui::MainWindowClass ui;

	ImageModel m_imageModel;
	
	QTimer m_timer;

	QLabel *m_frameRateLabel;

	QString path;

	int m_frameCount;

	int m_receiveFramesCount;

	int m_imageWidth;
	int m_imageHeight;

	bool m_isClosed;
	int openImageWidth ;
	int openImageHeight;
//	bool openImageFlag;

};


#endif // MAINWINDOW_H
