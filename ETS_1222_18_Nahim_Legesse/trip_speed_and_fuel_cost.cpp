/*
IPO

1.Input:
   -Distance traveled.
   -Time taken in hours.
   -Fuel used per 100 km.
   -Price of fuel per liter.

2.Process:
   -Divide distance by time to get the average speed.
   -Multiply distance by fuel use and divide by 100 to get the fuel used.
   -Multiply fuel used by fuel price to get the total fuel cost.

3.Output:
   -Display average speed in km/h.
   -Display total fuel used in liters.
   -Display total fuel cost in birr.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, hours, fuelUse, price;
    double speed, fuel, cost;

    cout << "Enter distance: ";
    cin >> distance;

    cout << "Enter time in hours: ";
    cin >> hours;

    cout << "Enter fuel use per 100 km: ";
    cin >> fuelUse;

    cout << "Enter fuel price per liter: ";
    cin >> price;

    speed = distance / hours;
    fuel = distance * fuelUse / 100;
    cost = fuel * price;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel << " liters" << endl;
    cout << "Fuel cost: " << cost << " birr" << endl;

    return 0;
}
