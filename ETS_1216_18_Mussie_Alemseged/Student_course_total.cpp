/*
I Input/Output

    1. Input
        - Assignment mark (out of 100).
        - Midterm mark (out of 100).
        - Final mark (out of 100).

    2. Output
        - Total calculated mark (formatted to 1 decimal place).
        - Pass or Fail status.

II Process (Operations)

    1. Declare variables to hold the assignment, midterm, final mark, and total mark.

    2. Display prompts and read the assignment, midterm, and final marks from the user.

    3. Calculate the total weighted mark:
        - Multiply assignment by 20% (0.20), midterm by 30% (0.30), and final exam by 50% (0.50), then sum them up.

    4. Format the output to display the total mark to 1 decimal place.

    5. Determine the pass or fail status using the conditional operator:
        - If the total mark is greater than or equal to 50, output "Pass".
        - Otherwise, output "Fail".
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

    // Calculate the weighted percentage of the input marks (20% assignment, 30% midterm, 50% final)
    total = (assignment * 0.20) + (midterm * 0.30) + (finalMark * 0.50);

    // Output total formatted to 1 decimal place
    cout << fixed << setprecision(1);
    cout << "Total Mark: " << total << endl;

    // Determine and print pass or fail status using the conditional operator (no if)
    cout << (total >= 50 ? "Pass" : "Fail") << endl;

    return 0;
}

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
