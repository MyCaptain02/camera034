/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mygraphplot.h>
#include "eventlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QGroupBox *m_solution;
    QRadioButton *m_1280;
    QRadioButton *m_640;
    QRadioButton *m_320;
    QGroupBox *m_bitsPerPixelChange;
    QRadioButton *m_12bitsChoosed;
    QRadioButton *m_8bitsChoosed;
    QFrame *frame_6;
    QRadioButton *radioButton_2;
    QRadioButton *m_colorImageChoosed;
    QGroupBox *m_analogGain;
    QRadioButton *m_1;
    QRadioButton *m_2;
    QRadioButton *m_4;
    QRadioButton *m_8;
    QRadioButton *m_10;
    QGroupBox *m_digitalGainSet;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSlider *m_rGainSet;
    QLabel *m_rGain;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSlider *m_gGainSet;
    QLabel *m_gGain;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSlider *m_bGainSet;
    QLabel *m_bGain;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSlider *m_globalGainSet;
    QLabel *m_globalGain;
    QLabel *label;
    QGroupBox *m_exposureMode;
    QRadioButton *m_autoExposure;
    QRadioButton *m_manualExposure;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_12;
    QSlider *m_exposureSlider;
    QSpinBox *m_exposureSpinBox;
    QFrame *frame;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_receiveRateLabel;
    QLabel *label_4;
    QPushButton *m_pathChoosingButton;
    QPushButton *m_imageTakingButton;
    QPushButton *m_openImage;
    QPushButton *m_pauseButton;
    QPushButton *m_stopButton;
    QPushButton *m_startButton;
    QGroupBox *m_setLineChange;
    QPushButton *m_verticalLine;
    QPushButton *m_horizontalLine;
    QFrame *frame_5;
    QLabel *label_9;
    QLabel *label_12;
    QPushButton *m_inputDataLine;
    QLineEdit *beginPoint_x;
    QLineEdit *endPoint_x;
    QLineEdit *beginPoint_y;
    QLineEdit *endPoint_y;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_20;
    QGroupBox *m_point;
    QLabel *label_18;
    QLabel *m_point_pos;
    QLabel *label_21;
    QLabel *m_point_data;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QFrame *m_showFrame;
    QGridLayout *gridLayout;
    EventLabel *m_showLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_9;
    QGridLayout *gridLayout_2;
    MyGraphPlot *m_customPlot;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(2560, 1316);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(2560, 1300));
        MainWindowClass->setMaximumSize(QSize(2560, 1322));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindow/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid gray;\n"
"    border-radius: 3px;\n"
"	margin-top: 1ex;\n"
"	padding-bottom: 4px;\n"
"	padding-top: 7px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    /*subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0 3px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f4f4f4, stop: 1 #f4f4f4);\n"
"}\n"
"\n"
"QGroupBox#groupBox_6 {   /*\345\270\247\347\216\207\344\270\216\346\270\251\345\272\246\347\273\204\350\256\276\347\275\256\346\227\240\350\276\271\346\241\206*/\n"
"	border: none;\n"
"	margin-top: 0;\n"
"	padding-top:0px;\n"
"}\n"
"\n"
"QGroupBox#groupBox_6 {\n"
"	padding: 0 0;\n"
"\n"
"}"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(2560, 1300));
        centralWidget->setMaximumSize(QSize(2560, 1300));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(0, 300));
        frame_4->setMaximumSize(QSize(16777215, 300));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        m_solution = new QGroupBox(frame_4);
        m_solution->setObjectName(QStringLiteral("m_solution"));
        m_solution->setEnabled(false);
        m_solution->setGeometry(QRect(440, 50, 131, 211));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        m_solution->setFont(font);
        m_1280 = new QRadioButton(m_solution);
        m_1280->setObjectName(QStringLiteral("m_1280"));
        m_1280->setGeometry(QRect(20, 50, 101, 21));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        m_1280->setFont(font1);
        m_1280->setLayoutDirection(Qt::LeftToRight);
        m_1280->setCheckable(true);
        m_1280->setChecked(true);
        m_640 = new QRadioButton(m_solution);
        m_640->setObjectName(QStringLiteral("m_640"));
        m_640->setGeometry(QRect(20, 90, 81, 31));
        m_640->setFont(font1);
        m_640->setLayoutDirection(Qt::LeftToRight);
        m_640->setChecked(false);
        m_320 = new QRadioButton(m_solution);
        m_320->setObjectName(QStringLiteral("m_320"));
        m_320->setGeometry(QRect(20, 140, 91, 21));
        m_320->setFont(font1);
        m_320->setLayoutDirection(Qt::LeftToRight);
        m_320->setChecked(false);
        m_bitsPerPixelChange = new QGroupBox(frame_4);
        m_bitsPerPixelChange->setObjectName(QStringLiteral("m_bitsPerPixelChange"));
        m_bitsPerPixelChange->setEnabled(false);
        m_bitsPerPixelChange->setGeometry(QRect(620, 50, 131, 211));
        m_bitsPerPixelChange->setFont(font);
        m_bitsPerPixelChange->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_bitsPerPixelChange->setFlat(false);
        m_12bitsChoosed = new QRadioButton(m_bitsPerPixelChange);
        m_12bitsChoosed->setObjectName(QStringLiteral("m_12bitsChoosed"));
        m_12bitsChoosed->setGeometry(QRect(30, 80, 47, 16));
        m_12bitsChoosed->setFont(font1);
        m_8bitsChoosed = new QRadioButton(m_bitsPerPixelChange);
        m_8bitsChoosed->setObjectName(QStringLiteral("m_8bitsChoosed"));
        m_8bitsChoosed->setGeometry(QRect(30, 50, 41, 16));
        m_8bitsChoosed->setFont(font1);
        m_8bitsChoosed->setLayoutDirection(Qt::LeftToRight);
        m_8bitsChoosed->setChecked(true);
        frame_6 = new QFrame(m_bitsPerPixelChange);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(20, 110, 81, 81));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        radioButton_2 = new QRadioButton(frame_6);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 20, 47, 16));
        radioButton_2->setFont(font1);
        radioButton_2->setChecked(true);
        m_colorImageChoosed = new QRadioButton(frame_6);
        m_colorImageChoosed->setObjectName(QStringLiteral("m_colorImageChoosed"));
        m_colorImageChoosed->setGeometry(QRect(10, 50, 47, 16));
        m_colorImageChoosed->setFont(font1);
        m_colorImageChoosed->setMouseTracking(true);
        m_colorImageChoosed->setCheckable(true);
        m_colorImageChoosed->setChecked(false);
        m_analogGain = new QGroupBox(frame_4);
        m_analogGain->setObjectName(QStringLiteral("m_analogGain"));
        m_analogGain->setEnabled(false);
        m_analogGain->setGeometry(QRect(800, 50, 151, 211));
        m_analogGain->setFont(font);
        m_1 = new QRadioButton(m_analogGain);
        m_1->setObjectName(QStringLiteral("m_1"));
        m_1->setGeometry(QRect(30, 40, 41, 16));
        m_1->setFont(font1);
        m_1->setLayoutDirection(Qt::LeftToRight);
        m_1->setChecked(false);
        m_2 = new QRadioButton(m_analogGain);
        m_2->setObjectName(QStringLiteral("m_2"));
        m_2->setGeometry(QRect(30, 70, 41, 16));
        m_2->setFont(font1);
        m_2->setLayoutDirection(Qt::LeftToRight);
        m_2->setChecked(false);
        m_4 = new QRadioButton(m_analogGain);
        m_4->setObjectName(QStringLiteral("m_4"));
        m_4->setGeometry(QRect(30, 100, 41, 16));
        m_4->setFont(font1);
        m_4->setLayoutDirection(Qt::LeftToRight);
        m_4->setChecked(false);
        m_8 = new QRadioButton(m_analogGain);
        m_8->setObjectName(QStringLiteral("m_8"));
        m_8->setGeometry(QRect(30, 130, 41, 16));
        m_8->setFont(font1);
        m_8->setLayoutDirection(Qt::LeftToRight);
        m_8->setChecked(true);
        m_10 = new QRadioButton(m_analogGain);
        m_10->setObjectName(QStringLiteral("m_10"));
        m_10->setGeometry(QRect(30, 160, 47, 16));
        m_10->setFont(font1);
        m_10->setLayoutDirection(Qt::LeftToRight);
        m_10->setChecked(false);
        m_digitalGainSet = new QGroupBox(frame_4);
        m_digitalGainSet->setObjectName(QStringLiteral("m_digitalGainSet"));
        m_digitalGainSet->setEnabled(false);
        m_digitalGainSet->setGeometry(QRect(1000, 50, 251, 211));
        m_digitalGainSet->setFont(font);
        verticalLayout_3 = new QVBoxLayout(m_digitalGainSet);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(m_digitalGainSet);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_11->addWidget(label_11);

        m_rGainSet = new QSlider(m_digitalGainSet);
        m_rGainSet->setObjectName(QStringLiteral("m_rGainSet"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_rGainSet->sizePolicy().hasHeightForWidth());
        m_rGainSet->setSizePolicy(sizePolicy1);
        m_rGainSet->setMaximumSize(QSize(16777215, 16777215));
        m_rGainSet->setMinimum(1);
        m_rGainSet->setMaximum(8);
        m_rGainSet->setPageStep(1);
        m_rGainSet->setOrientation(Qt::Horizontal);
        m_rGainSet->setInvertedAppearance(false);
        m_rGainSet->setInvertedControls(false);
        m_rGainSet->setTickPosition(QSlider::NoTicks);
        m_rGainSet->setTickInterval(1);

        horizontalLayout_11->addWidget(m_rGainSet);

        m_rGain = new QLabel(m_digitalGainSet);
        m_rGain->setObjectName(QStringLiteral("m_rGain"));
        m_rGain->setFont(font1);

        horizontalLayout_11->addWidget(m_rGain);

        label_13 = new QLabel(m_digitalGainSet);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        horizontalLayout_11->addWidget(label_13);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_8 = new QLabel(m_digitalGainSet);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_10->addWidget(label_8);

        m_gGainSet = new QSlider(m_digitalGainSet);
        m_gGainSet->setObjectName(QStringLiteral("m_gGainSet"));
        sizePolicy1.setHeightForWidth(m_gGainSet->sizePolicy().hasHeightForWidth());
        m_gGainSet->setSizePolicy(sizePolicy1);
        m_gGainSet->setMaximumSize(QSize(16777215, 16777215));
        m_gGainSet->setMinimum(1);
        m_gGainSet->setMaximum(8);
        m_gGainSet->setPageStep(1);
        m_gGainSet->setOrientation(Qt::Horizontal);
        m_gGainSet->setInvertedAppearance(false);
        m_gGainSet->setInvertedControls(false);
        m_gGainSet->setTickPosition(QSlider::NoTicks);
        m_gGainSet->setTickInterval(1);

        horizontalLayout_10->addWidget(m_gGainSet);

        m_gGain = new QLabel(m_digitalGainSet);
        m_gGain->setObjectName(QStringLiteral("m_gGain"));
        m_gGain->setFont(font1);

        horizontalLayout_10->addWidget(m_gGain);

        label_10 = new QLabel(m_digitalGainSet);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_10->addWidget(label_10);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(m_digitalGainSet);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_9->addWidget(label_5);

        m_bGainSet = new QSlider(m_digitalGainSet);
        m_bGainSet->setObjectName(QStringLiteral("m_bGainSet"));
        sizePolicy1.setHeightForWidth(m_bGainSet->sizePolicy().hasHeightForWidth());
        m_bGainSet->setSizePolicy(sizePolicy1);
        m_bGainSet->setMaximumSize(QSize(16777215, 16777215));
        m_bGainSet->setMinimum(1);
        m_bGainSet->setMaximum(8);
        m_bGainSet->setPageStep(1);
        m_bGainSet->setOrientation(Qt::Horizontal);
        m_bGainSet->setInvertedAppearance(false);
        m_bGainSet->setInvertedControls(false);
        m_bGainSet->setTickPosition(QSlider::NoTicks);
        m_bGainSet->setTickInterval(1);

        horizontalLayout_9->addWidget(m_bGainSet);

        m_bGain = new QLabel(m_digitalGainSet);
        m_bGain->setObjectName(QStringLiteral("m_bGain"));
        m_bGain->setFont(font1);

        horizontalLayout_9->addWidget(m_bGain);

        label_7 = new QLabel(m_digitalGainSet);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_9->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(m_digitalGainSet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_8->addWidget(label_2);

        m_globalGainSet = new QSlider(m_digitalGainSet);
        m_globalGainSet->setObjectName(QStringLiteral("m_globalGainSet"));
        sizePolicy1.setHeightForWidth(m_globalGainSet->sizePolicy().hasHeightForWidth());
        m_globalGainSet->setSizePolicy(sizePolicy1);
        m_globalGainSet->setMaximumSize(QSize(16777215, 16777215));
        m_globalGainSet->setMinimum(1);
        m_globalGainSet->setMaximum(8);
        m_globalGainSet->setPageStep(1);
        m_globalGainSet->setOrientation(Qt::Horizontal);
        m_globalGainSet->setInvertedAppearance(false);
        m_globalGainSet->setInvertedControls(false);
        m_globalGainSet->setTickPosition(QSlider::NoTicks);
        m_globalGainSet->setTickInterval(1);

        horizontalLayout_8->addWidget(m_globalGainSet);

        m_globalGain = new QLabel(m_digitalGainSet);
        m_globalGain->setObjectName(QStringLiteral("m_globalGain"));
        m_globalGain->setFont(font1);

        horizontalLayout_8->addWidget(m_globalGain);

        label = new QLabel(m_digitalGainSet);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        horizontalLayout_8->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_8);

        m_exposureMode = new QGroupBox(frame_4);
        m_exposureMode->setObjectName(QStringLiteral("m_exposureMode"));
        m_exposureMode->setEnabled(false);
        m_exposureMode->setGeometry(QRect(1300, 50, 191, 211));
        m_exposureMode->setFont(font);
        m_autoExposure = new QRadioButton(m_exposureMode);
        m_autoExposure->setObjectName(QStringLiteral("m_autoExposure"));
        m_autoExposure->setGeometry(QRect(20, 50, 54, 20));
        m_autoExposure->setFont(font1);
        m_autoExposure->setChecked(true);
        m_manualExposure = new QRadioButton(m_exposureMode);
        m_manualExposure->setObjectName(QStringLiteral("m_manualExposure"));
        m_manualExposure->setGeometry(QRect(20, 90, 102, 20));
        m_manualExposure->setFont(font1);
        layoutWidget = new QWidget(m_exposureMode);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 142, 61));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        m_exposureSlider = new QSlider(layoutWidget);
        m_exposureSlider->setObjectName(QStringLiteral("m_exposureSlider"));
        m_exposureSlider->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_exposureSlider->sizePolicy().hasHeightForWidth());
        m_exposureSlider->setSizePolicy(sizePolicy1);
        m_exposureSlider->setMaximumSize(QSize(16777215, 16777215));
        m_exposureSlider->setMinimum(1);
        m_exposureSlider->setMaximum(92);
        m_exposureSlider->setSingleStep(1);
        m_exposureSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(m_exposureSlider);

        m_exposureSpinBox = new QSpinBox(layoutWidget);
        m_exposureSpinBox->setObjectName(QStringLiteral("m_exposureSpinBox"));
        m_exposureSpinBox->setEnabled(false);
        m_exposureSpinBox->setFont(font1);
        m_exposureSpinBox->setMinimum(1);
        m_exposureSpinBox->setMaximum(92);

        horizontalLayout_12->addWidget(m_exposureSpinBox);

        frame = new QFrame(frame_4);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(1520, 40, 101, 231));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_7 = new QGroupBox(frame);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setFont(font);
        horizontalLayout_14 = new QHBoxLayout(groupBox_7);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_6 = new QLabel(groupBox_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_6);

        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_14->addWidget(label_3);


        verticalLayout_6->addWidget(groupBox_7);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_receiveRateLabel = new QLabel(groupBox_2);
        m_receiveRateLabel->setObjectName(QStringLiteral("m_receiveRateLabel"));
        m_receiveRateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_receiveRateLabel);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_6->addWidget(groupBox_2);

        m_pathChoosingButton = new QPushButton(frame_4);
        m_pathChoosingButton->setObjectName(QStringLiteral("m_pathChoosingButton"));
        m_pathChoosingButton->setGeometry(QRect(260, 90, 141, 51));
        m_pathChoosingButton->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(11);
        m_pathChoosingButton->setFont(font2);
        m_pathChoosingButton->setIconSize(QSize(40, 40));
        m_imageTakingButton = new QPushButton(frame_4);
        m_imageTakingButton->setObjectName(QStringLiteral("m_imageTakingButton"));
        m_imageTakingButton->setEnabled(false);
        m_imageTakingButton->setGeometry(QRect(260, 170, 141, 51));
        m_imageTakingButton->setMinimumSize(QSize(0, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        m_imageTakingButton->setFont(font3);
        m_imageTakingButton->setIconSize(QSize(25, 0));
        m_openImage = new QPushButton(frame_4);
        m_openImage->setObjectName(QStringLiteral("m_openImage"));
        m_openImage->setGeometry(QRect(1660, 130, 141, 71));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        m_openImage->setFont(font4);
        m_pauseButton = new QPushButton(frame_4);
        m_pauseButton->setObjectName(QStringLiteral("m_pauseButton"));
        m_pauseButton->setEnabled(false);
        m_pauseButton->setGeometry(QRect(80, 210, 131, 51));
        m_pauseButton->setFont(font);
        m_stopButton = new QPushButton(frame_4);
        m_stopButton->setObjectName(QStringLiteral("m_stopButton"));
        m_stopButton->setEnabled(false);
        m_stopButton->setGeometry(QRect(80, 130, 131, 51));
        m_stopButton->setFont(font);
        m_startButton = new QPushButton(frame_4);
        m_startButton->setObjectName(QStringLiteral("m_startButton"));
        m_startButton->setGeometry(QRect(80, 50, 131, 51));
        m_startButton->setMinimumSize(QSize(0, 23));
        m_startButton->setFont(font4);
        m_startButton->setIconSize(QSize(29, 29));
        m_startButton->setFlat(false);
        m_setLineChange = new QGroupBox(frame_4);
        m_setLineChange->setObjectName(QStringLiteral("m_setLineChange"));
        m_setLineChange->setEnabled(false);
        m_setLineChange->setGeometry(QRect(2100, 50, 391, 211));
        m_setLineChange->setFont(font);
        m_verticalLine = new QPushButton(m_setLineChange);
        m_verticalLine->setObjectName(QStringLiteral("m_verticalLine"));
        m_verticalLine->setGeometry(QRect(20, 80, 261, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Agency FB"));
        font5.setPointSize(11);
        m_verticalLine->setFont(font5);
        m_horizontalLine = new QPushButton(m_setLineChange);
        m_horizontalLine->setObjectName(QStringLiteral("m_horizontalLine"));
        m_horizontalLine->setGeometry(QRect(20, 30, 261, 31));
        m_horizontalLine->setFont(font5);
        frame_5 = new QFrame(m_setLineChange);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(20, 120, 431, 100));
        frame_5->setMaximumSize(QSize(16777215, 100));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 30, 51, 41));
        label_9->setFont(font5);
        label_12 = new QLabel(frame_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 40, 51, 21));
        label_12->setFont(font5);
        m_inputDataLine = new QPushButton(frame_5);
        m_inputDataLine->setObjectName(QStringLiteral("m_inputDataLine"));
        m_inputDataLine->setGeometry(QRect(240, 30, 111, 41));
        m_inputDataLine->setFont(font5);
        beginPoint_x = new QLineEdit(frame_5);
        beginPoint_x->setObjectName(QStringLiteral("beginPoint_x"));
        beginPoint_x->setGeometry(QRect(60, 10, 41, 31));
        QFont font6;
        font6.setFamily(QStringLiteral("Agency FB"));
        beginPoint_x->setFont(font6);
        endPoint_x = new QLineEdit(frame_5);
        endPoint_x->setObjectName(QStringLiteral("endPoint_x"));
        endPoint_x->setGeometry(QRect(180, 10, 41, 31));
        beginPoint_y = new QLineEdit(frame_5);
        beginPoint_y->setObjectName(QStringLiteral("beginPoint_y"));
        beginPoint_y->setGeometry(QRect(60, 50, 41, 31));
        endPoint_y = new QLineEdit(frame_5);
        endPoint_y->setObjectName(QStringLiteral("endPoint_y"));
        endPoint_y->setGeometry(QRect(180, 50, 41, 31));
        label_14 = new QLabel(frame_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 10, 31, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setPointSize(12);
        label_14->setFont(font7);
        label_15 = new QLabel(frame_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(160, 10, 31, 31));
        label_15->setFont(font7);
        label_16 = new QLabel(frame_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 50, 31, 31));
        label_16->setFont(font7);
        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(160, 50, 31, 31));
        label_17->setFont(font7);
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(2320, 200, 54, 12));
        label_20 = new QLabel(frame_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(2440, 200, 54, 12));
        m_point = new QGroupBox(frame_4);
        m_point->setObjectName(QStringLiteral("m_point"));
        m_point->setEnabled(false);
        m_point->setGeometry(QRect(1850, 50, 201, 211));
        m_point->setFont(font);
        label_18 = new QLabel(m_point);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 20, 111, 51));
        label_18->setFont(font5);
        m_point_pos = new QLabel(m_point);
        m_point_pos->setObjectName(QStringLiteral("m_point_pos"));
        m_point_pos->setGeometry(QRect(60, 80, 71, 21));
        QFont font8;
        font8.setFamily(QStringLiteral("Times New Roman"));
        font8.setPointSize(12);
        m_point_pos->setFont(font8);
        label_21 = new QLabel(m_point);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 110, 111, 41));
        label_21->setFont(font5);
        m_point_data = new QLabel(m_point);
        m_point_data->setObjectName(QStringLiteral("m_point_data"));
        m_point_data->setGeometry(QRect(60, 150, 81, 21));
        m_point_data->setFont(font8);

        verticalLayout->addWidget(frame_4);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(1000, 0));
        frame_3->setMaximumSize(QSize(2560, 1000));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setMinimumSize(QSize(1280, 960));
        frame_2->setMaximumSize(QSize(1280, 960));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_showFrame = new QFrame(frame_2);
        m_showFrame->setObjectName(QStringLiteral("m_showFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_showFrame->sizePolicy().hasHeightForWidth());
        m_showFrame->setSizePolicy(sizePolicy2);
        m_showFrame->setMaximumSize(QSize(16777215, 1280));
        m_showFrame->setStyleSheet(QStringLiteral("background-color: rgb(130, 130, 130)"));
        m_showFrame->setFrameShape(QFrame::StyledPanel);
        m_showFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_showFrame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_showLabel = new EventLabel(m_showFrame);
        m_showLabel->setObjectName(QStringLiteral("m_showLabel"));
        m_showLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_showLabel, 0, 0, 1, 1);


        horizontalLayout->addWidget(m_showFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 824, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(frame_2);

        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy3);
        frame_10->setMaximumSize(QSize(1280, 960));
        horizontalLayout_4 = new QHBoxLayout(frame_10);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_9 = new QFrame(frame_10);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setMinimumSize(QSize(1280, 960));
        frame_9->setMaximumSize(QSize(1280, 960));
        frame_9->setStyleSheet(QStringLiteral("background-color:rgb(130,130,130)"));
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Plain);
        frame_9->setLineWidth(1);
        gridLayout_2 = new QGridLayout(frame_9);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        m_customPlot = new MyGraphPlot(frame_9);
        m_customPlot->setObjectName(QStringLiteral("m_customPlot"));
        m_customPlot->setMaximumSize(QSize(1280, 960));

        gridLayout_2->addWidget(m_customPlot, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(frame_9);


        horizontalLayout_3->addWidget(frame_10);


        verticalLayout->addWidget(frame_3);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "CMOS\346\225\260\345\255\227\347\233\270\346\234\272\346\265\213\350\257\225\350\275\257\344\273\266", 0));
        m_solution->setTitle(QApplication::translate("MainWindowClass", "\345\210\206\350\276\250\347\216\207", 0));
        m_1280->setText(QApplication::translate("MainWindowClass", "1280*960", 0));
        m_640->setText(QApplication::translate("MainWindowClass", "640*480", 0));
        m_320->setText(QApplication::translate("MainWindowClass", "320*240", 0));
        m_bitsPerPixelChange->setTitle(QApplication::translate("MainWindowClass", "\344\275\215\345\256\275\345\217\212\350\211\262\345\275\251", 0));
        m_12bitsChoosed->setText(QApplication::translate("MainWindowClass", "12\344\275\215", 0));
        m_8bitsChoosed->setText(QApplication::translate("MainWindowClass", "8\344\275\215", 0));
        radioButton_2->setText(QApplication::translate("MainWindowClass", "\351\273\221\347\231\275", 0));
#ifndef QT_NO_ACCESSIBILITY
        m_colorImageChoosed->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        m_colorImageChoosed->setText(QApplication::translate("MainWindowClass", "\345\275\251\350\211\262", 0));
        m_analogGain->setTitle(QApplication::translate("MainWindowClass", "\346\250\241\346\213\237\345\242\236\347\233\212", 0));
        m_1->setText(QApplication::translate("MainWindowClass", "1\345\200\215", 0));
        m_2->setText(QApplication::translate("MainWindowClass", "2\345\200\215", 0));
        m_4->setText(QApplication::translate("MainWindowClass", "4\345\200\215", 0));
        m_8->setText(QApplication::translate("MainWindowClass", "8\345\200\215", 0));
        m_10->setText(QApplication::translate("MainWindowClass", "10\345\200\215", 0));
        m_digitalGainSet->setTitle(QApplication::translate("MainWindowClass", "\346\225\260\345\255\227\345\242\236\347\233\212", 0));
        label_11->setText(QApplication::translate("MainWindowClass", "\347\272\242\350\211\262", 0));
        m_rGain->setText(QApplication::translate("MainWindowClass", "1", 0));
        label_13->setText(QApplication::translate("MainWindowClass", "x", 0));
        label_8->setText(QApplication::translate("MainWindowClass", "\347\273\277\350\211\262", 0));
        m_gGain->setText(QApplication::translate("MainWindowClass", "1", 0));
        label_10->setText(QApplication::translate("MainWindowClass", "x", 0));
        label_5->setText(QApplication::translate("MainWindowClass", "\350\223\235\350\211\262", 0));
        m_bGain->setText(QApplication::translate("MainWindowClass", "1", 0));
        label_7->setText(QApplication::translate("MainWindowClass", "x", 0));
        label_2->setText(QApplication::translate("MainWindowClass", "\345\205\250\345\261\200", 0));
        m_globalGain->setText(QApplication::translate("MainWindowClass", "1", 0));
        label->setText(QApplication::translate("MainWindowClass", "x", 0));
        m_exposureMode->setTitle(QApplication::translate("MainWindowClass", "\346\233\235\345\205\211\350\256\276\347\275\256", 0));
        m_autoExposure->setText(QApplication::translate("MainWindowClass", "\350\207\252\345\212\250", 0));
        m_manualExposure->setText(QApplication::translate("MainWindowClass", "\346\211\213\345\212\250(\346\233\235\345\205\211\345\200\274)", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindowClass", "\346\270\251\345\272\246", 0));
        label_6->setText(QApplication::translate("MainWindowClass", "0", 0));
        label_3->setText(QApplication::translate("MainWindowClass", "\342\204\203", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindowClass", "\345\270\247\347\216\207", 0));
        m_receiveRateLabel->setText(QApplication::translate("MainWindowClass", "0", 0));
        label_4->setText(QApplication::translate("MainWindowClass", "fps", 0));
        m_pathChoosingButton->setText(QApplication::translate("MainWindowClass", "\351\200\211\346\213\251\345\255\230\345\202\250\350\267\257\345\276\204", 0));
        m_imageTakingButton->setText(QApplication::translate("MainWindowClass", "\346\213\215\347\205\247", 0));
        m_openImage->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\345\233\276\347\211\207", 0));
        m_pauseButton->setText(QApplication::translate("MainWindowClass", "\346\232\202\345\201\234", 0));
        m_stopButton->setText(QApplication::translate("MainWindowClass", "\345\205\263\351\227\255\347\233\270\346\234\272", 0));
        m_startButton->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\347\233\270\346\234\272", 0));
        m_setLineChange->setTitle(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256\345\210\206\346\236\220\347\272\277", 0));
        m_verticalLine->setText(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256\347\272\265\345\220\221\345\210\206\346\236\220\347\272\277", 0));
        m_horizontalLine->setText(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256\346\250\252\345\220\221\345\210\206\346\236\220\347\272\277", 0));
        label_9->setText(QApplication::translate("MainWindowClass", "\350\265\267\347\202\271", 0));
        label_12->setText(QApplication::translate("MainWindowClass", "\347\273\210\347\202\271", 0));
        m_inputDataLine->setText(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256\345\210\206\346\236\220\347\272\277", 0));
        label_14->setText(QApplication::translate("MainWindowClass", "x", 0));
        label_15->setText(QApplication::translate("MainWindowClass", "x", 0));
        label_16->setText(QApplication::translate("MainWindowClass", "y", 0));
        label_17->setText(QApplication::translate("MainWindowClass", "y", 0));
        label_19->setText(QString());
        label_20->setText(QString());
        m_point->setTitle(QApplication::translate("MainWindowClass", "\345\210\206\346\236\220\347\202\271", 0));
        label_18->setText(QApplication::translate("MainWindowClass", "\345\203\217\347\264\240\347\202\271\345\235\220\346\240\207", 0));
        m_point_pos->setText(QString());
        label_21->setText(QApplication::translate("MainWindowClass", "\347\201\260\345\272\246\345\200\274", 0));
        m_point_data->setText(QString());
        m_showLabel->setText(QApplication::translate("MainWindowClass", "\346\230\276\347\244\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
