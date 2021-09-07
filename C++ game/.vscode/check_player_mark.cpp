#include <iostream>
#include <stdlib.h>
using namespace std;

#include "makefilefunction.h"

char check_player_mark()
{
  return (player == 1) ? 'X' : 'O';
}