#include <iostream>
#include <vector>

class Employee {
private:
    int age;
    double basic;
    double da;  // DA is 60% of basic
    double ta;  // TA is 10% of basic
    int experience;

public:
    // Parameterized constructor
    Employee(int age, double basic, int experience) {
        this->age = age;
        this->basic = basic;
        this->da = 0.6 * basic;
        this->ta = 0.1 * basic;
        this->experience = experience;
    }

    // Function to calculate total income, considering experience bonus
    double calculateTotalIncome() const {
        double totalIncome = basic + da + ta;
        if (experience > 5) {
            totalIncome += 1200;
        }
        return totalIncome;
    }

    // Function to display employee details
    void display() const {
        std::cout << "Age: " << age << "\n";
        std::cout << "Basic: " << basic << "\n";
        std::cout << "DA: " << da << "\n";
        std::cout << "TA: " << ta << "\n";
        std::cout << "Experience: " << experience << " years\n";
        std::cout << "Total Income: " << calculateTotalIncome() << "\n\n";
    }
};

int main() {
    // Creating employees
    Employee employee1(25, 5000, 3);
    Employee employee2(30, 6000, 6);
    Employee employee3(28, 5500, 4);

    // Displaying individual employee details
    std::cout << "Employee 1:\n";
    employee1.display();

    std::cout << "Employee 2:\n";
    employee2.display();

    std::cout << "Employee 3:\n";
    employee3.display();

    // Displaying total salary paid to all employees
    double totalSalary = employee1.calculateTotalIncome() +
                         employee2.calculateTotalIncome() +
                         employee3.calculateTotalIncome();

    std::cout << "Total Salary Paid to All Employees: " << totalSalary << "\n";

    return 0;
}
