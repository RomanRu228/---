#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    string birthDate;
};

struct Student : Person
{
    string university;
    string faculty;
    string group;
};

void test()
{
    Student s;

    s.name = "Ivan Ivanov";
    s.birthDate = "01/01/2000";
    s.university = "KBTU";
    s.faculty = "IT";
    s.group = "CS-101";

    cout << s.name << " " << s.university << endl;
}

int main()
{
    test();

    Student s;

    cout << "ФИО: ";
    getline(cin, s.name);

    cout << "Дата рождения: ";
    getline(cin, s.birthDate);

    cout << "Университет: ";
    getline(cin, s.university);

    cout << "Факультет: ";
    getline(cin, s.faculty);

    cout << "Группа: ";
    getline(cin, s.group);

    cout << "\n--- ДАННЫЕ ---\n";
    cout << s.name << "\n" << s.birthDate << "\n" << s.university << "\n";

    return 0;
}