#include <iostream>
using namespace std;

int initialize(int jadval[100][100]){
	int n;
	cin >> n;
	jadval[n][n];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> jadval[i][j];
			for(int a = 0; a < i ; a++){
				for(int b = 0 ; b <= j ; b++){
					if(jadval[i][j] == jadval[a][b]){
						cout << "Incorrect table!!" << endl;
					}
					if(jadval[i][j] < 1 || jadval[i][j] > n){
						cout << "Incorrect table!!" << endl;
					}
				}
			}
		}
	}
}

int sum_horizontal(int jadval[100][100]){
	int n , k;
	cin >> n >> k;
	jadval[n][n];
	int p;
	p = n - k;	
	for(int i = 0 , l = 0; i < n ; i++){
		l = l + jadval[i][k] + jadval[i][p];
		cout << l << endl;
	}
}

int sum_vertical(int jadval[100][100]){
	int n , k;
	cin >> n >> k;
	jadval[n][n];
	int p;
	p = k - n;
	int l;
	for(int j = 0 ; j < n ; j++){
		l = l + jadval[k+1][j] + jadval[p-1][j];
		cout << l << endl;
	}
}

int sum_total(int jadval[100][100]){
	int n , k;
	cin >> n >> k;
	jadval[n][n];
	int o;
	o = sum_vertical(jadval) + sum_horizontal(jadval);
	
}
int main() {
	const int n = 100;
	int jadval[n][n];
	initialize(jadval);
	sum_horizontal(jadval);
	sum_vertical(jadval);
	sum_total(jadval);
	return 0;
}
