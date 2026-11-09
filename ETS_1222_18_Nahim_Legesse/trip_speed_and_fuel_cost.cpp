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