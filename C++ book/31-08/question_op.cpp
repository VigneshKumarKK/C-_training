#include <iostream>
using namespace std;

void calltrue()
{
    cout<<"true" <<endl;
}


void callflase()
{
    cout<<"flase" <<endl;
}

int main()
{
    int n = (10>9?100:200);

    cout <<n <<endl;

    10>5?calltrue():callflase();

    10>15?calltrue():callflase();

    return 1;

}
    