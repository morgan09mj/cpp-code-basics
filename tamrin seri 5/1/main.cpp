#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int m , amount;
int p(int m){
    int panj = 0;
	int yek = 0;
	int am = amount;
    int amount2 = amount;
    int amountt = amount;
    for(int q = 1;amount >= 5;q++){
	    amount = amount-5;
        panj++;
	}
    for(int w = 1;amount >= 1;w++){
        	amount = amount -1;
        	yek++;
	}
	int majmu = panj + yek;
	cout << majmu << endl;

	int qwe = 0;
	if(amountt == 1 || amountt == 2 || amountt == 3 || amountt == 4){
		qwe = 9;
	}
    for( ;amountt >= 5; ){
	    amountt = amountt-5;
	}
	int zxc = amountt;
    for( ;amountt >= 1; ){
   	    cout << "1";
   	    amountt = amountt - 1;
    	if(amountt >= 1){
        		cout << "+";
        }
	}
    for( ;am >= 5; ){
    	if(qwe != 9){
    		if(zxc != 0){
	    		if(am >= 5){
	        	cout << "+";
				}
			}
		}
	    am = am-5;
        cout << "5";
        zxc = 1;
	}
	cout << "=" << amount2 << endl;
}

int p(int t1 , int t2 ){
    int ceke1 = 0;
	int ceke2 = 0;
	int am = amount;
    int amount2 = amount;
    int amountt = amount;
    for( ;amount >= t1; ){
	    amount = amount-t1;
        ceke1++;
	}
	int a2 = 0;
	if(amount < t2){
		a2 = 1;
	}
    for( ;amount >= t2; ){
        	amount = amount -t2;
        	ceke2++;
	}
	if(amount == 0){
		int majmu = ceke1 + ceke2;
		cout << majmu << endl;
		
	    for( ;amountt >= t1; ){
		    amountt = amountt-t1;
		}
	    for( ;amountt >= t2; ){
	   	    cout << t2;
	   	    amountt = amountt -t2;
	    	if(amountt >= t2){
	        		cout << "+";
	        }
		}
		
	    for( ;am >= t1; ){
	    	if(am >= t1){
	    		if(a2 != 1){
			        cout << "+";
					}
				}
		    am = am-t1;
	        cout << t1;
	        a2 = 0;
		}
		cout << "=" << amount2 << endl;
	}
	if(amount != 0){
	int max = 122;
    int min = 97;
    srand(time(0));
    amount = (rand() % (max - min)) + min;
    
    int ceke1 = 0;
	int ceke2 = 0;
	int am = amount;
    int amount2 = amount;
    int amountt = amount;
    for( ;amount >= t1; ){
	    amount = amount-t1;
        ceke1++;
	}
	int a2 = 0;
	if(amount < t2){
		a2 = 1;
	}
    for( ;amount >= t2; ){
        	amount = amount -t2;
        	ceke2++;
	}
			int majmu = ceke1 + ceke2;
		cout << majmu << endl;
		
	    for( ;amountt >= t1; ){
		    amountt = amountt-t1;
		}
	    for( ;amountt >= t2; ){
	   	    cout << t2;
	   	    amountt = amountt -t2;
	    	if(amountt >= t2){
	        		cout << "+";
	        }
		}
		
	    for( ;am >= t1; ){
	    	if(am >= t1){
	    		if(a2 != 1){
			        cout << "+";
					}
				}
		    am = am-t1;
	        cout << t1;
	        a2 = 0;
		}
		cout << "=" << amount2 << endl;
	}
}
int p(int r1 , int r2 , int r3){
	
    int ceke1 = 0;
	int ceke2 = 0;
	int ceke3 = 0;
	int am = amount;
	int aq = amount;
    int amount2 = amount;
    int amountt = amount;
    for( ;amount >= r1; ){
	    amount = amount-r1;
        ceke1++;
	}
	int k1 = 0;
	if(amount < r2){
		k1 = 1;
	}
    for( ;amount >= r2; ){
        	amount = amount -r2;
        	ceke2++;
	}
	int k2 = 0;
	if(amount < r3){
		k2 = 1;
	}
    for( ;amount >= r3; ){
        	amount = amount -r3;
        	ceke3++;
	}
	if(amount == 0){
		int majmu = ceke1 + ceke2 + ceke3;
		cout << majmu << endl;
		
	    for( ;amountt >= r1; ){
		    amountt = amountt-r1;
		}
		
		for( ;amountt >= r2; ){
		    amountt = amountt-r2;
		}
	    for( ;amountt >= r3; ){
	   	    cout << r3;
	   	    amountt = amountt -r3;
	    	if(amountt >= r3){
	        		cout << "+";
	        }
		}
	    for( ;am >= r1; ){
		    am = am-r1;
		}
	    for( ;am >= r2; ){
		    	if(am >= r2){
		    		if(k2 != 1){
				        cout << "+";
				    }
				}
		    am = am-r2;
	        cout << r2;
	        k2 = 0;
		}
		for( ;aq >= r1; ){
	    	if(aq >= r1){
		    	if(k1 != 1){
			        cout << "+";
			    }    
			}
		    aq = aq-r1;
	        cout << r1;
	        k1 = 0;
		}
		cout << "=" << amount2 << endl;
	}
	if(amount != 0){
		int max = 122;
	    int min = 97;
	    srand(time(0));
	    amount = (rand() % (max - min)) + min;
	    
	    int ceke1 = 0;
		int ceke2 = 0;
		int ceke3 = 0;
		int am = amount;
		int aq = amount;
	    int amount2 = amount;
	    int amountt = amount;
	    for( ;amount >= r1; ){
		    amount = amount-r1;
	        ceke1++;
		}
		int k1 = 0;
		if(amount < r2){
			k1 = 1;
		}
	    for( ;amount >= r2; ){
	        	amount = amount -r2;
	        	ceke2++;
		}
		int k2 = 0;
		if(amount < r3){
			k2 = 1;
		}
	    for( ;amount >= r3; ){
	        	amount = amount -r3;
	        	ceke3++;
		}
				int majmu = ceke1 + ceke2 + ceke3;
			cout << majmu << endl;
			
		    for( ;amountt >= r1; ){
			    amountt = amountt-r1;
			}
			
			for( ;amountt >= r2; ){
			    amountt = amountt-r2;
			}
		    for( ;amountt >= r3; ){
		   	    cout << r3;
		   	    amountt = amountt -r3;
		    	if(amountt >= r3){
		        		cout << "+";
		        }
			}
		    for( ;am >= r1; ){
			    am = am-r1;
			}
		    for( ;am >= r2; ){
			   	if(am >= r2){
			    	if(k2 != 1){
				       cout << "+";
				    }
				}
			    am = am-r2;
		        cout << r2;
		        k2 = 0;
			}
			for( ;aq >= r1; ){
		    	if(aq >= r1){
			    	if(k1 != 1){
				        cout << "+";
				    }    
				}
			    aq = aq-r1;
		        cout << r1;
		        k1 = 0;
			}
			cout << "=" << amount2 << endl;
		}
}
int main() {
	int n;
	unsigned int a , b;
	cout << "Do you want to enter coin?" << endl;
	cin >> n;
	if(n == 0 || n == 2 || n==3){
		cin >> amount;
		srand(amount);
		if(amount >= 1){
			if(amount <= 10000 ){
				if(n == 0){
					p(n);
				}
				if(n == 2){
					int sek1 , sek2;
					cin >> sek1 >> sek2;
					if(sek1 < sek2){
						int qw;
						qw = sek1;
						sek1 = sek2;
						sek2 = qw;
					}
					p(sek1 , sek2);
				}
				if(n == 3){
					int sek1 , sek2 , sek3;
					cin >> sek1 >> sek2 >> sek3;
					if(sek1 < sek2 & sek1 > sek3){
						int qw;
						qw = sek1;
						sek1 = sek2;
						sek2 = qw;
					}
					if(sek3 < sek2 & sek3 > sek1){
						int aw;
						aw = sek1;
						sek1 = sek2;
						sek2 = sek3;
						sek3 = aw;
					}
					if(sek3 < sek1 & sek3 > sek2){
						int as;
						as = sek3;
						sek3 = sek2;
						sek2 = as;
					}
						if(sek3 > sek2 & sek2 > sek1){
						int ad;
						ad = sek1;
						sek1 = sek3;
						sek3 = ad;
					}
					if(sek3 > sek1 & sek1 > sek2){
						int az;
						az = sek1;
						sek1 = sek3;
						sek3 = sek2;
						sek2 = az;
					}
					p(sek1 , sek2 , sek3);
				}
			}
		}
	}
	return 0;
}
