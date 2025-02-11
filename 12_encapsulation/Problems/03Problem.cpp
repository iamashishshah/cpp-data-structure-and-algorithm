/*
Problem:
Implement a Car class with private attributes such as engineStatus (ON/OFF) and fuelLevel. Provide public methods to startEngine() and stopEngine(), ensuring that the engine cannot be started if the fuel is too low.

Hints:

Make sure engineStatus and fuelLevel are private, and can only be accessed via methods.
Add logic to the startEngine method that checks if the fuel level is sufficient.

*/

#include<iostream>
#include<vector>

using namespace std;

class Car{
    private: 
        bool engineStatus;
        int fuelLevel;

    public:
        Car(const bool status, const int fuelLev): engineStatus(status), fuelLevel(fuelLev){}

        void startEngine() const {
            if(this -> fuelLevel < 10){
                cout << "Can't start engine, fuel it." << endl;
            }else{
                cout << "Engine is started..." << endl;
            }
        }

        void stopEngine() const{
            if(this -> engineStatus){
                cout << "Engine stopped." << endl;
            }else{
                cout << "Engine already in stop mode." << endl;
            }
        }
};

int main(){
    Car carOne(true, 14);
    carOne.startEngine();
    cout << endl;
    return 0;
}