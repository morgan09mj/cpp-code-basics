#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char n;
	cout << "yek harf ra vared konid" <<endl;
	cin>> n;
	if( n >= 65){
		if( n <= 122){
	for(n >= 'A'; n<= 'Z';  ){
		cout<<n - 64<<endl;
		break;
	}
	if(n >= 'a'){
	for(n >= 'a'; n<= 'z';  ){
		cout<<n - 96<<endl;
		break;
	}
	}
	}
	}
	if(n <= 65){    
		cout <<"Non-alphabetic"<<endl;
	}
	if(n >= 122){    
		cout <<"Non-alphabetic"<<endl;
	}
		return 0;
}
