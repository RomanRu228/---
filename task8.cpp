#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return -x * x + 4 * x + 5;
}

double findMax(double a, double b)
{
    double maxValue = func(a);

    for (double x = a; x <= b; x += 0.001)
    {
        if (func(x) > maxValue)
            maxValue = func(x);
    }

    return maxValue;
}

void test()
{
    cout << "Максимум: " << findMax(-5, 5) << endl;
}

int main()
{
    test();

    double a, b;

    cout << "Введите a и b: ";
    cin >> a >> b;

    cout << "Максимум = " << findMax(a, b);

    return 0;
}