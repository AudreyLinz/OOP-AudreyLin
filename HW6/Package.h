#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
public:
    static int ID;

    Package(const std::string& name, const std::string& address, const std::string& city,
            const std::string& state, int ZIP, double weight, double cost);

    void setWeight(double weight);
    void setCostPerOunce(double cost);

    double getWeight() const { return weight; }
    double getCostPerOunce() const { return costPerOunce; }

    virtual double calculateCost() const;

    virtual void printPackageInfo() const;

protected:
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    int recipientZIP;
    double weight;
    double costPerOunce;
    int packageID;

};

#endif