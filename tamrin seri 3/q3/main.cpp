#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int g = 0;
	for(int i = 1; i != g;g = 1){
		if(i >= 1){
		i = i - 2;
		cout<<"*";
	}
		if(i < n)
		i = i +2;
		else
		i = i - 2;
		cout<<endl;
	}
	return 0;
}
