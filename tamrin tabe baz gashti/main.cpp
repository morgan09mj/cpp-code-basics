#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum2(int n){
    if (n == 1)
        return 1;
    else
        return (n + sum2(n-1));
}

int sum(int n){
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i;
    return s;
}

int main(){
    int number;
    cin >> number;
    cout << sum(number) << endl;
    cout << sum2(number) << endl;
    return 1;
}
