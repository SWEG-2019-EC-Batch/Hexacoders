/*
I, Input/Output
    1. Input

        Assignment mark

        Midterm mark

        Final examination mark

    2. Output

        Weighted course total (the main result)

        Pass or Fail result

II, Process (operations)

        1. Declare variables to hold the assignment mark, midterm mark, final examination, Pass or Fail result mark and calculated course total.

        2. Define the fixed values (assignment weight, midterm weight, final examination weight and pass mark) as constants.

        3. Display prompts and read the three input marks.

        4. Calculate the weighted course total using the given percentages.

        5. Determine whether the student passes or fails using the conditional operator.

        6. Display the course total to one decimal place and the Pass or Fail result.
*/

// The complete C++ program
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    double assignment, midterm, final, total;
    string result;


    const double ASSIGNMENT_WEIGHT = 0.2;
    const double MID_WEIGHT = 0.3;
    const double FINAL_WEIGHT = 0.5;
    const double PASS_MARK = 50;


    cout << "Enter assignment mark: ";
    cin >> assignment;
    cout << "Enter midterm mark: ";
    cin >> midterm;
    cout << "Enter final exam mark: ";
    cin >> final;

    total = (assignment * ASSIGNMENT_WEIGHT) + (midterm * MID_WEIGHT) + (final * FINAL_WEIGHT);
    result = total >= PASS_MARK ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Course Total: " << total << endl;
    cout << "Result: " << result << endl;    
    return 0;
}
