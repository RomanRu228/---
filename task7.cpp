#include <iostream>

using namespace std;

bool isReversible(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

void findNumbers(int N)
{
    for (int i = 0; i <= N; i++)
        if (isReversible(i))
            cout << i << " ";
}

void test()
{
    cout << isReversible(121) << endl;
    cout << isReversible(123) << endl;
}

int main()
{
    test();

    int N;
    cout << "Введите N: ";
    cin >> N;

    findNumbers(N);

    return 0;
}