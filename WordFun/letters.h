#ifndef LETTERS_H
#define LETTERS_H
#define LETTERCOUNT 12
#include <QtGlobal>

class Letters
{
public:
    Letters();
    int getchara();
    void initLetters();
    char getArray();
    void printLetters();
    char Letter[LETTERCOUNT];

private:

    char randomLetter();

};

#endif // LETTERS_H
