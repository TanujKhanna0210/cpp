#include<iostream>
using namespace std;
void BubbleSort(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
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
    BubbleSort(A,n);
    cout << "Sorted Array :" << endl;
    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
