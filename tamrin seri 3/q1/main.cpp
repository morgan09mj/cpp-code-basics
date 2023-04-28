#include <iostream>
using namespace std;
int main() {
	int n , k;
	int p = 0;
	cin>>n>>k;
	int g = n;
	for(int i = 1; i != n; p++){
		i = i + k;
		n = 1;
		if(i > g)
		i = i - g;
	}
	cout<<p;
	return 0;
}
