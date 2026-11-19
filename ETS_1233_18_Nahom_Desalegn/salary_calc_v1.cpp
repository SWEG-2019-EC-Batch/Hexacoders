#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double base_salary, pension, bonus_rate = 0, gross_salary, bonus_payment, tax_deduction, net_salary;
    float hours_worked;
    const float EXPECTED_HOURS = 40,
                PENSION_RATE = 0.07;
    float TAX_RATE;
    cout << "Base Salary: ";
    cin >> base_salary;
    int choice;
    float penalty = 0,
          PENALTY_RATE;

    if (base_salary >= 0)
    {
        cout << "Hours Worked: ";
        cin >> hours_worked;
        cout << "Bonus Rate(ETB): ";
        cin >> bonus_rate;

        if (hours_worked >= 0 && hours_worked <= 168)
        {

            if (hours_worked >= EXPECTED_HOURS)
            {
                bonus_payment = bonus_rate * (hours_worked - EXPECTED_HOURS);
            }
            else
            {
                PENALTY_RATE = base_salary / EXPECTED_HOURS;
                bonus_payment = 0;
                penalty = PENALTY_RATE * (EXPECTED_HOURS - hours_worked);
            }

            gross_salary = base_salary + bonus_payment;
            pension = PENSION_RATE * gross_salary;

            if (gross_salary >= 0 && gross_salary <= 3500)
            {
                TAX_RATE = 0;
            }
            else if (gross_salary > 3500 && gross_salary <= 10000)
            {
                TAX_RATE = 0.1;
            }
            else if (gross_salary > 10000 && gross_salary <= 25000)
            {
                TAX_RATE = 0.15;
            }
            else if (gross_salary > 25000 && gross_salary <= 50000)
            {
                TAX_RATE = 0.2;
            }
            else if (gross_salary > 50000 && gross_salary <= 100000)
            {
                TAX_RATE = 0.25;
            }
            else
            {
                TAX_RATE = 0.3;
            }

            tax_deduction = TAX_RATE * gross_salary;
            net_salary = gross_salary - tax_deduction - pension - penalty;

            cout << "Choose one number from the following: " << endl;
            cout << "1.Bonus Payment" << endl;
            cout << "2.Tax Deduction" << endl;
            cout << "3.Pension (7%)" << endl;
            cout << "4.Gross Salary" << endl;
            cout << "5.Net Salary" << endl;
            cout << "6.Penalty" << endl;
            cout << "7.All" << endl;

            cout << fixed << setprecision(2);
            cout << "Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Bonus Payment: " << bonus_payment << "ETB" << endl;
                break;
            case 2:
                cout << "Tax deduction: " << tax_deduction << "ETB" << endl;
                break;
            case 3:
                cout << "Pension (7%)    : " << pension << "ETB" << endl;
                break;
            case 4:
                cout << "Gross Salary: " << gross_salary << "ETB" << endl;
                break;
            case 5:
                cout << "Net Salary: " << net_salary << "ETB" << endl;
                break;
            case 6:
                cout << "Penalty: " << penalty << "ETB" << endl;
                break;
            case 7:
                cout << "Bonus Payment: " << bonus_payment << "ETB" << endl;
                cout << "Tax deduction: " << tax_deduction << "ETB" << endl;
                cout << "Pension (7%)    : " << pension << "ETB" << endl;
                cout << "Gross Salary: " << gross_salary << "ETB" << endl;
                cout << "Net Salary: " << net_salary << "ETB" << endl;
                cout << "Penalty: " << penalty << "ETB" << endl;
                break;
            default:
                cout << "invalid choice" << endl;
            }
        }
        else
        {
            cout << "Invalid working hours!";
        }
    }

    else
    {
        cout << "Invalid Input!";
    }

    return 0;
}