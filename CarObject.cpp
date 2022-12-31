#include <iostream>

class Car {
    public: 
    std::string make;
    std::string model;
    int year {};
    int price {};
    int speed {};

    Car(std::string make, std::string model, int year, int price) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->price = price;
    }
    void drive() {
        std::cout << "the car is in drive!" << std::endl;
    }
    void brake() {
        std::cout << "you stepped on the brakes, the car is stopping!" << std::endl;
    }
    int speedUp(int speed) {
        return this->speed += speed;
    }
    void getSpeed() {
        std::cout << speed << std::endl;
    }
};
class Honda : public Car{
    public:
    std::string color;
    std::string engineSize;
    int Horsepower;
    int doors;

    Honda(std::string make, std::string model, int year, int price, std::string color, std::string engineSize, int Horsepower, int doors) : Car(make, model, year, price) {
        this->color = color;
        this->doors = doors;
        this->engineSize = engineSize;
        this->Horsepower = Horsepower;
    }
};

int main() {

    using std::cout;
    using std::endl;

    Honda honda("Honda", "Accord", 2022, 25000, "silver", "V4", 150, 4);
    honda.speedUp(100);
    honda.getSpeed();

    return 0;
}