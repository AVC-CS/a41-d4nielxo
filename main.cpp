#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PERC19  = 0.2;
    const double PERC49  = 0.3;
    const double PERC99  = 0.4;
    const double PERC100 = 0.5;
    const double Price   = 99.00;

    double totalCost, originalAmount, discountAmount, dRate;
    int numberofSold;

    cout << "Enter the number of units sold\n";
    cin >> numberofSold;

    
    if (numberofSold < 0) {
        cout << "Error: number of units must be positive.\n";
        return 0;
    }

    if (numberofSold < 10) {
        dRate = 0.0;
    } else if (numberofSold <= 19) {
        dRate = PERC19;
    } else if (numberofSold <= 49) {
        dRate = PERC49;
    } else if (numberofSold <= 99) {
        dRate = PERC99;
    } else { 
        dRate = PERC100;
    }

    originalAmount = numberofSold * Price;
    discountAmount = originalAmount * dRate;
    totalCost      = originalAmount - discountAmount;

    cout << setprecision(2) << fixed;
    cout << "Original amount is " << originalAmount << endl;
    cout << "Discount amount is " << discountAmount << endl;
    cout << "Total Price is " << totalCost << endl;
}
