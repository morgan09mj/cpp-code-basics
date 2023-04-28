#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	string Numbers[size];
	
	for(int i = 0 ; i < size ; i++){
		string str;
		getline(cin , str);
		Numbers[i] = str;
	}
	for(int i = 0 ; i < size ; i++){
		cout << Numbers[i] << endl;
	}
	return 0;
}
