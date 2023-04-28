#include <iostream>
using namespace std;
int main(){
    int i,n, count, sum;
    cin>>n;
    for(i=1,sum=0,count=0 ;sum<n ; i+=2 , count++)
      sum+=i;
    cout<<count<<endl;
}
