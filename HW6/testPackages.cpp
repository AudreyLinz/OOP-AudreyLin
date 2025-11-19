#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main() {
    Package p1("John Smith", "1020 Orange St", "Lakeland", "FL", 33111, 10.5, 0.4);
    TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);
    OvernightPackage p3("Don Kelly", "9 Main St", "Denver", "CO", 66666, 12.25, 0.7, 0.25);

    std::cout << "--- Testing printPackageInfo() for each object ---" << std::endl;
    p1.printPackageInfo();
    p2.printPackageInfo();
    p3.printPackageInfo();
    std::cout << "--- End of Test Run ---" << std::endl;

    return 0;
}