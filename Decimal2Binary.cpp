#include<iostream>
using namespace std;
int Decimal2Binary(int N)
{
    int rem,p,ans;
    p=1;
    ans=0;
    while(N!=0)
    {
        rem=N%2;
        ans=ans+p*rem;
        p=p*10;
        N=N/2;
    }
    return ans;
}
int main()
{
    int n,result;
    cout << "Enter a number to convert it into binary :" << endl;
    cin >> n;
    result = Decimal2Binary(n);
    cout << result;
    return 0;
}
