#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	for(char c='A'; c<= 'Z'; c++)
		cout<< c<<'\t'<< int(c)<<'\n';
	for(int i=1; i<=127; i++)
		cout<< i<<'\t'<<char(i)<<'\n';	
	return 0;
}
