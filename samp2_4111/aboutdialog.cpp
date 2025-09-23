// aboutdialog.cpp
#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    setWindowTitle("关于");
    // 可以在这里设置固定大小
    setFixedSize(300, 200);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
