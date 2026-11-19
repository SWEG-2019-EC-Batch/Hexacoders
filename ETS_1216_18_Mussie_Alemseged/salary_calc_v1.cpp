
#include <iostream>
using namespace std;

int main()
{
    double baseSalary, penality = 0.0, totalHrsWeek, bonusRatePerHr;
    double totalBonusSalary = 0.0, grossSalary, pension, tax, netSalary;
    const int expectedHrsPerWeek = 40;

    cout << "ENTER THE TOTAL HOURS YOU SPEND WORKING PER WEEK: ";
    cin >> totalHrsWeek;
    cout << "ENTER YOUR BASE SALARY PER WEEK: ";
    cin >> baseSalary;
    cout << "ENTER BONUS RATE PER HOUR: ";
    cin >> bonusRatePerHr;

    // 1. Separate overtime bonus from undertime penalty
    if (totalHrsWeek > expectedHrsPerWeek)
    {
        totalBonusSalary = (totalHrsWeek - expectedHrsPerWeek) * bonusRatePerHr;
        penality = 0.0;
    }
    else if (totalHrsWeek < expectedHrsPerWeek)
    {
        totalBonusSalary = 0.0;
        penality = (expectedHrsPerWeek - totalHrsWeek) * (baseSalary / expectedHrsPerWeek);
    }
    else
    {
        totalBonusSalary = 0.0;
        penality = 0.0;
    }

    grossSalary = totalBonusSalary + baseSalary;

    // 2. Calculate tax brackets
    if (grossSalary <= 3500)
    {
        tax = grossSalary * 0.0;
    }
    else if (grossSalary <= 10000)
    {
        tax = grossSalary * 0.1;
    }
    else if (grossSalary <= 25000)
    {
        tax = grossSalary * 0.15;
    }
    else if (grossSalary <= 50000)
    {
        tax = grossSalary * 0.2;
    }
    else if (grossSalary <= 100000)
    {
        tax = grossSalary * 0.25;
    }
    else
    {
        tax = grossSalary * 0.3;
    }

    pension = grossSalary * 0.07;

    // 3. Calculate netSalary AFTER penality has a valid value
    netSalary = grossSalary - (tax + pension + penality);

    int display;
    cout << "\nWhich one do you want to see?" << endl;
    cout << "1. Tax\n"
         << "2. Pension\n"
         << "3. Bonus salary\n"
         << "4. Gross salary\n"
         << "5. Net salary\n"
         << "6. All\n"
         << "Enter choice (1-6): ";
    cin >> display;

    switch (display)
    {
    case 1:
        cout << "The tax is " << tax << endl;
        break;
    case 2:
        cout << "The pension is " << pension << endl;
        break;
    case 3:
        cout << "The bonus salary is " << totalBonusSalary << endl;
        break;
    case 4:
        cout << "The gross salary is " << grossSalary << endl;
        break;
    case 5:
        cout << "The net salary is " << netSalary << endl;
        break;
    default:
        cout << "The tax is " << tax << endl;
        cout << "The pension is " << pension << endl;
        cout << "The bonus salary is " << totalBonusSalary << endl;
        cout << "The gross salary is " << grossSalary << endl;
        cout << "The penalty is " << penality << endl;
        cout << "The net salary is " << netSalary << endl;
        break;
    }

    return 0;
}
