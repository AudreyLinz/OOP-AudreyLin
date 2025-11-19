#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"
#include <string>

class OvernightPackage : public Package {
public:
    OvernightPackage(const std::string& name, const std::string& address, const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee);

    void setOvernightFeePerOunce(double fee);

    virtual double calculateCost() const override;

    virtual void printPackageInfo() const override;

private:
    double overnightFeePerOunce;

#endif