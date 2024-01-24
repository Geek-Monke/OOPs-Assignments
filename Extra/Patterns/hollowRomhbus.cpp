#include <iostream>
using namespace std;

void printStars(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        // for stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // for spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        // for stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // for spaces
        for (int j = 0; j < 2*(n-i); j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printStars(n);
    return 0;
}