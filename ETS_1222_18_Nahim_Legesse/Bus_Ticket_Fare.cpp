#include <iostream>
using namespace std ;
int main () {
    float baggage_weight;
    float baggage_fare = 0;
    float total_fare;
    float passenger_fare;
    float trip_fare;
    int available_seat;
    int age;
    char destination;
    char student;



    cout << "enter number of available seats ";
    cin >> available_seat;

    if(available_seat > 0){

        cout << "Enter your destination: ";
        cout << "For Addis Ababa enter a, Bahir Dar enter b, "
            << "Jimma enter j, Dire Dawa enter d: ";

cin >> destination;

switch (destination) {

    case 'a':
        trip_fare = 200;
        break;

    case 'b':
        trip_fare = 300;
        break;

    case 'j':
        trip_fare = 400;
        break;

    case 'd':
        trip_fare = 500;
        break;

    default:
        cout << "Invalid destination!" << endl;
        break;
}

        cout << "Trip fare: " << trip_fare << " birr" << endl;
        
 
        cout << "Are you a student? (y/n): ";
        cin >> student; 
        cout << "Enter your age ";
        cin >> age;

        // calculate passenger fare based on age not the discount but what the person pays
        if(age <= 12 && student == 'y') {
            passenger_fare = trip_fare * 0.8;    //total discount of 30% for student and 50% for age
        }
        else if(age > 60 && student == 'y') {
            passenger_fare = trip_fare*0.45;     //total discount of 30% for student and 25% for age
        }
        else if(12 <= age && age < 60 && student == 'y') {
            passenger_fare = trip_fare*0.7;      //total discount of 30% for student and 0% for age
        }
        else if(age <= 12 && student == 'n') {
            passenger_fare = trip_fare*0.5;
        }
        else if(age > 60 && student == 'n') {
            passenger_fare = trip_fare*0.75;
        }
        else (12 <= age && age < 60 && student == 'n') ; {
            passenger_fare = trip_fare;
        }
        

        cout << "enter baggage weight";
        cin >> baggage_weight;


    if(baggage_weight > 20) {
        baggage_fare = (baggage_weight - 20)*10;
    }

    // Calculate total fare

    total_fare = baggage_fare + passenger_fare;

    cout << "the passanger fare is " << passenger_fare << " birr" << endl;
    cout << "the baggage fare is " << baggage_fare << "birr" << endl;
    cout << "the total fare is " << total_fare << "birr" << endl;

    }
    else {
    cout << "All seat are soldout";
    }

    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
