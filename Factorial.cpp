#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=n;i>=1;i--)
        f=f*i;
    return f;
}
int main()
{
    int num,factorial;
    cout << "Enter a number : ";
    cin >> num ;
    factorial=fact(num);
    cout << "Factorial of " << num << " = " << factorial << endl;
    return 0;
}
