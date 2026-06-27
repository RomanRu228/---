#include <iostream>
#include <string>

using namespace std;

int lastIndex(string s, char c)
{
    for(int i=s.length()-1;i>=0;i--)
        if(s[i]==c)
            return i;

    return -1;
}

void test()
{
    cout<<lastIndex("hello",'l')<<endl;
}

int main()
{
    test();

    string s;
    char c;

    cout<<"Строка: ";
    cin>>s;

    cout<<"Символ: ";
    cin>>c;

    cout<<"Последнее вхождение: "<<lastIndex(s,c);

    return 0;
}