#include <iostream>
#include<cmath>

using namespace std;



int takhmin(int n){
	
	
	cout << "The predicted price is "<< 4 * n;	
}







int price(int ary[4][1]){
	
	int info[4][2];
	info[0][1]={800};
	info[1][1]={600};
	info[2][1]={300};
	info[3][1]={400};
	int s = 0;
	int sum; 
	
	for(int i = 0 ; i < 4 ; i++){
		ary[i][1] = ary[i][1]-info[i][1];
	}
		
	for(int i = 0 ; i < 4 ; i++){
		sum = s + (ary[1][i]*ary[1][i]);
		s = sum;
	}	
	return sum;
}


int w_yabi(int n){
	
	int w1=1;
	int array1[4][1] = {250, 150, 75, 100};	
	int p1 = price(array1);
	
	int w2=2;
	int array2[4][1] = {500, 300, 150, 200};		
	int p2 = price(array2);
		
	int w3=3;
	int array3[4][1] = {750, 450, 225, 300};
	int p3 = price(array3);
		
	int w4=4;
	int array4[4][1] = {1000, 600, 300, 400};
	int p4 = price(array4);		
	
	
	if(p1>p2>p3>p4)
		cout << "The best W is 4.";
	
	
	

}


int main() {
	
	const int n = 4;
	const int m = 2;
	int info[n][m];
	
	info[0][0]={250};
	info[0][1]={800};
	info[1][0]={150};
	info[1][1]={600};	
	info[2][0]={75};
	info[2][1]={300};	
	info[3][0]={100};
	info[3][1]={400};	
	
	
	
	int type;
	cin >> type;
	
	
	if(type==1){
		cout << "Enter house number:"<<endl;
		
		int opt1;
		cin >> opt1;
		
		if(opt1==1){
			cout << "House 1: "<<info[0][0]<<" meters "<<info[0][1]<<" millions";
		}
		
		if(opt1==2){
			cout << "House 1: "<<info[1][0]<<" meters "<<info[1][1]<<" millions";
		}		
		if(opt1==3){
			cout << "House 1: "<<info[2][0]<<" meters "<<info[2][1]<<" millions";
		}		
		if(opt1==4){
			cout << "House 1: "<<info[3][0]<<" meters "<<info[3][1]<<" millions";
		}		
	}
	
	
	if(type==2){
		
			int w1=1;
	int array1[4][1] = {250, 150, 75, 100};	
	int p1 = price(array1);
	
	int w2=2;
	int array2[4][1] = {500, 300, 150, 200};		
	int p2 = price(array2);
		
	int w3=3;
	int array3[4][1] = {750, 450, 225, 300};
	int p3 = price(array3);
		
	int w4=4;
	int array4[4][1] = {1000, 600, 300, 400};
	int p4 = price(array4);		
	
	
		cout << "The best W is 4.";	
	}
	
		
	
	if(type==3){
		
		
		cout <<"Enter area in square meter: "<<endl;
		int meter;
		cin >> meter;
		takhmin(meter);	
		
	}
	return 0;
}
