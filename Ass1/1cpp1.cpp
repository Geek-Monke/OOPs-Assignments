#include <iostream>
using namespace std;
class factorial
{
public:
    int n, i, fact;
    void input()
    {
        cout << "Enter a number : ";
        cin >> n;
    }
    void fact1()
    {
        fact = 1;
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }
    void output()
    {
        cout << "The factorial of " << n << " is = " << fact << endl;
    }
};
int main()
{
    factorial fac;
    fac.input();
    fac.fact1();
    fac.output();
    return 0;
}