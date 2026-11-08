/*
I Input/Output

    1. Input

        Electricity units consumed (kWh).

    2.Output

        Energy charge.

        Service charge.

        Total electricity bill.

II Process (Operations)

    1. Declare variables to hold the electricity units, additional units, energy charge and total bill.

    2. Define the fixed values (first-unit rate, additional-unit rate and service charge) as constants.

    3. Display a prompt and read the electricity units consumed.

    4. Calculate the additional units by subtracting 50 from the total units if consumption exceeds 50; otherwise, assign 0.

    5. Calculate the energy charge using the conditional operator:

    6. If additional units exist, calculate the cost of the first 50 units at 1.50 birr each and the additional units at 2.00 birr each.

    7. Otherwise, multiply the total units by 1.50 birr.

    8. Calculate the total bill by adding the energy charge and service charge.

    9. Display the energy charge, service charge and total bill to two decimal places.
*/

// The complete C++ program

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int electricUnit, additionalUnit;
    double energyCharge, total;

    const int SERVICE_CHARGE = 10;
    const double FIRST_RATE = 1.5;
    const double ADDITIONAL_RATE = 2;

    cout << "Enter the electric unit(KWh): ";
    cin >> electricUnit;

    additionalUnit = electricUnit > 50 ? (electricUnit - 50) : 0;

    energyCharge = additionalUnit != 0 ? (50 * FIRST_RATE) + (additionalUnit * ADDITIONAL_RATE): electricUnit * FIRST_RATE;
    total = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "The energy charge is: " << energyCharge << endl;
    cout << "The service charge is: " << SERVICE_CHARGE << endl;
    cout << "The total bill is: " << total << endl;

    return 0;
}