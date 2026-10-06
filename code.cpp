#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
srand(time(0));

int partTimeHourlySalary = 5;
int juniorHourlySalary = 15;
int intermediateHourlySalary = 25;
int seniorHourlySalary = 50;

int dailyWorkHours = 8;

int partTimeWorkerCount = 1;
int intermediateWorkerCount = rand() % 2 + 3;
int seniorWorkerCount = rand() % 2 + 1;
int juniorWorkerCount = (10 - intermediateWorkerCount - seniorWorkerCount - partTimeWorkerCount);

int partTimeMonthlySalary = 0;
int juniorMonthlySalary = 0;
int intermediateMonthlySalary = 0;
int seniorMonthlySalary = 0;


for (int i=0; i < (partTimeWorkerCount); i++){
 partTimeMonthlySalary += (dailyWorkHours / 2) * partTimeHourlySalary * 20;
}

for (int i=0; i < (juniorWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 juniorMonthlySalary += (dailyWorkHours + overtime) * juniorHourlySalary * 20;
 
}

for (int i=0; i < (intermediateWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 intermediateMonthlySalary += (dailyWorkHours + overtime) * intermediateHourlySalary * 20;
}

for (int i=0; i < (seniorWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 seniorMonthlySalary += (dailyWorkHours + overtime) * seniorHourlySalary * 20;
}

int totalWorkerWage = partTimeMonthlySalary + seniorMonthlySalary + juniorMonthlySalary + intermediateMonthlySalary;
int x;

cout << "Write 0 or 1 for choosing function " << endl <<"0. Monthly Wage for workers " << endl << "1. Company's Monthly expense " << endl;

cin >> x;


int workersInsurance = 10*700;
int officeRent = 3000;
int workerTax = (totalWorkerWage *20) / 100;
int officeBills = 5000;
int companyMonthlyExpense = totalWorkerWage + officeBills + workerTax + officeRent + workersInsurance;

switch (x)
{
case 0:

    cout << totalWorkerWage << " $ wage for workers salary";
    
    break;
case 1:
    
    cout << companyMonthlyExpense << " $ (Tax, Insurance and other bills is included in this amount)";
    
    break;
}
}