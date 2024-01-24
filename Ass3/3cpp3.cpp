#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    double basic;
    double da;
    double ta;
    int yearsOfExperience;
    string designation;

    void input()
    {
        cout << "Enter employee's name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter basic salary: ";
        cin >> basic;
        da = 0.6 * basic;
        ta = 0.1 * basic;
        cout << "Enter years of experience: ";
        cin >> yearsOfExperience;
        cout << "Enter designation: ";
        cin >> designation;
    }

    double calculateTotalIncome()
    {
        double totalIncome = basic + da + ta;
        if (yearsOfExperience > 5)
        {
            totalIncome += 1200;
        }
        return totalIncome;
    }

    double calculateCostIncurred()
    {
        return basic + da + ta;
    }

    void displayInfo()
    {
        cout << "Employee's name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Basic salary: " << basic << "\n";
        cout << "DA: " << da << "\n";
        cout << "TA: " << ta << "\n";
        cout << "Years of experience: " << yearsOfExperience << "\n";
        cout << "Designation: " << designation << "\n";
        cout << "Total Income: " << calculateTotalIncome() << "\n";
        cout << "Cost Incurred: " << calculateCostIncurred() << "\n";
    }
};

int main()
{
    const int numEmployees = 3;
    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i)
    {
        cout << "Enter details for employee " << i + 1 << ":\n";
        employees[i].input();
    }

    cout << "\nEmployee Information:\n";
    for (int i = 0; i < numEmployees; ++i)
    {
        employees[i].displayInfo();
        cout << "\n";
    }

    return 0;
}