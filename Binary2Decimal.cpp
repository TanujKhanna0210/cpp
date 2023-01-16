#include<iostream>
using namespace std;
int Binary2Decimal(int n)
{
    int rem,decimal,p;
    decimal =0;
    p=1;
    while(n!=0)
    {
        rem=n%10;
        decimal= decimal + rem*p;
        p=2*p;
        n=n/10;
    }
    return decimal;
}
int main()
{
    int N,result;
    cout << "Enter a Binary Number : ";
    cin >> N;
    result = Binary2Decimal(N);
    cout << "Decimal : " << result << endl;
    return 0;
}
