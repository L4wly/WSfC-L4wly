#include <iostream>
using namespace std;

int main() {
string workers[10] = {"Arda","Müchaid","Mehmet","Yakup","Kerem","Baran","Gwen","Jennifer","Stacy","Lopez"};

string workerExperience[4] = {"Part-Time","Juniour","Intermediate","Seniour"};

int partTimeSalary[2] = {0,5};
int juniourSalary = 15;
int intermediateSalary = 25;
int seniourSalary = 50;

int dailyWorkHours = 8;

int partTimeWorkerCount = 1;
int midWorkCount = rand() % 2 + 3;
int seniourWorkCount = rand() % 2 + 1;
int juniourWorkCount = (10 - midWorkCount - seniourWorkCount - partTimeWorkerCount);

};