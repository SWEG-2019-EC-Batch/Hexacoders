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
    cout << "The energy charge is: " << energyCharge << " birr" << endl;
    cout << "The service charge is: " << SERVICE_CHARGE << " birr" << endl;
    cout << "The total bill is: " << total << " birr" << endl;

    return 0;
}
