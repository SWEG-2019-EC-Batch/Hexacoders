
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
    // Declare variables  
    int electricityUnits;
    double  energyCharge, totalBill;
    #define SERVICE_CHARGE 10.00

    // input electricity units
    cout << "Enter Electricity units (in kwh) used in a month: " << endl;
    cin >> electricityUnits;

    // calculate the energy charge and total bill based on the cost of units   
    energyCharge = (electricityUnits <= 50) ?  electricityUnits * 1.50 : ((50 * 1.50) +  (electricityUnits - 50) * 2.00);
    totalBill = energyCharge + SERVICE_CHARGE;

     // formatted Output to 2 decimal places
    cout << fixed << setprecision(2); 

     // print out the required values
    cout << "Energy charge: " << energyCharge << "Birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << "Birr" << endl;
    cout << "Total Bill: " << totalBill << "Birr" << endl;
    return 0;
}