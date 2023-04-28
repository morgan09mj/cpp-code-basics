#include <iostream>
using namespace std;

long long int fact(int n){
    if (n == 1)
        return 1;
    else
        return (n * fact(n-1));
}

int main(){
    int number;
    cin >> number;
    cout << fact(number);
    return 1;
}

