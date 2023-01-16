#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    cin.getline(str,1000,'$');
    int i=0;
    int l,w,d,ss;
    l=w=d=ss=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        if(isalpha(ch))
            l++;
        if(isdigit(ch))
            d++;
        if(isspace(ch))
            w++;

        i++;
    }
    cout << "Number of Letters : " << l << endl;
    cout << "Number of Digits : " << d << endl;
    cout << "Number of Whitespaces : " << w << endl;
    ss = strlen(str) - l - d - w;
    cout << "Number of Special Symbols : " << ss << endl;
}
