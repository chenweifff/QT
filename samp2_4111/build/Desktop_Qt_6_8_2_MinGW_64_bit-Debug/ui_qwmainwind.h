/********************************************************************************
** Form generated from reading UI file 'qwmainwind.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWIND_H
#define UI_QWMAINWIND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWind
{
public:
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFontBold;
    QAction *actionFontItalic;
    QAction *actionFontUnder;
    QAction *actionClose;
    QAction *actionOpen;
    QAction *actionClear;
    QAction *actionFont;
    QAction *actionNew;
    QAction *actionToolBarLab;
    QAction *actionSave;
    QAction *actAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QWMainWind)
    {
        if (QWMainWind->objectName().isEmpty())
            QWMainWind->setObjectName("QWMainWind");
        QWMainWind->resize(832, 454);
        actionCut = new QAction(QWMainWind);
        actionCut->setObjectName("actionCut");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/cut.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon);
        actionCopy = new QAction(QWMainWind);
        actionCopy->setObjectName("actionCopy");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/120.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon1);
        actionPaste = new QAction(QWMainWind);
        actionPaste->setObjectName("actionPaste");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/paste.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon2);
        actionFontBold = new QAction(QWMainWind);
        actionFontBold->setObjectName("actionFontBold");
        actionFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/BLD.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFontBold->setIcon(icon3);
        actionFontItalic = new QAction(QWMainWind);
        actionFontItalic->setObjectName("actionFontItalic");
        actionFontItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/ITL.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFontItalic->setIcon(icon4);
        actionFontUnder = new QAction(QWMainWind);
        actionFontUnder->setObjectName("actionFontUnder");
        actionFontUnder->setCheckable(true);
        actionFontUnder->setIcon(icon4);
        actionClose = new QAction(QWMainWind);
        actionClose->setObjectName("actionClose");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClose->setIcon(icon5);
        actionOpen = new QAction(QWMainWind);
        actionOpen->setObjectName("actionOpen");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon6);
        actionClear = new QAction(QWMainWind);
        actionClear->setObjectName("actionClear");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClear->setIcon(icon7);
        actionFont = new QAction(QWMainWind);
        actionFont->setObjectName("actionFont");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/20.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFont->setIcon(icon8);
        actionNew = new QAction(QWMainWind);
        actionNew->setObjectName("actionNew");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/new2.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon9);
        actionToolBarLab = new QAction(QWMainWind);
        actionToolBarLab->setObjectName("actionToolBarLab");
        actionToolBarLab->setCheckable(true);
        actionSave = new QAction(QWMainWind);
        actionSave->setObjectName("actionSave");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/save.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon10);
        actAbout = new QAction(QWMainWind);
        actAbout->setObjectName("actAbout");
        actAbout->setIcon(icon3);
        actAbout->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        centralwidget = new QWidget(QWMainWind);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        QWMainWind->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QWMainWind);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 832, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        QWMainWind->setMenuBar(menubar);
        statusbar = new QStatusBar(QWMainWind);
        statusbar->setObjectName("statusbar");
        QWMainWind->setStatusBar(statusbar);
        mainToolBar = new QToolBar(QWMainWind);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        QWMainWind->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addAction(actionClose);
        menu->addSeparator();
        menu_2->addAction(actionCut);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionPaste);
        menu_2->addSeparator();
        menu_2->addAction(actionClear);
        menu_3->addAction(actionFontBold);
        menu_3->addAction(actionFontItalic);
        menu_3->addAction(actionFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actionToolBarLab);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFontBold);
        mainToolBar->addAction(actionFontItalic);
        mainToolBar->addAction(actionFontUnder);

        retranslateUi(QWMainWind);
        QObject::connect(actionClose, &QAction::triggered, QWMainWind, qOverload<>(&QMainWindow::close));
        QObject::connect(actionClear, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::clear));
        QObject::connect(actionCut, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actionCopy, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(actionPaste, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));

        QMetaObject::connectSlotsByName(QWMainWind);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWind)
    {
        QWMainWind->setWindowTitle(QCoreApplication::translate("QWMainWind", "qwmainwind", nullptr));
        actionCut->setText(QCoreApplication::translate("QWMainWind", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("QWMainWind", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("QWMainWind", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("QWMainWind", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("QWMainWind", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFontBold->setText(QCoreApplication::translate("QWMainWind", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionFontBold->setToolTip(QCoreApplication::translate("QWMainWind", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFontItalic->setText(QCoreApplication::translate("QWMainWind", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionFontItalic->setToolTip(QCoreApplication::translate("QWMainWind", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFontUnder->setText(QCoreApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actionFontUnder->setToolTip(QCoreApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("QWMainWind", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("QWMainWind", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("QWMainWind", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("QWMainWind", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("QWMainWind", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("QWMainWind", "\346\270\205\347\251\272\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont->setText(QCoreApplication::translate("QWMainWind", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("QWMainWind", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNew->setText(QCoreApplication::translate("QWMainWind", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("QWMainWind", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToolBarLab->setText(QCoreApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
#if QT_CONFIG(tooltip)
        actionToolBarLab->setToolTip(QCoreApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("QWMainWind", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("QWMainWind", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actAbout->setText(QCoreApplication::translate("QWMainWind", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        actAbout->setToolTip(QCoreApplication::translate("QWMainWind", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("QWMainWind", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QWMainWind", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QWMainWind", "\346\240\274\345\274\217", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("QWMainWind", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWind: public Ui_QWMainWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWIND_H
