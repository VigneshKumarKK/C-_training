#include <iostream>
#include <stdlib.h>
using namespace std;

#include "makefilefunction.h"

void makemove ()
{
    if (choice == 1 && square[1] == '1')
            square[1] = mark;

    else if (choice == 2 && square[2] == '2')
            square[2] = mark;

    else if (choice == 3 && square[3] == '3')
            square[3] = mark;

    else if (choice == 4 && square[4] == '4')
            square[4] = mark;

    else if (choice == 5 && square[5] == '5')
            square[5] = mark;

    else if (choice == 6 && square[6] == '6')
            square[6] = mark;

    else if (choice == 7 && square[7] == '7')
            square[7] = mark;

    else if (choice == 8 && square[8] == '8')
            square[8] = mark;

    else if (choice == 9 && square[9] == '9')
            square[9] = mark;

    else
    {
        cout<<"Invalid move ";
        player--;
    }
}