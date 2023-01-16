#include<iostream>
using namespace std;
int LinearSearch(int *A,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int n,key,ans;
    cout << "Enter number of elements in array : ";
    cin >> n;
    int A[n];
    cout << "Enter elements : " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    cout << "Enter the element to be searched : ";
    cin >> key;
    ans = LinearSearch(A,n,key);
    if(ans!=-1){
        cout << key << " is at index " << ans;
    }
    else{
        cout << key << " NOT FOUND ";
    }
    return 0;
}
