#include <iostream>
#include <math.h>

using namespace std;

void Numerator(int*, int);

void Denominator(int*, int);

int main()
{
    int n, numerator1, denominator1, answer = 0;
    cin >> n;

    numerator1 = n;
    denominator1 = n;
    int* numerator = &numerator1;
    int* denominator = &denominator1;
    int* Ans = &answer;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
    	    numerator1 = n;
    		denominator1 = n;
            Numerator(&numerator1 , numerator1);
            Denominator(&denominator1 , denominator1);
            *Ans += *numerator / *denominator;
        }
    }
    cout << *Ans << endl;

return 0;

}

void Numerator(int* numinator, int n)
{
	* numinator = ((5 * * numinator * * numinator) - 10);
}

void Denominator(int* denominator, int n)
{
	* denominator = (* denominator * * denominator);
}
