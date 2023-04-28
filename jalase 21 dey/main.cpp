#include <iostream>
using namespace std;

int main() {
	//non-const pointer to non-const data
	int v = 2;	
	/*int * vptr = &v;
	(*vptr)++;
	cout << vptr << '\t' << *vptr << endl;
	vptr++;
	cout << vptr << '\t' << *vptr << endl;
	*vptr++ //*(vptr)++;
	cout << vptr << '\t' << *vptr << endl;*/
	
	//non-const pointer to const data
	/*const int * vptr = &v;
	v++;
	vptr++;
	cout << vptr << '\t' << *vptr << endl;
	*vptr++; //*(vptr)++;
	cout << vptr << '\t' << *vptr << endl;*/
	
	//const pointer to non-const data
	int * const vptr = &v;
	(*vptr)++;	
	cout << vptr << '\t' << *vptr << endl;
	//const pointer to const data
	/*const int * const vptr = &v;
	cout << vptr << '\t' << *vptr << endl;*/
	return 0;
}
