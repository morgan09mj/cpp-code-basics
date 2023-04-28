#include <iostream>
using namespace std;
int main(){
	unsigned int a,b,c;
	cin>>a>>b>>c;
	if(a>0 , b>0 , c>0)
		if(a < c+b,	b < a+c , c < a+b)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
