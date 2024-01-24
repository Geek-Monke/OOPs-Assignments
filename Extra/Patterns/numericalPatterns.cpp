#include <iostream>
using namespace std;
void printStars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printStars2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printStars(n); 
    printStars2(n);
    return 0;
}