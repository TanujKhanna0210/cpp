#include<iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter a character :" << endl;
    ch=cin.get();
    if(ch==' ' || ch=='\n')
        cout << "Whitespace"<<endl;
    else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        cout << "Letter" << endl;
    else if(ch>='0' && ch<='9')
        cout << "Digit" << endl;
    else
        cout << "Special Symbol" << endl;
}
