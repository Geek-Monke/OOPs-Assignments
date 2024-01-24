#include <iostream>
using namespace std;
class Student
{
	int roll;
	char name[100];
	int age;
	int m1, m2, m3, total;
	float avg;

public:
	void getdata()
	{
		cout << "Enter the roll of the student:";
		cin >> roll;
		cout << "Enter the name of the student: ";
		cin >> name;
		cout << "Enter the age of the student: ";
		cin >> age;
		cout << "Enter the marks of subject-1: ";
		cin >> m1;
		cout << "Enter the marks of subject-2:";
		cin >> m2;
		cout << "Enter the marks of subject-3:";
		cin >> m3;
		total = m1 + m2 + m3;
		avg = total / 3.0;
	}
	void putdata()
	{
		cout << roll << "\t\t" << name << "\t\t" << age << "\t\t" << m1 << "\t\t" << m2 << "\t\t" << m3 << endl;
	}
	int getTotal()
	{
		return total;
	}
	float getAvg()
	{
		return avg;
	}
};
int main()
{
	Student S1, S2, S3;
	S1.getdata();
	S2.getdata();
	S3.getdata();
	S1.putdata();
	S2.putdata();
	S3.putdata();
	cout << "Total Marks of Student 1  is : " << S1.getTotal() << endl;
	cout << "Average Marks of Student 1  is : " << S1.getAvg() << endl;
	cout << "--------------------------------------------------------";
	cout << "Total Marks of Student 2 is : " << S2.getTotal() << endl;
	cout << "Average Marks of Student 2  is : " << S2.getAvg() << endl;
	cout << "--------------------------------------------------------";
	cout << "Total Marks of Student 3 is : " << S3.getTotal() << endl;
	cout << "Average Marks of Student 3 is : " << S3.getAvg() << endl;
	cout << "--------------------------------------------------------";

	return 0;
}