#include<iostream>
#include<conio.h>
using namespace std;
 
main()
{
long int n;
int tot=0;
cout<<"please enter a number:";
cin>>n;
if(n >= 10){
while(n>0)
{
tot+=(n%10);
n/=10;
}
cout<<"\n\n"<<"total="<<tot;
cout<<"\n\n\n"<<"press any key to exit...";
getch();
return main();
}
else
cout<<n;
return 0;
}
