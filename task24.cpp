#include <iostream>
#include <ctime>
#include <string>

using namespace std;

string getDate()
{
    time_t t = time(0);
    tm* now = localtime(&t);

    string months[] = {"январь","февраль","март","апрель","май","июнь",
                       "июль","август","сентябрь","октябрь","ноябрь","декабрь"};

    string day = to_string(now->tm_mday);
    string month = months[now->tm_mon];
    string year = to_string(1900 + now->tm_year);

    return day + "/" + month + "/" + year;
}

void test()
{
    cout << getDate() << endl;
}

int main()
{
    test();

    cout << "Сегодня: " << getDate();

    return 0;
}