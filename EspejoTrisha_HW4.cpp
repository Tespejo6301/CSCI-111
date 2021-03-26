#include <iostream>
using namespace std;

double areaOfCircle(int r) {
    double area = 3.14 * (r * r);
    return area;
}

int largestDigit(int x) {
    int y, z = 0;
    while (x > 0 )
    {
        y = x % 10;
        if ( y  >  z)
        {
            z = y;
        }
        x = x / 10;
    }
    return z;
}

bool validTriangle(int x, int y, int z){
    if (x + y > z && x + z > y && z + y > x ) return true;
    return false;
}


int main (){
    cout << areaOfCircle(2) << endl;
    cout << largestDigit(375) << endl;
    cout << largestDigit(8375) << endl;
    if (validTriangle(2, 3, 4))
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;
    if (validTriangle(2, 6, 3))
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;
    
    return 0;
}

