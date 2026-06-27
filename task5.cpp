#include <iostream>

using namespace std;

bool isPrime(int n){

    if(n<2)
        return false;

    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;

    return true;
}

void findPrimes(int N){

    for(int i=2;i<=N;i++)
        if(isPrime(i))
            cout<<i<<" ";
}

void test(){

    cout<<"Простые до 20:"<<endl;
    findPrimes(20);
    cout<<endl;
}

int main(){

    test();

    int N;

    cout<<"Введите N: ";
    cin>>N;

    findPrimes(N);

    return 0;
}