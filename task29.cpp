#include <iostream>
#include <string>

using namespace std;

struct Worker
{
    string name;
    string birthDate;
    string professions[5];
    int category[5];
    int count;
};

void test()
{
    Worker w;

    w.name = "Alex";
    w.birthDate = "10/10/1999";
    w.count = 2;

    w.professions[0] = "welder";
    w.category[0] = 3;

    w.professions[1] = "mechanic";
    w.category[1] = 2;

    cout << w.name << endl;
}

int main()
{
    test();

    Worker w;

    cout << "ФИО: ";
    getline(cin, w.name);

    cout << "Дата рождения: ";
    getline(cin, w.birthDate);

    cout << "Количество профессий (<=5): ";
    cin >> w.count;

    cin.ignore();

    for(int i=0;i<w.count;i++)
    {
        cout << "Профессия " << i+1 << ": ";
        getline(cin, w.professions[i]);

        cout << "Категория: ";
        cin >> w.category[i];
        cin.ignore();
    }

    cout << "\n--- ДАННЫЕ ---\n";
    cout << w.name << "\n";

    return 0;
}