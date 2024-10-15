#include<iostream>

using namespace std;

int main(){

  int salary;

  cout << "Base Salary: " ;

  cin >> salary;

int HRA = 10*salary / 100 ;
int DA = 5*salary / 100 ;
int TA = 8*salary / 100 ;

int gross_salary = salary + HRA + DA + TA;



    cout << "Gross Salary: " << gross_salary ;


}