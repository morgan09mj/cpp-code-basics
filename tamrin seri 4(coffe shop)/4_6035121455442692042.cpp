#include <iostream>
#include <iomanip>
using namespace std  ; 
int main ()
{
	string freshmancheck , overcheck , order ;
	double sum ; //baraye soorathesab
	double payment ; //payment karbar
	double remainpayment ; //baghi mandeh pardakht
	double pardakhtsanavyeh ;
	double lattebat = 5 ; //gheymat ba takhfif
	double lattebit = 6 ; //gheymat bi takhfif 
	double amebat = 2 ;
	double amebit = 3.5 ;
	double darkbat = 2 ;
	double darkbit = 3 ;
	double affobat = 6 ;
	double affobit = 7.5 ;
	int lattet = 0 ; //tedad har kodoom
	int affot = 0 ; 
	int amet = 0 ;
	int darkt = 0 ;
	int tedad ;
	cout <<"Welcome to Our Coffee Shop:\n" ;
	cout << "Are you a freshman?\n" ;
	getline ( cin , freshmancheck ) ;
	if ( freshmancheck == "yes" )
	{
		cout << "Discount menu:\n1.Americano 2 $\n2.Latte 5 $\n3.Affogato 6 $\n4.Dark Coffee 2 $\n" ;
		do 
		{
			cout << "What's your order?\n" ;
			getline ( cin , order ) ;
			cout << "How many?\n" ;
			cin >> tedad ;
			while ( tedad == 0 )
			{
				cout << "Sorry! Not possible.\n" ;
				cin >> tedad ;
			}
			if ( order == "Americano" || order == "1" )
				amet += tedad ;
			else if ( order == "Latte" || order == "2" )
				lattet += tedad ; 
			else if ( order == "Affogato" || order == "3" )
				affot += tedad ;
			else if ( order == "Dark Coffee" || order == "4" ) 
				darkt += tedad ;
			cout << "Is your order over?\n" ;
			cin >> overcheck ;
		}
		while ( overcheck == "no" ) ;
		if ( overcheck == "yes" )
		{
			sum = ( ( darkt * darkbat ) + ( affot * affobat ) + ( lattet * lattebat ) + ( amet * amebat ) ) * 1.09 ;
			cout << "Please Pay " << sum << " $\n" ; 
			cin >> payment ; 
			while ( payment < 0 ) 
			{
				cout << "Input is not valid!\n" ;
				cin >> payment ;
			}
			if ( payment == sum ) 
				cout << "Thank you! Come and visit us Again.\n" ;
			else 
			{
				if ( payment < sum )
				{
					remainpayment = sum - payment ;
					cout << remainpayment << " $ still remains.\n" ;
					cin >> pardakhtsanavyeh ;
					if ( pardakhtsanavyeh == remainpayment )
						cout << "Ok, See you soon.\n" ;
					else 
						cout << "We are sorry, Please leave the Coffee shop." ;
				}
				if ( payment > sum )
				{
					remainpayment = payment - sum ; 
					cout << "Thank you! Come and visit us Again. Here is your extra money: " << remainpayment << "$" ;
				}
			}
		}	
	}
	if ( freshmancheck == "no" ) 
	{
		cout << "Discount menu:\n1.Americano 3.5 $\n2.Latte 6 $\n3.Affogato 7.5 $\n4.Dark Coffee 3 $\n" ;
		do 
		{
			cout << "What's your order?\n" ;
			getline ( cin , order ) ;
			cout << "How many?\n" ;
			cin >> tedad ;
			while ( tedad == 0 )
			{
				cout << "Sorry! Not possible.\n" ;
				cin >> tedad ;
			}
			if ( order == "Americano" || order == "1" )
				amet += tedad ;
			else if ( order == "Latte" || order == "2" )
				lattet += tedad ; 
			else if ( order == "Affogato" || order == "3" )
				affot += tedad ;
			else if ( order == "Dark Coffee" || order == "4" ) 
				darkt += tedad ;
			cout << "Is your order over?\n" ;
			cin >> overcheck ;
		}
		while ( overcheck == "no" ) ;
		if ( overcheck == "yes" )
		{
			sum = ( ( darkt * darkbit ) + ( affot * affobit ) + ( lattet * lattebit ) + ( amet * amebit ) ) * 1.09 ;
			cout << "Please Pay " << sum << " $\n" ; 
			cin >> payment ; 
			while ( payment < 0 )
			{ 
				cout << "Input is not valid!\n" ;
				cin >> payment ;
			}
			if ( payment == sum ) 
				cout << "Thank you! Come and visit us Again.\n" ;
			else 
			{
				if ( payment < sum )
				{
					remainpayment = sum - payment ; 
					cout << remainpayment << " $ still remains.\n" ;
					cin >> pardakhtsanavyeh ;
					if ( pardakhtsanavyeh == remainpayment )
						cout << "Ok, See you soon.\n" ;
					else 
						cout << "We are sorry, Please leave the Coffee shop.\n" ;
				}
				if ( payment > sum )
				{
					remainpayment = payment - sum ; 
					cout << "Thank you! Come and visit us Again. Here is your extra money: " << remainpayment ;
				}
			}
		}
	}
	return 0 ;
}

