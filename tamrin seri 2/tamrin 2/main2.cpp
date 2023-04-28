#include <iostream>
using namespace std;
int main() {
	float cm;
	string n;
	cin >> cm;
	cin >> n;
	if (n == "m"){
		cm = cm / 100;
		cout<<cm<<" meter"<<endl;
	}
	if (n == "km"){
		cm = cm / 100000;
		cout<<cm<<" kilometer"<<endl;
	}
	return 0;
}
