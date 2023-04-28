#include <iostream>
#include<conio.h>
using namespace std;
long int jam(long int n){
int tot=0;
while(n>0)
{
tot+=(n%10);
n/=10;
}
return tot;
}
int main()
{
long int n;
cout<<"please enter a number:";
cin>>n;
cout<<"\n\n"<<jam(n);
cout<<"\n\n\n"<<"press any key to exit...";
}
