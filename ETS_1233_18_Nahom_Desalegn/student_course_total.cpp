/*
– Student course total
Input: Assignment, midterm and final marks

Output: Weighted course total and Pass/Fail result

Process:
1. Declare variables for the three marks and the course total.
2. Define the weights and pass mark as constants.
3. Read the three marks.
4. Calculate the weighted course total.
5. Use the conditional operator to determine Pass or Fail.
6. Display the total to one decimal place and the result.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double assignment, midterm, finalMark, total;

    const double ASSIGNMENT_WEIGHT = 0.2;
    const double MID_WEIGHT = 0.3;
    const double FINAL_WEIGHT = 0.5;
    const double PASS_MARK = 50;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalMark;

    total = (assignment * ASSIGNMENT_WEIGHT)
          + (midterm * MID_WEIGHT)
          + (finalMark * FINAL_WEIGHT);

    cout << fixed << setprecision(1);

    cout << "Course Total: " << total << endl;
    cout << "Result: " << (total >= PASS_MARK ? "Pass" : "Fail") << endl;

    return 0;
}
