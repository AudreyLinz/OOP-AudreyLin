#include <iostream>
#include <iomanip>
#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const std::string& name, const std::string& address, const std::string& city,const std::string& state, int ZIP, double w, double cost, double fee): Package(name, address, city, state, ZIP, w, cost) {
    setOvernightFeePerOunce(fee);
}

void OvernightPackage::setOvernightFeePerOunce(double fee) {
    if (fee > 0.0) {
        overnightFeePerOunce = fee;
    } else {
        std::cout << "Invalid overnight fee per ounce value (" << fee << "). Must be positive. Setting fee to 0." << std::endl;
        overnightFeePerOunce = 0.0;
    }
}

double OvernightPackage::calculateCost() const {
    return weight * (costPerOunce + overnightFeePerOunce);
}

void OvernightPackage::printPackageInfo() const {
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Overnight Package id " << packageID << ":" << std::endl; 
    std::cout << recipientName << std::endl; 
    std::cout << recipientAddress << std::endl; 
    std::cout << recipientCity << ", " << recipientState << " " << recipientZIP << std::endl; 
    std::cout << "Cost: $" << std::fixed << std::setprecision(4) << calculateCost() << std::endl; 
    std::cout << "------------------------------------------" << std::endl;
}