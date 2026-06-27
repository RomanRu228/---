#include <iostream>
#include <fstream>

using namespace std;

bool compareFiles(const string& f1, const string& f2)
{
    ifstream file1(f1, ios::binary);
    ifstream file2(f2, ios::binary);

    if(!file1 || !file2)
        return false;

    char c1, c2;

    while(file1.get(c1) && file2.get(c2))
        if(c1 != c2)
            return false;

    return file1.eof() && file2.eof();
}

void test()
{
    cout << compareFiles("a.txt","b.txt") << endl;
}

int main()
{
    test();

    string f1, f2;

    cout << "File 1: ";
    cin >> f1;

    cout << "File 2: ";
    cin >> f2;

    cout << "Equal: " << compareFiles(f1,f2);

    return 0;
}