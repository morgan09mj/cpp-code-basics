#include <iostream>
#include <math.h>
#include<iomanip>


using namespace std;

const int n = 6;


int zarb_dakheli(int array1[n] , int array2[n]){
	
	
	
	
	/*double sum;
	double s = 0;
	
	for(int i = 0; i < n ; i++){
		sum = s + array1[i];
		s = sum;
	}
	for(int i = 0; i < n ; i++){
		array1[i] =  (array1[i])/(sum);
	}
	s=0 , sum = 0;
	for(int i = 0; i < n ; i++){
		sum = s + array2[i];
		s = sum;
	}
	for(int i = 0; i < n ; i++){
		array2[i] =  (array2[i])/(sum);
	}	
*/
	float zarb_do_array=0.0,zarb_A=0.0, zarb_B=0.0;	
	
	for( int i = 0; i < n; i++){
		
		zarb_do_array += array1[i]*array2[i];
		zarb_A += array1[i]*array1[i];
		zarb_B += array2[i]*array2[i];
	}
	int x = zarb_do_array / (sqrt(zarb_A)*sqrt(zarb_B));
	cout << "The cosine similarity is:"<<setprecision(5)<<x<<endl;
}
		

int normalization(int ary[n]){
	double normi[6];
	double sum;
	double s = 0;
	
	for(int i = 0; i < n ; i++){
		sum = s + ary[i];
		s = sum;
	}
	for(int j = 0; j < n ; j++){
		double norm =  (ary[j])/(sum);
		cout << setprecision(5)<< norm<< ' ';
	}	
}


int main() {
	
	const int n = 6;
	int Bob[n]= { 0 , 1 , 0 , 3 , 0 , 2 };

	int Mike[n]= { 2 , 4 , 3 , 0 , 1 , 0 };

	int Joe[n]= { 1 , 1 , 1 , 1 , 1 , 1 };

	int Ted[n]= { 0 , 2 , 2 , 0 , 1 , 0 };

	int John[n]= {2 , 0 , 0 , 1 , 0 , 0 };
	
	int type;
	cin >> type;
	
	
	if(type==1){
		cout <<"Which image do you intend to see?!"<<endl;
		int opt1;
		cin >> opt1;
		if(opt1==1){
			for(int i = 0; i < n; i++ )
				cout << Bob[i]<<' ';
		}
		if(opt1==2){
			for(int i = 0; i < n; i++ )
				cout << Mike[i]<<' ';			
		}
		if(opt1==3){
			for(int i = 0; i < n; i++ )
				cout << Joe[i]<<' 1';			
		}
		if(opt1==4){
			for(int i = 0; i < n; i++ )
				cout << Ted[i]<<' ';			
		}
		if(opt1==5){
			for(int i = 0; i < n; i++ )
				cout << John[i]<<' ';			
		}								
	}
	
	
	if(type==2){
		
		cout << "Which image do you intend to normalize?!"<<endl;	
		int opt2;
		cin >> opt2;		
		
		if(opt2 == 1)
			cout << normalization(Bob);
		if(opt2 == 2)
			cout << normalization(Mike);		
		if(opt2 == 3)
			cout << normalization(Joe);		
		if(opt2 == 4)
			cout << normalization(Ted);		
		if(opt2 == 5)
			cout << normalization(John);			
	}
	
	
	if(type==3){
		
	cout << "Enter 2 arrays:"<<endl;	
		
	int opt3,opt4;
	cin>>opt3>>opt4;
		
					
		if((opt3==1&&opt4==2)||(opt3==2&&opt4==1)){
			zarb_dakheli(Bob , Mike);

		}
		if((opt3==1&&opt4==3)||(opt3==3&&opt4==1)){
			zarb_dakheli(Bob , Joe);
			
		}		
		if((opt3==1&&opt4==4)||(opt3==4&&opt4==1))	{
			zarb_dakheli(Bob , Ted);
				
		}	
		if((opt3==1&&opt4==5)||(opt3==5&&opt4==1))	{
			zarb_dakheli(Bob , John);
			
		}	
		if((opt3==3&&opt4==4)||(opt3==4&&opt4==3)){
			zarb_dakheli(Joe , Ted);
			
		}
		if((opt3==3&&opt4==5)||(opt3==5&&opt4==3)){
			zarb_dakheli(Joe ,John );
			
		}		
		if((opt3==2&&opt4==3)||(opt3==3&&opt4==2)){
			zarb_dakheli(Mike ,Joe );
			
		}		
		if((opt3==2&&opt4==4)||(opt3==4&&opt4==2)){
			zarb_dakheli(Mike ,Ted );
			
		}		
		if((opt3==2&&opt4==5)||(opt3==5&&opt4==2)){
			zarb_dakheli(Mike ,John );
			
		}		
		if((opt3==4&&opt4==5)||(opt3==5&&opt4==4)){
			zarb_dakheli(Ted , John);
		}
	}
	
		if(type==4)
		cout << "Murderer is Joe.";
			
	return 0;
}
