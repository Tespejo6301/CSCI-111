# include <iostream>
using namespace std;


int main ()
{
    int num, rem, large = 0 ;
    
    
    cout << "Enter a number: ";
    cin >> num;
    if ( num > 0)
    {
        while (num > 0 )
        {
            rem = num % 10;
            if ( rem  >  large )
            {
                large = rem;
                
             }
           num = num / 10;
        }
        cout << " The highest digit is " << large << endl;
    }
    
    
    int digit, factor, i = 0;
    
    cout <<  "Enter a two digit number: ";
    cin >> digit;
    
    while ( digit < 10 || digit > 99)
    {
        cout << " Enter a two digit number: ";
        cin >> digit;
    }
    cout << "Factors of " << digit << " are: " << endl;
    for (factor = 1; factor <= digit; ++factor)
    {
        
        if (digit % factor == 0 )
        {
            cout << factor << endl;
            i++;
        }
    }
    cout << digit << " has " << i << " factors. " << endl;
    return 0;
}
    
    
