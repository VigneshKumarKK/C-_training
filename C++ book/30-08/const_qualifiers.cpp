#include <iostream>
using namespace std;

void space_to_dash_a (const char *string)
{
    while(*string)
    {
        if(*string==' ')
        cout <<"-";
        else
        cout << (*string);
        string++;
    }
}

/*void space_to_dash_b (const char *string)
{
    while(*string)
    {
        if(*string==' ')
        *string='-';
        cout << (*string);
        string++;
    }
}*/

void space_to_dash_c (char *string)
{
    while(*string)
    {
        if(*string==' ')
        *string='-';
        cout << (*string);
        string++;
    }
}

int main()
{
    //using const for string and print - in place of space
    space_to_dash_a("My Country My Nation My World");

    //using const for string and replace - in place of space (not possible)
    //space_to_dash_b("My Country My Nation My World");

    //replace - in place of space
    space_to_dash_c("My Country My Nation My World");

    return 0;
}
