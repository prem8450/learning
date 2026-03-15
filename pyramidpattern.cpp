#include <iostream>
using namespace std;

int main ()
{
    int n = 4;

    for (int i = 0; i < n; i++) // loop to print no of lines 
    {
        for (int j = 0; j < n - i -1; j++) // loop to print  spaces 
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)  // loop to print 1st set of numbers 
        {
            cout << j ;
        }
        for (int j = i; j >= 1; j--) // loop to print 2nd set of numbers 
        // bakward loop 
        {
            cout << j ;
        }
        cout << endl;
        
    }
    return 0 ;
}