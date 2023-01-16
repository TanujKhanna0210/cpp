#include<iostream>
using namespace std;
void decreasing_order(int n)
{
    if(n==0){
        return;
    }
    cout << n << " ";
    decreasing_order(n-1);
}
void increasing_order(int n)
{
    if(n==0){
        return;
    }
    increasing_order(n-1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    cout << "Decreasing Order : ";
    decreasing_order(n);
    cout << endl;
    cout << "Increasing Order : ";
    increasing_order(n);
    return 0;
}
