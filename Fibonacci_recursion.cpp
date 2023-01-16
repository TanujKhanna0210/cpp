#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    /*
    OR, instead of the above code,
    We could simply write:
    if((n==0)||(n==1)){
        return n;
    }
    */

    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}
int main()
{
    int n,result;
    cin >> n;
    result = fibonacci(n);
    cout << result << endl;
    return 0;
}
