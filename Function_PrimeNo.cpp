#include<iostream>
using namespace std;
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num,result;
    cout << "Enter a number : ";
    cin >> num;
    result=prime(num);
    if(result==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
