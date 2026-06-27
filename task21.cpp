#include <iostream>

using namespace std;

int F(int n)
{
    if(n == 0) return 1;
    if(n == 1) return 2;

    return 2 * F(n-1) - F(n-2);
}

void test()
{
    cout << "F(5)=" << F(5) << endl;
}

int main()
{
    test();

    int n;
    cout << "Введите n: ";
    cin >> n;

    cout << "F(n)=" << F(n);

    return 0;
}