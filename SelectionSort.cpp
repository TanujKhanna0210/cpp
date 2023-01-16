#include<iostream>
using namespace std;
void SelectionSort(int *A,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int m=i;
        for (int j=i+1;j<n;j++)
        {
            if(A[j]<A[m]){
                m=j;
            }
        }
        swap(A[m],A[i]);
    }
}
int main()
{
    int n;
    cout << "Enter number of elements :" << endl;
    cin >> n;
    int A[n];
    cout << "Enter the elements :" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    SelectionSort(A,n);
    cout << "Sorted Array :" << endl;
    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
