#include<iostream>
using namespace std;
int main()
{
    int n,rem,r;
    r=0;
    cout << "Enter the Number : ";
    cin >> n;
    while(n!=0)
    {
        rem = n%10;
        r=r*10+rem;
        n=n/10;
    }
    cout << "Reverse : " << r << endl;
    return 0;
}
