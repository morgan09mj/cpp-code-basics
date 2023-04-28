/*#include<iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int tavan(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a* tavan(a,b-1);
    
}
long int jam(int q){
	return 1;
}
int main()
{
    int p , t;
	cin>>p>>t;
    cout<<tavan(p,t)<<endl;
    return 1;
}*/

/*#include <iostream>
    using namespace std;
	   int main()
	   {
	      long int n , sum ,t ;
          cout << "Yek adad Vared konid va kelid ENTER bezanid :";
		  cin >> n ;
		  sum = 0 ;
		  while ( n != 0 ) {
		         t = n % 10 ;
		 sum = sum + t ;
		 n = n / 10 ;
		 }
		 cout << sum << endl;
		 return 0;
 }*/
/* int main(){

int n=0,sum=0;

std::cout<"Enter a number: ";

std::cin>>n;

while(n!=0)

{

    std::cout<<"  "<<n%10;

    sum+=n%10;

    n/=10;

}



std::cout<<"\n Sum of figures: "<<sum;

getch();

return 0;

}*/
/*#include<iostream>
#include<conio.h>

using namespace std;


int sumdigit(int number)
{
    if(number<10)
             return number;
    else
        return number%10+ sumdigit(number/10);
}

int _tmain(int argc, _TCHAR* argv[])
{
    int num;

    cout<<"Enter A Number For Show Sum Of Digits:";
    cin>>num;
    
    cout<<endl<<"Sum Digit is: "<<sumdigit(num);

    getch();
   
}*/
#include<iostream>

int main(){

int a;

int b=0;

scanf("%d",&a);

while(a!=0){

   b=b+a%10;

   a=a/10;

}

printf("%d",b);

return 0;

}
