#include <iostream>
#include <string>

using namespace std;

void sortStrings(string arr[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

void test()
{
    string arr[] = {"banana","apple","cherry"};

    sortStrings(arr,3);

    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    test();

    int n;
    cout<<"Количество строк: ";
    cin>>n;

    string* arr = new string[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sortStrings(arr,n);

    cout<<"После сортировки:"<<endl;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    delete[] arr;

    return 0;
}