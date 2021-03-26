#include <iostream>
using namespace std;

void sort(int &x, int &y){
    int a = x;
    int b = y;
    if ( a > b){
        y = a;
        x = b;
    }
}

int remove2nd(int n) {
    if ( n < 10) return n;
    if ( n >= 10 && n < 99 ) return remove2nd(n / 10);
    return remove2nd(n / 10) * 10 + n % 10;
}

bool ascending(int n) {
    while (n > 10){
        int x = n % 10;
        int y = (n/10) % 10;
        if ( x < y) return false;
        n = n / 10;
    }
    return true;
}

int main() {
    int x = 6, y = 3;
    sort(x, y);
    cout << x << " " << y << endl;
    sort(x, y);
    cout << x << " " << y << endl;
    cout << remove2nd(3456) << endl;
    if (ascending(3345))
        cout << "3345 is ascending" << endl;
    else
        cout << "3345 is not ascending" << endl;
    if (ascending(3545))
        cout << "3545 is ascending" << endl;
    else
        cout << "3545 is not ascending" << endl;
    
    return 0;
}



