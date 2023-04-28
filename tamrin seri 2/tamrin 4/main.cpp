#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a , b;
	float c;
	cin>>a>>b;
	if(a>0 , b>=0)
		c = (a + sqrt(b))/a*b-3;
	if(a<0 , b<0)
		c = sqrt(a*b);
	if(a=0 , b=0)
		c = (a/2)+(4/(b+2));
		cout<<c<<endl;
	return 0;
}
