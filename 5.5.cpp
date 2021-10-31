//laba5.5
#include <iostream>
#include <math.h>
using namespace std;
double n(int n)
{
    double S = 0.0;
    n = n - (n - 1.0);
    return n;
}
int f(int n)
{
    for (int i = 0; i < 1; i++) {
        if (n == 1)
            return 1.0;
        else
            if (n / 2 * 2 == n)
                return  2.0 * f(n / 2.0) - 1.0;
            else
                if (n & 1)
                    return  2.0 * f(n / 2.0) + 1.0;
    }
}

int main()
{
    int n;
    int x;

    cout << "n = "; cin >> n;
    cout << "a = " << n - 1;
    cout << "\nx = " << f(n) << endl;
    x = f(n);
    cout << "y = " << f(x) << endl;

    return 0;
}