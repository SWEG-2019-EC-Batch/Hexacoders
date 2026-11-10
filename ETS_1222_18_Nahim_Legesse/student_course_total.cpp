/*
PSEUDOCODE

1. Start the program.

2. Declare the following constants:
   - ASSIGNMENT_WEIGHT = 0.20
   - MIDTERM_WEIGHT = 0.30
   - FINAL_WEIGHT = 0.50
   - PASS_MARK = 50.0

3. Declare the variables:
   - assignment
   - midterm
   - finalExam
   - total

4. Input the assignment mark out of 100.

5. Input the midterm mark out of 100.

6. Input the final exam mark out of 100.

7. Calculate the course total by:
   - Multiplying the assignment mark by its weight.
   - Multiplying the midterm mark by its weight.
   - Multiplying the final exam mark by its weight.
   - Adding all three results.

8. Determine the result:
   - If the course total is greater than or equal to 50,
     display "Pass".
   - Otherwise, display "Fail".
   - Use the conditional operator.

9. Display the course total in one decimal place.

10. Display the result (Pass or Fail).

11. End the program.
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
