#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
    double variable; //double var
    double pi = 2*acos(0.0);//calc of pi

    cout << "Radius? "; //input prompt
    cin >> variable; //input prompt operation

    double area = pi*(variable*variable); //calc of the area

    cout << "The circle's area is: " << area ; //printing of the area 
    return 0;
}