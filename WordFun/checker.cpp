#include "checker.h"

Checker::Checker()
{

}

bool Checker::checkWord(QString WORD){
    QString cmd = "SELECT  Distinct WORD FROM ENTRIES WHERE WORD LIKE :Word ;"; // Prepare this later
    query->prepare(cmd);
    query->bindValue(":Word",WORD);

    if (!query->exec()) {
        cout <<"Error occurred querying. ";
        qDebug("%s.", qPrintable(query->lastError().text())); //<<-- prints out blank
    }
    bool add = query->first();
    return add;
}

bool Checker::checkValid(char* Array, QString WORD){
    bool isFound = false;
    for(QString::const_iterator itr(WORD.begin()); itr != WORD.end(); ++itr){
        for(int i=0;i<12;i++){
            if(*itr == Array[i]){
                isFound = true;
                qDebug() << ""+Array[i];
            }
            if(!isFound){
                break;
            }

        }
    }
    return true;
}

int Checker::checkScore(QString WORD){
    return (100 * ((float)WORD.length()/12.0));
}
