/*
I Input/Output

    1. Input
        - Distance of the trip (in km).
        - Travel time in hours and minutes.
        - Fuel consumption rate (in liters per 100 km).
        - Price per liter of fuel (in birr).

    2. Output
        - Average speed (in km/h, formatted to 2 decimal places).
        - Total fuel used (in liters, formatted to 2 decimal places).
        - Total fuel cost (in birr, formatted to 2 decimal places).

II Process (Operations)

    1. Declare variables to hold the trip distance, fuel consumption rate, price per liter, hours, minutes, total hours, average speed, fuel used, and fuel cost.

    2. Display prompts and read the trip distance, travel hours and minutes, fuel consumption rate, and price per liter from the user.

    3. Convert the total travel time into decimal hours by adding the hours and the minutes divided by 60.

    4. Calculate the average speed by dividing the trip distance by the total decimal hours.

    5. Calculate the total fuel used by multiplying the fuel rate by the distance and dividing the result by 100.

    6. Calculate the total fuel cost by multiplying the total fuel used by the price per liter.

    7. Format the output to display all results to 2 decimal places.

    8. Display the average speed, total fuel used, and total fuel cost with their respective units (km/h, liters, and birr).
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