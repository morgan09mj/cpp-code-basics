#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int size;
    cin >> size;
    string Numbers [size];

    cin.ignore();
    for (int i = 0; i < size; i++)
    {
        string str;
        getline(cin, str);
        
        Numbers[i] = str;
    }

    cout << "\nPrint The Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Numbers[i] << endl;
    }
    
    

    return 0;
}