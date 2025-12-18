#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include <QJsonValue>
#include <QJsonObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
    m_chatclient = new chatClient(this);
    connect(m_chatclient,&chatClient::connected,this,&MainWindow::connectedToServer);
    // connect(m_chatclient,&chatClient::messageReceived,this,&MainWindow::messageReceived);
    connect(m_chatclient,&chatClient::jsonReceived,this,&MainWindow::jsonReceived);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    m_chatclient->connectToServer(QHostAddress(ui->serverEdit->text()),1967);
}


void MainWindow::on_sayButton_clicked()
{
    if(!ui->saylineEdit->text().isEmpty())
        m_chatclient->sendMessage(ui->saylineEdit->text());
}


void MainWindow::on_layoutButton_clicked()

{
    m_chatclient->disconnectFromHost();
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

void MainWindow::connectedToServer()
{
    ui->stackedWidget->setCurrentWidget(ui->chatPage);
    m_chatclient->sendMessage(ui->usernameEdit->text(),"login");
}

void MainWindow::messageReceived(const QString &sender,const QString &text)
{
    ui->roomtextEdit->append(QString("%1 : %2").arg(sender).arg(text));
}

void MainWindow::jsonReceived(const QJsonObject &docObj)
{
    const QJsonValue typeVal = docObj.value("type");
    if(typeVal.isNull() || !typeVal.isString())
        return;
    if(typeVal.toString().compare("message",Qt::CaseInsensitive) == 0){
        const QJsonValue textVal = docObj.value("text");
        const QJsonValue senderVal = docObj.value("sender");
        if(textVal.isNull() || !textVal.isString())
            return;

        if(senderVal.isNull() || !senderVal.isString())
            return;

        const QString text = textVal.toString().trimmed();
        if(text.isEmpty())
            return;
        const QString sender = senderVal.toString().trimmed();
        if(text.isEmpty())
            return;

        messageReceived(sender,text);

    }else if(typeVal.toString().compare("newuser",Qt::CaseInsensitive) == 0){
        const QJsonValue usernameVal = docObj.value("username");
        if(usernameVal.isNull() || !usernameVal.isString())
            return;
        userJoined(usernameVal.toString());
    }
}

void MainWindow::userJoined(const QString &user)
{
    ui->userlistWidget->addItem(user);
}

