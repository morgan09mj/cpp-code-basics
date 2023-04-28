#include <iostream> 
using namespace std;

void r(int n) {
	cin >> n;
	if(n >= 1){
		if(n <= 1000){
	int k = 0;
	for(int i = 1 ; i <= n; i++){
		k = k + i;
	}
	n = k;
	int w;
    for(w = 1 ; w <= n ; w++)
        if(n % w == 0)
            cout<<w<<" " ;
}
}
}
int main(){
int p;
    r(p); 
    return 0; 
}
