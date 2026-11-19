#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float baggage_fare, baggage_weight, total_fare, trip_fare;
    int seat_left, age, destination;
    char student;

    cout << "please enter the available number of seats: ";
    cin >> seat_left;
    if (seat_left <= 0) {
        cout << "all available seats have been sold,sorry! :( " << endl;
    } else {
    
        cout << "\nDestinations:" << endl;
        cout << "1. Addis Ababa -> Mekelle (1000 birr)" << endl;
        cout << "2. Addis Ababa -> Hawassa (450 birr)" << endl;
        cout << "3. Addis Ababa -> Gondar (800 birr)" << endl;
        cout << "4. Addis Ababa -> Adama (200 birr)" << endl;
        cout << "5. Addis Ababa -> Harar (500 birr)" << endl;
        cout << "please enter your destination number (1-5): ";
        cin >> destination;
        switch (destination) {
            case 1: trip_fare = 1000 ; break;
            case 2: trip_fare = 450; break;
            case 3: trip_fare = 800; break;
            case 4: trip_fare = 200; break;
            case 5: trip_fare = 500; break;
            default:
                cout << "invalid destination number!" << endl;
                return 0;
        }

        cout << "please enter your age: ";
        cin >> age;
        
        cout << "are you a student? (y/n): ";
        cin >> student;

        
        if (age < 12) {
            trip_fare = trip_fare - trip_fare * 0.50; 
        } else if (student == 'y' || student == 'Y') {
            trip_fare = trip_fare - trip_fare * 0.30; 
        } else if (age > 65) {
            trip_fare = trip_fare - trip_fare * 0.25; 
        }
        

        cout << "please enter the baggage weight: ";
        cin >> baggage_weight;

        
        baggage_fare = 0;
        if (baggage_weight > 20) {
            baggage_fare = (baggage_weight - 20) * 10;
        }
        total_fare = trip_fare + baggage_fare;

        cout << fixed << setprecision(2);
        cout << "your baggage fare is " << baggage_fare << endl;
        cout << "your trip fare is " << trip_fare << endl;
        cout << "your total fare is " << total_fare << endl;
    }
    return 0;
}
