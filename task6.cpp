#include <iostream>

using namespace std;

bool isLucky(int number)
{
    int a = number / 100000;
    int b = (number / 10000) % 10;
    int c = (number / 1000) % 10;
    int d = (number / 100) % 10;
    int e = (number / 10) % 10;
    int f = number % 10;

    return (a + b + c) == (d + e + f);
}

void findLuckyTickets()
{
    for (int i = 0; i <= 999999; i++)
    {
        if (isLucky(i))
            cout << i << endl;
    }
}

void test()
{
    cout << "000000: " << isLucky(0) << endl;
    cout << "123321: " << isLucky(123321) << endl;
    cout << "123456: " << isLucky(123456) << endl;
}

int main()
{
    test();

    cout << "\nСчастливые билеты:\n";
    findLuckyTickets();

    return 0;
}