#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char point;
	cout <<"nomre daneshju ra vared conid (A/a ya B/b ya C/c)" <<endl;
	cin >> point;
	switch (point){
		case 'A':{
		case 'a':cout <<"excellent";	
			break;
		}
		case 'B':{
		case 'b':cout <<"good";	
			break;
		}
		case 'C':{
		case 'c':cout <<"try mor";	
			break;
		}
		default:cout <<"the input is incorrent";
	}
	return 0;
}
