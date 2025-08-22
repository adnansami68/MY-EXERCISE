//AIRVEHICLE TO DRONE

#include <iostream>
using namespace std;

// Vehicle class
class Vehicle {
protected:
    string licenseId;
    string name;
    string model;
    string speed;
    string mass;

public:
    Vehicle() {
        cout << "Vehicle default constructor called..." << endl;
        speed = "0.0";
        mass = "0.0";
    }

    Vehicle(double s, double m)
     {
        cout << "Vehicle class is going to be constructed by 2-params constructor..." << endl;
        speed = s;
        mass = m;
    }

   Vehicle(string lid, string n, string mo, double s, double ms) {
        cout << "Vehicle class is going to be constructed by 5-params constructor..." << endl;
        licenseId = lid;
        name = n;
        model = mo;
        speed = s;
        mass = ms;
    }


    ~Vehicle() {
        cout << "Vehicle destructor called..." << endl;
    }
    void move() {
        cout << "This vehicle is moving with the speed of - " << speed << " km/h" << endl;
    }
};

// Intermediate class
class AirVehicle : public Vehicle {
protected:
    double takeOff;

public:
    AirVehicle() : Vehicle() {
        cout << "AirVehicle class is going to be constructed by default constructor..." << endl;
        takeOff = 0.0;
    }

    AirVehicle(double s, double m, double dd) : Vehicle(s, m) {
        cout << "AirVehicle class is going to be constructed by 3-params constructor..." << endl;
        takeOff = dd;
    }

    AirVehicle(string lid, string n, string mo, double s, double ms, double dd)
        : Vehicle(lid, n, mo, s, ms) {
        cout << "AirVehicle class is going to be constructed by 6-params constructor..." << endl;
        takeOff = dd;
    }

    ~AirVehicle() {
        cout << "AirVehicle class is going to be destructed..." << endl;
    }
};

// Now drone is a subclass of AirVehicle
class drone : public AirVehicle {
protected:
    int propellerCount;                                //ADNAN SAMI

public:
    drone() : AirVehicle() {
        cout << "Drone class is going to be constructed by default constructor..." << endl;
        propellerCount = 0;
    }

    drone(double s, double m, double dd, int pc) : AirVehicle(s, m, dd) {
        cout << "Drone class is going to be constructed by 4-params constructor..." << endl;
        propellerCount = pc;
    }

    drone(string lid, string n, string mo, double s, double ms, double dd, int pc)
        : AirVehicle(lid, n, mo, s, ms, dd) {
        cout << "Drone class is going to be constructed by 7-params constructor..." << endl;
        propellerCount = pc;
    }

    ~drone() {
        cout << "Drone class is going to be destructed..." << endl;
    }
};

//Main Function

int main() {
    drone ADNANZED("AS-119", "ADNAN-ZED", "BD-119", 80.5, 1.2, 1.8, 4);
    ADNANZED.move();

    return 0;
}


                                            //ADNAN SAMI

