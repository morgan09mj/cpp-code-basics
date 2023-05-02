#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void tasadofi(int p){
	cout << rand() << endl;
	return;
}

int bazgashti(int n , int array[]){
	if(n == 1){
		cout << 1 << endl;
	}
	if(n > 1){
		if(n < array[n-1]){
			return (array [n - 1])
		}
	}
	if(n > 1){
		if(n >= array[n-1]){
			return (array [n - 1])
		}
		cout << array
	return 0;
}
int main() {
	int n , p;
	cin >> n >> p;
	srand(time(0));
	int array[n];
	if(p == 2){
		for(int i = 0 ; i < n ; i++){
			cin >> array[i];
		}
	}
	if(p == 1){
		tasadofi(p , array);
	}
	return 0;
}
