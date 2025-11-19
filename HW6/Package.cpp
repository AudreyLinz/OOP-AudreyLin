#include <iostream>
#include <iomanip>
#include "Package.h"

int Package::ID = 0;

Package::Package(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost)
    : recipientName(name), recipientAddress(address), recipientCity(city), recipientState(state), recipientZIP(ZIP) {
    
    packageID = ++ID;

    setWeight(w);
    setCostPerOunce(cost);
}

void Package::setWeight(double w) {
    if (w > 0.0) {
        weight = w;
    } else {
        std::cout << "Invalid weight value (" << w << "). Must be positive. Setting weight to 0." << std::endl;
        weight = 0.0;
    }
}

void Package::setCostPerOunce(double cost) {
    if (cost > 0.0) {
        costPerOunce = cost;
    } else {
        std::cout << "Invalid cost per ounce value (" << cost << "). Must be positive. Setting cost per ounce to 0." << std::endl;
        costPerOunce = 0.0;
    }
}

double Package::calculateCost() const {
    return weight * costPerOunce;
}

void Package::printPackageInfo() const {
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Package id " << packageID << ":" << std::endl; 
    std::cout << recipientName << std::endl;
    std::cout << recipientAddress << std::endl; 
    std::cout << recipientCity << ", " << recipientState << " " << recipientZIP << std::endl; 
    std::cout << "Cost: $" << std::fixed << std::setprecision(4) << calculateCost() << std::endl; 
    std::cout << "------------------------------------------" << std::endl;
}