/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *labDemo;
    QPushButton *btnClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        Widget->setFont(font);
        labDemo = new QLabel(Widget);
        labDemo->setObjectName("labDemo");
        labDemo->setGeometry(QRect(250, 160, 101, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        labDemo->setFont(font1);
        btnClose = new QPushButton(Widget);
        btnClose->setObjectName("btnClose");
        btnClose->setGeometry(QRect(340, 220, 56, 18));

        retranslateUi(Widget);
        QObject::connect(btnClose, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "First Demo", nullptr));
        labDemo->setText(QCoreApplication::translate("Widget", "Hello Qt6", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
