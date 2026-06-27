#include <iostream>
#include <string>

using namespace std;

int toIntDate(string d)
{
    int day = stoi(d.substr(0,2));
    int month = stoi(d.substr(3,2));
    int year = stoi(d.substr(6,4));

    return year*10000 + month*100 + day;
}

void test()
{
    cout << (toIntDate("01/01/2020") < toIntDate("02/01/2020")) << endl;
}

int main()
{
    test();

    string d1,d2;

    cout << "Дата 1 (dd/mm/yyyy): ";
    cin >> d1;

    cout << "Дата 2 (dd/mm/yyyy): ";
    cin >> d2;

    if(toIntDate(d1) > toIntDate(d2))
        cout << "Первая дата позже";
    else if(toIntDate(d1) < toIntDate(d2))
        cout << "Вторая дата позже";
    else
        cout << "Даты равны";

    return 0;
}