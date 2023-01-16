#include<iostream>
using namespace std;
int fastExpo(int n,int a)
{
    int ans=1;
    while(n>0)
    {
        if((n&1)==1)
        {
            ans = ans * a;
        }
        a = a*a;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n,a,result;
    cout << "Enter n and a :" << endl;
    cin >> n >> a;
    result = fastExpo(n,a);
    cout << result << endl;
    return 0;
}
