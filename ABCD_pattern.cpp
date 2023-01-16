#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    char ch;
    ch = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout << ch;
            ch=ch+1;
        }
        for(int j=n;j>=i;j--)
        {
            ch=ch-1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
