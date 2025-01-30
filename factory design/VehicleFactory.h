#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include "Car.h"
#include "Bike.h"

// Factory Method
class VehicleFactory{
    public:
        static Vehicle* createVehicle(const string& vehicleType){
            Vehicle* vehicle;

            if(vehicleType == "car" || vehicleType == "Car"){
                vehicle = new Car();
            }
            else if(vehicleType == "bike" || vehicleType == "Bike"){
                vehicle = new Bike();
            }
            else{
                vehicle = nullptr;
            }
             
            return vehicle;
        }
};

#endif