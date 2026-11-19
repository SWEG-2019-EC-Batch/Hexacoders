/*
         ---
Desgn and develop a program that used to calculate salary of an employee, the program will ask the user to input the base salary and the number of hours worked
in a week,
an employee is expected to work for 40 hours per week.
if the worked hours exceed the expected workng hour the employee is entitled for bonus payment
the bonus rate should be input from the user the program is expected to calculate : Gross salary, bonus payment, task deduction and net salary.
The program also deduct 7% of the gross salary as pension.
The tax is calculated as follows on gross salary :
from 0 up to 3500 is free of tax,
from 3500 up to 10,000(included)= 10%
from 10,000 to 25,000 15%
from 25000 to 50,000 20%
50,000 to 100,000 = 25%
if > 100,000 = 30%
NB : bith tax and pension are applied to gross salary

Inputs : Base salary per week, bonus payment per hour, worked hours
outputs : Gross salary, Bonus payment , net salary

process : Bonus payment = (worked hours - 40hrs)* bonus rate for each extra hours
          pension = gross salary * 0.7
          tax = gross salary * tax per range
          net salary = gross salary - tax - payment
*/

#include <iostream>
using namespace std;
int main()
{

    int workedHours = 0, bonusRate;
    float base_salary, tax, pension, gross_salary, net_salary;
    const int WEEKLY_HOUR = 40;

    cout << "enter your base salary: ";
    cin >> base_salary;

    cout << "Enter your weekly worked hours: ";
    cin >> workedHours;

    cout << "enter your bonus rate(etb) : ";
    cin >> bonusRate;

    float bonusPayment = 0;
    float penality = 0;

    if (workedHours > WEEKLY_HOUR)
    {
        bonusPayment = (workedHours - WEEKLY_HOUR) * bonusRate;
    }
    else if (workedHours < WEEKLY_HOUR)
    {
        penality = (WEEKLY_HOUR - workedHours) * base_salary/40;

    }

    gross_salary = base_salary + bonusPayment - penality;

    if (gross_salary <= 3500)
    {
        tax = 0;
    }
    else if (gross_salary <= 10000)
    {
        tax = (gross_salary - 3500) * 0.1;
    }
    else if (gross_salary <= 25000)
    {
        tax = (6500 * 0.1) + (gross_salary - 10000) * 0.15;
    }
    else if (gross_salary <= 50000)
    {
        tax = (6500 * 0.10) + (15000 * 0.15) + (gross_salary - 25000) * 0.2;
    }
    else if (gross_salary <= 100000)
    {
        tax = (6500 * 0.1) + (15000 * 0.15) + (25000 * 0.2) + (gross_salary - 50000) * 0.25;
    }
    else
    {
        tax = (6500 * 0.1) + (15000 * 0.15) + (25000 * 0.2) + (50000 * 0.25) + (gross_salary - 100000) * 0.30;
    }

    pension = gross_salary * 0.07;
    net_salary = gross_salary - (tax + pension);

    int choice;

    cout << "what you would like to display? " << endl;
    cout << "1. Base salary " << endl;
    cout << "2. bonus payment" << endl;
    cout << "3. Gross salary" << endl;
    cout << "4. pension" << endl;
    cout << "5. Tax" << endl;
    cout << "6. Net salary" << endl;
    cout << "\n enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "base salary: " << base_salary << "ETB" << endl;
        break;
    case 2:
        cout << "bonus payment: " << bonusPayment << "ETB" << endl;
        break;
    case 3:
        cout << "Gross salary: " << gross_salary << "ETB" << endl;
        break;
    case 4:
        cout << "pension: " << pension << "ETB" << endl;
        break;
    case 5:
        cout << "Tax: " << tax << "ETB" << endl;
        break;
    case 6:
        cout << "Net salary: " << net_salary << "ETB" << endl;
        break;
    default:
        cout << "invalid choice" << endl;
    }

    return 0;
}