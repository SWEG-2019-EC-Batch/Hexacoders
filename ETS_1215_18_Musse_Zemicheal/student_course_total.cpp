#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double assignment, midterm, finalMark;
    
    cout << "Enter assignment, midterm, and final marks: ";
    cin >> assignment >> midterm >> finalMark;

    // Calculate weighted total
    double total = (assignment * 0.20) + (midterm * 0.30) + (finalMark * 0.50);

    // Determine Pass or Fail using the conditional operator (no if)
    string status = (total >= 50) ? "Pass" : "Fail";

    // Output formatted result
    cout << fixed << setprecision(1);
    cout << total << " and " << status << endl;

    return 0;
}
