#include <bits/stdc++.h>
using namespace std;
#define bool int 
 
/* Returns 1 if n is a lucky no. 
otherwise returns 0*/
bool isLucky(int n) 
{ 
    static int counter = 2; 
     
    /*variable next_position is just for 
    readability of the program we can
    remove it and use n only */
    int next_position = n; 
    if(counter > n) 
        return 1; 
    if(n % counter == 0) 
        return 0; 
     
    /*calculate next position of input no*/
    next_position -= next_position / counter; 
     
    counter++; 
    return isLucky(next_position); 
} 
 
// Driver Code
int main() 
{ 
    int x = 1; 
    if( isLucky(x) ) 
        cout << x << " is a lucky no."; 
    else
        cout << x << " is not a lucky no."; 
} 
 
