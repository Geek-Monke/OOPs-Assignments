#include <iostream>
using namespace std;
class student {
public:
    char name[100];
    int roll;
    int m1, m2, m3;
    void set_p()
    {
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Roll: ";
        cin >> roll;
        cout << "Enter marks of sub-1: ";
        cin >> m1;
        cout << "Enter marks of sub-2: ";
        cin >> m2;
        cout << "Enter marks of sub-3: ";
        cin >> m3;
    }
    void display_p()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name of Student: " << name << endl;
        cout << "Marks of Sub-1: " << m1 << endl;
        cout << "Marks of Sub-2: " << m2 << endl;
        cout << "Marks of Sub-3: " << m3 << endl;
    }
};
class sports : public student
{
    char sname[50];
    int score;

public:
    void set_s()
    {
        set_p();
        cout << "Enter the sports Name: ";
        cin >> sname;
        cout << "Enter the Score:";
        cin >> score;
    }

    void display_s()
    {
        display_p();
        cout << "Sports Name: " << sname << endl;
        cout << "Score: " << score << endl;
    }
    void tot()
    {
        int total = m1 + m2 + m3 + score;
        cout << "Total Marks: " << total;
    }
};
int main()
{
    sports s;
    s.set_s();
    s.display_s();
    s.tot();
    return 0;
}