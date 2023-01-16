#include<iostream>
using namespace std;
pair<int,int> StaircaseSearch(int A[][10],int m,int n,int key)
{
    if(key<A[0][0] || key>A[m-1][n-1])
    {
        return {-1,-1};
    }
    int i=0;
    int j=n-1;
    while(j>=0 && i<=m-1)
    {
        if(A[i][j]==key)
        {
            return {i,j};
        }
        else if(A[i][j]>key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1,-1};
}
int main()
{
    int A[10][10];
    int m,n,key;
    cout << "Enter the number of rows and columns : " << endl;
    cin >> m >> n;
    cout << "Enter Elements : " << endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the number to be searched : ";
    cin >> key;
    pair<int,int> coord = StaircaseSearch(A,m,n,key);
    cout << "Element is at coordinates " << coord.first << " " << coord.second << endl;
    return 0;
}
