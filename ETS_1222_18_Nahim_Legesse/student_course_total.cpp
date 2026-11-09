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

    
    const char* result = (total >= PASS_MARK) ? "Pass" : "Fail";

  
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
