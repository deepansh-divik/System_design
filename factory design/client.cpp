#include "VehicleFactory.h"

// client side code
int main(){
    string vehicleType;
    cin>>vehicleType;

    Vehicle* userVehicle = VehicleFactory::createVehicle(vehicleType);
    userVehicle->displayType();

    delete(userVehicle);

    return 0;
}