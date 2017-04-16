#ifndef CHECKER_H
#define CHECKER_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include <QDebug>
#include <QString>
using namespace std;

class Checker
{
public:
    Checker();
    bool Check ();
    QSqlQuery* query;
    bool checkWord(QString WORD);
    bool checkValid(char* Array,QString WORD);
    int checkScore(QString WORD);

    bool createDbConnection()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("Dictionary.db");
        if (!db.open()) {
            qDebug()<<"Couldn't open database! Please check .db file.";
            return false;
        }
        query = new QSqlQuery(db);
        query->setForwardOnly(true);
        return true;
    }
};

#endif // CHECKER_H
