#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int a;
    cout<<"輸入一數字，判斷是否為正確百分數:\n";
    cin>>a; 
    if((0 <= a)&&(a <= 100)) 
    {
         cout<<a<<"為正確百分數\n";
    }
    else
    {
         cout<<a<<"為不正確百分數\n";
    }
    system("PAUSE");
    return 0;
}
