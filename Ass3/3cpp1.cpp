#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll;
    char name[100];
    int age;
    int marks[3];

    void input()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; ++i)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int calculateTotalMarks()
    {
        int total = 0;
        for (int i = 0; i < 3; ++i)
        {
            total += marks[i];
        }
        return total;
    }
};

int main()
{
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input();
    }

    int maxTotalMarks = 0;
    int topperIndex = -1;

    for (int i = 0; i < numStudents; ++i)
    {
        int totalMarks = students[i].calculateTotalMarks();
        if (totalMarks > maxTotalMarks)
        {
            maxTotalMarks = totalMarks;
            topperIndex = i;
        }
    }

    if (topperIndex != -1)
    {
        cout << "Topper of BCA 3rd semester:\n";
        cout << "Roll: " << students[topperIndex].roll << "\n";
        cout << "Name: " << students[topperIndex].name << "\n";
        cout << "Age: " << students[topperIndex].age << "\n";
        cout << "Total Marks: " << maxTotalMarks << "\n";
    }
    else
    {
        cout << "No students found.\n";
    }

    return 0;
}