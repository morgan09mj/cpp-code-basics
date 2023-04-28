#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char Even_or_Odd;
int main() {
	int age;
	cin>>age;
	if(age % 2 !=0)
	{
		Even_or_Odd = 'O';
	}
	else
	{
		Even_or_Odd = 'E';
	}
	switch (Even_or_Odd)
	{
		case E:
			cout<< "your age is an Even number"<< endl;
		case O:
			cout<< "your age is an Odd number"<< endl;
			break
		default:
			break:
	}
	return 0;
}
