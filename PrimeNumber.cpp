#include<iostream>
using namespace std;
int main()
{
    int n;
    int flag = 0;
    cout << "Enter the Number : ";
    cin >> n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            flag=1;
    }

    if(flag==0)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}
