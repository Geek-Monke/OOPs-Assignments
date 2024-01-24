#include <iostream>
#include <string>

class Customer
{
public:
    int customerNumber;
    std::string customerName;
    double unitsConsumed;

    void input()
    {
        std::cout << "Enter customer number: ";
        std::cin >> customerNumber;
        std::cout << "Enter customer name: ";
        std::cin.ignore(); // Clear buffer
        std::getline(std::cin, customerName);
        std::cout << "Enter units consumed: ";
        std::cin >> unitsConsumed;
    }

    double calculateBill()
    {
        double bill = 0.0;
        if (unitsConsumed <= 100)
        {
            bill = unitsConsumed * 1.2;
        }
        else if (unitsConsumed <= 300)
        {
            bill = 100 * 1.2 + (unitsConsumed - 100) * 2;
        }
        else
        {
            bill = 100 * 1.2 + 200 * 2 + (unitsConsumed - 300) * 3;
        }
        return bill;
    }

    void displayBill()
    {
        double bill = calculateBill();
        std::cout << "Customer number: " << customerNumber << "\n";
        std::cout << "Customer name: " << customerName << "\n";
        std::cout << "Units consumed: " << unitsConsumed << "\n";
        std::cout << "Electric bill: Rs. " << bill << "\n";
    }
};

int main()
{
    const int numCustomers = 3;
    Customer customers[numCustomers];

    for (int i = 0; i < numCustomers; ++i)
    {
        std::cout << "Enter details for customer " << i + 1 << ":\n";
        customers[i].input();
    }

    std::cout << "\nElectric Bills:\n";
    for (int i = 0; i < numCustomers; ++i)
    {
        customers[i].displayBill();
        std::cout << "\n";
    }

    return 0;
}