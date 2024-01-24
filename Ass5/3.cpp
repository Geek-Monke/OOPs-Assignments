#include <iostream>
using namespace std;
class employee
{
public:
    char ename[20];

    int eid, esal;
    void set_p()
    {
        cout << "Name of Employee: ";
        cin >> ename;
        cout << "Enter ID of Employee: ";
        cin >> eid;
        cout << "Enter Salary of Employee: ";
        cin >> esal;
    }
    void display_p()
    {
        cout << "---------DETAILS OF EMPLOYEE--------" << endl;
        cout << "Name of Employee: " << ename << endl;
        cout << "ID of Employee: " << eid << endl;
        cout << "Salary of Employeee: " << esal << endl;
    }
};
class eng : public employee
{
public:
    char ebranch[20];
    void set_s()
    {
        set_p();
        cout << " Enter Engineering Branch: ";
        cin >> ebranch;
    }
    void display_s()
    {
        display_p();
        cout << "Engineering Branc: " << ebranch << endl;
    }
};
class iteng : public eng
{
public:
    char pl[20];
    void set_q()
    {
        set_s();
        cout << "Enter Programming Language: ";
        cin >> pl;
    }
    void display_q()
    {
        display_s();
        cout << "Programming Language: " << pl << endl;
    }
};
int main()
{
    iteng s;
    s.set_q();
    s.display_q();
    return 0;
}