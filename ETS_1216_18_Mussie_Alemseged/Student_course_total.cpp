/*
Pseudocode:
1. START
2. READ assignment, midterm, and final marks
3. CALCULATE total = (assignment * 0.20) + (midterm * 0.30) + (final * 0.50)
4. PRINT total (formatted to 1 decimal place)
5. EVALUATE status = (total >= 50) ? "Pass" : "Fail"
6. PRINT status
7. END
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables for student marks
    double assignment, midterm, finalMark, total;

    // Input marks
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    
    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;
    
    cout << "Enter final mark (out of 100): ";
    cin >> finalMark;

    // Calculate the needed percentage of the input marks (20% assignment, 30% midterm, 50% final)
    total = (assignment * 0.20) + (midterm * 0.30) + (finalMark * 0.50);

    // Output total formatted to 1 decimal place
    cout << fixed << setprecision(1);
    cout << "Total Mark: " << total << endl;

    // Determine and print pass or fail status using the conditional operator (no if)
    cout << (total >= 50 ? "Pass" : "Fail") << endl;

    return 0;
}
