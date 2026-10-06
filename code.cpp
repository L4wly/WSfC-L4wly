#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int partTimeHourlySalary = 5;
int juniourHourlySalary = 15;
int intermediateHourlySalary = 25;
int seniourHourlySalary = 50;

int dailyWorkHours = 8;

int partTimeWorkerCount = 1;
int intermediateWorkerCount = rand() % 2 + 3;
int seniourWorkerCount = rand() % 2 + 1;
int juniourWorkerCount = (10 - intermediateWorkerCount - seniourWorkerCount - partTimeWorkerCount);

int partTimeMonthlySalary;
int juniourMonthlySalary;
int intermediateMonthlySalary;
int seniourMonthlySalary;


for (int i=0; i < (partTimeWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 partTimeMonthlySalary += (dailyWorkHours + overtime) * partTimeHourlySalary * 20;
}

for (int i=0; i < (juniourWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 juniourMonthlySalary += (dailyWorkHours + overtime) * juniourHourlySalary * 20;
}

for (int i=0; i < (intermediateWorkerCount + 1); i++){
    int overtime = rand() % 12 + 1;
 intermediateMonthlySalary += (dailyWorkHours + overtime) * intermediateHourlySalary * 20;
}

for (int i=0; i < (seniourWorkerCount); i++){
    int overtime = rand() % 12 + 1;
 seniourMonthlySalary += (dailyWorkHours + overtime) * seniourHourlySalary * 20;
}

int totalWorkerWage = partTimeMonthlySalary + seniourMonthlySalary + juniourMonthlySalary + intermediateMonthlySalary;
int x;

cout << "Write 0 or 1 for choosing function";
cout << "0. Monthly Wage for workers";
cout << "1. Company's Monthly expense";
cin >> x;


switch (x)
{
case 0:

    cout << totalWorkerWage << " $ wage for workers salary";
    break;
case 1:
    int workersInsurance = 10*700;
    int officeRent = 3000;
    int workerTax = (totalWorkerWage *20) / 100;
    int officeBills = 5000;
    int companyMonthlyExpense = totalWorkerWage + officeBills + workerTax + officeRent + workersInsurance;
    cout << companyMonthlyExpense << " $ (Tax, Insurance and other bills is included in this amount)";
    break;
}
}