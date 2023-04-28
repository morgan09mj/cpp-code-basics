#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int number1,number2;
	char amalgar;
	float result;
	cout << " 2 adad mored nazar ra vared konid" << endl;
	cin >> number1 >> number2;
	cout << " amalgar mored nazar ra vared konid(+ ya - ya * ya /)" << endl;
	cin >> amalgar;
	switch(amalgar){
		case '+':{
			result=number1+number2;
			break;
		}
		case '-':{
			result=number1-number2;
			break;
		}
		case '*':{
			result=number1*number2;
			break;
		}
		case '/':{
			result=number1/number2;
			break;
		}
		default:{
			cout<<"amalgar vorudi eshtebah hast"<<endl;
			return 0;
			//break;
		}
	}
	cout<<"hasel amaliat barabar ast ba  "<<number1<<amalgar<<number2<<'='<<result<<endl;
	return 0;
}
