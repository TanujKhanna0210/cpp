#include<iostream>
using namespace std;
int Decimal2Binary(int n)
{
    int ans=0;
    int p=1;
    while (n>0)
    {
        ans=ans+(n&1)*p;
        p=p*10;
        n=n>>1;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << Decimal2Binary(n) << endl;
    return 0;
}
