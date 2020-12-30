#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QStringList>
#include <QtSql>

class DBConnection
{
public:
    DBConnection();

    QStringList getData();
};

#endif // DBCONNECTION_H
