#include <iostream>
#include <cmath>

using namespace std;

double vectorLength(double arr[], int n) {

    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i] * arr[i];

    return sqrt(sum);
}

void test() {

    double a[] = {3,4};

    cout << "Тест: " << vectorLength(a,2) << endl;
}

int main() {

    test();

    int n;

    cout << "Введите размерность: ";
    cin >> n;

    double* arr = new double[n];

    cout << "Введите координаты:" << endl;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Длина = "<<vectorLength(arr,n)<<endl;

    delete[] arr;

    return 0;
}