/*
    (n1*sin alpha1)/n2 = sin alpha2
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n1;
    float n2;
    float alpha1;
    float alpha2;

    float angle2;

    cout << "Refractive index 1: ";
    cin >> n1;
    cout << "Refractive index 2: ";
    cin >> n2;
    cout << "Angle 1: ";
    cin >> alpha1;
    
    angle2 = (n1 * sin(alpha1)/n2);
    alpha2 = sin(angle2);

    cout << "The 2nd angle is: " << alpha2 << "°\n";

    return 0;
}