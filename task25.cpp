#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLines(string filename)
{
    ifstream file(filename);

    string line;
    int count = 0;

    while(getline(file, line))
        count++;

    return count;
}

void test()
{
    cout << "test.txt lines: " << countLines("test.txt") << endl;
}

int main()
{
    test();

    string filename;

    cout << "Имя файла: ";
    cin >> filename;

    cout << "Строк: " << countLines(filename);

    return 0;
}