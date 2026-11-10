
/*
 * =========================================================================
 * ALGORITHM / PSEUDOCODE:
 * 1. Start
 * 2. Declare constants:
 *    - ASSIGNMENT_WEIGHT = 0.20
 *    - MIDTERM_WEIGHT    = 0.30
 *    - FINAL_WEIGHT      = 0.50
 *    - PASS_MARK         = 50.0
 * 3. Declare variables for assignmentMark, midtermMark, finalMark, and courseTotal.
 * 4. Read inputs for assignment, midterm, and final marks from the user.
 * 5. Calculate courseTotal:
 *    courseTotal = (assignmentMark * 0.20) + (midtermMark * 0.30) + (finalMark * 0.50)
 * 6. Set output formatting to fixed decimal notation with 1 decimal place (<iomanip>).
 * 7. Print the calculated courseTotal.
 * 8. Evaluate condition (courseTotal >= PASS_MARK) using the conditional operator (? :):
 *    - If TRUE, print "Pass"
 *    - If FALSE, print "Fail"
 * 9. End
 * =========================================================================
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Define constants for weights and passing grade
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // Declare variables for marks and total
    double assignmentMark = 0.0;
    double midtermMark = 0.0;
    double finalMark = 0.0;
    double courseTotal = 0.0;

    // Read inputs from the user
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignmentMark;

    cout << "Enter midterm mark (out of 100): ";
    cin >> midtermMark;

    cout << "Enter final mark (out of 100): ";
    cin >> finalMark;

    // Calculate the weighted course total
    courseTotal = (assignmentMark * ASSIGNMENT_WEIGHT) + 
                  (midtermMark * MIDTERM_WEIGHT) + 
                  (finalMark * FINAL_WEIGHT);

    // Display output with one decimal place formatting
    cout << fixed << setprecision(1);
    cout << "\nTotal: " << courseTotal << endl;
    
    // Use the conditional operator to print Pass or Fail (No if statements used)
    cout << (courseTotal >= PASS_MARK ? "Pass" : "Fail") << endl;

    return 0;
}
