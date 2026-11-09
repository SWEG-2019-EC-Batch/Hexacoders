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