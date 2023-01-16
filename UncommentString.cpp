#include<iostream>
#include<string>
using namespace std;
string uncomment(string str)
{
    int idx1=str.find("/*");
    int idx2=str.find("*/");
    int start=idx1+2;
    int len=idx2-start;
    return str.substr(start,len);
}
int main()
{
    string str;
    getline(cin,str);
    string str2 = uncomment(str);
    cout << str2 <<endl;
    return 0;
}
