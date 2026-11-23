/*
Design and develop a program that is used to calculate the salary of both employees and laborers. The program will ask the user to select the worker type (Employee or Laborer).

For an employee, the program will ask the user to input the base salary, the number of hours worked in a week, and the bonus rate per extra hour. An employee is expected to work for 40 hours per week. If the worked hours exceed the expected working hours, the employee is entitled to a bonus payment. The bonus payment should be calculated based on the number of extra hours worked and the bonus rate entered by the user.

The program is expected to calculate Gross Salary, Bonus Payment, Tax Deduction, Pension Deduction, and Net Salary.

The program also deducts 7% of the gross salary as pension.

The tax is calculated as follows on gross salary:

from 0 up to 3,500 = 0%
from 3,500 up to 10,000 (included) = 10%
from 10,000 up to 25,000 = 15%
from 25,000 up to 50,000 = 20%
from 50,000 up to 100,000 = 25%
if > 100,000 = 30%

NB: Both tax and pension are applied to gross salary.

For a laborer, there is no permanent or base salary. The program will ask the user to input the number of worked hours and the hourly rate. The laborer may receive a bonus if available. If the laborer damages any machinery, a salary penalty should be applied. Laborers are not subject to tax or pension deductions.

Inputs:

Common Inputs:
- Worker Type
- Output Menu Choice

Employee Inputs:
- Base Salary
- Worked Hours
- Bonus Rate Per Extra Hour

Laborer Inputs:
- Worked Hours
- Hourly Rate
- Bonus Amount (if available)
- Machinery Damage Status
- Penalty Amount (if machinery is damaged)

Outputs:
- Gross Salary
- Bonus Payment
- Penalty
- Tax Deduction
- Pension Deduction
- Net Salary

Process:

For Employee:

Bonus Payment = (Worked Hours - 40 hrs) * Bonus Rate

Gross Salary = Base Salary + Bonus Payment

Tax Deduction = Gross Salary * Tax Rate

Pension = Gross Salary * 0.07

Net Salary = Gross Salary - Tax Deduction - Pension

For Laborer:

Gross Salary = (Worked Hours * Hourly Rate) + Bonus Amount

Tax Deduction = 0

Pension = 0

Net Salary = Gross Salary - Penalty

The program should use a switch statement to allow the user to display Gross Salary, 
 Bonus Payment, Penalty, Tax Deduction, Pension, Net Salary, or all salary information.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function to determine tax rate
double calculateTaxRate(double grossSalary)
{
    if (grossSalary <= 3500)
        return 0.0;
    else if (grossSalary <= 10000)
        return 0.10;
    else if (grossSalary <= 25000)
        return 0.15;
    else if (grossSalary <= 50000)
        return 0.20;
    else if (grossSalary <= 100000)
        return 0.25;
    else
        return 0.30;
}

int main()
{
    cout << fixed << setprecision(2);

    int workerType;
    int choice;

    double workedHours = 0;
    double grossSalary = 0;
    double bonusPayment = 0;
    double taxDeduction = 0;
    double pension = 0;
    double penalty = 0;
    double netSalary = 0;

    const int EXPECTED_HOURS = 40;
    const double PENSION_RATE = 0.07;

    cout << "=========== SALARY CALCULATOR V2 ===========" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Select worker type: ";
    cin >> workerType;

    switch(workerType)
    {
        case 1:
        {
            // Employee Section
            double baseSalary;
            double bonusRate;

            cout << "\nEnter Base Salary: ";
            cin >> baseSalary;

            cout << "Enter Worked Hours: ";
            cin >> workedHours;

            cout << "Enter Bonus Rate Per Hour: ";
            cin >> bonusRate;

            // Bonus calculation
            if(workedHours > EXPECTED_HOURS)
            {
                bonusPayment =
                    (workedHours - EXPECTED_HOURS) * bonusRate;
            }

            grossSalary = baseSalary + bonusPayment;

            taxDeduction =
                grossSalary * calculateTaxRate(grossSalary);

            pension = grossSalary * PENSION_RATE;

            netSalary =
                grossSalary - taxDeduction - pension;

            break;
        }

        case 2:
        {
            // Laborer Section
            double hourlyRate;
            int damageStatus;
            int bonusStatus;

            cout << "\nEnter Worked Hours: ";
            cin >> workedHours;

            cout << "Enter Hourly Rate: ";
            cin >> hourlyRate;

            grossSalary = workedHours * hourlyRate;

            cout << "Did the laborer damage machinery?" << endl;
            cout << "1. Yes" << endl;
            cout << "0. No" << endl;
            cout << "Choice: ";
            cin >> damageStatus;

            if(damageStatus == 1)
            {
                cout << "Enter Penalty Amount: ";
                cin >> penalty;
            }

            cout << "Does the laborer have bonus?" << endl;
            cout << "1. Yes" << endl;
            cout << "0. No" << endl;
            cout << "Choice: ";
            cin >> bonusStatus;

            if(bonusStatus == 1)
            {
                cout << "Enter Bonus Amount: ";
                cin >> bonusPayment;
            }

            grossSalary += bonusPayment;

            taxDeduction = 0;
            pension = 0;

            netSalary =
                grossSalary - penalty;

            break;
        }

        default:
            cout << "Invalid Worker Type!" << endl;
            return 0;
    }

    // Output Menu
    cout << "\n========== OUTPUT MENU ==========" << endl;
    cout << "1. Gross Salary" << endl;
    cout << "2. Bonus Payment" << endl;
    cout << "3. Penalty" << endl;
    cout << "4. Tax Deduction" << endl;
    cout << "5. Pension" << endl;
    cout << "6. Net Salary" << endl;
    cout << "7. Display All" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Gross Salary = "
                 << grossSalary << endl;
            break;

        case 2:
            cout << "Bonus Payment = "
                 << bonusPayment << endl;
            break;

        case 3:
            cout << "Penalty = "
                 << penalty << endl;
            break;

        case 4:
            cout << "Tax Deduction = "
                 << taxDeduction << endl;
            break;

        case 5:
            cout << "Pension = "
                 << pension << endl;
            break;

        case 6:
            cout << "Net Salary = "
                 << netSalary << endl;
            break;

        case 7:
            cout << "\n------ SALARY REPORT ------" << endl;
            cout << "Gross Salary : "
                 << grossSalary << endl;
            cout << "Bonus Payment: "
                 << bonusPayment << endl;
            cout << "Penalty      : "
                 << penalty << endl;
            cout << "Tax Deduction: "
                 << taxDeduction << endl;
            cout << "Pension      : "
                 << pension << endl;
            cout << "Net Salary   : "
                 << netSalary << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}