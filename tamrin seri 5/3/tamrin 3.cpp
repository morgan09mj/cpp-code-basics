#include <iostream>
using namespace std;

float Square(float a){
	if(a >= 1){
			for(float i = 1; i <= a ; i++){
				cout << "*";
			}
			if(a > 1){
				cout << endl;
			}
			float k = a - 2;
			if(a >= 3){
				for(float i = 1 ; i <= k ; i++){
					cout << "*";
					for(float j = 1 ; j <= k ; j++){
					cout << " ";
					}
					cout << "*" << endl;
				}
			}
			if(a >= 2){
			for(float i = 1; i <= a ; i++){
					cout << "*";
				}	
			}
	}
}

float Rectangle(float c , float d){
	if(c >= 1 & d >= 1){
		if(c <= 100 & d <= 100){
			for(float i = 1; i <= c ; i++){
				cout << "*";
			}
			if(d > 1){
				cout << endl;
			}
			float e = d - 2;
			if(c >= 3){
				for(float i = 1 ; i <= e ; i++){
					cout << "*";
					for(float j = 1 ; j <= c-2 ; j++){
					cout << " ";
					}
					cout << "*" << endl;
				}
			}
			if(d >= 2){
			for(float i = 1; i <= c ; i++){
					cout << "*";
			}
		}
	}
}
}

int main() {
	cout << "Square or Rectangle?" << endl;
	string shape;
	cin >> shape;
	if(shape == "Square"){
		float side;
		cin >> side;
		Square(side);
	}
	if(shape == "Rectangle"){
		float width , height;
		cin >> height >> width;
		if(height >= width){
		Rectangle(height , width);
		}
		if(height < width){
			float o = height;
			height = width;
			width = o;
		Rectangle(height , width);
		}
	}
	return 0;
}
