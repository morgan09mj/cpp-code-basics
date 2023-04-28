
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int m , amount;
int p1(int m){
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

int p2(int t1 , int t2 ){
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
	if(amount == 0){
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
		if(amount == 0){
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
int p3(int o1 , int o2 , int o3){
	
	int h2 = amount;
	int h3 = amount;
    int ceke1 = 0;
	int ceke2 = 0;
	int am = amount;
    int amount2 = amount;
    int amountt = amount;
    for( ;amount >= o1; ){
	    amount = amount - o1;
        ceke1++;
	}
	int a2 = 0;
	if(amount == 0){
		a2 = 1;
	}
    for( ;amount >= o2; ){
        	amount = amount - o2;
        	ceke2++;
	}
	int m1 = ceke1 + ceke2;
	
	int ceke3 = 0;
	int ceke4 = 0;
	int am2 = h2;
    int amount22 = h2;
    int amountt2 = h2;
    for( ;h2 >= o1; ){
	    h2 = h2 - o1;
        ceke3++;
	}
	int g2 = 0;
	if(h2 == 0){
		g2 = 1;
	}
    for( ;h2 >= o3; ){
        	h2 = h2 -o3;
        	ceke4++;
	}
	int m2 = ceke3 + ceke4;
	
	int ceke5 = 0;
	int ceke6 = 0;
	int am3 = h3;
    int amount23 = h3;
    int amountt3 = h3;
    for( ;h2 >= o2; ){
	    h2 = h2 - o2;
        ceke5++;
	}
	int g3 = 0;
	if(h3 == 0){
		g3 = 1;
	}
    for( ;h3 >= o3; ){
        	h3 = h3 - o3;
        	ceke6++;
	}
	int m3 = ceke5 + ceke6;
	if(m1 < m2 && m1 < m3){
		cout << m1 << endl;
		if(amount == 0){
		    for( ;amountt >= o1; ){
			    amountt = amountt - o1;
			}
		    for( ;amountt >= o2; ){
		   	    cout << o2;
		   	    amountt = amountt - o2;
		    	if(amountt >= o2){
		        		cout << "+";
		        }
			}
			
		    for( ;am >= o1; ){
		    	if(am >= o1){
		    		if(a2 != 1){
				        cout << "+";
						}
					}
			    am = am - o1;
		        cout << o1;
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
		    for( ;amount >= o1; ){
			    amount = amount - o1;
		        ceke1++;
			}
			int a2 = 0;
			if(amount == 0){
				a2 = 1;
			}
		    for( ;amount >= o2; ){
		        amount = amount - o2;
		        ceke2++;
			}
			int majmu = ceke1 + ceke2;
			cout << majmu << endl;
				
			for( ;amountt >= o1; ){
			    amountt = amountt - o1;
			}
			for( ;amountt >= o2; ){
		       cout << o2;
			   amountt = amountt - o2;
				if(amountt >= o2){
	        		cout << "+";
		        }
			}
				
		    for( ;am >= o1; ){
		    	if(am >= o1){
		    		if(a2 != 1){
				        cout << "+";
					}
				}
			    am = am - o1;
			    cout << o1;
		        a2 = 0;
			}
			cout << "=" << amount2 << endl;
		}
		
	}
	if(m2 < m1 && m2 < m3){
		cout << m2 << endl;
		if(h2 == 0){
		    for( ;amountt2 >= o1; ){
			    amountt2 = amountt2 - o1;
			}
		    for( ;amountt2 >= o3; ){
		   	    cout << o3;
		   	    amountt2 = amountt2 - o3;
		    	if(amountt2 >= o3){
		        		cout << "+";
		        }
			}
			
		    for( ;am2 >= o1; ){
		    	if(am2 >= o1){
		    		if(g2 != 1){
				        cout << "+";
						}
					}
			    am2 = am2 - o1;
		        cout << o1;
		        g2 = 0;
			}
			cout << "=" << amount22 << endl;
		}
		
		if(h2 != 0){
			int max = 122;
		    int min = 97;
		    srand(time(0));
		    h2 = (rand() % (max - min)) + min;
		    
		    int ceke3 = 0;
			int ceke4 = 0;
			int am2 = h2;
		    int amount22 = h2;
		    int amountt2 = h2;
		    for( ;h2 >= o1; ){
			    h2 = h2 - o1;
		        ceke3++;
			}
			int g2 = 0;
			if(h2 == 0){
				g2 = 1;
			}
		    for( ;h2 >= o3; ){
		        h2 = h2 -o3;
		        ceke4++;
			}
			int majmu2 = ceke3 + ceke4;
			cout << majmu2 << endl;
				
			for( ;amountt2 >= o1; ){
			    amountt2 = amountt2 - o1;
			}
			for( ;amountt2 >= o3; ){
		       cout << o3;
			   amountt2 = amountt2 - o3;
				if(amountt2 >= o3){
	        		cout << "+";
		        }
			}
				
		    for( ;am2 >= o1; ){
		    	if(am2 >= o1){
		    		if(g2 != 1){
				        cout << "+";
					}
				}
			    am2 = am2 - o1;
			    cout << o1;
		        g2 = 0;
			}
			cout << "=" << amount22 << endl;
		}
	}
	
	if(m3 < m1 && m3 < m2){
		cout << m3 << endl;
		if(h3 == 0){
		    for( ;amountt3 >= o2; ){
			    amountt3 = amountt3 - o2;
			}
		    for( ;amountt3 >= o3; ){
		   	    cout << o3;
		   	    amountt3 = amountt3 - o3;
		    	if(amountt3 >= o3){
		        		cout << "+";
		        }
			}
			
		    for( ;am3 >= o2; ){
		    	if(am3 >= o2){
		    		if(g3 != 1){
				        cout << "+";
						}
					}
			    am3 = am3 - o2;
		        cout << o2;
		        g3 = 0;
			}
			cout << "=" << amount23 << endl;
		}
		
		if(h3 != 0){
			int max = 122;
		    int min = 97;
		    srand(time(0));
		    h3 = (rand() % (max - min)) + min;
		    
		    int ceke5 = 0;
			int ceke6 = 0;
			int am3 = h3;
		    int amount23 = h3;
		    int amountt3 = h3;
		    for( ;h3 >= o2; ){
			    h3 = h3 - o2;
		        ceke5++;
			}
			int g3 = 0;
			if(h3 == 0){
				g3 = 1;
			}
		    for( ;h3 >= o3; ){
		        h3 = h3 - o3;
		        ceke6++;
			}
			int majmu3 = ceke3 + ceke4;
			cout << majmu3 << endl;
				
			for( ;amountt3 >= o2; ){
			    amountt3 = amountt3 - o2;
			}
			for( ;amountt3 >= o3; ){
		       cout << o3;
			   amountt3 = amountt3 - o3;
				if(amountt3 >= o3){
	        		cout << "+";
		        }
			}
				
		    for( ;am3 >= o2; ){
		    	if(am3 >= o2){
		    		if(g3 != 1){
				        cout << "+";
					}
				}
			    am3 = am3 - o2;
			    cout << o2;
		        g3 = 0;
			}
			cout << "=" << amount23 << endl;
		}
	}
	if(m1 == m2 || m1 == m3 || m2 == m3){
		
	    int ceke1 = 0;
		int ceke2 = 0;
		int ceke3 = 0;
		int am = amount;
		int aq = amount;
	    int amount2 = amount;
	    int amountt = amount;
	    for( ;amount >= o1; ){
		    amount = amount-o1;
	        ceke1++;
		}
		int k1 = 0;
		if(amount == 0){
			k1 = 1;
		}
	    for( ;amount >= o2; ){
	        	amount = amount -o2;
	        	ceke2++;
		}
		int k2 = 0;
		if(amount == 0){
			k2 = 1;
		}
	    for( ;amount >= o3; ){
	        	amount = amount -o3;
	        	ceke3++;
		}
		if(amount == 0){
			int majmu = ceke1 + ceke2 + ceke3;
			cout << majmu << endl;
			
		    for( ;amountt >= o1; ){
			    amountt = amountt-o1;
			}
			
			for( ;amountt >= o2; ){
			    amountt = amountt-o2;
			}
		    for( ;amountt >= o3; ){
		   	    cout << o3;
		   	    amountt = amountt -o3;
		    	if(amountt >= o3){
		        		cout << "+";
		        }
			}
		    for( ;am >= o1; ){
			    am = am-o1;
			}
		    for( ;am >= o2; ){
		    	if(amountt >= o3){
			    	if(am >= o2){
			    		if(k2 != 1){
					        cout << "+";
					    }
					}
				}
			    am = am-o2;
		        cout << o2;
		        k2 = 0;
			}
			for( ;aq >= o1; ){
		    	if(aq >= o1){
			    	if(k1 != 1){
				        cout << "+";
				    }    
				}
			    aq = aq-o1;
		        cout << o1;
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
		    for( ;amount >= o1; ){
			    amount = amount-o1;
		        ceke1++;
			}
			int k1 = 0;
			if(amount == 0){
				k1 = 1;
			}
		    for( ;amount >= o2; ){
		        	amount = amount -o2;
		        	ceke2++;
			}
			int k2 = 0;
			if(amount == 0){
					k2 = 1;
				}
		    for( ;amount >= o3; ){
		        	amount = amount -o3;
		        	ceke3++;
			}
			int majmu = ceke1 + ceke2 + ceke3;
			cout << majmu << endl;
			
		    for( ;amountt >= o1; ){
			    amountt = amountt-o1;
			}
			
			for( ;amountt >= o2; ){
				    amountt = amountt-o2;
				}
		    for( ;amountt >= o3; ){
		   	    cout << o3;
		   	    amountt = amountt -o3;
		    	if(amountt >= o3){
		        		cout << "+";
		        }
			}
		    for( ;am >= o1; ){
			    am = am-o1;
			}
		    for( ;am >= o2; ){
		    	if(amountt >= o3){
			    	if(am >= o2){
			    		if(k2 != 1){
					        cout << "+";
					    }
					}
				}
			    am = am-o2;
		        cout << o2;
		        k2 = 0;
			}
			for( ;aq >= o1; ){
		    	if(aq >= o1){
			    	if(k1 != 1){
				        cout << "+";
				    }    
				}
			    aq = aq-o1;
		        cout << o1;
		        k1 = 0;
			}
			cout << "=" << amount2 << endl;
		}
	}
}
int main() {
	int n;
	unsigned int a , b;
	cout << "Do you want to enter coin?" << endl;
	cin >> n;
	if(n == 0 || n == 2 || n == 3){
		cin >> amount;
		srand(amount);
		if(amount >= 1){
			if(amount <= 10000 ){
				if(n == 0){
					p1(n);
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
					p2(sek1 , sek2);
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
					p3(sek1 , sek2 , sek3);
				}
			}
		}
	}
	return 0;
}
