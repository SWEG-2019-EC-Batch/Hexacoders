/*
– Electricity bill
Input: Electricity units consumed

Output: Energy charge, service charge and total bill

Process:
1. Declare variables for electricity units, additional units, energy charge and total bill.
2. Define the electricity rates and service charge as constants.
3. Read the electricity units.
4. Calculate additional units using the conditional operator.
5. Calculate the energy charge using the conditional operator.
6. Calculate the total bill.
7. Display all charges to two decimal places.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int electricUnit, additionalUnit;
    double energyCharge, total;

    const int SERVICE_CHARGE = 10;
    const double FIRST_RATE = 1.50;
    const double ADDITIONAL_RATE = 2.00;

    cout<< "Enter electricity units (kWh): ";
    cin >> electricUnit;

    additionalUnit = electricUnit > 50 ? electricUnit - 50 : 0;

    energyCharge = additionalUnit != 0
                 ? (50 * FIRST_RATE) + (additionalUnit * ADDITIONAL_RATE)
                 : electricUnit * FIRST_RATE;

    total = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}

