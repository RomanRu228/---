#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    cout << "Нажмите Enter..." << endl;
    cin.get();

    auto t1 = high_resolution_clock::now();

    cout << "Нажмите Enter ещё раз..." << endl;
    cin.get();

    auto t2 = high_resolution_clock::now();

    auto duration = duration_cast<seconds>(t2 - t1);

    cout << "Интервал: " << duration.count() << " секунд" << endl;

    return 0;
}