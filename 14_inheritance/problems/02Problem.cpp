/*
Multiple Inheritance:

Create two classes Engine and Vehicle, and then derive a class Car from both. The Car class should be able to access methods from both Engine and Vehicle. Handle the potential ambiguity in method calls using the scope resolution operator ::
*/

#include<iostream>
#include<vector>

using namespace std;

class Engine{
    private:
        string engineType;
        int horsePower;

    protected:
        float engineCapacity;

    public:
        Engine(string type, int hp, float cap): engineCapacity(cap), horsePower(hp), engineType(type){
            // cout << "Engine base class constructor called." << endl;
        }

        void start(){
            cout << "Engine stared with " << horsePower << " horse power." << endl;
        }

        void stopEngine(){
            cout << "Engine stopped." << endl;
        }

        void displayEngineDetails() const
        {
            cout << "Engine type: " << engineType << endl; 
            cout << "Engine Horse power: " << horsePower << endl; 
            cout << "Engine capacity: " << engineCapacity << endl;
        }
};

class Vehicle{
    private: 
        int numberOfWheels;
    
    protected: 
        string color;
    
    public:
        Vehicle(int w, string c): numberOfWheels(w), color(c){}

        void start(){
            cout << "Vehicle with " << numberOfWheels << " wheels started." << endl;
        }

        void stopVehicle(){
            cout << "Vehicle stopped." << endl;
        }

        void displayVehicleDetails() const {
            cout << "Number of wheels: " << numberOfWheels << endl;
            cout << "Color of vehicle: " << color << endl;
        }
};

class Car: public Engine, public Vehicle {
    private: 
        string model;
    
    public:
        Car(string m, string engineType, int hp, float engineCapacity, int wheels, string color): model(m), Engine(engineType, hp, engineCapacity), Vehicle(wheels, color) {}

        void startCar(){
            cout << model << " is ready to go!" << endl;
            Engine::start();   
            Vehicle::start(); 
        }

        void stopCar() {
            cout << model << " is stopping." << endl;
            Engine::stopEngine();   
            Vehicle::stopVehicle(); 
        }

        void displayCarDetails(){
            cout << "Car Model: " << model << endl;
            Engine::displayEngineDetails();   
            Vehicle::displayVehicleDetails(); 
        }
};


int main(){
    Car car("Toyota camry", "Petrol engine", 227, 50.2, 4, "black");
    car.startCar();
    car.stopCar();
    car.displayCarDetails();
    cout << endl;
    return 0;
}

/*
What is the :: Operator?
In C++, the scope resolution operator (::) is used to access members (variables, methods, etc.) of a class, namespace, or scope. It’s especially useful in scenarios involving:

Disambiguating names: When two classes have methods or variables with the same name (such as in multiple inheritance), the :: operator helps you specify which class’s member you want to refer to.
Accessing static members: It’s used to access static variables or methods in a class (which don’t require an instance of the class to be accessed).
Calling base class methods in derived classes: When you inherit from a base class, you can use :: to call methods from the base class explicitly.
*/