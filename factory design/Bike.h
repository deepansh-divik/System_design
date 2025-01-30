#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle{
    public:
        void displayType() override {
            cout<<"This is a bike.\n";
        }
};

#endif