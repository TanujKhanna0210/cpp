#include<iostream>
using namespace std;
bool IsArraySorted(int A[],int n)
{
    if(n==1){
        return true;
    }
    if(A[0]<=A[1] && IsArraySorted(A+1,n-1)){
        return true;
    }
    return false;
}
int main()
{
    int A[100];
    int n;
    bool result;
    cout << "Enter number of elements :" << endl;
    cin >> n;
    cout << "Enter elements :" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    result = IsArraySorted(A,n);
    if(result){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not Sorted" << endl;
    }
    return 0;
}
