#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int no,rev=0,digit;
    cout << "Enter a number:";
    cin>>no;
    do
        {digit=no%10;
        rev=rev*10+digit;
        no=no/10;}
        while(no=!0);
        cout<<"revis"<<rev;
    return 0;
}
