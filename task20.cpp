#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return x*x - 4;
}

double bisection(double a, double b)
{
    double eps = 1e-6;

    while(b - a > eps)
    {
        double mid = (a + b) / 2;

        if(f(mid) == 0)
            return mid;

        if(f(a) * f(mid) < 0)
            b = mid;
        else
            a = mid;
    }

    return (a + b) / 2;
}

void test()
{
    cout << "Root: " << bisection(0, 5) << endl;
}

int main()
{
    test();

    double a,b;

    cout << "Введите a и b: ";
    cin >> a >> b;

    cout << "Корень: " << bisection(a,b);

    return 0;
}