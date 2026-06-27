#include <iostream>

using namespace std;

void sortArray(double arr[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
}

void test()
{
    double arr[]={5.2,1.3,9.1,4.4};

    sortArray(arr,4);

    for(int i=0;i<4;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    test();

    int n;

    cout<<"Введите размер: ";
    cin>>n;

    double* arr=new double[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sortArray(arr,n);

    cout<<"После сортировки:"<<endl;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    delete[] arr;

    return 0;
}