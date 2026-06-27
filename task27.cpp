#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    ofstream out("data.bin", ios::binary);

    int x;

    for(int i=0;i<10000;i++)
    {
        x = (rand() % 2 == 0) ? -1 : 1;
        out.write((char*)&x, sizeof(int));
    }

    out.close();

    ifstream in("data.bin", ios::binary);

    int sum = 0;

    for(int i=0;i<10000;i++)
    {
        in.read((char*)&x, sizeof(int));
        sum += x;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}