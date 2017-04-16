#ifndef WORDFUN_H
#define WORDFUN_H
#include <QMainWindow>
#include <QObject>
#include "checker.h"

namespace Ui {
class WordFun;
}
class QUdpSocket;
class QAction;
class WordFun : public QMainWindow
{
    Q_OBJECT

public:
    Checker* check;
    bool turn;
    char* Arr;
    char* Arr2;
    int score1;
    int score2;
    explicit WordFun(QWidget *parent = 0);
    ~WordFun();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();

private:
    Ui::WordFun *ui;
};

#endif // WORDFUN_H
