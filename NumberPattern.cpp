#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int cnt=1;cnt<=n-i;cnt++){
            cout << " ";
        }
        int val=i;
        for(int cnt=1;cnt<=i;cnt++)
        {
            cout << val;
            val++;
        }
        val=val-2;
        for(int cnt=1;cnt<=i-1;cnt++)
        {
            cout << val;
            val--;
        }
        cout << endl;
    }
    return 0;
}
