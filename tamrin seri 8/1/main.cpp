#include <iostream>
using namespace std;
void swap(int* a, int* b) {
	int c = 0;
	int* rc = &c;
	* rc = * a;
	* a = * b;
	* b = * rc;
}
int main() {
    int a = 11;
    int b = 1;
    cout << "a before swap:" << a << " b before swap:" << b << endl;
    swap(&a, &b);
    cout << "a after swap:" << a << " b after swap:" << b;
}
