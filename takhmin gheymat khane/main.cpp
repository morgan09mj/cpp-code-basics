#include <iostream>
using namespace std;

int mohasebe_hazine(int array[4]){
	const int n = 4;
	int x = 0;
	int info[n] = {800 , 600 , 300 , 400};
	for(int i = 0 ; i < 4 ; i++){
		array[i] = array[i] - info[i];
	}
	for(int i = 0 ; i < 4 ; i++){
		x = x + (array[i] * array[i]);
	}
}

int W(){
	int w;
	w = 1;
	int info1[4] = {250 , 150 , 75 , 100};
	for(int i = 0 ; i < 4 ; i++){
		info1[i] = w * info1[i];
	}
	mohasebe_hazine(info1);
	w = 2;
	int info2[4] = {250 , 150 , 75 , 100};
	for(int i = 0 ; i < 4 ; i++){
		info2[i] = w * info2[i];
	}
	mohasebe_hazine(info2);
	w = 3;
	int info3[4] = {250 , 150 , 75 , 100};
	for(int i = 0 ; i < 4 ; i++){
		info3[i] = w * info3[i];
	}
	mohasebe_hazine(info3);
	w = 4;
	int info4[4] = {250 , 150 , 75 , 100};
	for(int i = 0 ; i < 4 ; i++){
		info4[i] = w * info4[i];
	}
	mohasebe_hazine(info4);
	cout << "The best W is 4." << endl;
}

int gheymat_khane(int x){
	int w = 4;
	w = w * x;
	cout << "The predicted price is " << w << endl;
}

int main() {
	int amaliat;
	const int n = 4;
	const int m = 2;
	int s = 0;
	int info[n][m] = {{250 , 800} , {150 , 600} , {75 , 300} , {100 , 400}};
	cin >> amaliat;
	for(;amaliat == 1 || amaliat == 2;){
		if(s == 1){
			cin >> amaliat;
		}
		s = 1;
		if(amaliat == 1){
			cout << "Enter house number:" << endl;
			int number;
			cin >> number;
			if(number == 1 || number == 2 || number == 3 || number == 4){
				cout << "House " << number << ": " << info[number - 1][0] << " meters " << info[number - 1][1] << " millions" << endl;
			}
		}
		if(amaliat == 2){
			W();
		}
	}
	if(amaliat == 3){
		int n;
		cout << "Enter area in square meter: " << endl;
		cin >> n;
		gheymat_khane(n);
	}
	return 0;
}
