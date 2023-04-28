#include <iostream>
using namespace std;

int main() {
	int a = 6;
	int *f = &a;
	cout << a << '\t'<< &a << '\t' << f << '\t' << *f << '\t' << &f << '\t' << &*f << endl;
	(*f)++;
	cout << a << '\t'<< &a << '\t' << f << '\t' << *f << '\t' << &f << '\t' << *&*f << endl;
	++a;
	cout << a <<endl;
	a++;
	cout << a << endl;
	int *h;
	*h = 12;
	cout << h << '\t' << *h << '\t' << &h << '\t' << *&*h << endl;
	int *t = new int[3];
	t[0] = 100;
	t[1] = -95;
	
	return 0;
}
