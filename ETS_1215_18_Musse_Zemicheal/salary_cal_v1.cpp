/*
Exercise 32 - salary calculator
   Design and develop a program that use to calcualte salary of an employee
   The programm will ask the user to input the base salary and  the number of hours worked in a week
   An employee is expected to work for 40 hrs per week.
   If the worker hours exceed the expectd working hr the employee is entitled for bonus payment
   The bonus rate should be input from the user
   The program is expected calculate gross salary, bonus payment, tax deduction, and net salary.
   The program also deduct 7% of the gross salary as pension.
   The tax is calculated from gross salary as follow:
        from 0-3500 is free
        from 3500-10,000 included is 10%
        from 10,000-25,000 included is 15%
        from 25,000- 50,000 included is 20%
        from 50,000-100,000 included is 25%
        above 100,000 is 30%

    both pension and tax are applied on gross salary
*/   
#include <iostream>
using namespace std;

int main (){
    double base_salary, hours_worked, bonus_rate, penality_rate;
    
    cout << "Enter base salary: ";
    cin >> base_salary;
    cout << "Enter number of hours worked in a week: ";
    cin >> hours_worked;
    cout << "Enter bonus_rate: ";
    cin >> bonus_rate;
    cout<< "enter penality_rate: ";
    cin >> penality_rate;

    double expected_hours = 40.0;
    double gross_salary = base_salary;
    double bonus_payment = 0.0;
    double penality_payment = 0.0;
    if (hours_worked > expected_hours) {
        double extra_hours = hours_worked - expected_hours;
        bonus_payment = extra_hours * bonus_rate;
        gross_salary += bonus_payment;
    } else if (hours_worked < expected_hours) {
        double unworked_hours = expected_hours - hours_worked;
        penality_payment =  unworked_hours* penality_rate;
        gross_salary -= penality_payment;
    }else { if (hours_worked = expected_hours) {
        gross_salary = base_salary;
    }    
    }
    

    double pension_deduction = gross_salary * 0.07;
    double tax_deduction = 0.0;

    if (gross_salary > 100000) {
        tax_deduction = gross_salary * 0.30;
    } else if (gross_salary > 50000) {
        tax_deduction = gross_salary * 0.25;
    } else if (gross_salary > 25000) {
        tax_deduction = gross_salary * 0.20;
    } else if (gross_salary > 10000) {
        tax_deduction = gross_salary * 0.15;
    } else if (gross_salary > 3500) {
        tax_deduction = gross_salary * 0.10;
    }

    double net_salary = gross_salary - pension_deduction - tax_deduction;
    int choice;
    cout<<"\n...choose what do you want to diplay...\n";
    cout<< "press 1 for Gross salary:"<<endl;
    cout<< "press 2 for bonus payment:"<<endl;
    cout<< "press 3 fo pension Deduction:"<<endl;
    cout<< "press 4 fo tax deduction:"<<endl;
    cout<< "press 5 fo net salary:"<<endl;
    cout<< "press 6 fo penality payment:"<<endl;
    cout<< "press 7 fo all of them:"<<endl;
    cout<<"enter number (1-7):";
    cin>>choice;

    switch(choice) {
        case 1: cout << "Gross Salary: " << gross_salary << endl;
              break;
        case 2: cout << "Bonus Payment: " << bonus_payment << endl;
              break;
        case 3:  cout << "Pension Deduction: " << pension_deduction << endl;
              break;
        case 4: cout << "Tax Deduction: " << tax_deduction << endl;
              break;
        case 5: cout << "Net Salary: " << net_salary << endl;
              break;
        case 6: cout <<"penality payment: "<< penality_payment <<endl;
              break;
        case 7: cout << "Gross Salary: " << gross_salary << endl;
                cout << "Bonus Payment: " << bonus_payment << endl;
                cout << "Pension Deduction: " << pension_deduction << endl;
                cout << "Tax Deduction: " << tax_deduction << endl;
                cout << "Net Salary: " << net_salary << endl;
                break;
        default: cout << "invalid number. enter number (1-6):";
        
    }
    return 0;
}
