#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Stock {
private:
    string symbol;               // Stock's symbol 
    string name;                 // Stock's name
    double previousClosingPrice; // Price for the previous day 
    double currentPrice;         // Price for the current time 

public:
    Stock(const string& sym, const string& nm)
        : symbol(sym), name(nm), previousClosingPrice(0.0), currentPrice(0.0) {}

    string getSymbol() const { 
        return symbol; 
    }
    string getName() const { 
        return name; 
    }
    double getPreviousClosingPrice() const { 
        return previousClosingPrice;
    }
    double getCurrentPrice() const {
        return currentPrice;
    }

    void setPreviousClosingPrice(double price) { 
        previousClosingPrice = price; 
    }
    void setCurrentPrice(double price) {
        currentPrice = price; 
    }

    // Formula: (currentPrice - previousClosingPrice) / previousClosingPrice
    double getChangePercent() const {
        if (previousClosingPrice == 0.0) {
            return 0.0; // no division by zero
        }
        return (currentPrice - previousClosingPrice) / previousClosingPrice;
    }
};

int main(void) {
    Stock nvdaStock("NVDA", "NVIDIA Corp.");

    nvdaStock.setPreviousClosingPrice(27.5);

    nvdaStock.setCurrentPrice(27.6);

    cout << "Previous Closing Price: " << nvdaStock.getPreviousClosingPrice() << endl;
    cout << "Current Price: " << nvdaStock.getCurrentPrice() << endl;
    
    cout << fixed << setprecision(10); 
    cout << "Percentage Change: " << nvdaStock.getChangePercent() << endl;

    return 0;
}