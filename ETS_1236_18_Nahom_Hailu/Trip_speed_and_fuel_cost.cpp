//The complete C++ code

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double distance, timeHr, timeMin, totalTime, fuelConsumption, fuelPrice, avgSpeed, fuelUsed, fuelCost;

    cout << "Enter the distance traveled in km: ";
    cin >> distance;
    cout << "Enter the travel time (first the hour second the minute separated by space): ";
    cin >> timeHr >> timeMin;
    cout << "Enter the fuel consumption of a car (liters per 100km): ";
    cin >> fuelConsumption;
    cout << "Enter the fuel price per liter (birr): ";
    cin >> fuelPrice;

    totalTime = timeHr + (timeMin/60);
    avgSpeed = distance / totalTime;
    fuelUsed = (fuelConsumption*distance)/100;
    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);
    cout << "The average speed is: " << avgSpeed << " Km/hr" << endl;
    cout << "The fuel used is: " << fuelUsed << " Liters" << endl;
    cout << "The fuel cost is: " << fuelCost << " birr" << endl;

    return 0;
}
