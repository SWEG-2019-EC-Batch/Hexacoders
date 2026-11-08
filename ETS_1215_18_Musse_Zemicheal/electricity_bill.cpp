/*
Pseudocode:
1. START
2. READ units
3. SET SERVICE_CHARGE = 10.00
4. COMPUTE energyCharge = (units <= 50) ? (units * 1.50) : ((50 * 1.50) + ((units - 50) * 2.00))
5. COMPUTE totalBill = energyCharge + SERVICE_CHARGE
6. PRINT energyCharge, SERVICE_CHARGE, and totalBill (formatted to 2 decimal places)
7. END
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int units;
    const double SERVICE_CHARGE = 10.00;

    // Input
    cout << "Enter electricity units consumed (kWh): ";
    cin >> units;

    // Energy charge calculation using conditional operator
    double energyCharge = (units <= 50) 
        ? (units * 1.50) 
        : ((50 * 1.50) + ((units - 50) * 2.00));

    // Total bill calculation
    double totalBill = energyCharge + SERVICE_CHARGE;

    // Output formatted to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Energy Charge: " << energyCharge << " Birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " Birr" << endl;
    cout << "Total Bill: " << totalBill << " Birr" << endl;

    return 0;
}
