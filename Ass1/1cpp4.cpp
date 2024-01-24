#include <iostream>
using namespace std;
class linearsearch
{
public:
    int arr[10];
    int i, num, index, n;
    void input()
    {
        cout << "enter 10 numbers";
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> arr[i];
    }
    void search()
    {
        cout << "Enter the Number to be searched:";
        cin >> num;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == num)
            {
                index = i;
                break;
            }
        }
    }
    void display()
    {
        cout << "found at index no. " << index + 1;
        cout << endl;
    }
};
int main()
{
    linearsearch ob1;
    ob1.input();
    ob1.search();
    ob1.display();
    return 0;
}