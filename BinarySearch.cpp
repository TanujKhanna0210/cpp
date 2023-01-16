#include<iostream>
using namespace std;
int BinarySearch(int *A,int n,int key)
{
    // s => starting index
    // e => ending index
    int mid,s,e;
    s=0;
    e=n-1;
    while(e>s)
    {
        mid=(s+e)/2;
        if(key==A[mid]){
            return mid;
        }
        else if(key>A[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
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
    ans = BinarySearch(A,n,key);
    if(ans!=-1){
        cout << key << " is at index " << ans;
    }
    else{
        cout << key << " NOT FOUND ";
    }
    return 0;
}
