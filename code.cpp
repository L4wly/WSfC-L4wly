#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(0));

int dailyWorkHours = 8;

int ptWorkerCount = 1;
int iWorkerCount = rand() % 2 + 3;
int sWorkerCount = rand() % 2 + 1;
int jWorkerCount = (10 - iWorkerCount - sWorkerCount - ptWorkerCount);

int ptHourlySalary = 5;
int jHourlySalary = 15;
int iHourlySalary = 25;
int sHourlySalary = 50;

int ptMonthlySalary = 0;
int jMonthlySalary = 0;
int iMonthlySalary = 0;
int sMonthlySalary = 0;



for (int i=0; i < (ptWorkerCount); i++){
 ptMonthlySalary += (dailyWorkHours / 2) * ptHourlySalary * 20;
}
for (int i=0; i < (jWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 jMonthlySalary += (dailyWorkHours + overtime) * jHourlySalary * 20;
 
}
for (int i=0; i < (iWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 iMonthlySalary += (dailyWorkHours + overtime) * iHourlySalary * 20;
}
for (int i=0; i < (sWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 sMonthlySalary += (dailyWorkHours + overtime) * sHourlySalary * 20;
}



int totalWorkerWage = ptMonthlySalary + sMonthlySalary + jMonthlySalary + iMonthlySalary;

int workersInsurance = 10*700;

int officeRent = 3000;

int workerTax = (totalWorkerWage *20) / 100;

int officeBills = 5000;

int companyMonthlyExpense = totalWorkerWage + officeBills + workerTax + officeRent + workersInsurance;



cout << "Write 0, 1 or 2 for choosing function " << endl <<"0. Monthly Wage for workers " << endl << "1. Company's Monthly expense " << endl << "2. Advance Calculating (You can change Company's expenses (Worker Insurance, Office Rent, Tax, Office Bills)) " << endl;
int x;
cin >> x;
switch (x)
{
case 0:

    cout << totalWorkerWage << " $ wage for workers salary";
    
    break;
case 1:
    
    cout << companyMonthlyExpense << " $ (Tax, Insurance and other bills is included in this amount)";
    
    break;

case 2: {
    
    int u_workersInsurance = 0;

    int u_officeRent = 0;

    int u_Tax = 0;

    int u_officeBills = 0;


    cout << endl << "Enter money amount for Insurance for per worker: ";
    cin >> u_workersInsurance;
    cout << endl << "Enter money amount for Rent: ";
    cin >> u_officeRent;
    cout << endl << "Enter money amount for Taxes: ";
    cin >> u_Tax;
    cout << endl << "Enter money amount for Bills: ";
    cin >> u_officeBills;
    int u_companyMonthlyExpense = totalWorkerWage + u_officeBills + u_Tax + u_officeRent + u_workersInsurance;
    cout << u_companyMonthlyExpense << " $ (Custom expenses is included in this amount)";

    break;
}
}
}