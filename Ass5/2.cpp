#include <iostream>
using namespace std;
class eng
{
public:
    char estream[20];
    int pcode, tsalary, insentive1;
    void set_p()
    {
        cout << "Engineering Stream: ";
        cin >> estream;
        cout << "Enter the P_Code: ";
        cin >> pcode;
        cout << "Enter Total Salary: ";
        cin >> tsalary;
    }
    void display_p()
    {
        cout << "___\tDetails Description\t___" << endl;
        cout << "Engineering Stream: " << estream << endl;
        cout << "P_Code: " << pcode << endl;
    }
};
class mba : public eng
{
    char institute[50], spec[20];

    int eres, mres, cscore, insentive2;

public:
    void set_s()
    {
        set_p();
        cout << " Enter CAT Score: ";
        cin >> cscore;
        cout << "Enter MBA Institute: ";
        cin >> institute;
        cout << "Enter Specialazation: ";
        cin >> spec;
    }
    void display_s()
    {
        display_p();
        cout << "CAT Score: " << cscore << endl;
        cout << "MBA Institute: " << institute << endl;
        cout << "Specialazation: " << spec << endl;
    }
    void tot()
    {
        int esal = 9000 * 0.6;
        int msal = 10000 * 0.4;
        int gtsal = tsalary + esal + msal;
        cout << "Total Salary: " << tsalary << endl;
        cout << "Engineering incentive: " << esal << endl;
        cout << "Management incentive: " << msal << endl;
        cout << "Grand Total Salary: " << gtsal << endl;
    }
};
int main()
{
    mba s;
    s.set_s();
    s.display_s();
    s.tot();
    return 0;
}