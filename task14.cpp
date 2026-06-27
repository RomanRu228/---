#include <iostream>
#include <string>

using namespace std;

string trim(string s)
{
    int start = 0;

    while(start < s.length() && s[start]==' ')
        start++;

    int end = s.length()-1;

    while(end>=0 && s[end]==' ')
        end--;

    return s.substr(start,end-start+1);
}

void test()
{
    cout<<"["<<trim("   Hello World   ")<<"]"<<endl;
}

int main()
{
    test();

    string s;

    cout<<"Введите строку:"<<endl;

    getline(cin,s);

    cout<<"["<<trim(s)<<"]";

    return 0;
}