/*
I Input/Output

    1. Input
        - Electricity units consumed in a month (in kWh).

    2. Output
        - Calculated energy charge (in Birr, formatted to 2 decimal places).
        - Fixed service charge (in Birr, formatted to 2 decimal places).
        - Total electricity bill (in Birr, formatted to 2 decimal places).

II Process (Operations)

    1. Declare variables to hold the electricity units, energy charge, and total bill, and define the fixed service charge constant.

    2. Display a prompt and read the electricity units consumed from the user.

    3. Calculate the energy charge using the conditional operator:
        - If the consumption is less than or equal to 50 units, multiply all units by 1.50 Birr.
        - Otherwise, calculate the cost of the first 50 units at 1.50 Birr each plus the remaining units (exceeding 50) at 2.00 Birr each.

    4. Calculate the total bill by adding the energy charge and the service charge.

    5. Format the output to display monetary values to 2 decimal places.

    6. Display the energy charge, service charge, and total bill, including the "Birr" unit.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables  
    int electricityUnits;
    double energyCharge, totalBill;
    #define SERVICE_CHARGE 10.00

    // input electricity units
    cout << "Enter Electricity units (in kwh) used in a month: " << endl;
    cin >> electricityUnits;

    // calculate the energy charge and total bill based on the cost of units   
    energyCharge = (electricityUnits <= 50) ? electricityUnits * 1.50 : ((50 * 1.50) + (electricityUnits - 50) * 2.00);
    totalBill = energyCharge + SERVICE_CHARGE;

    // formatted Output to 2 decimal places
    cout << fixed << setprecision(2); 

    // print out the required values
    cout << "Energy charge: " << energyCharge << "Birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << "Birr" << endl;
    cout << "Total Bill: " << totalBill << "Birr" << endl;
    
    return 0;
}

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