#include <iostream>
#include <algorithm>
using namespace std;

int range(int a[], int size) {
    int small = a[0];
    int large = a[0];
    for ( int i = 0; i < size; i++)
        if ( a[i] < small ) small = a[i];
    for ( int i = 0; i < size; i++)
        if ( a[i] > large ) large = a[i];
    return large - small;
    
}

void reverse(int a[], int size) {
    int j = size;
    for (int i = 0; i < size/2; i++){
        j--;
        swap (a[i], a[j]);
    }
}

void fill(int a[], int size, int val) {
    for ( int i = 0; i < size; i++)
        a[i] = val;
}

int main () {
    int a[4] = {7, 2, 8, 3};
    int b[5] = {3, 4, 5, 6, 7};
    
    cout << "The range of array a is " << range(a, 4) << endl;
    cout << "The range of array b is " << range(b, 5) << endl;
    
    reverse(a, 4);
    reverse(b, 5);
    cout << "Array a reversed: ";
    for (int i = 0; i < 4; ++i)
        cout << a[i] << " ";
    cout << endl;
    cout << "Array b reversed: ";
    for (int i = 0; i < 5; ++i)
        cout << b[i] << " ";
    cout << endl;
    
    fill(b, 5, 7);
    cout << "Array b (after calling the fill function): ";
    for (int i = 0; i < 5; ++i)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}




