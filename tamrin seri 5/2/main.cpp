#include <iostream>
using namespace std;

int main() {
	long long int a , b , q , w;
	cin >> a >> b;
	if(a >= 1 & b>= 1){
		if(a <= 1000 & b <= 1000){
			if(a == b){
				cout << a;
			}
			q = a - b;
			w = b - a;
			if(q <= 100 & w <= 100){
				if(q)
				if(b > a){
					long long int g = a;
					for(long long int i = 1, j = 0 ; j < b ; i++){
						j = a + i;
						g = g * j;
					}
					cout << g;
				}
				if(a > b){
					long long int t = b;
					for(long long int e = 1, r = 0 ; r < a ; e++){
						r = b + e;
						t = t * r;
					}	
					cout << t;	
				}		
			}
		}
	}
	return 0;
}
