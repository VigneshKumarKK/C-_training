#include <iostream>
using namespace std;
  
int main(int argc,char* argv[])
{
    int counter;
    cout <<"Program Name is" <<argv[0]
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
        cout <<"\nNumber Of Arguments Passed: " <<argc
        cout <<"\n----Following Are The Command Line Arguments Passed----"
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s",counter,argv[counter]);
    }
    return 0;
}