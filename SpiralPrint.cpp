#include<iostream>
using namespace std;
void SpiralPrint(int A[][10],int m,int n)
{
    //4 variables
    int startRow,endRow,startCol,endCol;
    startRow=0;
    endRow=m-1;
    startCol=0;
    endCol=n-1;

    while(startRow<=endRow && startCol<=endCol)
    {

        //Start Row
        for(int col=startCol; col<=endCol; col++)
        {
            cout << A[startRow][col] << " ";
        }

        //End Column
        for(int row=startRow+1; row<=endRow; row++)
        {
            cout << A[row][endCol] << " ";
        }

        //End Row
        for(int col=endCol-1; col>=startCol; col--)
        {
            //To avoid printing a row multiple times
            if(startRow==endRow){
                break;
            }

            cout << A[endRow][col] << " ";
        }

        //Start Column
        for(int row=endRow-1; row>=startRow+1; row--)
        {
            //To avoid printing a column multiple times
            if(startCol==endCol){
                break;
            }
            cout << A[row][startCol] << " ";
        }

        //Update
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}
int main()
{
    int A[10][10];
    int m,n;
    cout << "Enter number of rows and columns : " << endl;
    cin >> m >> n;
    cout << "Enter elements : " << endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    SpiralPrint(A,m,n);
}
