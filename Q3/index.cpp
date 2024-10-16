#include<iostream>

using namespace std;

int main(){

int first_angle,second_angle ;

cout << "Enter First angle: ";
cin >> first_angle;
cout << "Enter Second angle: ";
cin >> second_angle;

int third_angle= 180 - first_angle - second_angle;

cout << "Third angle: " << third_angle;

}