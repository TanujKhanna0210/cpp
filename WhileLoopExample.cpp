#include<iostream>
using namespace std;
int main()
{
    int N,n,sum;
    sum=0;
    cout << "Enter number of inputs : ";
    cin >> N;
    cout << "Enter the numbers" << endl;
    int i=1;
    while(i<=N)
    {
        cin >> n;
        sum = sum + n ;
        i++;
    }
    cout << "Final Sum : " << sum << endl ;
    return 0;
}
