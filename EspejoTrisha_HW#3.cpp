#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
   srand(time(0));
   int minValue = 3, maxValue = 7, h;
   h = rand() % (maxValue - minValue + 1) + minValue;
    cout <<"Height = "<<  h << endl;
    for (int r = 1; r <= h; r++)
    {
        for (int i = 1; i <= 4; i++)
        {
            for ( int c = 1; c <= h; c++)
            {
                if ( r <= c )
                    cout << "*";
                else
                    cout << " ";
               
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
   
