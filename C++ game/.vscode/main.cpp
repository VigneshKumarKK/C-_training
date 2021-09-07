#include <iostream>
#include <stdlib.h>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int player = 1;
int choice=0;
char mark;

#include "makefilefunction.h"

int main()
{
	int i;

    do
    {
        board();

        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark = check_player_mark();

        makemove();

        i=checkwin();

        player++;
        system("CLS");
    }
    while(i==-1);

    board();
    if(i==1)
        cout << "\aPlayer "<<--player<<" win ";
    else
        cout<< "\aGame draw";
    return 0;
}
