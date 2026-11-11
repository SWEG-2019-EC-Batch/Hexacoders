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


    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;
    cout << "Enter final exam mark (out of 100): ";
    cin >> final;

    total = (assignment * ASSIGNMENT_WEIGHT) + (midterm * MID_WEIGHT) + (final * FINAL_WEIGHT);
    result = total >= PASS_MARK ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Course Total: " << total << endl;
    cout << "Result: " << result << endl;    
    return 0;
}
