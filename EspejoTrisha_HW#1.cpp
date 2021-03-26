#include <iostream>
using namespace std;


int main ()
{    
    double base, height, area ; 
    int tall, feet, inches ;

    cout << " Enter the base of the right triangle: ";
    cin >> base;
    cout << " Enter the height of the right triangle: "; 
    cin >> height;
    area =  base * height / 2;
    cout << " The area is " << area << endl;
 
    cout << " How many inches tall are you? ";
    cin >> tall;
    feet = tall / 12;
    inches = tall % 12;
    cout << " That is " << feet << " feet and " << inches << " inches" << 
    endl;

    return 0;
}
