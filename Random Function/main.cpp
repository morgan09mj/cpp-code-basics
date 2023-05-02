//#include <iostream>
//using namespace std;

//int main(){
//	int n = 7; 
	/*switch(n){
	case 1: cout << "yes"; 
	break; 
	case 2: cout << "no"; 
	break; 
	default: cout << "no idea"; 
	}*/
//	cout << n % 3 << endl;
/*    char grade;
    int count_A=0 , count_B=0 ,count_C=0;
    
    while(cin >> grade) // True ^Z Ctrl+Z Ctrl+D Ctrl+C EOF
    {
      switch (grade)
      {
          case 'a':
          case 'A': count_A++;
                         break;
          case 'b':
          case 'B': count_B++;
                         break;
          case 'c':
          case 'C': count_C++;
                         break;
           default:
                    cout << "incorrect input" << endl;
      }
    }
    cout << count_A << '\t' << count_B << '\t' << count_C << endl;*/
//    int a;
//   if((a = cin.get()) != EOF){
//    	cout << a << endl;
//	}
//	int b;
//	cin >> b;
//	cout << b;
//    return 0;
//}
/*int factoriel(int n , int b  , int c = 5){ // n = m;
    int fact = 1;
    for (int i = n; i > 0; i--)
        fact = fact * i;
    return fact;
}

int main(){
    int m , n , b = 5;
    n = 4;
    cin >> m;
    int f = factoriel(m , n , b);
    cout << f;
    return 1;
}*/
/*int sum2(int n){  //tabe bazgashty
    if (n == 1)
        return 1;
    else
        return (n + sum2(n-1));
}

int main(){
    int number;
    cin >> number;
    cout << sum(number);
    return 1;
}*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void random_n(int n){ // adad tasadofy
    cout << rand() << endl;
    return;
}

int main(){
    int n;
    cin >> n;
    srand(time(0));
    random_n(n);
    return 1;
}
