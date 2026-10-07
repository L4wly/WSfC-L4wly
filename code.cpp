// This project made by MehmetBH for IAU Assignment

/*
 * TOPIC: Total Monthly Payroll Calculation
 *
 * DESCRIPTION:
 * You have 10 employees in your shop, each earning a different hourly wage
 * and working a different number of hours. Write an algorithm to calculate
 * the total monthly wage for all workers. Include logic (e.g., switch-case)
 * to handle different working hour categories. Finally, implement and run the code.
 */

// You can reach project from this link https://github.com/MhmtBH/WSfC

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    // Standard work daily hour
    int dailyWorkHour = 8;

    // Developer levels involved in this project and the short definitions used for these levels >> (pt = Part Time, j = junior , i = Intermediate, s = Senior)

    // Worker Counts
    int ptWorkerCount = 1;
    int iWorkerCount = rand() % 2 + 3;
    int sWorkerCount = rand() % 2 + 1;
    int jWorkerCount = (10 - iWorkerCount - sWorkerCount - ptWorkerCount);

    // Hourly wages of developers at all levels
    int ptHourlySalary = 5;
    int jHourlySalary = 15;
    int iHourlySalary = 25;
    int sHourlySalary = 50;

    // Monthly wages of developers at all levels
    int ptMonthlySalary = 0;
    int jMonthlySalary = 0;
    int iMonthlySalary = 0;
    int sMonthlySalary = 0;

    // Basic monthly wage calculating for each level ( I use "for" in here for randomizing "overtime" for each person )
    // Part Time
    for (int i = 0; i < (ptWorkerCount); i++)
    {
        ptMonthlySalary += (dailyWorkHour / 2) * ptHourlySalary * 20;
    }
    // Junior
    for (int i = 0; i < (jWorkerCount); i++)
    {
        int overtime = rand() % 12 + 1;
        jMonthlySalary += (dailyWorkHour + overtime) * jHourlySalary * 20;
        // Intermediate
    }
    for (int i = 0; i < (iWorkerCount); i++)
    {
        int overtime = rand() % 12 + 1;
        iMonthlySalary += (dailyWorkHour + overtime) * iHourlySalary * 20;
    }
    // Senior
    for (int i = 0; i < (sWorkerCount); i++)
    {
        int overtime = rand() % 12 + 1;
        sMonthlySalary += (dailyWorkHour + overtime) * sHourlySalary * 20;
    }

    // Total Amount of Workers Wage
    int totalWorkerWage = ptMonthlySalary + sMonthlySalary + jMonthlySalary + iMonthlySalary;
    // Total Amount of Workers Insurance ( 10 = Total worker count, 700 = Insurance expense amount for each worker )
    int workersInsurance = 10 * 700;
    // Monthly Rent Amount for Our Office
    int officeRent = 3000;
    // Monthly Tax Amount ( I used a simple calculation based on the number of workers for taxes )
    int Tax = (totalWorkerWage * 20) / 100;
    // Monthly Bills
    int officeBills = 5000;
    // Calculation of our company's monthly expenses
    int companyMonthlyExpense = totalWorkerWage + officeBills + Tax + officeRent + workersInsurance;

    // A basic terminal-based user interface for our project.
    cout << "Write 0, 1, 2 or 3 for choosing function " << endl
         << "0. Demo                         (This is a simulation of workers who work for different durations and have different hourly wages)" << endl
         << "1. Monthly Wage for workers     (Random Worker Hours & Wages)" << endl
         << "2. Company's Monthly expense    (Random Worker Hours & Wages + Default Other Expenses)" << endl
         << "3. Advanced Calculating          (Random Worker Hours & Wages + Custom Other Expenses)" << endl;
    int x;
    cin >> x;
    switch (x)
    {
    // Monthly Total Worker Wage Output Function (Each worker's working hours and wage differ)
    case 0:
    {
        int monthlyWorkerWage = 0;
        for (int workerNumber = 0; workerNumber < 10; workerNumber++)
        {

            for (int workerHour = 1; workerHour < 11; workerHour++)
            {

                monthlyWorkerWage += (rand() % 100) * workerHour;
            }
        }
        cout << monthlyWorkerWage << "$ Monthly Worker Wage (Demo)";
        break;
    }

        // Output Function For Monthly Total Worker Wage
    case 1:

        cout << totalWorkerWage << " $ wage for workers salary";

        break;

    // Output Function For Default Monthly Expenses
    case 2:

        cout << companyMonthlyExpense << " $ (Tax, Insurance and other bills is included in this amount)";

        break;

    // Output Function For Advanced Monthly Expenses
    case 3:
    {

        int u_workersInsurance = 0;

        int u_officeRent = 0;

        int u_Tax = 0;

        int u_officeBills = 0;

        cout << endl
             << "Enter money amount for Insurance for per worker: ";
        cin >> u_workersInsurance;
        cout << endl
             << "Enter money amount for Rent: ";
        cin >> u_officeRent;
        cout << endl
             << "Enter money amount for Taxes: ";
        cin >> u_Tax;
        cout << endl
             << "Enter money amount for Bills: ";
        cin >> u_officeBills;
        int u_companyMonthlyExpense = totalWorkerWage + u_officeBills + u_Tax + u_officeRent + u_workersInsurance;
        cout << u_companyMonthlyExpense << " $ (Custom expenses is included in this amount)";

        break;
    }
    }
}