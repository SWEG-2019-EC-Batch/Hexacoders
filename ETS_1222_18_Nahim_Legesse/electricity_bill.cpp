/*
PSEUDOCODE

1. Start the program.

2. Declare the following constants:
   - FIRST_BLOCK_UNITS = 50
   - FIRST_RATE = 1.50
   - EXTRA_RATE = 2.00
   - SERVICE_CHARGE = 10.00

3. Declare the variables:
   - units
   - energyCharge
   - totalBill

4. Input the number of electricity units used.

5. Calculate the energy charge:
   - If units are less than or equal to 50,
     multiply units by FIRST_RATE.
   - Otherwise,
     multiply the first 50 units by FIRST_RATE
     and multiply the remaining units by EXTRA_RATE.
   - Add both amounts to get the energy charge.

6. Calculate the total bill by adding the
   energy charge and the service charge.

7. Display the energy charge, service charge,
   and total bill in two decimal places.

8. End the program.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const int FIRST_BLOCK_UNITS = 50;
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;
    

    // Variables declaration
    int units;
    double energyCharge, totalBill;


    // Input
    cout << "Enter electricity units used: ";
    cin >> units;

    // Process
    energyCharge = (units <= FIRST_BLOCK_UNITS) ? units * FIRST_RATE : FIRST_BLOCK_UNITS * FIRST_RATE
                   + (units - FIRST_BLOCK_UNITS) * EXTRA_RATE;

    totalBill = energyCharge + SERVICE_CHARGE;

    // Output
    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << totalBill << " birr" << endl;

    return 0;
}
