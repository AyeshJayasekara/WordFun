#include "letters.h"
#include <QtGlobal>
#include <QChar>
#include <QTime>
#include <iostream>
using namespace std;
Letters::Letters()
{
    QTime now = QTime::currentTime();
    qsrand(now.msec());
}
int Letters::getchara(){
    return 45;
}


char Letters::randomLetter(){
    char temp = char(qrand() % ('Z' - 'A'));
    return  'A' + temp;
}

void Letters::initLetters(){
    for(int i = 0 ; i < LETTERCOUNT ; i++){
        Letter[i] = this->randomLetter();
    }
}

void Letters::printLetters(){
    for(int i = 0 ; i < LETTERCOUNT ; i++){
         cout<<"\n   " <<Letter[i];
    }
}

