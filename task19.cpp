#include <iostream>

using namespace std;

void factorize(int n, int d = 2)
{
    if(n == 1)
        return;

    if(n % d == 0)
    {
        cout << d << " ";
        factorize(n / d, d);
    }
    else
    {
        factorize(n, d + 1);
    }
}

void test()
{
    cout << "36 = ";
    factorize(36);
    cout << endl;
}

int main()
{
    test();

    int n;

    cout << "Введите число: ";
    cin >> n;

    cout << "Разложение: ";

    factorize(n);

    return 0;
}