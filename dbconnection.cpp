#include "dbconnection.h"

DBConnection::DBConnection()
{

}

QStringList DBConnection::getData()
{
    QStringList result;

    //Подключаем базу данных
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\database.db3");
    db.open();

    //Осуществляем запрос
    QSqlQuery query;
    query.exec("SELECT _id, name, age FROM People");

    //Выводим значения из запроса
    while (query.next())
    {
        QString _id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString age = query.value(2).toString();
        QString row = _id + " " + name + " " + age;
        result.append(row);
    }

    return result;
}
