#include "idatabase.h"

void IDatabase::ininDatabase()
{
    database=QSqlDatabase::addDatabase("QSQLITE");//添加驱动
    QString aFile = "/D:/PPTHomew/qt/实验三/Lab3.db";
    database.setDatabaseName(aFile);//设置数据库名称
    if(!database.open()){
        qDebug()<< "fail to open database";
    }else
        qDebug()<< "open database is ok" << database.connectionName();
}

QString IDatabase::userLogin(QString userName, QString password)
{
    QSqlQuery query;
    query.prepare("select username,password from user where username = :USER");
    query.bindValue(":USER",userName);
    query.exec();
    if(query.first() && query.value("username").isValid()){
        QString passwd = query.value("password").toString();
        if(passwd == password)
        {
            return "OK";
        }
        else
        {
            qDebug() << "Password is wrong";
            return "wrongPassword";
        }
    }else{
        qDebug() << "no such user";
        return "wrongUsername";
    }
}

IDatabase::IDatabase(QObject *parent)
    : QObject{parent}
{
    ininDatabase();
}
