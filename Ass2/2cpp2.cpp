#include <iostream>
#include <string>
using namespace std;
class emp
{
public:
    int id;
    string name;
    double sal;
    void getdata();
    void display();
};
void emp::getdata()
{
    cout << "Enter the ID of the employee : \n";
    cin >> id;
    cout << "Enter the Name of the employee : \n";
    cin >> name;
    cout << "Enter the Salary of the employee : \n";
    cin >> sal;
}
void emp::display()
{
    cout << "The ID of the Employee : \n"
         << id << "\n";
    cout << "The Name of the Employee : \n"
         << name << "\n";
    cout << "The Salary of the Employee : \n"
         << sal << "\n";
}
int main()
{
    emp emp1, emp2, emp3;
    emp1.getdata();
    emp2.getdata();
    emp3.getdata();
    emp1.display();
    emp2.display();
    emp3.display();
}