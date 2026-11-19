/*
  Inputs:
  -base salary
  -number of hours worked per week.
  -bonus rate in etb
  output:
  -bonus payment
  -tax deduction
  -pension salary(7% of gross salary)
  -gross salary
  -net salary

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float baseSalary, workedHours, bonusRate = 0.0;
    float bonusPay = 0.0, grossSalary = 0.0;
    float taxRate = 0.0, taxDeduction = 0.0;
    float pensionDeduction = 0.0, netSalary = 0.0;
    int choice;
    float penalty = 0,
          PENALTY_RATE;

    const float EXPECTED_HOURS = 40.0;
    const float PENSION_RATE = 0.07;

    
    cout << "Enter base salary: ";
    cin >> baseSalary;

    cout << "Enter number of hours worked in a week: ";
    cin >> workedHours;

   
    // Bonus calculation if worked hours exceed 40
    PENALTY_RATE = baseSalary/EXPECTED_HOURS;
    if (workedHours >= EXPECTED_HOURS)
    {
        float overtimeHours = workedHours - EXPECTED_HOURS;
        cout << "Enter bonus rate (per overtime hour): ";
        cin >> bonusRate;
        bonusPay = overtimeHours * bonusRate;
    } else {
      bonusPay = 0;
      penalty = PENALTY_RATE*(EXPECTED_HOURS - workedHours);
    }

    // 3. Gross salary
    grossSalary = baseSalary + bonusPay - penalty;

    // 4. Tax rate based on gross salary brackets
    if (grossSalary <= 3500.0)
    {
        taxRate = 0.0;
    }
    else if (grossSalary <= 10000.0)
    {
        taxRate = 0.10;
    }
    else if (grossSalary <= 25000.0)
    {
        taxRate = 0.15;
    }
    else if (grossSalary <= 50000.0)
    {
        taxRate = 0.20;
    }
    else if (grossSalary <= 100000.0)
    {
        taxRate = 0.25;
    }
    else
    {
        taxRate = 0.30;
    }

     taxDeduction = grossSalary * taxRate;
    pensionDeduction = grossSalary * PENSION_RATE;

    // 6. Net salary
    netSalary = grossSalary - taxDeduction - pensionDeduction;

    cout<<"Choose one number from the following: "<<endl;
    cout<<"1.Bonus Payment"<<endl;
    cout<<"2.Tax Deduction"<<endl;
    cout<<"3.Pension (7%)"<<endl;
    cout<<"4.Gross Salary"<<endl;
    cout<<"5.Net Salary"<<endl;
    cout<<"6.Penalty"<<endl;
    cout<<"7.All"<<endl;


    


    cout<< fixed<< setprecision(2);
    cout<<"Choice: ";
    cin>>choice;
    
    switch(choice){
        case 1:
        cout << "Bonus Payment   : " << bonusPay << endl;
        break;
        case 2:
        cout << "Tax Deduction   : " << taxDeduction << endl;
        break;
        case 3:
        cout << "Pension (7%)    : " << pensionDeduction << endl;
        break;
        case 4:
        cout << "Gross Salary    : " << grossSalary << endl;
        break;
        case 5:
        cout << "Net Salary      : " << netSalary << endl;
        break;
        case 6:
        cout<<"Penalty: "<<penalty<<endl;
        break;
        case 7:
        cout << "Bonus Payment   : " << bonusPay << endl;
        cout << "Tax Deduction   : " << taxDeduction << endl;
        cout << "Pension (7%)    : " << pensionDeduction << endl;
        cout << "Gross Salary    : " << grossSalary << endl;
        cout << "Net Salary      : " << netSalary << endl;
        cout<<"Penalty: "<<penalty<<endl;
        break;
        default:
        cout<<"invalid choice"<< endl;
    }

    return 0;
}