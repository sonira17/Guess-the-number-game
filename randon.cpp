#include <iostream>
#include <stdlib.h>
using namespace std;
#include <time.h>
int main()
{
    int n;
    cout << "Guess the number between the range 0 to 50: \n";
    cin >> n;
    int n1;
    srand(time(0));
    n1 = 1 + (rand() % 50);
    for (int i = 0; i < 3; i++)
    {
        if (n1 < n)
        {
            cout << "Enter the lesser number : \n";
            cin >> n;
        }
        else if (n1 > n)
        {
            cout << "Enter the greater number : \n";
            cin >> n;
        }
    }
    if (n1 == n)
    {
        cout << "You won !!";
        cout << "\nThe number generated by computer is  : \n"
             << n1;
    }
    else
    {
        cout << "you Lose !!\n";
        cout << "\nThe number generated by computer is  : \n"
             << n1;
    }

    return 0;
}