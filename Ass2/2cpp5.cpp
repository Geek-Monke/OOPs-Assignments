#include <iostream>
using namespace std;
class array
{
public:
    int n, temp, sum = 0, r, p;
    float q;
    void input()
    {
        cout << "Enter a number" << endl;
        cin >> n;
    }
    void primeno()
    {
        temp = n;
        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
    }
    void print()
    {
        if (temp == sum)
        {
            p = temp * 2;
            cout << "Number is Palindrome." << p;
        }
        else
        {
            q = temp / 2;
            cout << "Number is not Palindrome." << q;
        }
    }
};
int main()
{
    array y;
    y.input();
    y.primeno();
    y.print();
    return 0;
}