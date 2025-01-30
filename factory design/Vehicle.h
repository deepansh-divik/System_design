#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;


// abstract base class
class Vehicle{
    public:
        virtual void displayType() = 0;
        virtual ~Vehicle() {}
};

#endif