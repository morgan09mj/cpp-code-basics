#include <iostream>
#include <iomanip>
using namespace std;
string n;

int main() {
	cout<<"Welcome to Our Coffee Shop:"<<endl;
	cout<<"Are you a freshman?"<<endl;
	cin>>n;
	if(n == "no"){
	cout<<"Original Menu:"<<endl;
	cout<<"1.Americano 3.5 $"<<endl;
	cout<<"2.Latte 6 $"<<endl;
	cout<<"3.Affogato 7.5 $"<<endl;
	cout<<"4.Dark Coffee 3 $"<<endl;
	}
	if(n == "yes"){
	cout<<"Discount Menu:"<<endl;
	cout<<"1.Americano 2 $"<<endl;
	cout<<"2.Latte 5 $"<<endl;
	cout<<"3.Affogato 6 $"<<endl;
	cout<<"4.Dark Coffee 2 $"<<endl;
	}
	float j = 0;
	string z = "no";
	for( ;z == "no"; ){
	cout<<"What's your order?"<<endl;
	string t;
	cin.ignore();
	getline (cin , t);
	float w;
	int p = 0;
	for(;p == 0;){
		cout << "How many?" << endl;
		cin >> p;
		if(p == 0){
			cout << "Sorry! Not possible." << endl;
		}
	}
		if(n == "yes"){
		if(t == "Americano" || t == "1")
		w = 2;
		if(t == "Latte" || t == "2")
		w = 5;
		if(t == "Affogato" || t == "3")
		w = 6;
		if(t == "Dark Coffee" || t == "4")
		w = 2;
	}
		if(n == "no"){
		if(t == "Americano" || t == "1")
		w = 3.5;
		if(t == "Latte" || t == "2")
		w = 6;
		if(t == "Affogato" || t == "3")
		w = 7.5;
		if(t == "Dark Coffee" || t == "4")
		w = 3;
	}
	
		float k ;
		k =  p * w;
		j = j +k;
	cout<<"Is your order over?"<<endl;
	cin>>z;
}
		float rb;
	rb = j * 9 / 100;
	j = j + rb;
	if(z == "yes"){
	cout<<"Please Pay "<<j<<" $"<<endl;
	}
	float mablag;
	cin >> mablag;
    cout.precision(2);
	for( ;mablag < 0; ){
		cout<<"Input is not valid!"<<endl;
		cin >> mablag;
	    cout.precision(2);
	}
	if(mablag == j){
		cout<<"Thank you! Come and visit us Again." << endl;
	}
	if(mablag < j){
		float v;
		v = j - mablag;
	    cout.precision(2);
		cout<< fixed << v <<" $ still remains."<<endl;
		
			cin>>mablag;
		if(mablag == v)
			cout<<"Ok, See you soon."<<endl;
		else{
			if(mablag < v)
				cout<<"We are sorry, Please leave the Coffee shop."<<endl;
			if(mablag > v){
				float nb;
				nb = mablag - v;
				cout<<"Thank you! Come and visit us Again. Here is your extra money: "<<nb<<"$"<<endl;
			}
		}
	}
	if(mablag > j){
		float u;
		u = mablag - j;
		cout<<"Thank you! Come and visit us Again. Here is your extra money: "<<u<<"$"<<endl;
	}
	return 0;
}
