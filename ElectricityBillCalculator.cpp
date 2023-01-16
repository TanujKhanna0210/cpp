#include<iostream>
using namespace std;

int main()
{
    int units,bill;
    cout << "Enter the no. of units : ";
    cin >> units;

    if(units <= 100){
        cout << "Free" << endl;
    }
    else if(units > 100 && units <= 200){
        bill = (units - 100)*5;
        cout << "Bill : " << bill << endl;
    }
    else if(units > 200 && units <= 300){
        bill = 100*5 + (units - 200)*10;
        cout << "Bill : " << bill << endl;
    }
    else{
        bill = 100*5 + 100*10 + (units - 300)*12;
        cout << "Bill : " << bill << endl;
    }
    return 0;
}
