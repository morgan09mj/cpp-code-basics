#include <iostream>

using namespace std;

void Seprates_Number(int, int *);

string Check(int, int *);

int main()

{

    int Number;

    cin >> Number;

    int num = 0;

    Seprates_Number(Number , &num);

    cout << Check(Number , &num) << endl;

    return 0;

}

void Seprates_Number(int Number, int *ptr)

{
	*ptr = Number;
	int i;
	for(i = 0 ; *ptr > 0 ; *ptr = *ptr / 10){
		i = (i * 10) + (*ptr % 10);
	}
	*ptr = i;
}

string Check(int Number, int *pointer)

{

	if(Number == *pointer){
		cout << "Yes" << endl;
	}
	if(Number != *pointer){
		cout << "No" << endl;
	}
	exit(0);
}
