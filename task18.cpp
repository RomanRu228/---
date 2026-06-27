#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return x*x*x + 2*x*x + x;
}

double derivative(double x)
{
    double h = 1e-5;
    return (f(x+h) - f(x-h)) / (2*h);
}

void test()
{
    cout<<"f'(2)="<<derivative(2)<<endl;
}

int main()
{
    test();

    double x;
    cout<<"Введите x: ";
    cin>>x;

    cout<<"Производная: "<<derivative(x);

    return 0;
}