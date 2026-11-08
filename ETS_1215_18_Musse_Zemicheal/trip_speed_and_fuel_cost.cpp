/*
Pseudocode:
1. START
2. READ distance, hours, minutes, fuelConsumptionRate, pricePerLiter
3. COMPUTE totalHours = hours + (static_cast<double>(minutes) / 60.0)
4. COMPUTE averageSpeed = distance / totalHours
5. COMPUTE fuelUsed = distance * (fuelConsumptionRate / 100.0)
6. COMPUTE fuelCost = fuelUsed * pricePerLiter
7. PRINT averageSpeed, fuelUsed, and fuelCost (formatted to 2 decimal places)
8. END
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance;
    int hours, minutes;
    double fuelConsumptionRate, pricePerLiter;

    // Inputs
    cout << "Enter distance of trip (km): ";
    cin >> distance;
    cout << "Enter travel time (hours and minutes separated by space): ";
    cin >> hours >> minutes;
    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelConsumptionRate;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    // Type casting minutes to double for precise floating-point division
    double totalHours = hours + (static_cast<double>(minutes) / 60.0);

    // Calculations
    double averageSpeed = distance / totalHours;
    double fuelUsed = distance * (fuelConsumptionRate / 100.0);
    double fuelCost = fuelUsed * pricePerLiter;

    // Output formatted to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
