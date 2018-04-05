/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <oglwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openAct;
    QAction *saveAct;
    QAction *exitAct;
    QAction *actionAbout_Slate;
    QAction *actionVersion_Information;
    QAction *actionWireframe_Solid;
    QAction *actionConvert_2D;
    QWidget *centralWidget;
    QColumnView *columnView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSlider *x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSlider *x_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSlider *x_3;
    QPushButton *pushButton_5;
    oglwidget *openGLWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1127, 668);
        openAct = new QAction(MainWindow);
        openAct->setObjectName(QStringLiteral("openAct"));
        saveAct = new QAction(MainWindow);
        saveAct->setObjectName(QStringLiteral("saveAct"));
        exitAct = new QAction(MainWindow);
        exitAct->setObjectName(QStringLiteral("exitAct"));
        actionAbout_Slate = new QAction(MainWindow);
        actionAbout_Slate->setObjectName(QStringLiteral("actionAbout_Slate"));
        actionVersion_Information = new QAction(MainWindow);
        actionVersion_Information->setObjectName(QStringLiteral("actionVersion_Information"));
        actionWireframe_Solid = new QAction(MainWindow);
        actionWireframe_Solid->setObjectName(QStringLiteral("actionWireframe_Solid"));
        actionConvert_2D = new QAction(MainWindow);
        actionConvert_2D->setObjectName(QStringLiteral("actionConvert_2D"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        columnView = new QColumnView(centralWidget);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(0, 0, 541, 431));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(980, 0, 139, 588));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_6->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout_6->addLayout(horizontalLayout);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_6->addWidget(pushButton_3);


        verticalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_7->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        x = new QSlider(layoutWidget);
        x->setObjectName(QStringLiteral("x"));
        x->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(x);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        x_2 = new QSlider(layoutWidget);
        x_2->setObjectName(QStringLiteral("x_2"));
        x_2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(x_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        x_3 = new QSlider(layoutWidget);
        x_3->setObjectName(QStringLiteral("x_3"));
        x_3->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(x_3);


        verticalLayout_7->addLayout(horizontalLayout_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_7->addWidget(pushButton_5);


        verticalLayout_4->addLayout(verticalLayout_7);

        openGLWidget = new oglwidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 0, 961, 591));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1127, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(openAct);
        menuFile->addAction(saveAct);
        menuFile->addAction(exitAct);
        menuHelp->addAction(actionAbout_Slate);
        menuHelp->addAction(actionVersion_Information);
        menuEdit->addSeparator();
        menuEdit->addAction(actionWireframe_Solid);
        menuEdit->addAction(actionConvert_2D);
        toolBar->addAction(actionWireframe_Solid);
        toolBar->addAction(actionConvert_2D);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        openAct->setText(QApplication::translate("MainWindow", "&Open...", 0));
        openAct->setShortcut(QApplication::translate("MainWindow", "Meta+O, Ctrl+O", 0));
        saveAct->setText(QApplication::translate("MainWindow", "&Save...", 0));
        saveAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+S, Meta+S", 0));
        exitAct->setText(QApplication::translate("MainWindow", "E&xit", 0));
#ifndef QT_NO_TOOLTIP
        exitAct->setToolTip(QApplication::translate("MainWindow", "Exit", 0));
#endif // QT_NO_TOOLTIP
        exitAct->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q, Meta+Q", 0));
        actionAbout_Slate->setText(QApplication::translate("MainWindow", "About Slate", 0));
        actionVersion_Information->setText(QApplication::translate("MainWindow", "Version Information", 0));
        actionWireframe_Solid->setText(QApplication::translate("MainWindow", "Wireframe/Solid", 0));
        actionConvert_2D->setText(QApplication::translate("MainWindow", "Convert 2D", 0));
        label->setText(QApplication::translate("MainWindow", "Translate", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_2->setText(QApplication::translate("MainWindow", "Scale", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_3->setText(QApplication::translate("MainWindow", "Reflection", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "x", 0));
        radioButton->setText(QApplication::translate("MainWindow", "y", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "z", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_4->setText(QApplication::translate("MainWindow", "Rotation", 0));
        label_5->setText(QApplication::translate("MainWindow", "x", 0));
        label_6->setText(QApplication::translate("MainWindow", "y", 0));
        label_7->setText(QApplication::translate("MainWindow", "z", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Apply", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
