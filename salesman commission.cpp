#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    float sal,com,total;
    cout << "Enter Your Salary:";
    cin>>sal;
    if(sal>5000)
        if(sal>12000)
            if(sal>22000)
                if(sal>30000)
                    com=(sal*15)/100;
                else com=(sal*10)/100;
            else com=(sal*7)/100;
        else com=(sal*3)/100;
    else com=0;
    cout<<"Commision Is:"<<com<<"\n";
    total=com+sal;
    cout<<" Total Salary Is:"<<total;

    getch();
}
