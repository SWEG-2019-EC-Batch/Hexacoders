/*
Input/output
1. Input:
   -Assignment mark
   -Midterm mark
   - Final exam mark

2. Process:
   - Multiply assignment mark by 0.20.
   - Multiply midterm mark by 0.30.
   - Multiply final exam mark by 0.50.
   - Add all the results to get the total mark.
   - Check if the total mark is 50 or above.
   - If it is 50 or above, the result is Pass.
   - If it is below 50, the result is Fail.

3. Output:
   - Total course mark.
   - Pass or Fail result.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;


    
    double assignment, midterm, finalExam, total;

    
    
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;
    cout << "Enter final mark (out of 100): ";
    cin >> finalExam;

    
    total = assignment * ASSIGNMENT_WEIGHT + midterm * MIDTERM_WEIGHT + finalExam * FINAL_WEIGHT;

    
    result = (total >= PASS_MARK) ? "Pass" : "Fail";

  
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
