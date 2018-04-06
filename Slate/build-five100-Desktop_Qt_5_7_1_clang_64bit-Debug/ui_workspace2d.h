/********************************************************************************
** Form generated from reading UI file 'workspace2d.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSPACE2D_H
#define UI_WORKSPACE2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <frontgl.h>
#include <sidegl.h>
#include <topgl.h>

QT_BEGIN_NAMESPACE

class Ui_workspace2D
{
public:
    QAction *actionNew;
    QAction *actionFront_View;
    QAction *actionTop_View;
    QAction *actionSide_View;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionConvert_to_3D;
    QAction *actionAbout_Slate;
    QAction *actionVersion_Information;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QPushButton *pushButton_11;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_12;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QPushButton *pushButton_12;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_6;
    QTabWidget *tabWidget_2;
    QWidget *front;
    FrontGL *frontGLWidget;
    QWidget *top;
    TopGL *topGLWidget;
    QWidget *side;
    SideGL *sideGLWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *workspace2D)
    {
        if (workspace2D->objectName().isEmpty())
            workspace2D->setObjectName(QStringLiteral("workspace2D"));
        workspace2D->resize(800, 600);
        actionNew = new QAction(workspace2D);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionFront_View = new QAction(workspace2D);
        actionFront_View->setObjectName(QStringLiteral("actionFront_View"));
        actionTop_View = new QAction(workspace2D);
        actionTop_View->setObjectName(QStringLiteral("actionTop_View"));
        actionSide_View = new QAction(workspace2D);
        actionSide_View->setObjectName(QStringLiteral("actionSide_View"));
        actionSave = new QAction(workspace2D);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(workspace2D);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionConvert_to_3D = new QAction(workspace2D);
        actionConvert_to_3D->setObjectName(QStringLiteral("actionConvert_to_3D"));
        actionAbout_Slate = new QAction(workspace2D);
        actionAbout_Slate->setObjectName(QStringLiteral("actionAbout_Slate"));
        actionVersion_Information = new QAction(workspace2D);
        actionVersion_Information->setObjectName(QStringLiteral("actionVersion_Information"));
        centralwidget = new QWidget(workspace2D);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 110, 171, 228));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_15->addWidget(label_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_18 = new QLineEdit(tab);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));

        horizontalLayout_4->addWidget(lineEdit_18);

        lineEdit_19 = new QLineEdit(tab);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));

        horizontalLayout_4->addWidget(lineEdit_19);

        lineEdit_20 = new QLineEdit(tab);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));

        horizontalLayout_4->addWidget(lineEdit_20);


        verticalLayout_15->addLayout(horizontalLayout_4);

        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_15->addWidget(pushButton_11);


        verticalLayout_17->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_16->addWidget(label_12);

        comboBox_7 = new QComboBox(tab);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));

        verticalLayout_16->addWidget(comboBox_7);

        comboBox_8 = new QComboBox(tab);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));

        verticalLayout_16->addWidget(comboBox_8);

        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout_16->addWidget(pushButton_12);


        verticalLayout_17->addLayout(verticalLayout_16);


        verticalLayout_7->addLayout(verticalLayout_17);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_5->addWidget(pushButton);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_6->addWidget(comboBox);

        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_6->addWidget(comboBox_2);

        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_6->addWidget(pushButton_6);


        verticalLayout_8->addLayout(verticalLayout_6);

        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(170, 20, 451, 401));
        front = new QWidget();
        front->setObjectName(QStringLiteral("front"));
        frontGLWidget = new FrontGL(front);
        frontGLWidget->setObjectName(QStringLiteral("frontGLWidget"));
        frontGLWidget->setGeometry(QRect(-1, -1, 451, 371));
        tabWidget_2->addTab(front, QString());
        top = new QWidget();
        top->setObjectName(QStringLiteral("top"));
        topGLWidget = new TopGL(top);
        topGLWidget->setObjectName(QStringLiteral("topGLWidget"));
        topGLWidget->setGeometry(QRect(0, -1, 451, 371));
        tabWidget_2->addTab(top, QString());
        side = new QWidget();
        side->setObjectName(QStringLiteral("side"));
        sideGLWidget = new SideGL(side);
        sideGLWidget->setObjectName(QStringLiteral("sideGLWidget"));
        sideGLWidget->setGeometry(QRect(0, 0, 451, 371));
        tabWidget_2->addTab(side, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(640, 50, 129, 376));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout->addWidget(lineEdit_9);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_4->addWidget(pushButton_5);

        workspace2D->setCentralWidget(centralwidget);
        menubar = new QMenuBar(workspace2D);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        workspace2D->setMenuBar(menubar);
        statusbar = new QStatusBar(workspace2D);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        workspace2D->setStatusBar(statusbar);
        toolBar = new QToolBar(workspace2D);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        workspace2D->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuOpen->addAction(actionFront_View);
        menuOpen->addAction(actionTop_View);
        menuOpen->addAction(actionSide_View);
        menuEdit->addAction(actionConvert_to_3D);
        menuHelp->addAction(actionAbout_Slate);
        menuHelp->addAction(actionVersion_Information);
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionFront_View);
        toolBar->addAction(actionTop_View);
        toolBar->addAction(actionSide_View);
        toolBar->addSeparator();
        toolBar->addAction(actionConvert_to_3D);

        retranslateUi(workspace2D);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(workspace2D);
    } // setupUi

    void retranslateUi(QMainWindow *workspace2D)
    {
        workspace2D->setWindowTitle(QApplication::translate("workspace2D", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("workspace2D", "New", Q_NULLPTR));
        actionFront_View->setText(QApplication::translate("workspace2D", "Front View", Q_NULLPTR));
        actionTop_View->setText(QApplication::translate("workspace2D", "Top View", Q_NULLPTR));
        actionSide_View->setText(QApplication::translate("workspace2D", "Side View", Q_NULLPTR));
        actionSave->setText(QApplication::translate("workspace2D", "Save", Q_NULLPTR));
        actionExit->setText(QApplication::translate("workspace2D", "Exit", Q_NULLPTR));
        actionConvert_to_3D->setText(QApplication::translate("workspace2D", "Convert to 3D", Q_NULLPTR));
        actionAbout_Slate->setText(QApplication::translate("workspace2D", "About Slate", Q_NULLPTR));
        actionVersion_Information->setText(QApplication::translate("workspace2D", "Version Information", Q_NULLPTR));
        label_11->setText(QApplication::translate("workspace2D", "Add Vertex", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("workspace2D", "Create", Q_NULLPTR));
        label_12->setText(QApplication::translate("workspace2D", "Add Edge", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("workspace2D", "Create", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("workspace2D", "Tab 1", Q_NULLPTR));
        label_5->setText(QApplication::translate("workspace2D", "Add Vertex", Q_NULLPTR));
        pushButton->setText(QApplication::translate("workspace2D", "Create", Q_NULLPTR));
        label_6->setText(QApplication::translate("workspace2D", "Add Edge", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("workspace2D", "Create", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("workspace2D", "Tab 2", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(front), QApplication::translate("workspace2D", "Front", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(top), QApplication::translate("workspace2D", "Top", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(side), QApplication::translate("workspace2D", "Side", Q_NULLPTR));
        label->setText(QApplication::translate("workspace2D", "Transformations", Q_NULLPTR));
        label_2->setText(QApplication::translate("workspace2D", "Translate", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("workspace2D", "Apply", Q_NULLPTR));
        label_3->setText(QApplication::translate("workspace2D", "Scale", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("workspace2D", "Apply", Q_NULLPTR));
        label_4->setText(QApplication::translate("workspace2D", "Rotate", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("workspace2D", "Apply", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("workspace2D", "Apply All", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("workspace2D", "File", Q_NULLPTR));
        menuOpen->setTitle(QApplication::translate("workspace2D", "Open..", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("workspace2D", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("workspace2D", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("workspace2D", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class workspace2D: public Ui_workspace2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSPACE2D_H
