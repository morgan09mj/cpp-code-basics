#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float A1(){
	int shomare_acs;
	cout << "Which image do you intend to see?!" << endl;
	cin >> shomare_acs;
	const unsigned int n = 6;
	if(shomare_acs == 1){
		int Bob[n] = { 0 , 1 , 0 , 3 , 0 , 2};
		for(unsigned int i = 0 ; i < n ; i++){
			cout << Bob[i] << " ";
		}
		cout << endl;
	}
	if(shomare_acs == 2){
		int Mike[n] = { 2 , 4 , 3 , 0 , 1 , 0 };
		for(unsigned int i = 0 ; i < n ; i++){
			cout << Mike[i] << " ";
		}
		cout << endl;
	}
	if(shomare_acs == 3){
		int Joe[n] = { 1 , 1 , 1 , 1 , 1 , 1 };
		for(unsigned int i = 0 ; i < n ; i++){
			cout << Joe[i] << " ";
		}
		cout << endl;
	}
	if(shomare_acs == 4){
		int Ted[n] = { 0 , 2 , 2 , 0 , 1 , 0 };
		for(unsigned int i = 0 ; i < n ; i++){
			cout << Ted[i] << " ";
		}
		cout << endl;
	}
	if(shomare_acs == 5){
		int John[n] = { 2 , 0 , 0 , 1 , 0 , 0 };
		for(unsigned int i = 0 ; i < n ; i++){
			cout << John[i] << " ";
		}
		cout << endl;
	}
}

float A2(float array[]){
	const unsigned int n = 6;
	float majmu = 0 , x = 0;
		for(unsigned int i = 0 ; i < n ; i++){
			majmu += array[i];
		}
		for(unsigned int i = 0 ; i < n ; i++){
			array[i] = array[i] / majmu;
			x = array[i];
			cout << setprecision(5) << x << " ";
		}
		cout << endl;
}

float A3(float array1[] , float array2[] , unsigned int n){
	
	float majmu1 = 0 , majmu2 = 0 , x = 0 ;
	for(unsigned int i = 0 ; i < n ; i++){
		majmu1 += array1[i];
		majmu2 += array2[i];
	}
	for(unsigned int i = 0 ; i < n ; i++){
		array1[i] = array1[i] / majmu1;
		array2[i] = array2[i] / majmu2;
	}
		
    float zarb_do_array = 0.0, zarb_A = 0.0, zarb_B = 0.0 ;
     for(unsigned int i = 0 ; i < n ; i++) {
        zarb_do_array += array1[i] * array2[i] ;
        zarb_A += array1[i] * array1[i] ;
        zarb_B += array2[i] * array2[i] ;
    }
    x = zarb_do_array / (sqrt(zarb_A) * sqrt(zarb_B));
    cout << "The cosine similarity is:" << setprecision(5) << x << endl;
}

float A4(){
	const int n = 6;
	float Bob[n] = { 0 , 0.16667 , 0 , 0.5 , 0 , 0.33333};
	float Mike[n] = { 0.2 , 0.4 , 0.3 , 0 , 0.1 , 0 };
	float Joe[n] = { 0.16667 , 0.16667 , 0.16667 , 0.16667 , 0.16667 , 0.16667 };
	float Ted[n] = { 0 , 0.4 , 0.4 , 0 , 0.2 , 0 };
	float John[n] = { 0.66667 , 0 , 0 , 0.33333 , 0 , 0 };
	float zarb_do_array = 0.0, zarb_A = 0.0, zarb_B = 0.0 ;
    for(unsigned int i = 0 ; i < n ; i++) {
    	zarb_do_array += Bob[i] * John[i] ;
        zarb_A += Bob[i] * Bob[i] ;
        zarb_B += John[i] * John[i] ;
    }
    float f1 = zarb_do_array / (sqrt(zarb_A) * sqrt(zarb_B));
    f1 -= 1;
    zarb_do_array = 0.0, zarb_A = 0.0, zarb_B = 0.0 ;
    for(unsigned int i = 0 ; i < n ; i++) {
    	zarb_do_array += Mike[i] * John[i] ;
        zarb_A += Mike[i] * Mike[i] ;
        zarb_B += John[i] * John[i] ;
    }
    float f2 = zarb_do_array / (sqrt(zarb_A) * sqrt(zarb_B));
    f2 -= 1;
    zarb_do_array = 0.0, zarb_A = 0.0, zarb_B = 0.0 ;
    for(unsigned int i = 0 ; i < n ; i++) {
    	zarb_do_array += Joe[i] * John[i] ;
        zarb_A += Joe[i] * Joe[i] ;
        zarb_B += John[i] * John[i] ;
    }
    float f3 = zarb_do_array / (sqrt(zarb_A) * sqrt(zarb_B));
    f3 -= 1;
    zarb_do_array = 0.0, zarb_A = 0.0, zarb_B = 0.0 ;
    for(unsigned int i = 0 ; i < n ; i++) {
    	zarb_do_array += Ted[i] * John[i] ;
        zarb_A += Ted[i] * Ted[i] ;
        zarb_B += John[i] * John[i] ;
    }
    float f4 = zarb_do_array / (sqrt(zarb_A) * sqrt(zarb_B));
    f4 -= 1;
    if(f1 > f2 && f1 > f3 && f1 > f4){
    	cout << "Murderer is Bob." << endl;
	}
	if(f2 > f1 && f2 > f3 && f2 > f4){
    	cout << "Murderer is Mike." << endl;
	}
	if(f3 > f1 && f3 > f2 && f3 > f4){
    	cout << "Murderer is Joe." << endl;
	}
	if(f4 > f1 && f4 > f2 && f4 > f3){
    	cout << "Murderer is Ted." << endl;
	}
}

int main() {
	const unsigned int n = 6;
	float Bob[n] = { 0 , 1 , 0 , 3 , 0 , 2};
	float Mike[n] = { 2 , 4 , 3 , 0 , 1 , 0 };
	float Joe[n] = { 1 , 1 , 1 , 1 , 1 , 1 };
	float Ted[n] = { 0 , 2 , 2 , 0 , 1 , 0 };
	float John[n] = { 2 , 0 , 0 , 1 , 0 , 0 };
	float shomare_amliat , shomare_acs , array1 , array2 , s = 0;
	cin >> shomare_amliat;
	float array_A[n];
	float array_B[n];
	for( ; shomare_amliat == 1 || shomare_amliat == 2 || shomare_amliat == 3 ; ){
		if(s == 1){
			cin >> shomare_amliat;
		}
		if(shomare_amliat == 1){
			A1();
		}
		if(shomare_amliat == 2){
			cout << "Which image do you intend to normalize?!" << endl;
			cin >> shomare_acs;
			if(shomare_acs == 1){
				A2(Bob);
			}
			if(shomare_acs == 2){
				A2(Mike);
			}
			if(shomare_acs == 3){
				A2(Joe);
			}
			if(shomare_acs == 4){
				A2(Ted);
			}
			if(shomare_acs == 5){
				A2(John);
			}
		}
		if(shomare_amliat == 3){
			const unsigned int g = 6;
			cout << "Enter 2 arrays:" << endl;
			cin >> array1 >> array2;
			if(array1 == 1){
				if(array2 == 2){
					A3(Bob , Mike , g);
				}
				if(array2 == 3){
					A3(Bob , Joe , g);
				}
				if(array2 == 4){
					A3(Bob , Ted , g);
				}
				if(array2 == 5){
					A3(Bob , John , g);
				}
			}
			if(array1 == 2){
				if(array2 == 1){
					A3(Mike , Bob , g);
				}
				if(array2 == 3){
					A3(Mike , Joe , g);
				}
				if(array2 == 4){
					A3(Mike , Ted , g);
				}
				if(array2 == 5){
					A3(Mike , John , g);
				}
			}
			if(array1 == 3){
				if(array2 == 1){
					A3(Joe , Bob , g);
				}
				if(array2 == 2){
					A3(Joe , Mike , g);
				}
				if(array2 == 4){
					A3(Joe , Ted , g);
				}
				if(array2 == 5){
					A3(Joe , John , g);
				}
			}
			if(array1 == 4){
				if(array2 == 1){
					A3(Ted , Bob , g);
				}
				if(array2 == 2){
					A3(Ted , Mike , g);
				}
				if(array2 == 3){
					A3(Ted , Joe , g);
				}
				if(array2 == 5){
					A3(Ted , John , g);
				}
			}
			if(array1 == 5){
				if(array2 == 1){
					A3(John , Bob , g);
				}
				if(array2 == 2){
					A3(John , Mike , g);
				}
				if(array2 == 3){
					A3(John , Joe , g);
				}
				if(array2 == 4){
					A3(John , Ted , g);
				}
			}
		}
		s = 1;
	}
	if(shomare_amliat == 4){
		A4();
	}
	return 0;
}
