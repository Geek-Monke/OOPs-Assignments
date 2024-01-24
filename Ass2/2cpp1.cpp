#include <iostream>
using namespace std;
class book
{
public:
    char title[30];
    int isbn;
    double price;
    void input();
    void output();
};
void book::input()
{
    cout << "Enter the name of the book : \n";
    cin >> title;
    cout << "Enter the isbn number of the book : \n";
    cin >> isbn;
    cout << "Enter the price of the book : \n";
    cin >> price;
}
void book::output()
{
    cout << "The name of the book is :\n"
         << title << "\n";
    cout << "The ISBN number of the book is :\n"
         << isbn << "\n";
    cout << "The price of the book is :\n"
         << price << "\n";
}
int main()
{
    book bk;
    bk.input();
    bk.output();
    return 0;
}
