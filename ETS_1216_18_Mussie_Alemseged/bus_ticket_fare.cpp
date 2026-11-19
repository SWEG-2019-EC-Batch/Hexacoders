

#include <iostream> 
using namespace std;

int main()
{
    int weight, age, sitnumber, destination;
    float fare = 0, discountRate = 0, total = 0;
    bool isStudent;

    cout << "Where do you want to go from Addis Ababa?" << endl;
    cout << "1. Debre Birhan\n"
         << "2. Adama\n"
         << "3. Bahir Dar\n"
         << "4. Nekemt\n"
         << "5. Mekele\n"
         << "6. Hawassa\n"
         << "7. Arba Minch\n"
         << "Enter choice (1-7): ";
    cin >> destination;

    switch (destination)
    {
    case 1:
        fare = 900;
        break;
    case 2:
        fare = 500;
        break;
    case 3:
        fare = 5200;
        break;
    case 4:
        fare = 4200;
        break;
    case 5:
        fare = 10200;
        break;
    case 6:
        fare = 3600;
        break;
    case 7:
        fare = 7600;
        break;
    default:
        cout << "Invalid destination choice!" << endl;
        return 0; // Stop the program early if the user enters Invalid destination choice. 
    }

    cout << "Enter available seats (sitnumber): ";
    cin >> sitnumber;

    if (sitnumber <= 0)
    {
        cout << "All seats are sold out." << endl;
        return 0;
    }

    cout << "Enter luggage weight (kg): ";
    cin >> weight;

    cout << "Enter age: ";
    cin >> age;

    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> isStudent;

    
    if (age <= 12)
    {
        if (isStudent)
            discountRate = 0.5 + 0.3; // 80% discount
        else
            discountRate = 0.5;       // 50% discount
    }
    else if (age >= 60)
    {
        if (isStudent)
            discountRate = 0.25 + 0.3; // 55% discount
        else
            discountRate = 0.25;       // 25% discount
    }
    else
    {
        if (isStudent)
            discountRate = 0.3; // 30% discount
        else
            discountRate = 0.0; // No discount
    }

    
    float discountedFare = fare - (fare * discountRate);
    float extraLuggageFee = (weight <= 20) ? 0 : (weight - 20) * 10;
    total = discountedFare + extraLuggageFee;

    cout << "Total Fare: " << total << " ETB" << endl;

    return 0;
}
