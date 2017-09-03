#include <iostream>
#include <conio.h>
using namespace std;
int no();
char c = 'A';

int no()
{
    char a, b;

    for (a = 'A'; a <= 'C'; a++)
    {
        for (b = 'A'; b <= a; b++, c++)
        {
            cout << " ";
        }

        for (char d = 'D'; d > a; d--, c++)
        {
            cout << c;
        }
        for (char c = 'C'; c > a; c--)
        {
            cout << c;
        }

        cout << endl;
    }
}

int main()
{
    char a, b;

    for (a = 'A'; a <= 'C'; a++)
    {
        for (char c = 'C'; c >= a; c--)
        {
            cout << " ";
        }

        for (b = 'A'; b <= a; b++, c++)
        {
            cout << c;
        }

        for (char d = 'A'; d < a; d++, c++)
        {
            cout << c;
        }
        cout << endl;
    }
    no();
    getch();
}
