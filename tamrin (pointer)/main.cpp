#include <iostream>
using namespace std;

int main() {
/*	int v = 45;
	int * vPtr = &v;
	cout << v << '\t' <<  vPtr << '\t'<< &v << '\t'<< *vPtr << '\t'<< &*vPtr << '\t'
	<< &vPtr<< '\t'<< *&vPtr<< endl;*/
	int a = 2;
	int b = 3;
	string c = "sadegh";
	int *aPtr = &a;
	int *bPtr = &b;
	cout << a << '\t' << aPtr << '\t' << *aPtr << '\t' << &aPtr << endl;
	cout << b << '\t' << bPtr << '\t' << *bPtr << '\t' << &bPtr << endl;
	int *cPtr;
	float *dPtr;
	cPtr = aPtr;
	aPtr = bPtr;
	bPtr = cPtr;
	cout << a << '\t' << aPtr << '\t' << *aPtr << '\t' << &aPtr << endl;
	cout << b << '\t' << bPtr << '\t' << *bPtr << '\t' << &bPtr << endl;
	cout << sizeof(aPtr) << endl;
	cout << sizeof(bPtr) << endl;
	cout << sizeof(cPtr) << endl;
	cout << sizeof(dPtr) << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;

	return 0;
}
