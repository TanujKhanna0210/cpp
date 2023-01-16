#include<iostream>
using namespace std;
int main()
{
    char ch;
    int x,y;
    x=0;
    y=0;
    ch=cin.get();
    while(ch!='\n')
    {
        switch(ch)
        {
            case 'N': y++;break;
            case 'S': y--;break;
            case 'E': x++;break;
            case 'W': x--;break;
        }
        ch=cin.get();
    }
    if(x>=0 && y>=0)
    {
        for(int i=1;i<=y;i++)
            cout << "N";
        for(int i=1;i<=x;i++)
            cout << "E";
    }
    else if(x<0 && y>=0)
    {
        x=-x;
        for(int i=1;i<=y;i++)
            cout << "N";
        for(int i=1;i<=x;i++)
            cout << "W";
    }
    else if(x>=0 && y<0)
    {
        y=-y;
        for(int i=1;i<=y;i++)
            cout << "S";
        for(int i=1;i<=x;i++)
            cout << "E";
    }
    else
    {
        x=-x;
        y=-y;
        for(int i=1;i<=y;i++)
            cout << "S";
        for(int i=1;i<=x;i++)
            cout << "W";
    }
}
