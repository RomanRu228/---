#include <iostream>

using namespace std;

int countEven(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            count++;

    return count;
}

void test()
{
    int arr[] = {1,2,3,4,5,6};

    cout << "Количество: " << countEven(arr,6) << endl;
}

int main()
{
    test();

    int n;

    cout << "Размер массива: ";
    cin >> n;

    int* arr = new int[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Четных чисел: "<<countEven(arr,n)<<endl;

    delete[] arr;

    return 0;
}