abstract class Car {
    String make;
    String model;
    int year;
    int price;
    int speed;

    Car(String make, String model, int year, int price) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.price = price;
    }
    void drive() {
        System.out.println("the car is in drive!");
    }
    void brake() {
        System.out.println("you stepped on the brakes, the car is stopping!");
    }
    int speedUp(int speed) {
        return this.speed += speed;
    }
    void getSpeed() {
        System.out.println(speed);
    }
}
class Honda extends Car{
    String color;
    String engineSize;
    int Horsepower;
    int doors;
    int mileage;


    Honda(String make, String model, int year, int price, String color, String engineSize, int Horsepower, int doors, int mileage) {
        super(make, model, year, price);
        this.color = color;
        this.engineSize = engineSize;
        this.Horsepower = Horsepower;
        this.doors = doors;
        this.mileage = mileage;
    }
}
public class CarObject {
    public static void main(String[] args) {
        Honda honda = new Honda("Honda", "Accord", 2022, 25000, "silver", "V4", 150, 4, 50000);
        honda.speedUp(100);
        honda.getSpeed();
    }
    
}
