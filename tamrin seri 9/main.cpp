#include <iostream>
#include <iomanip>
using namespace std;

int moghayese(){
//	for(int i = 0 ; )
}

int A2(){
	int majhul;
	cin >> majhul;
	if(majhul == 0 || majhul == 1 || majhul == 2 || majhul == 3){
		if(majhul == 0){
			
		}
	}
}

int main() {
	int amaliat;
	cin >> amaliat;
	for(; amaliat == 1 || amaliat == 2 || amaliat == 3 ;){
		if(amaliat == 1){
			int pardazesh_ha;
			cin >> pardazesh_ha;
			int i = 0 , j = 0 , a = 0;
			int  q = 0 , w = 0;
			char name_pardazesh[pardazesh_ha][11];
			int cpu , ram , net;
			int n = 0;
			for(int *ip = &i ; *ip < pardazesh_ha ; *ip = *ip + 1){
				cin.getline(name_pardazesh[pardazesh_ha] , 11);
				cin >> cpu >> ram >> net;				
			}
			if(cpu < 1000 && ram < 1000 && net < 1000){
				cout << "All given data has been stored successfully!" << endl;
			}
		}
		if(amaliat == 2){
			A2();
		}
//		if(amaliat == 1){
//			A3();
//		}
	}
	return 0;
}
