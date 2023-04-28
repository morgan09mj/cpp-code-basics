#include <iostream>
using namespace std;

int main() {
	int array2D[3][4];
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			cin >> array2D[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			cout << array2D[i][j] <<'\t';
		}
		cout << endl;
	}
	return 0;
}
