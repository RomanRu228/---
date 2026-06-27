#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int x = 50, y = 25;

    for(int i=0;i<100;i++)
    {
        int dir = rand() % 4;

        if(dir == 0) x += 2;
        if(dir == 1) x -= 2;
        if(dir == 2) y += 2;
        if(dir == 3) y -= 2;

        cout << "x=" << x << " y=" << y << endl;
    }

    return 0;
}