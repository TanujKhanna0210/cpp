#include<iostream>
using namespace std;
int countSetBits(int n)
{
    int c;
    while(n!=0)
    {
        if(n&1 == 1){
            c++;
        }
        n = n >> 1;
    }
    return c;
}
int main()
{
    int n,cnt;
    cout << "Enter n : " << endl;
    cin >> n;
    cnt = countSetBits(n);
    cout << "No. of set bits = " << cnt << endl;
    return 0;
}
