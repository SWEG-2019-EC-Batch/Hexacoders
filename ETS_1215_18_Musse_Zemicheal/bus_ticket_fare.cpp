 bus_ticket_fare.cpp
#include <iostream>
using namespace std;

int main(){
    float baggage_weight;
    float baggage_fare = 0;
    float total_fare;
    float passenger_fare;
    int available_seat;
    int age;
    int route_choice;
    char is_student; // 'y' for yes, 'n' for no

    // Prompt for available seats first
    cout << "Enter number of seats available: ";
    cin >> available_seat;

    if (available_seat > 0){
        // Route Selection using switch statement
        cout << "\n--- Select Destination from Addis Ababa ---\n";
        cout << "1. Hawassa (Fare: 300 birr)\n";
        cout << "2. Bahir Dar (Fare: 450 birr)\n";
        cout << "3. Dire Dawa (Fare: 400 birr)\n";
        cout << "4. Gondar (Fare: 500 birr)\n";
        cout << "5. Jimma (Fare: 350 birr)\n";
        cout << "Enter your route choice (1-5): ";
        cin >> route_choice;

        int trip_fare = 0; // Initialize trip fare

        switch (route_choice) {
            case 1:
                trip_fare = 300;
                break;
            case 2:
                trip_fare = 450;
                break;
            case 3:
                trip_fare = 400;
                break;
            case 4:
                trip_fare = 500;
                break;
            case 5:
                trip_fare = 350;
                break;
            default:
                cout << "Invalid route choice! Defaulting to Hawassa (300 birr).\n";
                trip_fare = 300;
                break;
        }

        cout << "Enter your age: ";
        cin >> age;

        // Ask if passenger is a student
        cout << "Are you a student? (y/n): ";
        cin >> is_student;

        // Discount logic using else if ladder
        if (age <= 12) {
            passenger_fare = trip_fare - (trip_fare * 0.5); // 50% discount for children
        }
        else if (is_student == 'y' || is_student == 'Y') {
            passenger_fare = trip_fare - (trip_fare * 0.3); // 30% discount for students
        }
        else if (age >= 60) {
            passenger_fare = trip_fare - (trip_fare * 0.25); // 25% discount for seniors
        }
        else {
            passenger_fare = trip_fare; // Standard fare
        }

        // Baggage weight handling
        cout << "Enter the weight of the baggage in kg: ";
        cin >> baggage_weight;

        if (baggage_weight > 20) {
            baggage_fare = (baggage_weight - 20) * 10; // 10 birr extra per kg over 20kg
        } 

        total_fare = passenger_fare + baggage_fare;

        // Print final details
        cout << "\n========== TRIP DETAILS ==========\n";
        cout << "The passenger fare is " << passenger_fare << " birr" << endl;
        cout << "The baggage fare is " << baggage_fare << " birr" << endl;
        cout << "The total fare is " << total_fare << " birr" << endl;
        cout << "==================================\n";
    }
    else {
        cout << "All seats are sold out." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    float baggage_weight;
    float baggage_fare = 0;
    float total_fare;
    float passenger_fare;
    int available_seat;
    int age;
    int route_choice;
    char is_student; // 'y' for yes, 'n' for no

    // Prompt for available seats first
    cout << "Enter number of seats available: ";
    cin >> available_seat;

    if (available_seat > 0){
        // Route Selection using switch statement
        cout << "\n--- Select Destination from Addis Ababa ---\n";
        cout << "1. Hawassa (Fare: 300 birr)\n";
        cout << "2. Bahir Dar (Fare: 450 birr)\n";
        cout << "3. Dire Dawa (Fare: 400 birr)\n";
        cout << "4. Gondar (Fare: 500 birr)\n";
        cout << "5. Jimma (Fare: 350 birr)\n";
        cout << "Enter your route choice (1-5): ";
        cin >> route_choice;

        int trip_fare = 0; // Initialize trip fare

        switch (route_choice) {
            case 1:
                trip_fare = 300;
                break;
            case 2:
                trip_fare = 450;
                break;
            case 3:
                trip_fare = 400;
                break;
            case 4:
                trip_fare = 500;
                break;
            case 5:
                trip_fare = 350;
                break;
            default:
                cout << "Invalid route choice! Defaulting to Hawassa (300 birr).\n";
                trip_fare = 300;
                break;
        }

        cout << "Enter your age: ";
        cin >> age;

        // Ask if passenger is a student
        cout << "Are you a student? (y/n): ";
        cin >> is_student;

        // Discount logic using else if ladder
        if (age <= 12) {
            passenger_fare = trip_fare - (trip_fare * 0.5); // 50% discount for children
        }
        else if (is_student == 'y' || is_student == 'Y') {
            passenger_fare = trip_fare - (trip_fare * 0.3); // 30% discount for students
        }
        else if (age >= 60) {
            passenger_fare = trip_fare - (trip_fare * 0.25); // 25% discount for seniors
        }
        else {
            passenger_fare = trip_fare; // Standard fare
        }

        // Baggage weight handling
        cout << "Enter the weight of the baggage in kg: ";
        cin >> baggage_weight;

        if (baggage_weight > 20) {
            baggage_fare = (baggage_weight - 20) * 10; // 10 birr extra per kg over 20kg
        } 

        total_fare = passenger_fare + baggage_fare;

        // Print final details
        cout << "\n========== TRIP DETAILS ==========\n";
        cout << "The passenger fare is " << passenger_fare << " birr" << endl;
        cout << "The baggage fare is " << baggage_fare << " birr" << endl;
        cout << "The total fare is " << total_fare << " birr" << endl;
        cout << "==================================\n";
    }
    else {
        cout << "All seats are sold out." << endl;
    }

    return 0;
}
