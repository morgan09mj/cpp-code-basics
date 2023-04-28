#include <iostream>
using namespace std;
int main() {
	int opcode;
	cin>> opcode;
	if (opcode == 1){
		double x , y;
		cin>> x >> y;
		cout<< x + y;
	}
	if (opcode == 0){
		int x , y;
		cin>> x >> y;
		cout<< x * y;
	}
	return 0;
}

