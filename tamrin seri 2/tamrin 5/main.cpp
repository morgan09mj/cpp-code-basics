#include <iostream>
using namespace std;
int main() {
	int n,t;
	cin>>n>>t;
	if(n>=t){
		cout<<"YES"<<endl;
		n=n-t;
		cout<<"Account balance:"<<n<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
