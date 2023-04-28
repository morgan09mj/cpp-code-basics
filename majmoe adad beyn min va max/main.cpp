#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int min , max;
	cout << "min va max ra vared konid" <<endl;
	cin >> min >> max;
	int i = min +1;
	int s = 0;
	for (  ; i <max ; i++)
		s = s + i;
	cout << s <<endl;
	return 0;
}
