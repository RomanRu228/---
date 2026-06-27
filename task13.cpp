#include <iostream>

using namespace std;

bool checkMatrix(int matrix[][5], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        bool found=false;

        for(int j=0;j<cols;j++)
            if(matrix[i][j]==0)
                found=true;

        if(!found)
            return false;
    }

    for(int j=0;j<cols;j++)
    {
        bool found=false;

        for(int i=0;i<rows;i++)
            if(matrix[i][j]==0)
                found=true;

        if(!found)
            return false;
    }

    return true;
}

void test()
{
    int matrix[5][5]={
        {0,1,2,3,4},
        {5,0,7,8,9},
        {1,2,0,4,5},
        {6,7,8,0,1},
        {2,3,4,5,0}
    };

    cout<<checkMatrix(matrix,5,5)<<endl;
}

int main()
{
    test();

    return 0;
}