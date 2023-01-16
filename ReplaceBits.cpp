#include<iostream>
using namespace std;
void clearBitsInRange(int &n,int i,int j)
{
    int a = ((~0)<<j+1);
    int b = ((1<<i) - 1);
    int mask = a|b;
    n = n & mask;
}
void replaceBits(int &n,int m,int i,int j)
{
    clearBitsInRange(n,i,j);
    int mask = (m << i);
    n = n | mask;
}
int main()
{
    int m,n,i,j;
    cout << "Enter N : " << endl;
    cin >> n;
    cout << "Enter M : " << endl;
    cin >> m;
    cout << "Enter i and j : " << endl;
    cin >> i >> j ;
    replaceBits(n,m,i,j);
    cout << n << endl;
    return 0;
}
