#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int year(int a, int b){
	return b-a;
}
int month(int c,int d){
	return d-c;
}
int day(int e,int f){
	return f-e;
}
int main(){
	int a,b,c,d,e,f;
	cin>>a,c,e;
	cin>>b,d,f;
	int day = day(e,f);
	int month = month(c,d);
	int year = year(a,b);
	if(day<0){
		day+=30;
		month--;0
}
	if (month<0){
		month+=12
		year--
	}
	cout<<year<<'/'<<month<<'/'<<day<<endl;
	if(year>12){
		cout<<"Adult"<<endl;
	else
		cout<<"Child"<<endl;
	}
	return 0
}
