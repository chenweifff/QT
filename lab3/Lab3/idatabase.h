#ifndef IDATABASE_H
#define IDATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>

class IDatabase : public QObject
{
    Q_OBJECT
public:

    static IDatabase &getInstance()
    {
        static IDatabase    instance;
        return instance;
    }

    IDatabase(IDatabase const&)               = delete;
    void operator=(IDatabase const&)  = delete;
    QString userLogin(QString userName,QString password);

private:

    explicit IDatabase(QObject *parent = nullptr);
    QSqlDatabase database;
    void ininDatabase();

signals:
};

#endif // IDATABASE_H
