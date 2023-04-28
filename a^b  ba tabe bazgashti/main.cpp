#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int t , p , k;
	int h = 0;
	int n;
	cout<<"Is your order over"<<endl;
	cin>>n;
	for(  ;n == 4;  ){
	cin>>t>>p;
	k = p * t;
	h = h + k;
	cout<<"cin n"<<endl;
	cin>>n;
}
	cout<<h;
	return 0;
}
