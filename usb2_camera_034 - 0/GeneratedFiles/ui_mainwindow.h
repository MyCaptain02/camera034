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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_4;
    QGroupBox *groupBox;
    QComboBox *m_resolutionSwitching;
    QGroupBox *m_bitsPerPixelChange;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *m_8bitsChoosed;
    QRadioButton *m_12bitsChoosed;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *radioButton_2;
    QRadioButton *m_colorImageChoosed;
    QGroupBox *groupBox_3;
    QComboBox *m_analogGainSet;
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
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_8;
    QPushButton *m_startButton;
    QPushButton *m_stopButton;
    QPushButton *m_pauseButton;
    QPushButton *m_pathChoosingButton;
    QPushButton *m_imageTakingButton;
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
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QFrame *m_showFrame;
    QGridLayout *gridLayout;
    QLabel *m_showLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout;
    QFrame *frame_7;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_9;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(2560, 1300);
        MainWindowClass->setMinimumSize(QSize(0, 1300));
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
        centralWidget->setMinimumSize(QSize(0, 1300));
        centralWidget->setMaximumSize(QSize(16777215, 1300));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMaximumSize(QSize(1300, 1300));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(250, 20, 141, 211));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        m_resolutionSwitching = new QComboBox(groupBox);
        m_resolutionSwitching->setObjectName(QStringLiteral("m_resolutionSwitching"));
        m_resolutionSwitching->setEnabled(false);
        m_resolutionSwitching->setGeometry(QRect(20, 40, 101, 21));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        m_resolutionSwitching->setFont(font1);
        m_resolutionSwitching->setAutoFillBackground(false);
        m_resolutionSwitching->setEditable(false);
        m_bitsPerPixelChange = new QGroupBox(frame_4);
        m_bitsPerPixelChange->setObjectName(QStringLiteral("m_bitsPerPixelChange"));
        m_bitsPerPixelChange->setEnabled(false);
        m_bitsPerPixelChange->setGeometry(QRect(410, 20, 111, 211));
        m_bitsPerPixelChange->setFont(font);
        m_bitsPerPixelChange->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_bitsPerPixelChange->setFlat(false);
        verticalLayout_9 = new QVBoxLayout(m_bitsPerPixelChange);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        m_8bitsChoosed = new QRadioButton(m_bitsPerPixelChange);
        m_8bitsChoosed->setObjectName(QStringLiteral("m_8bitsChoosed"));
        m_8bitsChoosed->setFont(font1);
        m_8bitsChoosed->setLayoutDirection(Qt::LeftToRight);
        m_8bitsChoosed->setChecked(true);

        verticalLayout_9->addWidget(m_8bitsChoosed);

        m_12bitsChoosed = new QRadioButton(m_bitsPerPixelChange);
        m_12bitsChoosed->setObjectName(QStringLiteral("m_12bitsChoosed"));
        m_12bitsChoosed->setFont(font1);

        verticalLayout_9->addWidget(m_12bitsChoosed);

        groupBox_4 = new QGroupBox(frame_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(540, 20, 111, 211));
        groupBox_4->setFont(font);
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        verticalLayout_10 = new QVBoxLayout(groupBox_4);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font1);
        radioButton_2->setChecked(false);

        verticalLayout_10->addWidget(radioButton_2);

        m_colorImageChoosed = new QRadioButton(groupBox_4);
        m_colorImageChoosed->setObjectName(QStringLiteral("m_colorImageChoosed"));
        m_colorImageChoosed->setFont(font1);
        m_colorImageChoosed->setChecked(true);

        verticalLayout_10->addWidget(m_colorImageChoosed);

        groupBox_3 = new QGroupBox(frame_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setGeometry(QRect(670, 20, 121, 211));
        groupBox_3->setFont(font);
        m_analogGainSet = new QComboBox(groupBox_3);
        m_analogGainSet->setObjectName(QStringLiteral("m_analogGainSet"));
        m_analogGainSet->setEnabled(false);
        m_analogGainSet->setGeometry(QRect(20, 40, 81, 21));
        m_analogGainSet->setFont(font1);
        m_digitalGainSet = new QGroupBox(frame_4);
        m_digitalGainSet->setObjectName(QStringLiteral("m_digitalGainSet"));
        m_digitalGainSet->setEnabled(false);
        m_digitalGainSet->setGeometry(QRect(810, 20, 201, 211));
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
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_rGainSet->sizePolicy().hasHeightForWidth());
        m_rGainSet->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(m_gGainSet->sizePolicy().hasHeightForWidth());
        m_gGainSet->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(m_bGainSet->sizePolicy().hasHeightForWidth());
        m_bGainSet->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(m_globalGainSet->sizePolicy().hasHeightForWidth());
        m_globalGainSet->setSizePolicy(sizePolicy);
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
        m_exposureMode->setGeometry(QRect(1030, 20, 151, 211));
        m_exposureMode->setFont(font);
        m_autoExposure = new QRadioButton(m_exposureMode);
        m_autoExposure->setObjectName(QStringLiteral("m_autoExposure"));
        m_autoExposure->setGeometry(QRect(10, 40, 54, 20));
        m_autoExposure->setFont(font1);
        m_autoExposure->setChecked(true);
        m_manualExposure = new QRadioButton(m_exposureMode);
        m_manualExposure->setObjectName(QStringLiteral("m_manualExposure"));
        m_manualExposure->setGeometry(QRect(10, 80, 102, 20));
        m_manualExposure->setFont(font1);
        layoutWidget = new QWidget(m_exposureMode);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 110, 130, 111));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        m_exposureSlider = new QSlider(layoutWidget);
        m_exposureSlider->setObjectName(QStringLiteral("m_exposureSlider"));
        m_exposureSlider->setEnabled(false);
        sizePolicy.setHeightForWidth(m_exposureSlider->sizePolicy().hasHeightForWidth());
        m_exposureSlider->setSizePolicy(sizePolicy);
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

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, -10, 221, 271));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        m_startButton = new QPushButton(frame_5);
        m_startButton->setObjectName(QStringLiteral("m_startButton"));
        m_startButton->setMinimumSize(QSize(0, 23));
        m_startButton->setFont(font);
        m_startButton->setIconSize(QSize(29, 29));
        m_startButton->setFlat(false);

        verticalLayout_8->addWidget(m_startButton);

        m_stopButton = new QPushButton(frame_5);
        m_stopButton->setObjectName(QStringLiteral("m_stopButton"));
        m_stopButton->setEnabled(false);
        m_stopButton->setFont(font);

        verticalLayout_8->addWidget(m_stopButton);

        m_pauseButton = new QPushButton(frame_5);
        m_pauseButton->setObjectName(QStringLiteral("m_pauseButton"));
        m_pauseButton->setEnabled(false);
        m_pauseButton->setFont(font);

        verticalLayout_8->addWidget(m_pauseButton);

        m_pathChoosingButton = new QPushButton(frame_5);
        m_pathChoosingButton->setObjectName(QStringLiteral("m_pathChoosingButton"));
        m_pathChoosingButton->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(11);
        m_pathChoosingButton->setFont(font2);
        m_pathChoosingButton->setIconSize(QSize(40, 40));

        verticalLayout_8->addWidget(m_pathChoosingButton);

        m_imageTakingButton = new QPushButton(frame_5);
        m_imageTakingButton->setObjectName(QStringLiteral("m_imageTakingButton"));
        m_imageTakingButton->setEnabled(false);
        m_imageTakingButton->setMinimumSize(QSize(0, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        m_imageTakingButton->setFont(font3);
        m_imageTakingButton->setIconSize(QSize(25, 0));

        verticalLayout_8->addWidget(m_imageTakingButton);

        frame = new QFrame(frame_4);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(1190, 10, 81, 231));
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
        m_receiveRateLabel->setLayoutDirection(Qt::LeftToRight);
        m_receiveRateLabel->setTextFormat(Qt::AutoText);
        m_receiveRateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_receiveRateLabel);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_6->addWidget(groupBox_2);


        verticalLayout_7->addWidget(frame_4);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setMinimumSize(QSize(0, 960));
        frame_2->setMaximumSize(QSize(1280, 960));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_showFrame = new QFrame(frame_2);
        m_showFrame->setObjectName(QStringLiteral("m_showFrame"));
        m_showFrame->setStyleSheet(QStringLiteral("background-color: rgb(130, 130, 130)"));
        m_showFrame->setFrameShape(QFrame::StyledPanel);
        m_showFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_showFrame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_showLabel = new QLabel(m_showFrame);
        m_showLabel->setObjectName(QStringLiteral("m_showLabel"));
        m_showLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_showLabel, 0, 0, 1, 1);


        horizontalLayout->addWidget(m_showFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 824, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_7->addWidget(frame_2);

        frame_2->raise();
        frame_4->raise();

        horizontalLayout_3->addWidget(frame_3);

        frame_6 = new QFrame(centralWidget);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_6);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_7);

        frame_8 = new QFrame(frame_6);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setMinimumSize(QSize(1280, 960));
        frame_8->setMaximumSize(QSize(1280, 960));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_8);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setMinimumSize(QSize(1280, 960));
        frame_9->setMaximumSize(QSize(16777215, 16777215));
        frame_9->setStyleSheet(QStringLiteral("background-color:rgb(130,130,130)"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_9);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 0, -1);
        label_9 = new QLabel(frame_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(1280, 960));
        label_9->setToolTipDuration(0);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(frame_9);

        horizontalSpacer = new QSpacerItem(40, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 824, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout->addWidget(frame_8);


        horizontalLayout_3->addWidget(frame_6);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        m_resolutionSwitching->setCurrentIndex(2);
        m_analogGainSet->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "CMOS\346\225\260\345\255\227\347\233\270\346\234\272\346\265\213\350\257\225\350\275\257\344\273\266", 0));
        groupBox->setTitle(QApplication::translate("MainWindowClass", "\345\210\206\350\276\250\347\216\207", 0));
        m_resolutionSwitching->clear();
        m_resolutionSwitching->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "320 * 240", 0)
         << QApplication::translate("MainWindowClass", "640 * 480", 0)
         << QApplication::translate("MainWindowClass", "1280 * 960", 0)
        );
        m_bitsPerPixelChange->setTitle(QApplication::translate("MainWindowClass", "\345\233\276\345\203\217\344\275\215\345\256\275", 0));
        m_8bitsChoosed->setText(QApplication::translate("MainWindowClass", "8\344\275\215", 0));
        m_12bitsChoosed->setText(QApplication::translate("MainWindowClass", "12\344\275\215", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindowClass", "\346\210\220\345\203\217\347\261\273\345\236\213", 0));
        radioButton_2->setText(QApplication::translate("MainWindowClass", "\351\273\221\347\231\275", 0));
        m_colorImageChoosed->setText(QApplication::translate("MainWindowClass", "\345\275\251\350\211\262", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindowClass", "\346\250\241\346\213\237\345\242\236\347\233\212", 0));
        m_analogGainSet->clear();
        m_analogGainSet->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "1\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "2\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "4\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "8\345\200\215", 0)
         << QApplication::translate("MainWindowClass", "10\345\200\215", 0)
        );
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
        m_startButton->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200\347\233\270\346\234\272", 0));
        m_stopButton->setText(QApplication::translate("MainWindowClass", "\345\205\263\351\227\255\347\233\270\346\234\272", 0));
        m_pauseButton->setText(QApplication::translate("MainWindowClass", "\346\232\202\345\201\234", 0));
        m_pathChoosingButton->setText(QApplication::translate("MainWindowClass", "\351\200\211\346\213\251\345\255\230\345\202\250\350\267\257\345\276\204", 0));
        m_imageTakingButton->setText(QApplication::translate("MainWindowClass", "\346\213\215\347\205\247", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindowClass", "\346\270\251\345\272\246", 0));
        label_6->setText(QApplication::translate("MainWindowClass", "0", 0));
        label_3->setText(QApplication::translate("MainWindowClass", "\342\204\203", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindowClass", "\345\270\247\347\216\207", 0));
        m_receiveRateLabel->setText(QApplication::translate("MainWindowClass", "0", 0));
        label_4->setText(QApplication::translate("MainWindowClass", "fps", 0));
        m_showLabel->setText(QApplication::translate("MainWindowClass", "\346\230\276\347\244\272", 0));
        label_9->setText(QApplication::translate("MainWindowClass", "\345\233\276\347\211\207", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
