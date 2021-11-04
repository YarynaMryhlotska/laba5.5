//laba5.5
#include <iostream>
#include <math.h>
using namespace std;

double f(int n)
{
    int i;
    if ( i < 1) 
        if (n == 1)
            return 1.0;
        else
            if (n / 2 * 2 == n)
                return  2.0 * f(n / 2) - 1.0;
            else
                if (n & 1)
                    return  2.0 * f(n / 2) + 1.0;
}

int RECCURCIA(int n)
{
    n = f(n);
    if( n == f(n))
    {
        cout << "y=" << f(n) << endl;
      
    }
     return n * RECCURCIA(n - 1);
}


int main()
{
    int n;
    int x;

    cout << "n = "; cin >> n;
    cout << "f =" << f(n);
    cout << "y = " << RECCURCIA(n) << endl;

    return 0;


}