#include <iostream>
using namespace std;

void f1(int &h, int &m){

    h = h * 2;

    m = m * 3;

}

void f2(int *n, int *k){

    *n = *n * 5;

    *k = *k * 5;

}

int main(){

    int n = 5;

    int m = 6;

    f2(&n , &m);

    cout << n << endl;
    cout << m << endl;

	n = 5;

    m = 6;
    
	f1(n , m);
	
    cout << n << endl;
    cout << m << endl;

    return 0;

}
