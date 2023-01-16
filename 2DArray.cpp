#include<iostream>
using namespace std;
void print(int A[][100],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int A[100][100];
    int m,n;
    cout << "Enter number of rows and columns : " << endl;
    cin >> m >> n;
    cout << "Enter the elements : " << endl;
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "The required 2D Array is : " << endl;
    print(A,m,n);
    return 0;
}
