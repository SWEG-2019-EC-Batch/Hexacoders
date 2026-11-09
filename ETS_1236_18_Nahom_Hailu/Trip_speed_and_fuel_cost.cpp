/*
I Input/output

    1. Input

        Distance travelled in kilometres.

        Travel time in hours and minutes.

        Fuel consumption in litres per 100 kilometres.

        Fuel price per litre in birr.

    2. Output

        Average speed in kilometres per hour (km/hr).

        Total fuel used in litres.

        Total fuel cost in birr.

II Process (Operations)

    1. Declare variables to hold distance, hours, minutes, total time, fuel consumption, fuel price, average speed, fuel used and fuel cost.

    2. Display prompts and read the distance, travel time, fuel consumption and fuel price.

    3. Convert the travel time into hours by dividing the minutes by 60 and adding the result to the hours.

    4. Calculate average speed by dividing the distance by the total travel time.

    5. Calculate total fuel used by multiplying the distance by fuel consumption and dividing the result by 100.

    6. Calculate total fuel cost by multiplying the fuel used by the fuel price.

    7. Display average speed, fuel used and fuel cost to two decimal places.
*/


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
