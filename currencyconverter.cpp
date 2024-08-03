// Ward - Currency Converter
// 08/03/2024

#include <iostream>
#include <iomanip>

using namespace std;

double getExchangeRate(const string& currencyCode) {
    if (currencyCode == "EUR") {
        return 1 / 1.09;
    } else if (currencyCode == "GBP") {
        return 1 / 1.487;
    } else if (currencyCode == "JPY") {
        return 1 / 0.00955;
    } else if (currencyCode == "INR") {
        return 1 / 0.013;
    } else if (currencyCode == "CNY") {
        return 1 / 0.14;
    } else {
        cerr << "Invalid currency code: " << currencyCode << endl;
        return 0;
    }
}

int main() {
    double usdAmount;

    cout << "Enter the amount in US Dollars for conversion: ";
    if (!(cin >> usdAmount)) {
        cerr << "Invalid input. Please enter a numeric value." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << usdAmount << " USD is equivalent to:\n";
    cout << "Euros: " << getExchangeRate("EUR") * usdAmount << " EUR" << endl;
    cout << "British Pounds: " << getExchangeRate("GBP") * usdAmount << " GBP" << endl;
    cout << "Japanese Yen: " << getExchangeRate("JPY") * usdAmount << " JPY" << endl;
    cout << "Indian Rupees: " << getExchangeRate("INR") * usdAmount << " INR" << endl;
    cout << "Chinese Yuan: " << getExchangeRate("CNY") * usdAmount << " CNY" << endl;

    return 0;
}
