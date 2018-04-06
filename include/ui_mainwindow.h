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
#include <QtWidgets/QFormLayout>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <frontgl.h>
#include <oglwidget.h>
#include <sidegl.h>
#include <topgl.h>

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
    QAction *actionShow3D;
    QAction *actionWorkspace2D;
    QAction *action_Open_D;
    QAction *actionConvert_3D;
    QWidget *centralWidget;
    OGLWidget *openGLWidget;
    QWidget *widget_transform;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *translate3_x;
    QLabel *label_10;
    QLineEdit *translate3_y;
    QLineEdit *translate3_z;
    QLabel *label_11;
    QPushButton *apply_translate3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLineEdit *scale3_x;
    QLabel *label_13;
    QLineEdit *scale3_y;
    QLineEdit *scale3_z;
    QLabel *label_14;
    QPushButton *apply_scale3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *reflect3_x;
    QRadioButton *reflect3_y;
    QRadioButton *reflect3_z;
    QPushButton *apply_reflect3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSlider *rotate3_x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSlider *rotate3_y;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSlider *rotate3_z;
    QLabel *label_8;
    QLabel *label_15;
    QLabel *label_16;
    QTabWidget *tabWidget;
    QWidget *tab;
    FrontGL *front_GL;
    QWidget *tab_2;
    TopGL *top_GL;
    QWidget *tab_3;
    SideGL *side_GL;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1158, 813);
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
        actionShow3D = new QAction(MainWindow);
        actionShow3D->setObjectName(QStringLiteral("actionShow3D"));
        actionWorkspace2D = new QAction(MainWindow);
        actionWorkspace2D->setObjectName(QStringLiteral("actionWorkspace2D"));
        action_Open_D = new QAction(MainWindow);
        action_Open_D->setObjectName(QStringLiteral("action_Open_D"));
        actionConvert_3D = new QAction(MainWindow);
        actionConvert_3D->setObjectName(QStringLiteral("actionConvert_3D"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openGLWidget = new OGLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(9, 9, 961, 511));
        widget_transform = new QWidget(centralWidget);
        widget_transform->setObjectName(QStringLiteral("widget_transform"));
        widget_transform->setGeometry(QRect(990, 10, 145, 521));
        verticalLayout_3 = new QVBoxLayout(widget_transform);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget_transform);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_9 = new QLabel(widget_transform);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        translate3_x = new QLineEdit(widget_transform);
        translate3_x->setObjectName(QStringLiteral("translate3_x"));

        formLayout->setWidget(0, QFormLayout::FieldRole, translate3_x);

        label_10 = new QLabel(widget_transform);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_10);

        translate3_y = new QLineEdit(widget_transform);
        translate3_y->setObjectName(QStringLiteral("translate3_y"));

        formLayout->setWidget(2, QFormLayout::FieldRole, translate3_y);

        translate3_z = new QLineEdit(widget_transform);
        translate3_z->setObjectName(QStringLiteral("translate3_z"));

        formLayout->setWidget(5, QFormLayout::FieldRole, translate3_z);

        label_11 = new QLabel(widget_transform);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_11);


        verticalLayout->addLayout(formLayout);

        apply_translate3 = new QPushButton(widget_transform);
        apply_translate3->setObjectName(QStringLiteral("apply_translate3"));

        verticalLayout->addWidget(apply_translate3);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget_transform);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_12 = new QLabel(widget_transform);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        scale3_x = new QLineEdit(widget_transform);
        scale3_x->setObjectName(QStringLiteral("scale3_x"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, scale3_x);

        label_13 = new QLabel(widget_transform);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        scale3_y = new QLineEdit(widget_transform);
        scale3_y->setObjectName(QStringLiteral("scale3_y"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, scale3_y);

        scale3_z = new QLineEdit(widget_transform);
        scale3_z->setObjectName(QStringLiteral("scale3_z"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, scale3_z);

        label_14 = new QLabel(widget_transform);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_14);


        verticalLayout_2->addLayout(formLayout_2);

        apply_scale3 = new QPushButton(widget_transform);
        apply_scale3->setObjectName(QStringLiteral("apply_scale3"));

        verticalLayout_2->addWidget(apply_scale3);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_3 = new QLabel(widget_transform);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_6->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        reflect3_x = new QRadioButton(widget_transform);
        reflect3_x->setObjectName(QStringLiteral("reflect3_x"));

        horizontalLayout->addWidget(reflect3_x);

        reflect3_y = new QRadioButton(widget_transform);
        reflect3_y->setObjectName(QStringLiteral("reflect3_y"));

        horizontalLayout->addWidget(reflect3_y);

        reflect3_z = new QRadioButton(widget_transform);
        reflect3_z->setObjectName(QStringLiteral("reflect3_z"));

        horizontalLayout->addWidget(reflect3_z);


        verticalLayout_6->addLayout(horizontalLayout);

        apply_reflect3 = new QPushButton(widget_transform);
        apply_reflect3->setObjectName(QStringLiteral("apply_reflect3"));

        verticalLayout_6->addWidget(apply_reflect3);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_4 = new QLabel(widget_transform);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_7->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(widget_transform);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        rotate3_x = new QSlider(widget_transform);
        rotate3_x->setObjectName(QStringLiteral("rotate3_x"));
        rotate3_x->setMaximum(100);
        rotate3_x->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(rotate3_x);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(widget_transform);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        rotate3_y = new QSlider(widget_transform);
        rotate3_y->setObjectName(QStringLiteral("rotate3_y"));
        rotate3_y->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(rotate3_y);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(widget_transform);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        rotate3_z = new QSlider(widget_transform);
        rotate3_z->setObjectName(QStringLiteral("rotate3_z"));
        rotate3_z->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(rotate3_z);


        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_7);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 820, 59, 14));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(500, 820, 59, 14));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(850, 820, 59, 14));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 961, 531));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        front_GL = new FrontGL(tab);
        front_GL->setObjectName(QStringLiteral("front_GL"));
        front_GL->setGeometry(QRect(0, 0, 961, 501));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        top_GL = new TopGL(tab_2);
        top_GL->setObjectName(QStringLiteral("top_GL"));
        top_GL->setGeometry(QRect(0, 0, 961, 501));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        side_GL = new SideGL(tab_3);
        side_GL->setObjectName(QStringLiteral("side_GL"));
        side_GL->setGeometry(QRect(0, 0, 961, 501));
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 230, 80, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 230, 80, 22));
        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        openGLWidget->raise();
        widget_transform->raise();
        label_8->raise();
        label_15->raise();
        label_16->raise();
        pushButton->raise();
        pushButton_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1158, 19));
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
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        MainWindow->insertToolBarBreak(toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QStringLiteral("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        MainWindow->insertToolBarBreak(toolBar_3);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(openAct);
        menuFile->addAction(action_Open_D);
        menuFile->addAction(saveAct);
        menuFile->addAction(exitAct);
        menuFile->addSeparator();
        menuHelp->addAction(actionAbout_Slate);
        menuHelp->addAction(actionVersion_Information);
        menuEdit->addSeparator();
        menuEdit->addAction(actionWireframe_Solid);
        menuEdit->addAction(actionConvert_2D);
        toolBar->addAction(actionShow3D);
        toolBar->addSeparator();
        toolBar->addAction(actionWorkspace2D);
        toolBar_2->addAction(actionWireframe_Solid);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionConvert_2D);
        toolBar_3->addAction(actionConvert_3D);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        openAct->setText(QApplication::translate("MainWindow", "&Open3D", 0));
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
        actionConvert_2D->setText(QApplication::translate("MainWindow", "Convert to 2D", 0));
        actionShow3D->setText(QApplication::translate("MainWindow", "Workspace3D", 0));
        actionWorkspace2D->setText(QApplication::translate("MainWindow", "Workspace2D", 0));
        action_Open_D->setText(QApplication::translate("MainWindow", "&Open2D", 0));
        actionConvert_3D->setText(QApplication::translate("MainWindow", "Convert to 3D", 0));
        label->setText(QApplication::translate("MainWindow", "Translate", 0));
        label_9->setText(QApplication::translate("MainWindow", "x", 0));
        label_10->setText(QApplication::translate("MainWindow", "y", 0));
        label_11->setText(QApplication::translate("MainWindow", "z", 0));
        apply_translate3->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_2->setText(QApplication::translate("MainWindow", "Scaling", 0));
        label_12->setText(QApplication::translate("MainWindow", "x", 0));
        label_13->setText(QApplication::translate("MainWindow", "y", 0));
        label_14->setText(QApplication::translate("MainWindow", "z", 0));
        apply_scale3->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_3->setText(QApplication::translate("MainWindow", "Reflection", 0));
        reflect3_x->setText(QApplication::translate("MainWindow", "x", 0));
        reflect3_y->setText(QApplication::translate("MainWindow", "y", 0));
        reflect3_z->setText(QApplication::translate("MainWindow", "z", 0));
        apply_reflect3->setText(QApplication::translate("MainWindow", "Apply", 0));
        label_4->setText(QApplication::translate("MainWindow", "Rotation", 0));
        label_5->setText(QApplication::translate("MainWindow", "x", 0));
        label_6->setText(QApplication::translate("MainWindow", "y", 0));
        label_7->setText(QApplication::translate("MainWindow", "z", 0));
        label_8->setText(QApplication::translate("MainWindow", "TopView", 0));
        label_15->setText(QApplication::translate("MainWindow", "FrontView", 0));
        label_16->setText(QApplication::translate("MainWindow", "SideView", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Page", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Open 3D file", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Open 2D file", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
