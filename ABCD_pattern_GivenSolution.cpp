#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    char ch;
    for(int i=1;i<=n;i++)
    {
        ch = 'A';
        for(int j=1;j<=n-i+1;j++)
        {
            cout << ch;
            ch=ch+1;
        }
        ch=ch-1;
        for(int j=1;j<=n-i+1;j++)
        {
            cout << ch;
            ch=ch-1;
        }
        cout << endl;
    }
    return 0;
}
