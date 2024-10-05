// This program will output the inflation rates for two successive years and determine whether the inflation trend is increasing or decreasing.



#include <iostream>
using namespace std;

                // Function to get input prices from the user
void getInput(double& priceNow, double& priceOneYearAgo, double& priceTwoYearsAgo) {
    cout << "Enter the current price of the item: ";
    cin >> priceNow;
    cout << "Enter the price of the item one year ago: ";
    cin >> priceOneYearAgo;
    cout << "Enter the price of the item two years ago: ";
    cin >> priceTwoYearsAgo;
}

                // Function to calculate inflation rates for two successive years
void calculateInflationRates(double priceNow, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRate1, double& inflationRate2) {
    inflationRate1 = (priceNow - priceOneYearAgo) / priceOneYearAgo * 100;                  // Inflation rate from last year to current year
    inflationRate2 = (priceOneYearAgo - priceTwoYearsAgo) / priceTwoYearsAgo * 100;                 // Inflation rate from two years ago to last year
}

                // Function to output the results and determine the trend
void outputResults(double inflationRate1, double inflationRate2) {
    cout << "Inflation rate from last year to current year: " << inflationRate1 << "%" << endl;
    cout << "Inflation rate from two years ago to last year: " << inflationRate2 << "%" << endl;

    if (inflationRate1 > inflationRate2) {
        cout << "The inflation trend is increasing." << endl;
    }
    else if (inflationRate1 < inflationRate2) {
        cout << "The inflation trend is decreasing." << endl;
    }
    else {
        cout << "The inflation trend is stable." << endl;
    }
}

int main() {
    double priceNow, priceOneYearAgo, priceTwoYearsAgo;                 // Prices of the item
    double inflationRate1, inflationRate2;                  // Inflation rates

                    // Get input prices
    getInput(priceNow, priceOneYearAgo, priceTwoYearsAgo);

                    // Calculate the inflation rates
    calculateInflationRates(priceNow, priceOneYearAgo, priceTwoYearsAgo, inflationRate1, inflationRate2);

                    // Output the results and determine the trend
    outputResults(inflationRate1, inflationRate2);

    return 0;
}
