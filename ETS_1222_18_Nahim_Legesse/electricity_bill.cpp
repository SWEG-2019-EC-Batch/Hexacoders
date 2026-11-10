/*
IPO Analysis:Electricity Bill Calculation Program

1,Input:
   -Electricity units used by the customer.
2,Process:
   -Check whether the electricity units used are less than or equal to 50.
   -If the units are 50 or less, multiply the units by 1.50 birr to calculate the energy charge.
   -If the units are greater than 50, calculate the first 50 units at 1.50 birr per unit and the remaining units at 2.00 birr per unit.
   -Add the service charge of 10 birr to the energy charge to calculate the total bill.
3,Output:
   -Display the energy charge in birr.
   -Display the service charge.
   -Display the total electricity bill in birr.
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
