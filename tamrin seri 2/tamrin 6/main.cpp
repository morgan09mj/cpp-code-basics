#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,n, count, sum;
      
    cout<<"Enter Number:";
    cin>>n;
   
    for(i=1,sum=0,count=0 ;sum<n ; i+=2 , count++)
          sum+=i;

    if(sum==n)
        cout<<"\n\nSQRT("<<n<<") = "<<count<<endl;
    else
        cout<<"\n\nSQRT("<<n<<") between "<<count-1<<"and"<<count<<endl;
    
    getch();
}
