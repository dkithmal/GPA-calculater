/********************************************************************************
** Form generated from reading UI file 'gpanew.ui'
**
** Created: Sun Jan 13 19:31:42 2013
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPANEW_H
#define UI_GPANEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gpanewClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QMainWindow *gpanewClass)
    {
        if (gpanewClass->objectName().isEmpty())
            gpanewClass->setObjectName(QString::fromUtf8("gpanewClass"));
        gpanewClass->resize(268, 330);
        gpanewClass->setMinimumSize(QSize(268, 330));
        gpanewClass->setMaximumSize(QSize(268, 330));
        centralWidget = new QWidget(gpanewClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 191, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 90, 141, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 300, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 10, 171, 21));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 70, 141, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        gpanewClass->setCentralWidget(centralWidget);

        retranslateUi(gpanewClass);
        QObject::connect(radioButton, SIGNAL(clicked()), gpanewClass, SLOT(course()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), gpanewClass, SLOT(course()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), gpanewClass, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), gpanewClass, SLOT(firstyear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), gpanewClass, SLOT(secondyear()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), gpanewClass, SLOT(thirdyear()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), gpanewClass, SLOT(forthyear()));

        QMetaObject::connectSlotsByName(gpanewClass);
    } // setupUi

    void retranslateUi(QMainWindow *gpanewClass)
    {
        gpanewClass->setWindowTitle(QApplication::translate("gpanewClass", "GPA Calculater", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("gpanewClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">select your course:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("gpanewClass", "level 1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("gpanewClass", "level 2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("gpanewClass", "level 3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("gpanewClass", "level 4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("gpanewClass", "close", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("gpanewClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#aa00ff;\">GPA Calculater</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("gpanewClass", "IT", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("gpanewClass", "ITM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gpanewClass: public Ui_gpanewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPANEW_H
