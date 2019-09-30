#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
float sq(int x)
{
    float h;
    h=pow(x,3);
    return h;
}
int main()
{
    float no,ans;
    cout << "Enter a number:";
    cin>>no;
    ans=sq(no);
    cout<<"\n cube is"<<ans;
    return 0;
}
