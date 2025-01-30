#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle{
    public:
        void displayType() override {
            cout<<"This is a car.\n";
        }
};

#endif