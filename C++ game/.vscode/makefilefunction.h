#define MAKEFILEFUNCTIONS_H

extern char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
extern int player = 1;
extern int choice=0;
extern char mark;

void makemove ();
int checkwin();
char check_player_mark();
void board();