/*
– Trip speed and fuel cost
Input: Distance, hours, minutes, fuel consumption and fuel price

Output: Average speed, fuel used and fuel cost

Process:
1. Declare variables for the input values and calculated results.
2. Read the distance, travel time, fuel consumption and fuel price.
3. Convert travel time into hours using casting.
4. Calculate average speed.
5. Calculate fuel used.
6. Calculate fuel cost.
7. Display all results to two decimal places.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, timeHr, timeMin, totalTime;
    double fuelConsumption, fuelPrice;
    double avgSpeed, fuelUsed, fuelCost;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes by using space between them): ";
    cin >> timeHr >> timeMin;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter: ";
    cin >> fuelPrice;

    totalTime = timeHr + (timeMin / 60);

    avgSpeed = distance / totalTime;
    fuelUsed = (distance * fuelConsumption) / 100;
    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << avgSpeed << " km/hr" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}
