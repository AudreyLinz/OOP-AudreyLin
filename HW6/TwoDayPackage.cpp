#include <iostream>
#include <iomanip>
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee): Package(name, address, city, state, ZIP, w, cost) {
    setFlatFee(fee);
}

void TwoDayPackage::setFlatFee(double fee) {
    if (fee > 0.0) {
        flatFee = fee;
    } else {
        std::cout << "Invalid flat fee value (" << fee << "). Must be positive. Setting flat fee to 0." << std::endl;
        flatFee = 0.0;
    }
}

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + flatFee;
}

void TwoDayPackage::printPackageInfo() const {
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Two Day Package id " << packageID << ":" << std::endl; 
    std::cout << recipientName << std::endl;
    std::cout << recipientAddress << std::endl;
    std::cout << recipientCity << ", " << recipientState << " " << recipientZIP << std::endl; 
    std::cout << "Cost: $" << std::fixed << std::setprecision(4) << calculateCost() << std::endl; 
    std::cout << "------------------------------------------" << std::endl;
}