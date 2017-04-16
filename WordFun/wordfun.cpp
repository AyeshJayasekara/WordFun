#include "wordfun.h"
#include "ui_wordfun.h"
#include "letters.h"
#include "checker.h"
#include <QMessageBox>
#include <QString>

WordFun::WordFun(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WordFun)
{
    score1=0;
    score2=0;
    turn = false;
    check = new Checker();
    check->createDbConnection();
    ui->setupUi(this);
}

WordFun::~WordFun()
{
    delete ui;
}

void WordFun::on_pushButton_clicked()
{
    Letters* ll = new Letters();
    ll->initLetters();\
    Arr = ll->Letter;
    QString Lett = "";
    for(int i = 0 ; i <12 ;i ++){
        Lett.append(" ");
        Lett.append(Arr[i]);
        Lett.append(" ");
    }

    ui->label_3->setText(Lett);
    ui->pushButton->setEnabled(false);
    ui->pushButton->setVisible(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_3->setVisible(false);
    ui->groupBox_2->setEnabled(false);

}

void WordFun::on_pushButton_2_clicked()
{
    int score;
    if(check->checkWord(ui->textEdit->toPlainText())){

    if(check->checkValid(Arr,ui->textEdit->toPlainText())){
        score = check->checkScore(ui->textEdit->toPlainText());
        score1+=score;
        ui->label_5->setText("Word Found ! Score : "+QString::number(score1));
        ui->groupBox->setEnabled(false);
        ui->groupBox_2->setEnabled(true);
        ui->textEdit->setText("");

        Letters* ll = new Letters();
        ll->initLetters();\
        Arr = ll->Letter;
        QString Lett = "";
        for(int i = 0 ; i <12 ;i ++){
            Lett.append(" ");
            Lett.append(Arr[i]);
            Lett.append(" ");
        }
        ui->label_8->setText(Lett);

    }
    }
    else{
        QMessageBox::information(this,tr("HEY!"),tr("Please Enter a valid word!"));
        ui->textEdit->setText("");
    }

}

void WordFun::on_pushButton_3_clicked()
{
    Letters* ll = new Letters();
    ll->initLetters();\
    char* Arr = ll->Letter;
    QString Lett = "";

    for(int i = 0 ; i <12 ;i ++){
        Lett.append(" ");
        Lett.append(Arr[i]);
        Lett.append(" ");
    }
        //Lett + " " + Arr++;
    ui->label_8->setText(Lett);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->groupBox->setEnabled(false);

}

void WordFun::on_pushButton_4_clicked()
{

    if(score1>score2)
        QMessageBox::information(this,tr("Game Status"),tr("Player 1 won tha game!!!"));
    else
        QMessageBox::information(this,tr("Game Status"),tr("Player 2 won tha game!!!"));

}


void WordFun::on_pushButton_5_clicked()
{
    QMessageBox::information(this,tr("HELP"),tr("Start by Shuffling! Use these letters to form a valid word and submit that!"));
}

void WordFun::on_pushButton_6_clicked()
{

}

void WordFun::on_pushButton_7_clicked()
{
    int score;
    if(check->checkWord(ui->textEdit_2->toPlainText())){

    if(check->checkValid(Arr,ui->textEdit_2->toPlainText())){
        score = check->checkScore(ui->textEdit_2->toPlainText());
        score2+=score;
        ui->label->setText("Word Found ! Score : "+QString::number(score2));
        ui->groupBox_2->setEnabled(false);
        ui->groupBox->setEnabled(true);
        ui->textEdit_2->setText("");

        Letters* ll = new Letters();
        ll->initLetters();\
        Arr = ll->Letter;
        QString Lett = "";
        for(int i = 0 ; i <12 ;i ++){
            Lett.append(" ");
            Lett.append(Arr[i]);
            Lett.append(" ");
        }
        ui->label_3->setText(Lett);

    }
    }
    else{
        QMessageBox::information(this,tr("HEY!"),tr("Please Enter a valid word!"));
        ui->textEdit_2->setText("");
    }
}
