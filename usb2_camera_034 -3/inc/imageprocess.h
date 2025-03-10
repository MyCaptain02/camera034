#ifndef IMAGEPROCESS_H
#define IMAGEPROCESS_H

#include <QtCore>
//#include "qimage.h"
#include "qpixmap.h"
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>

class ImageProcess : public QObject
{
	Q_OBJECT

public:
	ImageProcess(int height, int width);
	~ImageProcess();
	void setDataSavingSpace(unsigned char *data);
	void setWidth(int width);
	void setHeight(int height);
	void imageToPixmap(QImage &image);
	void saveOriginalData(uchar *data);
	void enableSaveData();
	void setImageColorOrBlack(bool isColor);
	
	void disableImageProcess();
	void enableImageProcess();

	void setPauseFlag(bool flag);

	void autoWhiteBalance(cv::Mat &src, cv::Mat &dst);

	void dataToImage(unsigned char *data, int bitsPerPixel, int width, int height);

	void setSavingPath(QString path);
	void takeOriginalImage(const cv::Mat& image,  const QPixmap& pixmap);
	void takeShowingImage(const cv::Mat& image, const QPixmap& pixmap);
	void setTakingImageFlag(bool flag);
	

signals:
	void showImage(QPixmap image);

public slots:
	void dataToImage();

private:
	unsigned char *m_imageData;
	
	int m_imageHeight;
	int m_imageWidth;

	QPixmap m_imageShow;
	QImage m_image;
	QString m_path;
	QString str;//��¼ʱ��

	bool m_saveOriginalDataFlag;
	bool m_isColor;
	bool m_isTakingImage;
	bool m_imageProcessingFlag;
	bool m_pauseFlag;

};

#endif