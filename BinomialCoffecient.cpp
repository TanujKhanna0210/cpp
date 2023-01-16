#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=n;i>=1;i--)
        f=f*i;
    return f;
}
int BinomialCoff(int N,int R)
{
    int coff = fact(N)/(fact(R)*fact(N-R));
    return coff;
}
int main()
{

    int N,R,result;
    cout << "Enter the value of N and R" << endl;
    cin >> N >> R;
    result = BinomialCoff(N,R);
    cout << result << endl;
    return 0;
}
