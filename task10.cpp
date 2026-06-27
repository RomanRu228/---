#include <iostream>

using namespace std;

int digitSum(int n)
{
    n = abs(n);

    return n / 100 + (n / 10) % 10 + n % 10;
}

void findNumbers(int sum)
{
    for (int i = 100; i <= 999; i++)
    {
        if (digitSum(i) == sum)
            cout << i << " ";
    }
}

void test()
{
    cout << digitSum(123) << endl;
    cout << digitSum(555) << endl;
}

int main()
{
    test();

    int N;

    cout << "Введите сумму цифр: ";
    cin >> N;

    findNumbers(N);

    return 0;
}