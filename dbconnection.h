#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QStringList>
#include <QtSql>
#include <QMessageBox>

class DBConnection
{
public:
    DBConnection();

    QStringList getData();
};

#endif // DBCONNECTION_H
