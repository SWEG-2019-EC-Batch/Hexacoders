/*
Pseudocode:
1. START
2. READ distance, hours, minutes, fuelRate, and pricePerLiter
3. CALCULATE totalHours = hours + (minutes / 60.0)
4. CALCULATE averageSpeed = distance / totalHours
5. CALCULATE fuelUsed = (fuelRate * distance) / 100.0
6. CALCULATE fuelCost = fuelUsed * pricePerLiter
7. PRINT averageSpeed, fuelUsed, and fuelCost (formatted to 2 decimal places)
8. END
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables for trip details
    double distance, fuelRate, pricePerLiter;
    int hours, minutes;
    
    double totalHours, averageSpeed, fuelUsed, fuelCost;

    // Input trip details
    cout << "Enter distance of trip (km): ";
    cin >> distance;

    cout << "Enter travel time (first enter hours then press Enter and enter minutes): ";
    cin >> hours >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelRate;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    // Convert total travel time into decimal hours (casting minutes to double)
    totalHours = hours + (double(minutes) / 60.00);

    // Compute average speed, total fuel used, and total fuel cost
    averageSpeed = distance / totalHours;
    fuelUsed = (fuelRate * distance) / 100.0; /*(fuelRate = 100 km
                                                 fuelUsed = distance) from this  fuelUsed = (fuelRate * distance) / 100.0 */
    fuelCost = fuelUsed * pricePerLiter;

    // Output results formatted to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}