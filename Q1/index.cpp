#include<iostream>

using namespace std;

int main(){

    float c;
    cout << "The Temperature in Celcius: ";
    cin >> c;

    float fahrenite;

    fahrenite = (  c * 9/5  ) + 32; 

    cout << "The temperature in fahrenite : " << fahrenite  ;

}