/*
    per tray 12 muffins
    every person 2 muffins

    var people cli input

    var muffins = people * 2
    var counts = muffins mod 12
    var own muffins = (anzahl * 12) - muffins
*/

#include <iostream>
using namespace std;

int main(){
    int people;

    cout << "How many people? ";
    cin >> people;

    int muffins = people*2;
    int count = muffins % 12;
    int own_muffins = (count * 12)-muffins;

    cout << "You have to bake " << count << " trays \n";
    cout << "You will have " << own_muffins << " Muffins for free use \n";
}