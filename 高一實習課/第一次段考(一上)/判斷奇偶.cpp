#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int a,b;
    cout<<"請輸入一數字:";
    cin>>a;
    b=a%2;
    if(b == 0)
    {
         cout<<"這是偶數！！！\n";
    }
    else
    {
         cout<<"這是奇數！！！\n";
    }
    
    system("PAUSE");
    return 0;
    
}
