#include <iostream>
using namespace std;
void printStars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
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