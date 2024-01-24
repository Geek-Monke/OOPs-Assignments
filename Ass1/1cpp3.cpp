#include <iostream>
#include <string>
class Vehicle
{
public:
    std::string modelNumber;
    double price;
    int seatCapacity;
    std::string vehicleType;

    Vehicle(const std::string &model, double cost, int seats, const std::string &type)
        : modelNumber(model), price(cost), seatCapacity(seats), vehicleType(type) {}
    void displayDetails() const
    {
        std::cout << "Model number:" << modelNumber << std::endl;
        std::cout << "Price:" << price << "INR" << std::endl;
        std::cout << "Seat Capacity:" << seatCapacity << std::endl;
        std::cout << "Vehicle Type:" << vehicleType << std::endl;
    }
};
int main()
{
    Vehicle bus("WB1234", 50000, 50, "Public");
    Vehicle car("WB7890", 30000, 5, "Private");
    std::cout << "Bus details:" << std::endl;
    bus.displayDetails();

    std::cout << "\nCar details:" << std::endl;
    car.displayDetails();
    return 0;
}