#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int initialize(int jadval[9][9]){
	int n = 9;

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			jadval[i][j] = 0;
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cout << jadval[i][j] << endl;
		}
	}
}

void tasadofi(int a , int b){
	for( ; rand() <= a ;){
		rand() = rand() * 2;
	}
	for( ; rand() >= b ;){
		rand() = rand() / 2;
	}
	return;
}
int main() {
	const int n = 9;
	int array[n][n];
	initialize(array);
	srand(time(0));
	
/*	int initialize[3][2] = {{1,2},{3,4},{5,6}};
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			cout << initialize[i][j] << '\t';
		}
		cout << endl;
	}*/

	return 0;
}
