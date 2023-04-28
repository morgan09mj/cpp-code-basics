#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fill1(int n, int array[]){
      for (int i = 0; i < n; i++)
        cin >> array[i];
}

void fill2(int n, int m, int array[][2]){
    for (int i = 0; i < n; i++)
         for (int j = 0; j < m; j++)
            cin >> array[i][j];
}


int main(){
    const int n = 3;
    const int m = 2;
    int d1[n];
    int d2[n][m];
    
    fill1(n, d1);
    fill2(n ,m , d2);
         


    return 1;
}
/*int main(){
	int v = 2;
	int * vptr = &v;
	cout<<v<<'\t'<<vptr<<'\t'<<&v<<'\t'<<*vptr<<endl;
}*/
