#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void random_n(int n){
    for (int i = 1; i <= n; i++)
        cout <<rand()<< endl;
    return;
}

int main(){
	srand(time(0));
    int n;
    cin >> n;
    random_n(n);
    return 1;
}
